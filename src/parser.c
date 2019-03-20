#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_variable_payload = 16,
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
  [sym_variable_payload] = "variable_payload",
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
  [sym_variable_payload] = {
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
      if (lookahead == ':')
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
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          (lookahead < '' || 255 < lookahead))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable_payload);
      if (lookahead == ':')
        ADVANCE(52);
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
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 51},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 43},
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
    [sym_variable] = STATE(12),
    [sym_quoted_string] = STATE(14),
    [sym_block_string] = STATE(14),
    [sym_list] = STATE(14),
    [sym_atom] = STATE(14),
    [aux_sym_configuration_repeat1] = STATE(14),
    [sym_raw_string] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(21),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [4] = {
    [sym__immediate_variable] = STATE(16),
    [aux_sym_atom_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_atom_token1] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(29),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(27),
    [aux_sym_atom_token2] = ACTIONS(31),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(27),
  },
  [5] = {
    [sym__immediate_variable] = STATE(18),
    [aux_sym_block_string_repeat1] = STATE(18),
    [anon_sym_PERCENT] = ACTIONS(35),
    [sym_escape_sequence] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_atom_token1] = ACTIONS(41),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(41),
    [aux_sym_block_string_token1] = ACTIONS(43),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(41),
  },
  [6] = {
    [sym__immediate_variable] = STATE(21),
    [aux_sym_quoted_string_repeat1] = STATE(21),
    [anon_sym_PERCENT] = ACTIONS(47),
    [sym_escape_sequence] = ACTIONS(49),
    [aux_sym_quoted_string_token1] = ACTIONS(49),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_comment] = ACTIONS(39),
  },
  [7] = {
    [aux_sym_raw_string_token1] = ACTIONS(55),
    [sym_comment] = ACTIONS(39),
  },
  [8] = {
    [sym_variable] = STATE(4),
    [sym_quoted_string] = STATE(23),
    [sym_block_string] = STATE(23),
    [sym_list] = STATE(23),
    [sym_atom] = STATE(23),
    [aux_sym_configuration_repeat1] = STATE(23),
    [sym_raw_string] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [aux_sym_atom_token1] = ACTIONS(67),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(65),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(65),
  },
  [12] = {
    [sym__immediate_variable] = STATE(26),
    [aux_sym_atom_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_atom_token1] = ACTIONS(29),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(29),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [aux_sym_atom_token2] = ACTIONS(69),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(27),
  },
  [13] = {
    [sym__immediate_variable] = STATE(27),
    [aux_sym_block_string_repeat1] = STATE(27),
    [anon_sym_PERCENT] = ACTIONS(71),
    [sym_escape_sequence] = ACTIONS(71),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [aux_sym_atom_token1] = ACTIONS(41),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [aux_sym_block_string_token1] = ACTIONS(73),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(41),
  },
  [14] = {
    [sym_variable] = STATE(12),
    [sym_quoted_string] = STATE(29),
    [sym_block_string] = STATE(29),
    [sym_list] = STATE(29),
    [sym_atom] = STATE(29),
    [aux_sym_configuration_repeat1] = STATE(29),
    [sym_raw_string] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(21),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(17),
  },
  [15] = {
    [sym_variable_name] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__immediate_variable] = STATE(31),
    [aux_sym_atom_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [aux_sym_atom_token1] = ACTIONS(81),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(79),
    [aux_sym_atom_token2] = ACTIONS(83),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(79),
  },
  [17] = {
    [sym_variable_name] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__immediate_variable] = STATE(33),
    [aux_sym_block_string_repeat1] = STATE(33),
    [anon_sym_PERCENT] = ACTIONS(87),
    [sym_escape_sequence] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_atom_token1] = ACTIONS(91),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(91),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(91),
    [aux_sym_block_string_token1] = ACTIONS(93),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(91),
  },
  [19] = {
    [sym_variable_name] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [aux_sym_atom_token1] = ACTIONS(99),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(97),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(97),
  },
  [21] = {
    [sym__immediate_variable] = STATE(36),
    [aux_sym_quoted_string_repeat1] = STATE(36),
    [anon_sym_PERCENT] = ACTIONS(101),
    [sym_escape_sequence] = ACTIONS(103),
    [aux_sym_quoted_string_token1] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_comment] = ACTIONS(39),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_atom_token1] = ACTIONS(109),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(107),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(107),
  },
  [23] = {
    [sym_variable] = STATE(4),
    [sym_quoted_string] = STATE(23),
    [sym_block_string] = STATE(23),
    [sym_list] = STATE(23),
    [sym_atom] = STATE(23),
    [aux_sym_configuration_repeat1] = STATE(23),
    [sym_raw_string] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [aux_sym_atom_token1] = ACTIONS(116),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(119),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(128),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym_variable_payload] = ACTIONS(133),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_atom_token1] = ACTIONS(137),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(135),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(135),
    [aux_sym_atom_token2] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(135),
  },
  [26] = {
    [sym__immediate_variable] = STATE(39),
    [aux_sym_atom_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(79),
    [aux_sym_atom_token1] = ACTIONS(81),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [aux_sym_atom_token2] = ACTIONS(139),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(79),
  },
  [27] = {
    [sym__immediate_variable] = STATE(40),
    [aux_sym_block_string_repeat1] = STATE(40),
    [anon_sym_PERCENT] = ACTIONS(141),
    [sym_escape_sequence] = ACTIONS(141),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_atom_token1] = ACTIONS(91),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(91),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [aux_sym_block_string_token1] = ACTIONS(143),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(91),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_atom_token1] = ACTIONS(147),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(145),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(145),
  },
  [29] = {
    [sym_variable] = STATE(12),
    [sym_quoted_string] = STATE(29),
    [sym_block_string] = STATE(29),
    [sym_list] = STATE(29),
    [sym_atom] = STATE(29),
    [aux_sym_configuration_repeat1] = STATE(29),
    [sym_raw_string] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(113),
    [aux_sym_atom_token1] = ACTIONS(149),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(119),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(128),
  },
  [30] = {
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__immediate_variable] = STATE(31),
    [aux_sym_atom_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_atom_token1] = ACTIONS(161),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(159),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(159),
    [aux_sym_atom_token2] = ACTIONS(163),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(159),
  },
  [32] = {
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__immediate_variable] = STATE(33),
    [aux_sym_block_string_repeat1] = STATE(33),
    [anon_sym_PERCENT] = ACTIONS(173),
    [sym_escape_sequence] = ACTIONS(173),
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_comment] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(178),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(178),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [aux_sym_block_string_token1] = ACTIONS(180),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(178),
  },
  [34] = {
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [aux_sym_atom_token1] = ACTIONS(192),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(190),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(190),
  },
  [36] = {
    [sym__immediate_variable] = STATE(36),
    [aux_sym_quoted_string_repeat1] = STATE(36),
    [anon_sym_PERCENT] = ACTIONS(194),
    [sym_escape_sequence] = ACTIONS(197),
    [aux_sym_quoted_string_token1] = ACTIONS(197),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_comment] = ACTIONS(39),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_atom_token1] = ACTIONS(207),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(205),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [aux_sym_atom_token2] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(205),
  },
  [38] = {
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__immediate_variable] = STATE(39),
    [aux_sym_atom_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_atom_token1] = ACTIONS(161),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(159),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(159),
    [aux_sym_atom_token2] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(159),
  },
  [40] = {
    [sym__immediate_variable] = STATE(40),
    [aux_sym_block_string_repeat1] = STATE(40),
    [anon_sym_PERCENT] = ACTIONS(214),
    [sym_escape_sequence] = ACTIONS(214),
    [sym_comment] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(178),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(178),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [aux_sym_block_string_token1] = ACTIONS(217),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(178),
  },
  [41] = {
    [anon_sym_RBRACE] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [sym_variable_payload] = ACTIONS(222),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_atom_token1] = ACTIONS(226),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(224),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [aux_sym_atom_token2] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(224),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_variable_payload] = ACTIONS(230),
  },
  [44] = {
    [anon_sym_PERCENT] = ACTIONS(226),
    [sym_escape_sequence] = ACTIONS(226),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_comment] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(226),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(226),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [aux_sym_block_string_token1] = ACTIONS(224),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(226),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [sym_variable_payload] = ACTIONS(234),
  },
  [46] = {
    [anon_sym_PERCENT] = ACTIONS(226),
    [sym_escape_sequence] = ACTIONS(224),
    [aux_sym_quoted_string_token1] = ACTIONS(224),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [sym_comment] = ACTIONS(39),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_atom_token1] = ACTIONS(238),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(236),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(236),
    [aux_sym_atom_token2] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(236),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(240),
    [aux_sym_atom_token1] = ACTIONS(242),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(240),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(240),
    [aux_sym_atom_token2] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(240),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_PERCENT] = ACTIONS(242),
    [sym_escape_sequence] = ACTIONS(242),
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_comment] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(242),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(242),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [aux_sym_block_string_token1] = ACTIONS(240),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(242),
  },
  [51] = {
    [anon_sym_RBRACE] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_PERCENT] = ACTIONS(242),
    [sym_escape_sequence] = ACTIONS(240),
    [aux_sym_quoted_string_token1] = ACTIONS(240),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [sym_comment] = ACTIONS(39),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(250),
    [aux_sym_atom_token1] = ACTIONS(252),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(250),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(250),
    [aux_sym_atom_token2] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(250),
  },
  [55] = {
    [anon_sym_PERCENT] = ACTIONS(252),
    [sym_escape_sequence] = ACTIONS(252),
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym_comment] = ACTIONS(39),
    [aux_sym_atom_token1] = ACTIONS(252),
    [anon_sym_DQUOTE_BSLASH_PIPE] = ACTIONS(252),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [aux_sym_block_string_token1] = ACTIONS(250),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE_BSLASH_GT] = ACTIONS(252),
  },
  [56] = {
    [anon_sym_PERCENT] = ACTIONS(252),
    [sym_escape_sequence] = ACTIONS(250),
    [aux_sym_quoted_string_token1] = ACTIONS(250),
    [anon_sym_PERCENT_LBRACE2] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [sym_comment] = ACTIONS(39),
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
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_block_string, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_block_string, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = false}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(19),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(22),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_configuration, 1),
  [59] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, SHIFT(24),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [69] = {.count = 1, .reusable = false}, SHIFT(26),
  [71] = {.count = 1, .reusable = false}, SHIFT(27),
  [73] = {.count = 1, .reusable = true}, SHIFT(27),
  [75] = {.count = 1, .reusable = true}, SHIFT(28),
  [77] = {.count = 1, .reusable = true}, SHIFT(30),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 2),
  [83] = {.count = 1, .reusable = false}, SHIFT(31),
  [85] = {.count = 1, .reusable = true}, SHIFT(32),
  [87] = {.count = 1, .reusable = false}, SHIFT(33),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_block_string, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_block_string, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(33),
  [95] = {.count = 1, .reusable = true}, SHIFT(34),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_string, 2),
  [101] = {.count = 1, .reusable = false}, SHIFT(36),
  [103] = {.count = 1, .reusable = true}, SHIFT(36),
  [105] = {.count = 1, .reusable = false}, SHIFT(35),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_raw_string, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_raw_string, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(3),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(4),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(5),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(6),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(7),
  [131] = {.count = 1, .reusable = true}, SHIFT(37),
  [133] = {.count = 1, .reusable = true}, SHIFT(38),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 3),
  [139] = {.count = 1, .reusable = false}, SHIFT(39),
  [141] = {.count = 1, .reusable = false}, SHIFT(40),
  [143] = {.count = 1, .reusable = true}, SHIFT(40),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(12),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(13),
  [155] = {.count = 1, .reusable = true}, SHIFT(41),
  [157] = {.count = 1, .reusable = true}, SHIFT(42),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atom_repeat1, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(aux_sym_atom_repeat1, 2),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(31),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.count = 1, .reusable = true}, SHIFT(43),
  [171] = {.count = 1, .reusable = true}, SHIFT(44),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(33),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2),
  [178] = {.count = 1, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(33),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(17),
  [186] = {.count = 1, .reusable = true}, SHIFT(45),
  [188] = {.count = 1, .reusable = true}, SHIFT(46),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_string, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_string, 3),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [203] = {.count = 1, .reusable = false}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 4),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 4),
  [209] = {.count = 1, .reusable = true}, SHIFT(47),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(39),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(40),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(40),
  [220] = {.count = 1, .reusable = true}, SHIFT(48),
  [222] = {.count = 1, .reusable = true}, SHIFT(49),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 3),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 3),
  [228] = {.count = 1, .reusable = true}, SHIFT(50),
  [230] = {.count = 1, .reusable = true}, SHIFT(51),
  [232] = {.count = 1, .reusable = true}, SHIFT(52),
  [234] = {.count = 1, .reusable = true}, SHIFT(53),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 5),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 5),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 4),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 4),
  [244] = {.count = 1, .reusable = true}, SHIFT(54),
  [246] = {.count = 1, .reusable = true}, SHIFT(55),
  [248] = {.count = 1, .reusable = true}, SHIFT(56),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym__immediate_variable, 5),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym__immediate_variable, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dune() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
