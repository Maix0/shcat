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
	v->a[44401] = actions(1574);
	v->a[44402] = 1;
	v->a[44403] = anon_sym_LPAREN;
	v->a[44404] = actions(1576);
	v->a[44405] = 1;
	v->a[44406] = anon_sym_BANG;
	v->a[44407] = actions(1584);
	v->a[44408] = 1;
	v->a[44409] = anon_sym_TILDE;
	v->a[44410] = actions(1586);
	v->a[44411] = 1;
	v->a[44412] = anon_sym_DOLLAR;
	v->a[44413] = actions(1588);
	v->a[44414] = 1;
	v->a[44415] = anon_sym_DQUOTE;
	v->a[44416] = actions(1592);
	v->a[44417] = 1;
	v->a[44418] = anon_sym_DOLLAR_LBRACE;
	v->a[44419] = actions(1594);
	small_parse_table_2221(v);
}

void	small_parse_table_2221(t_small_parse_table_array *v)
{
	v->a[44420] = 1;
	v->a[44421] = anon_sym_DOLLAR_LPAREN;
	v->a[44422] = actions(1596);
	v->a[44423] = 1;
	v->a[44424] = anon_sym_BQUOTE;
	v->a[44425] = actions(1598);
	v->a[44426] = 1;
	v->a[44427] = sym_variable_name;
	v->a[44428] = actions(1602);
	v->a[44429] = 1;
	v->a[44430] = anon_sym_RPAREN_RPAREN;
	v->a[44431] = actions(1580);
	v->a[44432] = 2;
	v->a[44433] = anon_sym_PLUS_PLUS;
	v->a[44434] = anon_sym_DASH_DASH;
	v->a[44435] = actions(1582);
	v->a[44436] = 2;
	v->a[44437] = anon_sym_DASH2;
	v->a[44438] = anon_sym_PLUS2;
	v->a[44439] = actions(1590);
	small_parse_table_2222(v);
}

void	small_parse_table_2222(t_small_parse_table_array *v)
{
	v->a[44440] = 2;
	v->a[44441] = sym_number;
	v->a[44442] = aux_sym__simple_variable_name_token1;
	v->a[44443] = state(238);
	v->a[44444] = 3;
	v->a[44445] = sym_string;
	v->a[44446] = sym_simple_expansion;
	v->a[44447] = sym_expansion;
	v->a[44448] = state(328);
	v->a[44449] = 8;
	v->a[44450] = sym__arithmetic_expression;
	v->a[44451] = sym_arithmetic_literal;
	v->a[44452] = sym_arithmetic_binary_expression;
	v->a[44453] = sym_arithmetic_ternary_expression;
	v->a[44454] = sym_arithmetic_unary_expression;
	v->a[44455] = sym_arithmetic_postfix_expression;
	v->a[44456] = sym_arithmetic_parenthesized_expression;
	v->a[44457] = sym_command_substitution;
	v->a[44458] = 6;
	v->a[44459] = actions(3);
	small_parse_table_2223(v);
}

void	small_parse_table_2223(t_small_parse_table_array *v)
{
	v->a[44460] = 1;
	v->a[44461] = sym_comment;
	v->a[44462] = actions(1170);
	v->a[44463] = 1;
	v->a[44464] = aux_sym_concatenation_token1;
	v->a[44465] = actions(1207);
	v->a[44466] = 1;
	v->a[44467] = sym__concat;
	v->a[44468] = state(738);
	v->a[44469] = 1;
	v->a[44470] = aux_sym_concatenation_repeat1;
	v->a[44471] = actions(1158);
	v->a[44472] = 2;
	v->a[44473] = sym_file_descriptor;
	v->a[44474] = sym_variable_name;
	v->a[44475] = actions(1154);
	v->a[44476] = 22;
	v->a[44477] = anon_sym_PIPE;
	v->a[44478] = anon_sym_AMP_AMP;
	v->a[44479] = anon_sym_PIPE_PIPE;
	small_parse_table_2224(v);
}

void	small_parse_table_2224(t_small_parse_table_array *v)
{
	v->a[44480] = anon_sym_LT;
	v->a[44481] = anon_sym_GT;
	v->a[44482] = anon_sym_GT_GT;
	v->a[44483] = anon_sym_LT_AMP;
	v->a[44484] = anon_sym_GT_AMP;
	v->a[44485] = anon_sym_GT_PIPE;
	v->a[44486] = anon_sym_LT_GT;
	v->a[44487] = anon_sym_LT_LT;
	v->a[44488] = anon_sym_LT_LT_DASH;
	v->a[44489] = aux_sym_heredoc_redirect_token1;
	v->a[44490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44491] = anon_sym_DOLLAR;
	v->a[44492] = anon_sym_DQUOTE;
	v->a[44493] = sym_raw_string;
	v->a[44494] = sym_number;
	v->a[44495] = anon_sym_DOLLAR_LBRACE;
	v->a[44496] = anon_sym_DOLLAR_LPAREN;
	v->a[44497] = anon_sym_BQUOTE;
	v->a[44498] = sym_word;
	v->a[44499] = 6;
	small_parse_table_2225(v);
}

/* EOF small_parse_table_444.c */
