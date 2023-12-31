
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Sintactico.y"

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


/* Line 189 of yacc.c  */
#line 91 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOCTYPE = 258,
     I_HTML = 259,
     F_HTML = 260,
     I_HEAD = 261,
     F_HEAD = 262,
     I_TITLE = 263,
     F_TITLE = 264,
     META1 = 265,
     META2 = 266,
     I_BODY = 267,
     F_BODY = 268,
     I_ENLACE = 269,
     F_ENLACE = 270,
     I_H1 = 271,
     F_H1 = 272,
     I_H2 = 273,
     F_H2 = 274,
     I_H3 = 275,
     F_H3 = 276,
     I_H4 = 277,
     F_H4 = 278,
     I_H5 = 279,
     F_H5 = 280,
     I_H6 = 281,
     F_H6 = 282,
     I_P = 283,
     F_P = 284,
     I_BR = 285,
     I_EM = 286,
     F_EM = 287,
     I_HR = 288,
     F_HR = 289,
     I_DIV = 290,
     F_DIV = 291,
     I_IMG = 292,
     I_OL = 293,
     F_OL = 294,
     I_UL = 295,
     F_UL = 296,
     I_LI = 297,
     F_LI = 298,
     I_MARK = 299,
     F_MARK = 300,
     I_TABLE = 301,
     F_TABLE = 302,
     I_CAPTION = 303,
     F_CAPTION = 304,
     I_THEAD = 305,
     F_THEAD = 306,
     I_TBODY = 307,
     F_TBODY = 308,
     I_TFOOT = 309,
     F_TFOOT = 310,
     I_TR = 311,
     F_TR = 312,
     I_TH = 313,
     F_TH = 314,
     I_TD = 315,
     F_TD = 316,
     I_STRONG = 317,
     F_STRONG = 318,
     I_SECTION = 319,
     F_SECTION = 320,
     ENTERO = 321,
     REAL = 322,
     PALABRA = 323
   };
#endif
/* Tokens.  */
#define DOCTYPE 258
#define I_HTML 259
#define F_HTML 260
#define I_HEAD 261
#define F_HEAD 262
#define I_TITLE 263
#define F_TITLE 264
#define META1 265
#define META2 266
#define I_BODY 267
#define F_BODY 268
#define I_ENLACE 269
#define F_ENLACE 270
#define I_H1 271
#define F_H1 272
#define I_H2 273
#define F_H2 274
#define I_H3 275
#define F_H3 276
#define I_H4 277
#define F_H4 278
#define I_H5 279
#define F_H5 280
#define I_H6 281
#define F_H6 282
#define I_P 283
#define F_P 284
#define I_BR 285
#define I_EM 286
#define F_EM 287
#define I_HR 288
#define F_HR 289
#define I_DIV 290
#define F_DIV 291
#define I_IMG 292
#define I_OL 293
#define F_OL 294
#define I_UL 295
#define F_UL 296
#define I_LI 297
#define F_LI 298
#define I_MARK 299
#define F_MARK 300
#define I_TABLE 301
#define F_TABLE 302
#define I_CAPTION 303
#define F_CAPTION 304
#define I_THEAD 305
#define F_THEAD 306
#define I_TBODY 307
#define F_TBODY 308
#define I_TFOOT 309
#define F_TFOOT 310
#define I_TR 311
#define F_TR 312
#define I_TH 313
#define F_TH 314
#define I_TD 315
#define F_TD 316
#define I_STRONG 317
#define F_STRONG 318
#define I_SECTION 319
#define F_SECTION 320
#define ENTERO 321
#define REAL 322
#define PALABRA 323




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 269 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    14,    17,    21,    26,    31,
      33,    36,    38,    41,    44,    48,    51,    55,    57,    60,
      62,    65,    67,    70,    72,    75,    77,    80,    82,    85,
      87,    90,    92,    95,    97,   100,   102,   105,   107,   110,
     112,   115,   117,   120,   122,   125,   127,   130,   133,   137,
     141,   145,   149,   153,   157,   161,   164,   168,   170,   173,
     177,   179,   182,   186,   188,   192,   196,   198,   201,   204,
     208,   211,   215,   219,   224,   228,   230,   232,   234,   237,
     240,   243,   246,   249,   252,   256,   260,   264,   268,   272,
     276,   278,   282,   286,   290,   294,   299,   301,   304,   306,
     309,   312,   316,   319,   323,   326,   330,   333
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,     3,    71,    -1,     4,     5,    -1,     4,
      72,    76,     5,    -1,     6,     7,    -1,     6,    73,     7,
      -1,     6,    73,    75,     7,    -1,     6,    75,    73,     7,
      -1,    10,    -1,    10,    74,    -1,    11,    -1,    11,    74,
      -1,     8,     9,    -1,     8,    68,     9,    -1,    12,    13,
      -1,    12,    77,    13,    -1,    68,    -1,    68,    77,    -1,
      78,    -1,    78,    77,    -1,    79,    -1,    79,    77,    -1,
      80,    -1,    80,    77,    -1,    81,    -1,    81,    77,    -1,
      82,    -1,    82,    77,    -1,    83,    -1,    83,    77,    -1,
      86,    -1,    86,    77,    -1,    87,    -1,    87,    77,    -1,
      84,    -1,    84,    77,    -1,    85,    -1,    85,    77,    -1,
      90,    -1,    90,    77,    -1,    91,    -1,    91,    77,    -1,
     101,    -1,   101,    77,    -1,   102,    -1,   102,    77,    -1,
      14,    15,    -1,    14,    77,    15,    -1,    16,    68,    17,
      -1,    18,    68,    19,    -1,    20,    68,    21,    -1,    22,
      68,    23,    -1,    24,    68,    25,    -1,    26,    68,    27,
      -1,    28,    29,    -1,    28,    77,    29,    -1,    30,    -1,
      31,    32,    -1,    31,    77,    32,    -1,    33,    -1,    35,
      36,    -1,    35,    77,    36,    -1,    37,    -1,    38,    88,
      39,    -1,    40,    88,    41,    -1,    89,    -1,    89,    88,
      -1,    42,    43,    -1,    42,    77,    43,    -1,    44,    45,
      -1,    44,    77,    45,    -1,    46,    93,    47,    -1,    46,
      92,    93,    47,    -1,    48,    68,    49,    -1,    95,    -1,
      96,    -1,    94,    -1,    95,    94,    -1,    94,    95,    -1,
      95,    96,    -1,    96,    95,    -1,    96,    94,    -1,    94,
      96,    -1,    95,    94,    96,    -1,    95,    96,    94,    -1,
      94,    95,    96,    -1,    94,    96,    95,    -1,    96,    94,
      95,    -1,    96,    95,    94,    -1,    97,    -1,    50,    97,
      51,    -1,    52,    97,    53,    -1,    54,    97,    55,    -1,
      56,    98,    57,    -1,    56,    98,    57,    97,    -1,    99,
      -1,    99,    98,    -1,   100,    -1,   100,    98,    -1,    58,
      59,    -1,    58,    77,    59,    -1,    60,    61,    -1,    60,
      77,    61,    -1,    62,    63,    -1,    62,    77,    63,    -1,
      64,    65,    -1,    64,    77,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   122,   122,   124,   124,   127,   128,   129,   130,   133,
     133,   135,   135,   137,   137,   139,   139,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   159,   159,   162,
     163,   164,   165,   166,   167,   170,   170,   172,   174,   174,
     176,   178,   178,   180,   182,   184,   186,   186,   188,   188,
     190,   190,   192,   192,   194,   197,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   203,   203,
     204,   207,   209,   211,   213,   213,   215,   215,   215,   215,
     217,   217,   219,   219,   221,   221,   223,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "I_HTML", "F_HTML", "I_HEAD",
  "F_HEAD", "I_TITLE", "F_TITLE", "META1", "META2", "I_BODY", "F_BODY",
  "I_ENLACE", "F_ENLACE", "I_H1", "F_H1", "I_H2", "F_H2", "I_H3", "F_H3",
  "I_H4", "F_H4", "I_H5", "F_H5", "I_H6", "F_H6", "I_P", "F_P", "I_BR",
  "I_EM", "F_EM", "I_HR", "F_HR", "I_DIV", "F_DIV", "I_IMG", "I_OL",
  "F_OL", "I_UL", "F_UL", "I_LI", "F_LI", "I_MARK", "F_MARK", "I_TABLE",
  "F_TABLE", "I_CAPTION", "F_CAPTION", "I_THEAD", "F_THEAD", "I_TBODY",
  "F_TBODY", "I_TFOOT", "F_TFOOT", "I_TR", "F_TR", "I_TH", "F_TH", "I_TD",
  "F_TD", "I_STRONG", "F_STRONG", "I_SECTION", "F_SECTION", "ENTERO",
  "REAL", "PALABRA", "$accept", "sigma", "inicio", "head", "meta", "metas",
  "title", "body", "etiq", "a", "h", "p", "br", "em", "hr", "div", "img",
  "ol", "ul", "lista", "li", "mark", "table", "caption", "tcuerpo", "hd",
  "b", "f", "tr", "ts", "th", "td", "strong", "section", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    80,    81,    82,    82,
      83,    84,    84,    85,    86,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    96,    97,    97,    98,    98,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     4,     2,     3,     4,     4,     1,
       2,     1,     2,     2,     3,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     2,     3,
       1,     2,     3,     1,     3,     3,     1,     2,     2,     3,
       2,     3,     3,     4,     3,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     4,     1,     2,     1,     2,
       2,     3,     2,     3,     2,     3,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     1,     3,     0,     0,     5,
       0,     9,     0,     0,     0,     0,    13,     0,    11,    10,
       6,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    60,     0,    63,     0,     0,     0,
       0,     0,     0,    17,     0,    19,    21,    23,    25,    27,
      29,    35,    37,    31,    33,    39,    41,    43,    45,     4,
      14,    12,     7,     8,    47,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    58,     0,    61,     0,     0,     0,
      66,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    75,    76,    90,   104,     0,   106,     0,    18,
      16,    20,    22,    24,    26,    28,    30,    36,    38,    32,
      34,    40,    42,    44,    46,    48,    49,    50,    51,    52,
      53,    54,    56,    59,    62,    68,     0,    64,    67,    65,
      71,     0,     0,     0,     0,     0,     0,     0,    96,    98,
       0,    72,    79,    83,    78,    80,    82,    81,   105,   107,
      69,    74,    91,    92,    93,   100,     0,   102,     0,    94,
      97,    99,    73,    86,    87,    84,    85,    88,    89,   101,
     103,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,     8,    12,    19,    13,    15,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    79,
      80,    55,    56,    89,    90,    91,    92,    93,    94,   137,
     138,   139,    57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
      13,    16,    56,   108,   -86,   -86,   -86,    66,    57,   -86,
      -5,    53,   109,    62,    22,    83,   -86,    90,    53,   -86,
     -86,    85,    98,   -86,    63,    42,    47,    51,    61,    68,
      70,   104,   -86,   143,   -86,   182,   -86,   101,   101,   221,
     -11,   260,   311,   499,   127,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   -86,
     -86,   -86,   -86,   -86,   -86,   132,   134,   130,   131,   133,
     128,   135,   -86,   125,   -86,   123,   -86,   122,   364,   121,
     101,   129,   -86,   119,   111,   126,   126,   126,    -9,    52,
     137,    28,   -40,    45,   -86,   -86,   114,   -86,   120,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   145,   -86,   -86,   -86,
     -86,   141,   140,   139,   138,   403,   450,   142,    -9,    -9,
     147,   -86,   149,   157,   149,   136,   157,   136,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   155,   -86,   160,   126,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   184,   177,   189,   -86,   -24,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -33,
     -86,   -86,   -86,   -86,   144,   -80,   -85,   -21,   -84,     7,
     -86,   -86,   -86,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      65,   132,   133,   134,    16,    81,   142,    73,   147,    75,
      85,    77,   144,   146,    87,    83,     1,    96,    98,    99,
       3,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    23,    24,    84,    25,    85,
      26,    86,    27,    87,    28,    88,    29,   128,    30,   135,
      31,   136,    32,    33,   126,    34,     5,    35,   164,    36,
      37,   167,    38,    17,    18,   166,    39,   168,    40,    14,
     143,   145,    11,     9,    10,   171,    11,    24,    64,    25,
      86,    26,    87,    27,    41,    28,    42,    29,    59,    30,
      43,    31,    62,    32,    33,    85,    34,    86,    35,    60,
      36,    37,    85,    38,    86,    63,    87,    39,    88,    40,
      66,   156,   158,     6,     7,    67,    20,    10,    24,    68,
      25,   163,    26,   165,    27,    41,    28,    42,    29,    69,
      30,    43,    31,    72,    32,    33,    70,    34,    71,    35,
     100,    36,    37,    78,    38,   160,   161,   115,    39,   117,
      40,   116,   118,   120,   122,   123,   119,    24,   124,    25,
     127,    26,   121,    27,   130,    28,    41,    29,    42,    30,
     129,    31,    43,    32,    33,    74,    34,   148,    35,   131,
      36,    37,    88,    38,   141,   149,    85,    39,   150,    40,
     151,   152,   153,   154,   162,    61,    24,    22,    25,   159,
      26,    21,    27,    87,    28,    41,    29,    42,    30,    86,
      31,    43,    32,    33,   169,    34,     0,    35,    76,    36,
      37,   170,    38,     0,     0,     0,    39,     0,    40,     0,
       0,     0,     0,   140,     0,    24,     0,    25,     0,    26,
       0,    27,     0,    28,    41,    29,    42,    30,     0,    31,
      43,    32,    33,     0,    34,     0,    35,     0,    36,    37,
       0,    38,     0,     0,     0,    39,    82,    40,     0,     0,
       0,     0,     0,     0,    24,     0,    25,     0,    26,     0,
      27,     0,    28,    41,    29,    42,    30,     0,    31,    43,
      32,    33,     0,    34,     0,    35,     0,    36,    37,     0,
      38,     0,     0,     0,    39,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    95,    42,    24,     0,    25,    43,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,    32,    33,     0,    34,     0,    35,     0,    36,    37,
       0,    38,     0,     0,     0,    39,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,     0,    42,    97,     0,    24,    43,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,     0,    31,     0,    32,    33,     0,    34,     0,    35,
       0,    36,    37,     0,    38,     0,     0,   125,    39,     0,
      40,     0,     0,     0,     0,     0,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,    41,    29,    42,    30,
       0,    31,    43,    32,    33,     0,    34,     0,    35,     0,
      36,    37,     0,    38,     0,     0,     0,    39,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,     0,    24,    41,    25,    42,    26,     0,
      27,    43,    28,     0,    29,     0,    30,     0,    31,     0,
      32,    33,     0,    34,     0,    35,     0,    36,    37,     0,
      38,     0,     0,     0,    39,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,    41,    24,    42,    25,     0,    26,    43,    27,
       0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
      33,     0,    34,     0,    35,     0,    36,    37,     0,    38,
       0,     0,     0,    39,     0,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    42,     0,     0,     0,    43
};

static const yytype_int16 yycheck[] =
{
      24,    85,    86,    87,     9,    38,    91,    31,    93,    33,
      50,    35,    92,    93,    54,    39,     3,    41,    42,    43,
       4,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    13,    14,    48,    16,    50,
      18,    52,    20,    54,    22,    56,    24,    80,    26,    58,
      28,    60,    30,    31,    78,    33,     0,    35,   143,    37,
      38,   146,    40,    68,    11,   145,    44,   147,    46,    12,
      91,    92,    10,     7,     8,   159,    10,    14,    15,    16,
      52,    18,    54,    20,    62,    22,    64,    24,     5,    26,
      68,    28,     7,    30,    31,    50,    33,    52,    35,     9,
      37,    38,    50,    40,    52,     7,    54,    44,    56,    46,
      68,   135,   136,     5,     6,    68,     7,     8,    14,    68,
      16,   142,    18,   144,    20,    62,    22,    64,    24,    68,
      26,    68,    28,    29,    30,    31,    68,    33,    68,    35,
      13,    37,    38,    42,    40,   138,   139,    15,    44,    19,
      46,    17,    21,    25,    29,    32,    23,    14,    36,    16,
      39,    18,    27,    20,    45,    22,    62,    24,    64,    26,
      41,    28,    68,    30,    31,    32,    33,    63,    35,    68,
      37,    38,    56,    40,    47,    65,    50,    44,    43,    46,
      49,    51,    53,    55,    47,    18,    14,    13,    16,    57,
      18,    12,    20,    54,    22,    62,    24,    64,    26,    52,
      28,    68,    30,    31,    59,    33,    -1,    35,    36,    37,
      38,    61,    40,    -1,    -1,    -1,    44,    -1,    46,    -1,
      -1,    -1,    -1,    89,    -1,    14,    -1,    16,    -1,    18,
      -1,    20,    -1,    22,    62,    24,    64,    26,    -1,    28,
      68,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    18,    -1,
      20,    -1,    22,    62,    24,    64,    26,    -1,    28,    68,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    14,    -1,    16,    68,    18,
      -1,    20,    -1,    22,    -1,    24,    -1,    26,    -1,    28,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      -1,    40,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    -1,    14,    68,
      16,    -1,    18,    -1,    20,    -1,    22,    -1,    24,    -1,
      26,    -1,    28,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    -1,    40,    -1,    -1,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    16,
      -1,    18,    -1,    20,    -1,    22,    62,    24,    64,    26,
      -1,    28,    68,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    -1,    40,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    14,    62,    16,    64,    18,    -1,
      20,    68,    22,    -1,    24,    -1,    26,    -1,    28,    -1,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    -1,
      40,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    14,    64,    16,    -1,    18,    68,    20,
      -1,    22,    -1,    24,    -1,    26,    -1,    28,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    -1,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    70,     4,    71,     0,     5,     6,    72,     7,
       8,    10,    73,    75,    12,    76,     9,    68,    11,    74,
       7,    75,    73,    13,    14,    16,    18,    20,    22,    24,
      26,    28,    30,    31,    33,    35,    37,    38,    40,    44,
      46,    62,    64,    68,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    90,    91,   101,   102,     5,
       9,    74,     7,     7,    15,    77,    68,    68,    68,    68,
      68,    68,    29,    77,    32,    77,    36,    77,    42,    88,
      89,    88,    45,    77,    48,    50,    52,    54,    56,    92,
      93,    94,    95,    96,    97,    63,    77,    65,    77,    77,
      13,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    15,    17,    19,    21,    23,
      25,    27,    29,    32,    36,    43,    77,    39,    88,    41,
      45,    68,    97,    97,    97,    58,    60,    98,    99,   100,
      93,    47,    95,    96,    94,    96,    94,    95,    63,    65,
      43,    49,    51,    53,    55,    59,    77,    61,    77,    57,
      98,    98,    47,    96,    95,    96,    94,    95,    94,    59,
      61,    97
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1712 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 225 "Sintactico.y"


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
          printf("\nSu codigo posee un error en la linea: %i\n",yylineno-1);
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
              printf("\nSu codigo posee un error en la linea: %i\n",yylineno-1);
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
            FILE *fp;
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
            fclose(fp);  /*Sirve para eliminar de la memoria el puntero donde se ubica el archivo leido*/
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
