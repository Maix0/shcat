/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_444.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2220(t_small_parse_table_array *v)
{
	v->a[44400] = anon_sym_LT_AMP_DASH;
	v->a[44401] = anon_sym_GT_AMP_DASH;
	v->a[44402] = anon_sym_LT_LT;
	v->a[44403] = anon_sym_LT_LT_DASH;
	v->a[44404] = 12;
	v->a[44405] = actions(3);
	v->a[44406] = 1;
	v->a[44407] = sym_comment;
	v->a[44408] = actions(559);
	v->a[44409] = 1;
	v->a[44410] = sym_file_descriptor;
	v->a[44411] = actions(1528);
	v->a[44412] = 1;
	v->a[44413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44414] = actions(1531);
	v->a[44415] = 1;
	v->a[44416] = anon_sym_DOLLAR;
	v->a[44417] = actions(1534);
	v->a[44418] = 1;
	v->a[44419] = anon_sym_DQUOTE;
	small_parse_table_2221(v);
}

void	small_parse_table_2221(t_small_parse_table_array *v)
{
	v->a[44420] = actions(1537);
	v->a[44421] = 1;
	v->a[44422] = anon_sym_DOLLAR_LBRACE;
	v->a[44423] = actions(1540);
	v->a[44424] = 1;
	v->a[44425] = anon_sym_DOLLAR_LPAREN;
	v->a[44426] = actions(1543);
	v->a[44427] = 1;
	v->a[44428] = anon_sym_BQUOTE;
	v->a[44429] = state(641);
	v->a[44430] = 2;
	v->a[44431] = sym_concatenation;
	v->a[44432] = aux_sym_for_statement_repeat1;
	v->a[44433] = actions(1525);
	v->a[44434] = 3;
	v->a[44435] = sym_raw_string;
	v->a[44436] = sym_number;
	v->a[44437] = sym_word;
	v->a[44438] = state(1028);
	v->a[44439] = 5;
	small_parse_table_2222(v);
}

void	small_parse_table_2222(t_small_parse_table_array *v)
{
	v->a[44440] = sym_arithmetic_expansion;
	v->a[44441] = sym_string;
	v->a[44442] = sym_simple_expansion;
	v->a[44443] = sym_expansion;
	v->a[44444] = sym_command_substitution;
	v->a[44445] = actions(564);
	v->a[44446] = 15;
	v->a[44447] = anon_sym_PIPE;
	v->a[44448] = anon_sym_AMP_AMP;
	v->a[44449] = anon_sym_PIPE_PIPE;
	v->a[44450] = anon_sym_LT;
	v->a[44451] = anon_sym_GT;
	v->a[44452] = anon_sym_GT_GT;
	v->a[44453] = anon_sym_AMP_GT;
	v->a[44454] = anon_sym_AMP_GT_GT;
	v->a[44455] = anon_sym_LT_AMP;
	v->a[44456] = anon_sym_GT_AMP;
	v->a[44457] = anon_sym_GT_PIPE;
	v->a[44458] = anon_sym_LT_AMP_DASH;
	v->a[44459] = anon_sym_GT_AMP_DASH;
	small_parse_table_2223(v);
}

void	small_parse_table_2223(t_small_parse_table_array *v)
{
	v->a[44460] = anon_sym_LT_LT;
	v->a[44461] = anon_sym_LT_LT_DASH;
	v->a[44462] = 3;
	v->a[44463] = actions(3);
	v->a[44464] = 1;
	v->a[44465] = sym_comment;
	v->a[44466] = actions(1100);
	v->a[44467] = 3;
	v->a[44468] = sym_file_descriptor;
	v->a[44469] = sym__concat;
	v->a[44470] = ts_builtin_sym_end;
	v->a[44471] = actions(1102);
	v->a[44472] = 29;
	v->a[44473] = anon_sym_PIPE;
	v->a[44474] = anon_sym_SEMI_SEMI;
	v->a[44475] = anon_sym_AMP_AMP;
	v->a[44476] = anon_sym_PIPE_PIPE;
	v->a[44477] = anon_sym_LT;
	v->a[44478] = anon_sym_GT;
	v->a[44479] = anon_sym_GT_GT;
	small_parse_table_2224(v);
}

void	small_parse_table_2224(t_small_parse_table_array *v)
{
	v->a[44480] = anon_sym_AMP_GT;
	v->a[44481] = anon_sym_AMP_GT_GT;
	v->a[44482] = anon_sym_LT_AMP;
	v->a[44483] = anon_sym_GT_AMP;
	v->a[44484] = anon_sym_GT_PIPE;
	v->a[44485] = anon_sym_LT_AMP_DASH;
	v->a[44486] = anon_sym_GT_AMP_DASH;
	v->a[44487] = anon_sym_LT_LT;
	v->a[44488] = anon_sym_LT_LT_DASH;
	v->a[44489] = aux_sym_heredoc_redirect_token1;
	v->a[44490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44491] = anon_sym_AMP;
	v->a[44492] = aux_sym_concatenation_token1;
	v->a[44493] = anon_sym_DOLLAR;
	v->a[44494] = anon_sym_DQUOTE;
	v->a[44495] = sym_raw_string;
	v->a[44496] = sym_number;
	v->a[44497] = anon_sym_DOLLAR_LBRACE;
	v->a[44498] = anon_sym_DOLLAR_LPAREN;
	v->a[44499] = anon_sym_BQUOTE;
	small_parse_table_2225(v);
}

/* EOF small_parse_table_444.c */
