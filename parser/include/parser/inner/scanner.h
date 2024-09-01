#ifndef SCANNER_H
#define SCANNER_H

#include "me/types.h"
#include "parser/inner/heredoc.h"
#include "me/vec/vec_heredoc.h"
#include "parser/array.h"

typedef struct s_scanner t_scanner;

struct s_scanner
{
	t_u8 last_glob_paren_depth;
	bool ext_was_in_double_quote;
	bool ext_saw_outside_quote;
	t_vec_heredoc heredocs;
};

#endif