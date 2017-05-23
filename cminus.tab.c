/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "cminus.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include"cminus.h"

#line 72 "cminus.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cminus.tab.h".  */
#ifndef YY_YY_CMINUS_TAB_H_INCLUDED
# define YY_YY_CMINUS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTCON = 258,
    ID = 259,
    CHARCON = 260,
    STRINGCON = 261,
    ADD = 262,
    SUB = 263,
    MUL = 264,
    DIV = 265,
    GREATER_THAN = 266,
    LESSER_THAN = 267,
    DIFFERENT = 268,
    EQUAL = 269,
    GREATER_THAN_EQUAL = 270,
    LESSER_THAN_EQUAL = 271,
    AND = 272,
    OR = 273,
    CHAR = 274,
    EXTERN = 275,
    VOID = 276,
    RETURN = 277,
    INT = 278,
    EOL = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    FOR = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "cminus.y" /* yacc.c:355  */

	int intcon; // INTCON
	struct SYMBOL *symbol;
	struct AST *ast;
	struct SYMBOL_LIST *symbol_list;

#line 148 "cminus.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CMINUS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 165 "cminus.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    32,    30,    37,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    29,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    45,    46,    47,    50,    51,    52,
      53,    54,    57,    58,    61,    62,    65,    66,    67,    70,
      71,    72,    75,    76,    79,    80,    83,    84,    85,    88,
      89,    90,    91,    92,    93,    94,    95,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   118,   119,   120,   123,   124
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTCON", "ID", "CHARCON", "STRINGCON",
  "ADD", "SUB", "MUL", "DIV", "GREATER_THAN", "LESSER_THAN", "DIFFERENT",
  "EQUAL", "GREATER_THAN_EQUAL", "LESSER_THAN_EQUAL", "AND", "OR", "CHAR",
  "EXTERN", "VOID", "RETURN", "INT", "EOL", "IF", "ELSE", "WHILE", "FOR",
  "'='", "'+'", "'-'", "'*'", "'/'", "';'", "'('", "')'", "','", "'['",
  "']'", "'{'", "'}'", "$accept", "prog", "dcl", "var_dcl_list",
  "param_types_list", "var_decl", "param_types", "func", "funclist",
  "paramlist", "stmt", "expr", "exprlist", "assg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    61,
      43,    45,    42,    47,    59,    40,    41,    44,    91,    93,
     123,   125
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      85,     2,    23,  -111,  -111,     9,    13,    60,    20,    27,
      33,    49,   118,    11,    58,    72,    77,   231,    69,    74,
     118,   118,   118,   107,   126,    94,  -111,    96,  -111,   243,
      -6,    95,   118,   118,   130,   159,  -111,   113,   116,    85,
      85,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,  -111,  -111,    46,   283,   147,   105,    65,
     100,   108,    46,  -111,    46,   139,   140,  -111,   189,   201,
      19,   114,  -111,  -111,    85,    86,    99,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,  -111,
     141,   115,   118,  -111,   120,    46,    46,   142,   143,   144,
     109,    95,   111,   111,   118,   125,    81,   110,  -111,   118,
     145,   146,   148,     6,  -111,  -111,   154,  -111,   271,   162,
     149,  -111,     4,   283,   148,   148,   151,  -111,     4,  -111,
     111,   130,   183,   152,   140,   140,   150,  -111,  -111,    46,
     153,  -111,   156,    90,  -111,    95,    95,  -111,   157,  -111,
     111,   181,  -111,   187,   188,   186,  -111,   152,   111,   111,
     148,  -111,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    52,    51,    53,    54,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,    52,    51,    33,     0,
      17,    12,     0,     0,     0,     0,     1,     0,     0,     2,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    35,     0,    58,    56,     0,     0,
       0,     0,     0,    34,     0,     0,    16,     7,     0,     0,
       0,     0,    49,     6,     2,     0,     0,    45,    46,    47,
      48,    39,    40,    41,    42,    43,    44,    37,    38,    19,
       0,     0,    55,    50,     0,     0,     0,     0,     0,     0,
      17,    12,     0,     0,     0,     0,    26,     0,    57,     0,
       0,     0,    14,    14,    18,    13,    29,    31,     0,     0,
       0,    21,     0,    59,    14,    14,     0,    10,     0,    11,
       0,     0,     0,    26,    16,    16,     0,     8,     9,     0,
       0,    30,     0,    26,    20,    12,    12,    23,     0,    22,
       0,     0,    27,     0,     0,     0,    32,    26,     0,     0,
      14,    28,    25,    24,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,   -18,  -111,   -92,  -105,   -64,   -46,  -111,    62,  -110,
     -99,    -7,   132,   -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    67,   127,    31,    91,    15,   136,   121,
      16,    17,    58,    18
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    71,   101,   116,   117,    35,    19,   134,   129,   115,
     126,    36,    37,    56,    57,    59,    97,    25,    98,   137,
     138,    75,    76,   144,    30,    68,    69,   135,    23,    64,
      24,   141,    65,   152,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   128,   161,    20,   110,
     111,   156,    20,   153,   154,   164,   105,    22,    21,   162,
     163,    22,    32,    26,    27,     3,     4,    89,    33,    90,
     145,   146,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    34,    57,    -4,    37,     1,     2,
       3,     4,    38,   148,    28,    12,    39,   118,   142,    -5,
      37,    40,   123,    54,    94,     5,     6,     7,     8,    55,
       9,    60,    10,    11,    26,     2,     3,     4,   119,   120,
      12,    26,    27,     3,     4,    -3,    37,   119,   151,    62,
      61,    21,    66,     7,    70,    95,     9,    73,    10,    11,
      74,    93,    99,    96,   100,   106,    12,    65,   104,   109,
     122,   107,   126,    12,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   112,   113,
     130,   124,   125,   114,    92,   132,   139,   143,   133,   119,
     140,   147,   150,   155,   149,    72,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     157,   158,   159,   160,   108,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,     0,   131
};

static const yytype_int16 yycheck[] =
{
       7,    34,    66,   102,   103,    12,     4,     3,   113,   101,
       4,     0,     1,    20,    21,    22,    62,     4,    64,   124,
     125,    39,    40,   133,     4,    32,    33,    23,    19,    35,
      21,   130,    38,   143,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    40,   157,    29,    95,
      96,   150,    29,   145,   146,   160,    74,    38,    35,   158,
     159,    38,    35,     3,     4,     5,     6,    21,    35,    23,
     134,   135,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    35,    92,     0,     1,     3,     4,
       5,     6,    34,   139,    34,    35,    24,   104,   131,     0,
       1,    24,   109,    34,    39,    20,    21,    22,    23,    35,
      25,     4,    27,    28,     3,     4,     5,     6,    37,    38,
      35,     3,     4,     5,     6,     0,     1,    37,    38,    35,
       4,    35,    37,    22,     4,    35,    25,    24,    27,    28,
      24,    36,     3,    35,     4,     4,    35,    38,    34,    29,
      40,    36,     4,    35,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    36,    36,
      26,    36,    36,    39,    37,    23,    35,     4,    39,    37,
     128,    41,    36,    36,    41,    36,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      39,    34,    34,    37,    92,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    21,    22,    23,    25,
      27,    28,    35,    43,    44,    49,    52,    53,    55,     4,
      29,    35,    38,    19,    21,     4,     3,     4,    34,    53,
       4,    47,    35,    35,    35,    53,     0,     1,    34,    24,
      24,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    34,    34,    35,    53,    53,    54,    53,
       4,     4,    35,    34,    35,    38,    37,    45,    53,    53,
       4,    55,    36,    24,    24,    43,    43,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    21,
      23,    48,    37,    36,    39,    35,    35,    48,    48,     3,
       4,    47,    36,    36,    34,    43,     4,    36,    54,    29,
      48,    48,    36,    36,    39,    45,    52,    52,    53,    37,
      38,    51,    40,    53,    36,    36,     4,    46,    40,    46,
      26,    34,    23,    39,     3,    23,    50,    46,    46,    35,
      50,    52,    55,     4,    51,    47,    47,    41,    48,    41,
      36,    38,    51,    45,    45,    36,    52,    39,    34,    34,
      37,    51,    52,    52,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    44,    44,    44,
      44,    44,    45,    45,    46,    46,    47,    47,    47,    48,
      48,    48,    49,    49,    50,    50,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    55,    55
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     3,     3,     3,     3,     7,     7,
       6,     6,     0,     3,     0,     6,     0,     1,     4,     1,
       5,     3,     8,     8,     5,     5,     0,     4,     6,     5,
       7,     5,     9,     2,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     1,     1,     0,     1,     3,     3,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 44 "cminus.y" /* yacc.c:1646  */
    { printf("<dcl>\n"); /*printTable();*/ }
#line 1368 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "cminus.y" /* yacc.c:1646  */
    { printf("<func>\n"); /*printTable();*/ }
#line 1374 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "cminus.y" /* yacc.c:1646  */
    { printf(" = %d\n", evaluation((yyvsp[-2].ast)) ); }
#line 1380 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "cminus.y" /* yacc.c:1646  */
    {yyerror; printf("> ");}
#line 1386 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "cminus.y" /* yacc.c:1646  */
    { /*printf("<dcl>\n"); printTable();*/ }
#line 1392 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 51 "cminus.y" /* yacc.c:1646  */
    { /*printf("<dcl>\n"); printTable();*/ }
#line 1398 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "cminus.y" /* yacc.c:1646  */
    { /*printf("<dcl>\n"); printTable();*/ }
#line 1404 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "cminus.y" /* yacc.c:1646  */
    { /*printf("<dcl>\n"); printTable();*/ }
#line 1410 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "cminus.y" /* yacc.c:1646  */
    { /*printf("<dcl>\n"); printTable();*/ }
#line 1416 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "cminus.y" /* yacc.c:1646  */
    { /*printf("<var_dcl_list>\n");*/ }
#line 1422 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "cminus.y" /* yacc.c:1646  */
    { (yyval.symbol_list) = NULL; }
#line 1428 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "cminus.y" /* yacc.c:1646  */
    { /*printf("<paramlist>\n");*/ (yyval.symbol_list) = new_symbol_list((yyvsp[-1].symbol), (yyvsp[0].symbol_list)); }
#line 1434 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "cminus.y" /* yacc.c:1646  */
    { /*printf("<paramlist>\n");*/ (yyval.symbol_list) = new_symbol_list((yyvsp[-3].symbol), (yyvsp[0].symbol_list)); }
#line 1440 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 88 "cminus.y" /* yacc.c:1646  */
    { /*printf("<IF>\n");*/ (yyval.ast) = new_flow(IF, (yyvsp[-2].ast), (yyvsp[0].ast), NULL, NULL); }
#line 1446 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 89 "cminus.y" /* yacc.c:1646  */
    { /*printf("<IF ELSE>\n");*/ (yyval.ast) = new_flow(IF, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast), NULL); }
#line 1452 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 90 "cminus.y" /* yacc.c:1646  */
    { /*printf("<stmt>\n");*/ (yyval.ast) = new_flow(WHILE, (yyvsp[-2].ast), (yyvsp[0].ast), NULL, NULL); }
#line 1458 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "cminus.y" /* yacc.c:1646  */
    { /*printf("<stmt>\n");*/ (yyval.ast) = new_flow(FOR, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast), (yyvsp[-6].ast)); }
#line 1464 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 92 "cminus.y" /* yacc.c:1646  */
    { /*printf("<return>\n");*/ }
#line 1470 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 93 "cminus.y" /* yacc.c:1646  */
    { printf(" = %d\n", evaluation((yyvsp[-1].ast)) ); }
#line 1476 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "cminus.y" /* yacc.c:1646  */
    { printf(" = %d\n", evaluation((yyvsp[-1].ast)) ); }
#line 1482 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 95 "cminus.y" /* yacc.c:1646  */
    { printf(" = %d\n", evaluation((yyvsp[-1].ast)) ); }
#line 1488 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 98 "cminus.y" /* yacc.c:1646  */
    { /*printf("<AND>\n");*/ (yyval.ast) = new_ast(AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 1494 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 99 "cminus.y" /* yacc.c:1646  */
    { /*printf("<OR>\n");*/ (yyval.ast) = new_ast(OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 1500 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 100 "cminus.y" /* yacc.c:1646  */
    { /*printf("<GREATER_THAN>\n");*/ (yyval.ast) = new_ast(GREATER_THAN, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1506 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 101 "cminus.y" /* yacc.c:1646  */
    { /*printf("<LESSER_THAN>\n");*/ (yyval.ast) = new_ast(LESSER_THAN, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1512 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 102 "cminus.y" /* yacc.c:1646  */
    { /*printf("<DIFERRENT>\n");*/ (yyval.ast) = new_ast(DIFFERENT, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1518 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 103 "cminus.y" /* yacc.c:1646  */
    { /*printf("<EQUAL>\n");*/ (yyval.ast) = new_ast(EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1524 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 104 "cminus.y" /* yacc.c:1646  */
    { /*printf("<GREATER_THAN_EQUAL>\n");*/ (yyval.ast) = new_ast(GREATER_THAN_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1530 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 105 "cminus.y" /* yacc.c:1646  */
    { /*printf("<LESSER_THAN_EQUAL>\n");*/ (yyval.ast) = new_ast(LESSER_THAN_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1536 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 106 "cminus.y" /* yacc.c:1646  */
    { /*printf("<expr>\n");*/ (yyval.ast) = new_ast(ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 1542 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 107 "cminus.y" /* yacc.c:1646  */
    { /*printf("<sub>\n");*/ (yyval.ast) = new_ast(SUB, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1548 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 108 "cminus.y" /* yacc.c:1646  */
    { /*printf("<mul>\n");*/ (yyval.ast) = new_ast(MUL, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1554 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 109 "cminus.y" /* yacc.c:1646  */
    { /*printf("<div>\n");*/ (yyval.ast) = new_ast(DIV, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1560 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "cminus.y" /* yacc.c:1646  */
    { /*printf("<expr>\n");*/ (yyval.ast) = (yyvsp[-1].ast); }
#line 1566 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "cminus.y" /* yacc.c:1646  */
    { /*printf("<call> \n");*/ (yyval.ast) = new_call((yyvsp[-3].symbol), (yyvsp[-1].symbol_list)); }
#line 1572 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "cminus.y" /* yacc.c:1646  */
    { /*printf("<new_ref>\n");*/ (yyval.ast) = new_ref((yyvsp[0].symbol)); }
#line 1578 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 113 "cminus.y" /* yacc.c:1646  */
    { (yyval.ast) = new_number((yyvsp[0].intcon)); }
#line 1584 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 114 "cminus.y" /* yacc.c:1646  */
    { /*printf("<charcon>\n");*/ }
#line 1590 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 115 "cminus.y" /* yacc.c:1646  */
    { /*printf("<stringcon>\n");*/ }
#line 1596 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 118 "cminus.y" /* yacc.c:1646  */
    { (yyval.symbol_list) = NULL; }
#line 1602 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 119 "cminus.y" /* yacc.c:1646  */
    { /*printf("<exprlist>\n");*/ (yyval.symbol_list) = new_symbol_list((yyvsp[0].ast), NULL); }
#line 1608 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 120 "cminus.y" /* yacc.c:1646  */
    { /*printf("<exprlist>\n");*/ (yyval.symbol_list) = new_symbol_list((yyvsp[-2].ast), (yyvsp[0].symbol_list)); }
#line 1614 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 123 "cminus.y" /* yacc.c:1646  */
    {(yyval.ast) = newasgn((yyvsp[-2].symbol), (yyvsp[0].ast));}
#line 1620 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 124 "cminus.y" /* yacc.c:1646  */
    { /*printf("<assg>\n");*/ }
#line 1626 "cminus.tab.c" /* yacc.c:1646  */
    break;


#line 1630 "cminus.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
