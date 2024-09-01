#ifndef SCANNER_H
#define SCANNER_H

#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/parser.h"

typedef struct s_scanner t_scanner;

struct s_scanner
{
	t_u8		  last_glob_paren_depth;
	bool		  ext_was_in_double_quote;
	bool		  ext_saw_outside_quote;
	t_vec_heredoc heredocs;
};

enum e_token_type
{
	HEREDOC_START,
	SIMPLE_HEREDOC_BODY,
	HEREDOC_BODY_BEGINNING,
	HEREDOC_CONTENT,
	HEREDOC_END,
	FILE_DESCRIPTOR,
	EMPTY_VALUE,
	CONCAT,
	VARIABLE_NAME,
	REGEX,
	EXPANSION_WORD,
	EXTGLOB_PATTERN,
	BARE_DOLLAR,
	IMMEDIATE_DOUBLE_HASH,
	HEREDOC_ARROW,
	HEREDOC_ARROW_DASH,
	NEWLINE,
	OPENING_PAREN,
	ESAC,
	ERROR_RECOVERY,
};

struct s_heredoc_scan_state
{
	t_scanner		 *scanner;
	TSLexer			 *lexer;
	enum e_token_type middle_type;
	enum e_token_type end_type;
	bool			  did_advance;
	t_heredoc		 *heredoc;
	bool			  return_value;
};

typedef bool (*t_heredoc_content_func)(struct s_heredoc_scan_state	*state);

bool advance_word(TSLexer *lexer, t_string *unquoted_word);

#endif
