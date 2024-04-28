/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_154.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_770(t_small_parse_table_array *v)
{
	v->a[15400] = anon_sym_GT;
	v->a[15401] = anon_sym_LT_LT;
	v->a[15402] = anon_sym_GT_GT;
	v->a[15403] = anon_sym_SEMI_SEMI;
	v->a[15404] = anon_sym_PIPE_AMP;
	v->a[15405] = anon_sym_AMP_GT;
	v->a[15406] = anon_sym_AMP_GT_GT;
	v->a[15407] = anon_sym_LT_AMP;
	v->a[15408] = anon_sym_GT_AMP;
	v->a[15409] = anon_sym_GT_PIPE;
	v->a[15410] = anon_sym_LT_AMP_DASH;
	v->a[15411] = anon_sym_GT_AMP_DASH;
	v->a[15412] = anon_sym_LT_LT_DASH;
	v->a[15413] = 21;
	v->a[15414] = actions(3);
	v->a[15415] = 1;
	v->a[15416] = sym_comment;
	v->a[15417] = actions(3115);
	v->a[15418] = 1;
	v->a[15419] = anon_sym_DQUOTE;
	small_parse_table_771(v);
}

void	small_parse_table_771(t_small_parse_table_array *v)
{
	v->a[15420] = actions(3395);
	v->a[15421] = 1;
	v->a[15422] = anon_sym_DOLLAR_LBRACK;
	v->a[15423] = actions(3397);
	v->a[15424] = 1;
	v->a[15425] = anon_sym_DOLLAR;
	v->a[15426] = actions(3399);
	v->a[15427] = 1;
	v->a[15428] = sym__special_character;
	v->a[15429] = actions(3401);
	v->a[15430] = 1;
	v->a[15431] = aux_sym_number_token1;
	v->a[15432] = actions(3403);
	v->a[15433] = 1;
	v->a[15434] = aux_sym_number_token2;
	v->a[15435] = actions(3405);
	v->a[15436] = 1;
	v->a[15437] = anon_sym_DOLLAR_LBRACE;
	v->a[15438] = actions(3407);
	v->a[15439] = 1;
	small_parse_table_772(v);
}

void	small_parse_table_772(t_small_parse_table_array *v)
{
	v->a[15440] = anon_sym_DOLLAR_LPAREN;
	v->a[15441] = actions(3409);
	v->a[15442] = 1;
	v->a[15443] = anon_sym_BQUOTE;
	v->a[15444] = actions(3411);
	v->a[15445] = 1;
	v->a[15446] = anon_sym_DOLLAR_BQUOTE;
	v->a[15447] = actions(3415);
	v->a[15448] = 1;
	v->a[15449] = sym_test_operator;
	v->a[15450] = actions(3417);
	v->a[15451] = 1;
	v->a[15452] = sym__brace_start;
	v->a[15453] = state(2161);
	v->a[15454] = 1;
	v->a[15455] = aux_sym__literal_repeat1;
	v->a[15456] = actions(2096);
	v->a[15457] = 2;
	v->a[15458] = sym_file_descriptor;
	v->a[15459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_773(v);
}

void	small_parse_table_773(t_small_parse_table_array *v)
{
	v->a[15460] = actions(3393);
	v->a[15461] = 2;
	v->a[15462] = anon_sym_LPAREN_LPAREN;
	v->a[15463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15464] = actions(3413);
	v->a[15465] = 2;
	v->a[15466] = anon_sym_LT_LPAREN;
	v->a[15467] = anon_sym_GT_LPAREN;
	v->a[15468] = state(672);
	v->a[15469] = 2;
	v->a[15470] = sym_concatenation;
	v->a[15471] = aux_sym_for_statement_repeat1;
	v->a[15472] = actions(3391);
	v->a[15473] = 3;
	v->a[15474] = sym_raw_string;
	v->a[15475] = sym_ansi_c_string;
	v->a[15476] = sym_word;
	v->a[15477] = state(1711);
	v->a[15478] = 9;
	v->a[15479] = sym_arithmetic_expansion;
	small_parse_table_774(v);
}

void	small_parse_table_774(t_small_parse_table_array *v)
{
	v->a[15480] = sym_brace_expression;
	v->a[15481] = sym_string;
	v->a[15482] = sym_translated_string;
	v->a[15483] = sym_number;
	v->a[15484] = sym_simple_expansion;
	v->a[15485] = sym_expansion;
	v->a[15486] = sym_command_substitution;
	v->a[15487] = sym_process_substitution;
	v->a[15488] = actions(2094);
	v->a[15489] = 21;
	v->a[15490] = anon_sym_SEMI;
	v->a[15491] = anon_sym_PIPE_PIPE;
	v->a[15492] = anon_sym_AMP_AMP;
	v->a[15493] = anon_sym_PIPE;
	v->a[15494] = anon_sym_AMP;
	v->a[15495] = anon_sym_LT;
	v->a[15496] = anon_sym_GT;
	v->a[15497] = anon_sym_LT_LT;
	v->a[15498] = anon_sym_GT_GT;
	v->a[15499] = anon_sym_RPAREN;
	small_parse_table_775(v);
}

/* EOF small_parse_table_154.c */
