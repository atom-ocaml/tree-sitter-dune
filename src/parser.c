#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 61
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_atom_token1 = 1,
  aux_sym_atom_token2 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_quoted_string_token1 = 4,
  anon_sym_PERCENT = 5,
  anon_sym_DQUOTE_BSLASH_PIPE = 6,
  aux_sym_block_string_token1 = 7,
  anon_sym_DQUOTE_BSLASH_GT = 8,
  aux_sym_raw_string_token1 = 9,
  sym_escape_sequence = 10,
  anon_sym_PERCENT_LBRACE = 11,
  anon_sym_PERCENT_LBRACE2 = 12,
  anon_sym_COLON = 13,
  anon_sym_RBRACE = 14,
  sym_variable_name = 15,
  sym_variable_value = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_comment = 19,
  sym_configuration = 20,
  sym_atom = 21,
  sym_quoted_string = 22,
  sym_block_string = 23,
  sym_raw_string = 24,
  sym_variable = 25,
  sym__immediate_variable = 26,
  sym_list = 27,
  aux_sym_configuration_repeat1 = 28,
  aux_sym_atom_repeat1 = 29,
  aux_sym_quoted_string_repeat1 = 30,
  aux_sym_block_string_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_atom_token1] = "atom_token1",
  [aux_sym_atom_token2] = "atom_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE_BSLASH_PIPE] = "\"\\|",
  [aux_sym_block_string_token1] = "block_string_token1",
  [anon_sym_DQUOTE_BSLASH_GT] = "\"\\>",
  [aux_sym_raw_string_token1] = "raw_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_LBRACE2] = "%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_variable_name] = "variable_name",
  [sym_variable_value] = "variable_value",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_comment] = "comment",
  [sym_configuration] = "configuration",
  [sym_atom] = "atom",
  [sym_quoted_string] = "quoted_string",
  [sym_block_string] = "block_string",
  [sym_raw_string] = "raw_string",
  [sym_variable] = "variable",
  [sym__immediate_variable] = "variable",
  [sym_list] = "list",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_block_string_repeat1] = "block_string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_BSLASH_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_BSLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_block_string] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\')
        ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{')
        ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == 'x')
        ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(18);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '{')
        ADVANCE(16);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '{')
        ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE_BSLASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE_BSLASH_PIPE);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(25);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (lookahead != 0 &&
          (lookahead < '' || '' < lookahead) &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '{')
        ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(30);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (lookahead != 0 &&
          (lookahead < '' || '' < lookahead) &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead == '{')
        ADVANCE(12);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_atom_token2);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(33);
      if (lookahead == ')')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(24);
      if (('' <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= 255))
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '"')
        ADVANCE(16);
      if (lookahead == '%')
        ADVANCE(14);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if (lookahead == '(')
        ADVANCE(33);
      if (lookahead == ')')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(36);
      if ((0 <= lookahead && lookahead <= '') ||
          lookahead == '' ||
          lookahead == '' ||
          ('' <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= 255))
        ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_block_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          lookahead == '' ||
          lookahead == '' ||
          ('' <= lookahead && lookahead <= ' ') ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          ('' <= lookahead && lookahead <= 255))
        ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == '"')
        ADVANCE(44);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\n')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == ';')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(52);
      if (lookahead == ';')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable_value);
      if (lookahead != 0 &&
          (lookahead < 0 || ' ' < lookahead) &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_quoted_string] = STATE(8),
    [sym_block_string] = STATE(8),
    [sym_list] = STATE(8),
    [aux_sym_configuration_repeat1] = STATE(8),
    [sym_configuration] = STATE(9),
    [sym_raw_string] = STATE(8),
    [sym_variable] = STATE(4),
    [sym_atom] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [2] = {
    [sym_variable_name] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_quoted_string] = STATE(12),
    [sym_block_string] = STATE(12),
    [sym_list] = STATE(12),
    [aux_sym_configuration_repeat1] = STATE(12),
    [sym_raw_string] = STATE(12),
    [sym_variable] = STATE(4),
    [sym_atom] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [4] = {
    [sym__immediate_variable] = STATE(14),
    [aux_sym_atom_repeat1] = STATE(14),
    [aux_sym_atom_token1] = ACTIONS(25),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(25),
    [aux_sym_atom_token2] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__immediate_variable] = STATE(15),
    [aux_sym_block_string_repeat1] = STATE(15),
    [anon_sym_PERCENT] = ACTIONS(33),
    [sym_escape_sequence] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(39),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(39),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(39),
    [aux_sym_block_string_token1] = ACTIONS(41),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(39),
  },
  [6] = {
    [sym__immediate_variable] = STATE(17),
    [aux_sym_quoted_string_repeat1] = STATE(17),
    [anon_sym_PERCENT] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(47),
    [aux_sym_quoted_string_token1] = ACTIONS(47),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [aux_sym_raw_string_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym_variable] = STATE(4),
    [sym_quoted_string] = STATE(19),
    [sym_block_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_atom] = STATE(19),
    [aux_sym_configuration_repeat1] = STATE(19),
    [sym_raw_string] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [aux_sym_atom_token1] = ACTIONS(65),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(63),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(63),
  },
  [12] = {
    [sym_quoted_string] = STATE(38),
    [sym_block_string] = STATE(38),
    [sym_list] = STATE(38),
    [aux_sym_configuration_repeat1] = STATE(38),
    [sym_raw_string] = STATE(38),
    [sym_variable] = STATE(4),
    [sym_atom] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [13] = {
    [sym_variable_name] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__immediate_variable] = STATE(24),
    [aux_sym_atom_repeat1] = STATE(24),
    [aux_sym_atom_token1] = ACTIONS(71),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(71),
    [aux_sym_atom_token2] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__immediate_variable] = STATE(25),
    [aux_sym_block_string_repeat1] = STATE(25),
    [anon_sym_PERCENT] = ACTIONS(77),
    [sym_escape_sequence] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_atom_token1] = ACTIONS(81),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(81),
    [aux_sym_block_string_token1] = ACTIONS(83),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(81),
  },
  [16] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_atom_token1] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(85),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(85),
  },
  [17] = {
    [sym__immediate_variable] = STATE(27),
    [aux_sym_quoted_string_repeat1] = STATE(27),
    [anon_sym_PERCENT] = ACTIONS(89),
    [sym_escape_sequence] = ACTIONS(91),
    [aux_sym_quoted_string_token1] = ACTIONS(91),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [aux_sym_atom_token1] = ACTIONS(97),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(95),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(95),
  },
  [19] = {
    [sym_variable] = STATE(4),
    [sym_quoted_string] = STATE(19),
    [sym_block_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_atom] = STATE(19),
    [aux_sym_configuration_repeat1] = STATE(19),
    [sym_raw_string] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym_atom_token1] = ACTIONS(104),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(107),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(116),
  },
  [20] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [sym_variable_value] = ACTIONS(121),
  },
  [21] = {
    [aux_sym_atom_token1] = ACTIONS(123),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(123),
    [aux_sym_atom_token2] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [aux_sym_atom_token1] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(127),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(127),
  },
  [23] = {
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__immediate_variable] = STATE(24),
    [aux_sym_atom_repeat1] = STATE(24),
    [aux_sym_atom_token1] = ACTIONS(135),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(135),
    [aux_sym_atom_token2] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__immediate_variable] = STATE(25),
    [aux_sym_block_string_repeat1] = STATE(25),
    [anon_sym_PERCENT] = ACTIONS(145),
    [sym_escape_sequence] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(150),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(150),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(150),
    [aux_sym_block_string_token1] = ACTIONS(152),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(150),
  },
  [26] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [aux_sym_atom_token1] = ACTIONS(160),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(158),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(158),
  },
  [27] = {
    [sym__immediate_variable] = STATE(27),
    [aux_sym_quoted_string_repeat1] = STATE(27),
    [anon_sym_PERCENT] = ACTIONS(162),
    [sym_escape_sequence] = ACTIONS(165),
    [aux_sym_quoted_string_token1] = ACTIONS(165),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [aux_sym_atom_token1] = ACTIONS(173),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(173),
    [aux_sym_atom_token2] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_variable_value] = ACTIONS(181),
  },
  [31] = {
    [aux_sym_atom_token1] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(183),
    [aux_sym_atom_token2] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_atom_token1] = ACTIONS(187),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(189),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(187),
    [aux_sym_atom_token2] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [aux_sym_atom_token1] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(191),
    [aux_sym_atom_token2] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_atom_token1] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(197),
    [aux_sym_atom_token2] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__immediate_variable] = STATE(37),
    [aux_sym_block_string_repeat1] = STATE(37),
    [anon_sym_PERCENT] = ACTIONS(201),
    [sym_escape_sequence] = ACTIONS(201),
    [sym_comment] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(39),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(39),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [aux_sym_block_string_token1] = ACTIONS(203),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(39),
  },
  [37] = {
    [sym__immediate_variable] = STATE(39),
    [aux_sym_block_string_repeat1] = STATE(39),
    [anon_sym_PERCENT] = ACTIONS(207),
    [sym_escape_sequence] = ACTIONS(207),
    [sym_comment] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(81),
    [aux_sym_atom_token1] = ACTIONS(81),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [aux_sym_block_string_token1] = ACTIONS(209),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(81),
  },
  [38] = {
    [sym_variable] = STATE(4),
    [sym_quoted_string] = STATE(38),
    [sym_block_string] = STATE(38),
    [sym_list] = STATE(38),
    [sym_atom] = STATE(38),
    [aux_sym_configuration_repeat1] = STATE(38),
    [sym_raw_string] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym_atom_token1] = ACTIONS(104),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(107),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(116),
  },
  [39] = {
    [sym__immediate_variable] = STATE(39),
    [aux_sym_block_string_repeat1] = STATE(39),
    [anon_sym_PERCENT] = ACTIONS(214),
    [sym_escape_sequence] = ACTIONS(214),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(150),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(150),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [aux_sym_block_string_token1] = ACTIONS(217),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(150),
  },
  [40] = {
    [anon_sym_PERCENT] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [aux_sym_block_string_token1] = ACTIONS(185),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(183),
  },
  [41] = {
    [anon_sym_PERCENT] = ACTIONS(191),
    [sym_escape_sequence] = ACTIONS(191),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(191),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [aux_sym_block_string_token1] = ACTIONS(193),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(191),
  },
  [42] = {
    [anon_sym_PERCENT] = ACTIONS(197),
    [sym_escape_sequence] = ACTIONS(197),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(197),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [aux_sym_block_string_token1] = ACTIONS(199),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(197),
  },
  [43] = {
    [anon_sym_PERCENT] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(185),
    [aux_sym_quoted_string_token1] = ACTIONS(185),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [anon_sym_PERCENT] = ACTIONS(191),
    [sym_escape_sequence] = ACTIONS(193),
    [aux_sym_quoted_string_token1] = ACTIONS(193),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [anon_sym_PERCENT] = ACTIONS(197),
    [sym_escape_sequence] = ACTIONS(199),
    [aux_sym_quoted_string_token1] = ACTIONS(199),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [anon_sym_PERCENT] = ACTIONS(183),
    [sym_escape_sequence] = ACTIONS(183),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(183),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [aux_sym_block_string_token1] = ACTIONS(185),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(183),
  },
  [47] = {
    [anon_sym_PERCENT] = ACTIONS(191),
    [sym_escape_sequence] = ACTIONS(191),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(191),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [aux_sym_block_string_token1] = ACTIONS(193),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(191),
  },
  [48] = {
    [anon_sym_PERCENT] = ACTIONS(197),
    [sym_escape_sequence] = ACTIONS(197),
    [sym_comment] = ACTIONS(37),
    [aux_sym_atom_token1] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(197),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [aux_sym_block_string_token1] = ACTIONS(199),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(197),
  },
  [49] = {
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_variable_value] = ACTIONS(229),
  },
  [51] = {
    [anon_sym_RBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_variable_value] = ACTIONS(239),
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_variable_value] = ACTIONS(249),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_variable_name] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_variable_name] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_variable_name] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_configuration, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(36),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_block_string, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_block_string, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(15),
  [43] = {.count = 1, .reusable = true}, SHIFT(58),
  [45] = {.count = 1, .reusable = false}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(17),
  [49] = {.count = 1, .reusable = true}, SHIFT(59),
  [51] = {.count = 1, .reusable = false}, SHIFT(16),
  [53] = {.count = 1, .reusable = true}, SHIFT(18),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_configuration, 1),
  [57] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true}, SHIFT(20),
  [61] = {.count = 1, .reusable = true}, SHIFT(21),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(22),
  [69] = {.count = 1, .reusable = true}, SHIFT(23),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [75] = {.count = 1, .reusable = false}, SHIFT(24),
  [77] = {.count = 1, .reusable = false}, SHIFT(25),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_block_string, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_block_string, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_string, 2),
  [89] = {.count = 1, .reusable = false}, SHIFT(27),
  [91] = {.count = 1, .reusable = true}, SHIFT(27),
  [93] = {.count = 1, .reusable = false}, SHIFT(26),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_raw_string, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_raw_string, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(3),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(4),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(5),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(6),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(7),
  [119] = {.count = 1, .reusable = true}, SHIFT(28),
  [121] = {.count = 1, .reusable = true}, SHIFT(29),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [131] = {.count = 1, .reusable = true}, SHIFT(30),
  [133] = {.count = 1, .reusable = true}, SHIFT(31),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_atom_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atom_repeat1, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(13),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(24),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(25),
  [148] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(58),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_string, 3),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(59),
  [171] = {.count = 1, .reusable = false}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 4),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 4),
  [177] = {.count = 1, .reusable = true}, SHIFT(32),
  [179] = {.count = 1, .reusable = true}, SHIFT(33),
  [181] = {.count = 1, .reusable = true}, SHIFT(34),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 5),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 5),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 4),
  [195] = {.count = 1, .reusable = true}, SHIFT(35),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 5),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 5),
  [201] = {.count = 1, .reusable = false}, SHIFT(37),
  [203] = {.count = 1, .reusable = true}, SHIFT(37),
  [205] = {.count = 1, .reusable = true}, SHIFT(60),
  [207] = {.count = 1, .reusable = false}, SHIFT(39),
  [209] = {.count = 1, .reusable = true}, SHIFT(39),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(36),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(39),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(39),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(60),
  [223] = {.count = 1, .reusable = true}, SHIFT(50),
  [225] = {.count = 1, .reusable = true}, SHIFT(40),
  [227] = {.count = 1, .reusable = true}, SHIFT(41),
  [229] = {.count = 1, .reusable = true}, SHIFT(51),
  [231] = {.count = 1, .reusable = true}, SHIFT(42),
  [233] = {.count = 1, .reusable = true}, SHIFT(53),
  [235] = {.count = 1, .reusable = true}, SHIFT(43),
  [237] = {.count = 1, .reusable = true}, SHIFT(44),
  [239] = {.count = 1, .reusable = true}, SHIFT(54),
  [241] = {.count = 1, .reusable = true}, SHIFT(45),
  [243] = {.count = 1, .reusable = true}, SHIFT(56),
  [245] = {.count = 1, .reusable = true}, SHIFT(46),
  [247] = {.count = 1, .reusable = true}, SHIFT(47),
  [249] = {.count = 1, .reusable = true}, SHIFT(57),
  [251] = {.count = 1, .reusable = true}, SHIFT(48),
  [253] = {.count = 1, .reusable = true}, SHIFT(49),
  [255] = {.count = 1, .reusable = true}, SHIFT(52),
  [257] = {.count = 1, .reusable = true}, SHIFT(55),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dune(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
