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
	v->a[44400] = sym_comment;
	v->a[44401] = actions(648);
	v->a[44402] = 1;
	v->a[44403] = sym_file_descriptor;
	v->a[44404] = actions(1596);
	v->a[44405] = 1;
	v->a[44406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44407] = actions(1599);
	v->a[44408] = 1;
	v->a[44409] = anon_sym_DOLLAR;
	v->a[44410] = actions(1602);
	v->a[44411] = 1;
	v->a[44412] = anon_sym_DQUOTE;
	v->a[44413] = actions(1605);
	v->a[44414] = 1;
	v->a[44415] = anon_sym_DOLLAR_LBRACE;
	v->a[44416] = actions(1608);
	v->a[44417] = 1;
	v->a[44418] = anon_sym_DOLLAR_LPAREN;
	v->a[44419] = actions(1611);
	small_parse_table_2221(v);
}

void	small_parse_table_2221(t_small_parse_table_array *v)
{
	v->a[44420] = 1;
	v->a[44421] = anon_sym_BQUOTE;
	v->a[44422] = state(717);
	v->a[44423] = 2;
	v->a[44424] = sym_concatenation;
	v->a[44425] = aux_sym_for_statement_repeat1;
	v->a[44426] = actions(1593);
	v->a[44427] = 3;
	v->a[44428] = sym_raw_string;
	v->a[44429] = sym_number;
	v->a[44430] = sym_word;
	v->a[44431] = state(902);
	v->a[44432] = 5;
	v->a[44433] = sym_arithmetic_expansion;
	v->a[44434] = sym_string;
	v->a[44435] = sym_simple_expansion;
	v->a[44436] = sym_expansion;
	v->a[44437] = sym_command_substitution;
	v->a[44438] = actions(628);
	v->a[44439] = 10;
	small_parse_table_2222(v);
}

void	small_parse_table_2222(t_small_parse_table_array *v)
{
	v->a[44440] = anon_sym_AMP_AMP;
	v->a[44441] = anon_sym_PIPE_PIPE;
	v->a[44442] = anon_sym_LT;
	v->a[44443] = anon_sym_GT;
	v->a[44444] = anon_sym_GT_GT;
	v->a[44445] = anon_sym_LT_AMP;
	v->a[44446] = anon_sym_GT_AMP;
	v->a[44447] = anon_sym_GT_PIPE;
	v->a[44448] = anon_sym_LT_GT;
	v->a[44449] = aux_sym_heredoc_redirect_token1;
	v->a[44450] = 4;
	v->a[44451] = actions(3);
	v->a[44452] = 1;
	v->a[44453] = sym_comment;
	v->a[44454] = actions(1445);
	v->a[44455] = 1;
	v->a[44456] = ts_builtin_sym_end;
	v->a[44457] = actions(1412);
	v->a[44458] = 2;
	v->a[44459] = sym_file_descriptor;
	small_parse_table_2223(v);
}

void	small_parse_table_2223(t_small_parse_table_array *v)
{
	v->a[44460] = sym_variable_name;
	v->a[44461] = actions(1408);
	v->a[44462] = 24;
	v->a[44463] = anon_sym_for;
	v->a[44464] = anon_sym_while;
	v->a[44465] = anon_sym_until;
	v->a[44466] = anon_sym_if;
	v->a[44467] = anon_sym_case;
	v->a[44468] = anon_sym_LPAREN;
	v->a[44469] = anon_sym_LBRACE;
	v->a[44470] = anon_sym_BANG;
	v->a[44471] = anon_sym_LT;
	v->a[44472] = anon_sym_GT;
	v->a[44473] = anon_sym_GT_GT;
	v->a[44474] = anon_sym_LT_AMP;
	v->a[44475] = anon_sym_GT_AMP;
	v->a[44476] = anon_sym_GT_PIPE;
	v->a[44477] = anon_sym_LT_GT;
	v->a[44478] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44479] = anon_sym_DOLLAR;
	small_parse_table_2224(v);
}

void	small_parse_table_2224(t_small_parse_table_array *v)
{
	v->a[44480] = anon_sym_DQUOTE;
	v->a[44481] = sym_raw_string;
	v->a[44482] = sym_number;
	v->a[44483] = anon_sym_DOLLAR_LBRACE;
	v->a[44484] = anon_sym_DOLLAR_LPAREN;
	v->a[44485] = anon_sym_BQUOTE;
	v->a[44486] = sym_word;
	v->a[44487] = 4;
	v->a[44488] = actions(3);
	v->a[44489] = 1;
	v->a[44490] = sym_comment;
	v->a[44491] = actions(1445);
	v->a[44492] = 1;
	v->a[44493] = ts_builtin_sym_end;
	v->a[44494] = actions(1412);
	v->a[44495] = 2;
	v->a[44496] = sym_file_descriptor;
	v->a[44497] = sym_variable_name;
	v->a[44498] = actions(1408);
	v->a[44499] = 24;
	small_parse_table_2225(v);
}

/* EOF small_parse_table_444.c */
