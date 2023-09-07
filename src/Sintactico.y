%{
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "y.tab.h"
#define YYDEBUG 1
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
extern int yylineno; 
void yyerror(char *s);
void sinErrores();
void menu();
void limpiar();
void consideraciones();
%}

%token DOCTYPE

%token I_HTML
%token F_HTML

%token I_HEAD
%token F_HEAD

%token I_TITLE
%token F_TITLE

%token META1
%token META2

%token I_BODY
%token F_BODY

%token I_ENLACE
%token F_ENLACE
 
%token I_H1
%token F_H1

%token I_H2
%token F_H2

%token I_H3
%token F_H3
 
%token I_H4
%token F_H4

%token I_H5
%token F_H5

%token I_H6
%token F_H6

%token I_P
%token F_P

%token I_BR

%token I_EM
%token F_EM

%token I_HR
%token F_HR

%token I_DIV
%token F_DIV

%token I_IMG

%token I_OL
%token F_OL

%token I_UL
%token F_UL

%token I_LI
%token F_LI

%token I_MARK
%token F_MARK

%token I_TABLE
%token F_TABLE

%token I_CAPTION
%token F_CAPTION

%token I_THEAD
%token F_THEAD

%token I_TBODY
%token F_TBODY

%token I_TFOOT
%token F_TFOOT

%token I_TR
%token F_TR

%token I_TH
%token F_TH

%token I_TD
%token F_TD

%token I_STRONG
%token F_STRONG

%token I_SECTION
%token F_SECTION

%token ENTERO
%token REAL
%token PALABRA

%start sigma

/*DECLARACIONES*/
%%
    sigma:  DOCTYPE inicio;
    
    inicio: I_HTML F_HTML | I_HTML head body F_HTML;

    head:
        I_HEAD F_HEAD 
        | I_HEAD meta F_HEAD
        | I_HEAD meta title F_HEAD
        | I_HEAD title meta F_HEAD
    ;

    meta: META1 | META1 metas;

    metas: META2 | META2 metas;

    title: I_TITLE F_TITLE | I_TITLE PALABRA F_TITLE;

    body: I_BODY F_BODY | I_BODY etiq F_BODY;

    etiq:
        PALABRA | PALABRA etiq
        | a | a etiq
        | h | h etiq
        | p | p etiq
        | br | br etiq
        | em | em etiq
        | hr | hr etiq
        | ol | ol etiq
        | ul | ul etiq
        | div | div etiq
        | img | img etiq
        | mark | mark etiq
        | table | table etiq
        | strong | strong etiq
        | section | section etiq
    ;
    
    a: I_ENLACE F_ENLACE | I_ENLACE etiq F_ENLACE;

    h:
      I_H1 PALABRA F_H1 
      | I_H2 PALABRA F_H2 
      | I_H3 PALABRA F_H3 
      | I_H4 PALABRA F_H4 
      | I_H5 PALABRA F_H5 
      | I_H6 PALABRA F_H6                              
    ;

    p: I_P F_P | I_P etiq F_P;

    br: I_BR;

    em: I_EM F_EM | I_EM etiq F_EM;

    hr: I_HR;

    div: I_DIV F_DIV | I_DIV etiq F_DIV;

    img: I_IMG;

    ol: I_OL lista F_OL;

    ul: I_UL lista F_UL;

    lista: li | li lista;

    li: I_LI F_LI | I_LI etiq F_LI;

    mark: I_MARK F_MARK | I_MARK etiq F_MARK;

    table: I_TABLE tcuerpo F_TABLE | I_TABLE caption tcuerpo F_TABLE;

    caption: I_CAPTION PALABRA F_CAPTION;

    tcuerpo:
        b | f | hd 
        | b hd | hd b 
        | b f | f b 
        | f hd | hd f 
        | b hd f | b f hd 
        | hd b f | hd f b
        | f hd b | f b hd
        | tr 
    ;

    hd: I_THEAD tr F_THEAD;

    b: I_TBODY tr F_TBODY;

    f: I_TFOOT tr F_TFOOT;

    tr: I_TR ts F_TR | I_TR ts F_TR tr;

    ts: th | th ts | td | td ts;

    th: I_TH F_TH | I_TH etiq F_TH;

    td: I_TD F_TD | I_TD etiq F_TD;

    strong: I_STRONG F_STRONG | I_STRONG etiq F_STRONG;

    section: I_SECTION F_SECTION | I_SECTION etiq F_SECTION;

%%

void yyerror(char *s)
{
 printf("\nError de Sintaxis:");
 printf("\nPuede haber error en: %s", yytext);
}

void menu(){
  printf("\t\t\t|----------------------------------------------------------|\n");
  printf("\t\t\t|       Analizador Lexico y Sintactico                     |\n");
  printf("\t\t\t|----------------------------------------------------------|\n\n\n");
  printf("Seleccione como desea cargar su codigo a ser analizado:\n");
  printf("   1) Desde la terminal\n");
  printf("   2) Desde un archivo externo\n");
  printf("   3) Ver ejemplo de un html correcto\n");
  printf("   4) Salir\n\n");
}

void sinErrores(){
  printf ("|----------------------------------------------------------|\n");
  printf ("|                                                          |\n");
  printf ("|             No se encontro ningun error                  |\n");
  printf ("|                                                          |\n");
  printf ("|----------------------------------------------------------|\n");
}

void consideraciones(){
  printf("\nConsideraciones: \n");
  printf("1) Dentro de las etiquetas <h1> a <h6> solo puede haber texto\n");
  printf("2) Dentro de las etiquetas <ul> y <ol> solo puedan haber etiquetas <li>\n");
  printf("3) Dentro de la etiqueta table solo puede estar las etiquetas <caption>, <thead>, <tbody>, <tfoot> y <tr>\n");
  printf("4) Existe un orden especifico de los atributos: primero atributos generales y luego los especificos (los que tengan)\n");
  printf("5) Solo puede haber un tipo de atributo por cada etiqueta. Por ejemplo: solo puede haber un atributo class\n");
  printf("6) Se debe cumplir la estructura de un html como el ejemplo siguiente:\n");
  printf("\n<!DOCTYPE html>\n");
  printf("<html lang=\"es\">\n");
  printf("\t<head>\n");
  printf("\t\t<meta charset=\"UTF-8\">\n");
  printf("\t\t<title>Titulo de la pagina</title>\n");
  printf("\t</head>\n");
  printf("\t<body>\n");
  printf("\t\t<h1>Titulo principal</h1>\n");
  printf("\t\t<p>Parrafo de la pagina donde se puede introducir cualquier cosa</p>\n");
  printf("\t</body>\n");
  printf("</html>\n");
}

void limpiar(){
  printf("\nPresione cualquier tecla para volver al menu de inicio");
  getch();                                           
  system("cls"); 
}


int main (int argc, char *argv[])
{
    if (argc == 2)
    {
    	yyin = fopen (argv[1], "rt");
    	if (yyin == NULL)
    	{
    		printf ("\nError: El archivo %s no se puede abrir\n", argv[1]);
        printf ("\nAsegurese que el nombre del archivo este bien escrito");
    		exit (-1);
    	}else{
        if (!yyparse()){
          sinErrores();
          printf("\nPresione cualquier tecla para abrir el archivo html");
          getch();
          ShellExecute(NULL, "open", argv[1], NULL, NULL, SW_SHOWNORMAL); /*Sacado de https://stackoverflow.com/questions/11327256/open-html-file-in-browser-using-c*/
        }else{
          printf("\nSu codigo posee un error en la linea: %i\n", yylineno);
        }
      }
    }else{
      int cont;         
      char opc;       
      cont = 0;
      while (cont == 0){
        menu();
        printf("Se ha seleccionado: ");
        scanf ("%c", &opc);
        switch (opc){
          case '1':{
            system("cls"); 
            printf("\nIngrese el codigo por teclado:\n\n");
            yyin=stdin;  /*stdin indica por defecto main()*/
            if (!yyparse()){
              sinErrores();
            }else{
              printf("\nSu codigo posee un error en la linea: %i\n",yylineno);
            }
            limpiar();
            break;
          }
          case '2':{
            system("cls"); /*Limpia la pantalla*/
            printf("\nIngrese el nombre o ruta del archivo para su analisis: \n");
            printf("Tenga encuenta que solo se admitiran nombres de archivos sin espacio en blanco.\n");
            char archivo[300];
            scanf ("%s", archivo);
            yyin = fopen(archivo,"rt");
            if (yyin == NULL)
            {
              printf ("El archivo %s no se puede abrir\n", archivo);
              printf ("\nAsegurese que el nombre del archivo este bien escrito");
            }else{
              if (!yyparse()){
                sinErrores();
                printf("\nPresione cualquier tecla para abrir el archivo html");
                getch();
                ShellExecute(NULL, "open", archivo, NULL, NULL, SW_SHOWNORMAL);
              }else{
                printf("\nSu codigo posee un error en la linea: %i\n", yylineno);
              }
            }
            fclose(yyin);  /*Sirve para eliminar de la memoria el puntero donde se ubica el archivo leido*/
            limpiar();
            break;
          } 
          case '3':{
            system("cls");
            consideraciones();
            limpiar();
          } break;
          case '4':{
            printf("\n\n\nHasta luego...\n\n\n");
            return 0;
          }
          default:{
            printf("\nPor favor eliga una opcion correcta\n");
            limpiar();
            break;
          }
        }
        yylineno = 0;
      }
    }
    return 0;
  }