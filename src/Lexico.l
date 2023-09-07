%option noyywrap
/*noyywrap indica a Flex que lea sólo un fichero de entrada*/
%option caseless   
/*caseless permite ignorar las mayusculas y minisculas*/
%option yylineno
/*yylineno pertimite a flex generar numeros de linea*/

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#define YYDEBUG 1
%}

Entero                  [+-]?[0-9]*
Real                    [+-]?[0-9]+(\.[0-9]*)?
Palabra                	([\040-\073]*=?[\077-\377]*)*
/*040-073 y 077-377 son todos los caracteres de ASCII octal exceptuando "<" y ">" */
Palabra2                ([a-zA-Z]*[0-9]*[ ]?)*
esp_0                   [ \t\n]*        
esp_1                   [ \t\n]+   
/*esp_0 y esp_1 son espacios en blanco*/
Idioma                  {esp_1}lang{esp_0}={esp_0}(\'|\")[a-zA-Z]{2}(\'|\"){esp_0}*
Atri_Palabras           {esp_0}={esp_0}(\'|\"){Palabra2}(\'|\"){esp_0}
Atri_Numeros            {esp_0}={esp_0}(\'|\"){esp_0}{Entero}{esp_0}(\'|\"){esp_0}
/*Atributos generales*/
Id                      {esp_1}id{Atri_Palabras}
Class                   {esp_1}class{Atri_Palabras}
Atributo                {Class}?{Id}?|{Id}?{Class}?
Espacio_Atributo        {Atributo}
/*Atributos de Meta*/
AtributoM               {esp_1}charset{esp_0}={esp_0}(\'|\"){esp_0}UTF-8{esp_0}(\'|\"){esp_0}          
AtributoM2              {esp_1}name{esp_0}={esp_0}(\'|\"){Palabra}(\'|\"){esp_0}{esp_1}content{esp_0}={esp_0}(\'|\"){Palabra}(\'|\"){esp_0}
/*Declaracion de URL*/
Puerto			        [0-9]
Dir 	 		        [0-9]*[a-zA-Z]*_?\-?
Direccion 		        ({Dir}(\.{Dir})?)+
Dominio			        [a-zA-Z]{1,6}
T_archivo		        [a-zA-Z]{1,5}
Enlace     		        (((https?|ftps?):\/\/)?(w{3}.)?|#|\/)?{Direccion}((\:{Puerto}+|\.{Dominio})(\/#?{Direccion}(\.{T_archivo})?(\/)?)*)?{esp_0}
Atri_Enlace             {esp_0}={esp_0}(\'|\"){Enlace}+(\'|\"){esp_0}
/*Atributos de a*/
Href                    {esp_1}href{Atri_Enlace}
Target                  {esp_1}target{esp_0}={esp_0}(\'|\"){esp_0}(_blank|_parent|_self|_top){esp_0}(\'|\"){esp_0}
AtributoA               {Atributo}?{Href}{Target}?|{Href}{Target}?{Atributo}?
/*Atributos de img*/
Alt                     {esp_1}alt{Atri_Palabras}
Src                     {esp_1}src{Atri_Enlace}
Width                   {esp_1}width{Atri_Numeros}
Height                  {esp_1}height{Atri_Numeros}
AtributoIMG             {Atributo}?{Src}{Alt}?{Width}?{Height}?|{Atributo}?{Alt}?{Src}{Width}?{Height}?
/*Atributos de ol*/
Ol                      {esp_1}type{esp_0}={esp_0}(\'|\"){esp_0}(1|a|A|i|I){esp_0}(\'|\"){esp_0}
AtributoOL              {Espacio_Atributo}?{Ol}?
/*Atributos de li*/
Li                      {esp_1}value{Atri_Numeros}
AtributoLI              {Espacio_Atributo}?{Li}?
/*Atributos de table*/
Table                   {esp_1}border{Atri_Numeros}
AtributoTABLE           {Espacio_Atributo}?{Table}?

/*Seccion de reglas*/
%%

{esp_0}                                                         {;}  /*Ignora espacios en blanco*/

"<!DOCTYPE"{esp_0}"html"{esp_0}">"                              {return (DOCTYPE);}

"<html"{Idioma}">"                                              {return (I_HTML);}
"<\/html"{esp_0}">"                                             {return (F_HTML);}

"<head"{esp_0}">"                                               {return (I_HEAD);}
"<\/head"{esp_0}">"                                             {return (F_HEAD);}

"<meta"{AtributoM}">"                                           {return (META1);}
"<meta"{AtributoM2}">"                                          {return (META2);}

"<title>"                                                       {return (I_TITLE);}
"<\/title>"                                                     {return (F_TITLE);}

"<body"{esp_0}">"                                               {return (I_BODY);}
"<\/body"{esp_0}">"                                             {return (F_BODY);}

"<a"{AtributoA}">"                                              {return (I_ENLACE);}
"<\/a"{esp_0}">"                                                {return (F_ENLACE);}

"<h1"{Espacio_Atributo}">"                                      {return (I_H1);}
"<\/h1"{esp_0}">"                                               {return (F_H1);}

"<h2"{Espacio_Atributo}">"                                      {return (I_H2);}
"<\/h2"{esp_0}">"                                               {return (F_H2);}

"<h3"{Espacio_Atributo}">"                                      {return (I_H3);}
"<\/h3"{esp_0}">"                                               {return (F_H3);}

"<h4"{Espacio_Atributo}">"                                      {return (I_H4);}
"<\/h4"{esp_0}">"                                               {return (F_H4);}

"<h5"{Espacio_Atributo}">"                                      {return (I_H5);}
"<\/h5"{esp_0}">"                                               {return (F_H5);}

"<h6"{Espacio_Atributo}">"                                      {return (I_H6);}
"<\/h6"{esp_0}">"                                               {return (F_H6);}

"<p"{Espacio_Atributo}">"                                       {return (I_P);}
"<\/p"{esp_0}">"                                                {return (F_P);}

"<br"{Espacio_Atributo}">"                                      {return (I_BR);}

"<em"{Espacio_Atributo}">"                                      {return (I_EM);}
"<\/em"{esp_0}">"                                               {return (F_EM);}

"<hr"{Espacio_Atributo}">"                                      {return (I_HR);}
"<\/hr"{esp_0}">"                                               {return (F_HR);}

"<div"{Espacio_Atributo}">"                                     {return (I_DIV);}
"<\/div"{esp_0}">"                                              {return (F_DIV);}

"<img"{AtributoIMG}">"                                          {return (I_IMG);}

"<ol"{AtributoOL}">"                                            {return (I_OL);}
"<\/ol"{esp_0}">"                                               {return (F_OL);}

"<ul"{Espacio_Atributo}">"                                      {return (I_UL);}
"<\/ul"{esp_0}">"                                               {return (F_UL);}

"<li"{AtributoLI}">"                                            {return (I_LI);}
"<\/li"{esp_0}">"                                               {return (F_LI);}

"<mark"{Espacio_Atributo}">"                                    {return (I_MARK);}
"<\/mark"{esp_0}">"                                             {return (F_MARK);}

"<table"{AtributoTABLE}">"                                      {return (I_TABLE);}
"<\/table"{esp_0}">"                                            {return (F_TABLE);}

"<caption"{Espacio_Atributo}">"                                 {return (I_CAPTION);}
"<\/caption"{esp_0}">"                                          {return (F_CAPTION);}

"<thead"{Espacio_Atributo}">"                                   {return (I_THEAD);}
"<\/thead"{esp_0}">"                                            {return (F_THEAD);}

"<tbody"{Espacio_Atributo}">"                                   {return (I_TBODY);}
"<\/tbody"{esp_0}">"                                            {return (F_TBODY);}

"<tfoot"{Espacio_Atributo}">"                                   {return (I_TFOOT);}
"<\/tfoot"{esp_0}">"                                            {return (F_TFOOT);}

"<tr"{Espacio_Atributo}">"                                      {return (I_TR);}
"<\/tr"{esp_0}">"                                               {return (F_TR);}

"<th"{Espacio_Atributo}">"                                      {return (I_TH);}
"<\/th"{esp_0}">"                                               {return (F_TH);}

"<td"{Espacio_Atributo}">"                                      {return (I_TD);}
"<\/td"{esp_0}">"                                               {return (F_TD);}

"<strong"{Espacio_Atributo}">"                                  {return (I_STRONG);}
"<\/strong"{esp_0}">"                                           {return (F_STRONG);}

"<section"{Espacio_Atributo}">"                                 {return (I_SECTION);}
"<\/section"{esp_0}">"                                          {return (F_SECTION);}

{Palabra}                                                       {return (PALABRA);}
.                                                               {;}

%%

