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
	v->a[44400] = actions(1556);
	v->a[44401] = 1;
	v->a[44402] = sym_variable_name;
	v->a[44403] = actions(1544);
	v->a[44404] = 2;
	v->a[44405] = anon_sym_PLUS_PLUS;
	v->a[44406] = anon_sym_DASH_DASH;
	v->a[44407] = actions(1546);
	v->a[44408] = 2;
	v->a[44409] = anon_sym_DASH2;
	v->a[44410] = anon_sym_PLUS2;
	v->a[44411] = actions(1552);
	v->a[44412] = 2;
	v->a[44413] = sym_number;
	v->a[44414] = aux_sym__simple_variable_name_token1;
	v->a[44415] = state(157);
	v->a[44416] = 3;
	v->a[44417] = sym_string;
	v->a[44418] = sym_simple_expansion;
	v->a[44419] = sym_expansion;
	small_parse_table_2221(v);
}

void	small_parse_table_2221(t_small_parse_table_array *v)
{
	v->a[44420] = state(234);
	v->a[44421] = 7;
	v->a[44422] = sym__arithmetic_expression;
	v->a[44423] = sym_arithmetic_literal;
	v->a[44424] = sym_arithmetic_binary_expression;
	v->a[44425] = sym_arithmetic_ternary_expression;
	v->a[44426] = sym_arithmetic_unary_expression;
	v->a[44427] = sym_arithmetic_postfix_expression;
	v->a[44428] = sym_arithmetic_parenthesized_expression;
	v->a[44429] = 15;
	v->a[44430] = actions(3);
	v->a[44431] = 1;
	v->a[44432] = sym_comment;
	v->a[44433] = actions(1337);
	v->a[44434] = 1;
	v->a[44435] = anon_sym_LPAREN;
	v->a[44436] = actions(1341);
	v->a[44437] = 1;
	v->a[44438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44439] = actions(1343);
	small_parse_table_2222(v);
}

void	small_parse_table_2222(t_small_parse_table_array *v)
{
	v->a[44440] = 1;
	v->a[44441] = anon_sym_DOLLAR;
	v->a[44442] = actions(1345);
	v->a[44443] = 1;
	v->a[44444] = anon_sym_DQUOTE;
	v->a[44445] = actions(1347);
	v->a[44446] = 1;
	v->a[44447] = anon_sym_DOLLAR_LBRACE;
	v->a[44448] = actions(1349);
	v->a[44449] = 1;
	v->a[44450] = anon_sym_DOLLAR_LPAREN;
	v->a[44451] = actions(1351);
	v->a[44452] = 1;
	v->a[44453] = anon_sym_BQUOTE;
	v->a[44454] = actions(1353);
	v->a[44455] = 1;
	v->a[44456] = sym_extglob_pattern;
	v->a[44457] = state(839);
	v->a[44458] = 1;
	v->a[44459] = aux_sym_case_statement_repeat1;
	small_parse_table_2223(v);
}

void	small_parse_table_2223(t_small_parse_table_array *v)
{
	v->a[44460] = state(1432);
	v->a[44461] = 1;
	v->a[44462] = sym_case_item;
	v->a[44463] = state(1663);
	v->a[44464] = 1;
	v->a[44465] = sym__case_item_last;
	v->a[44466] = state(1594);
	v->a[44467] = 2;
	v->a[44468] = sym_concatenation;
	v->a[44469] = sym__extglob_blob;
	v->a[44470] = actions(1333);
	v->a[44471] = 3;
	v->a[44472] = sym_raw_string;
	v->a[44473] = sym_number;
	v->a[44474] = sym_word;
	v->a[44475] = state(1520);
	v->a[44476] = 5;
	v->a[44477] = sym_arithmetic_expansion;
	v->a[44478] = sym_string;
	v->a[44479] = sym_simple_expansion;
	small_parse_table_2224(v);
}

void	small_parse_table_2224(t_small_parse_table_array *v)
{
	v->a[44480] = sym_expansion;
	v->a[44481] = sym_command_substitution;
	v->a[44482] = 3;
	v->a[44483] = actions(3);
	v->a[44484] = 1;
	v->a[44485] = sym_comment;
	v->a[44486] = actions(441);
	v->a[44487] = 4;
	v->a[44488] = sym__concat;
	v->a[44489] = sym_variable_name;
	v->a[44490] = ts_builtin_sym_end;
	v->a[44491] = aux_sym_heredoc_redirect_token1;
	v->a[44492] = actions(439);
	v->a[44493] = 17;
	v->a[44494] = anon_sym_PIPE;
	v->a[44495] = anon_sym_RPAREN;
	v->a[44496] = anon_sym_SEMI_SEMI;
	v->a[44497] = anon_sym_AMP_AMP;
	v->a[44498] = anon_sym_PIPE_PIPE;
	v->a[44499] = anon_sym_LT;
	small_parse_table_2225(v);
}

/* EOF small_parse_table_444.c */
