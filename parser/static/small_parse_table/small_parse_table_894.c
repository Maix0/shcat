/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_894.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4470(t_small_parse_table_array *v)
{
	v->a[89400] = 1;
	v->a[89401] = anon_sym_BQUOTE;
	v->a[89402] = actions(4608);
	v->a[89403] = 1;
	v->a[89404] = anon_sym_DOLLAR_BQUOTE;
	v->a[89405] = actions(4933);
	v->a[89406] = 1;
	v->a[89407] = aux_sym__simple_variable_name_token1;
	v->a[89408] = actions(4935);
	v->a[89409] = 1;
	v->a[89410] = sym_variable_name;
	v->a[89411] = state(1476);
	v->a[89412] = 1;
	v->a[89413] = sym__arithmetic_postfix_expression;
	v->a[89414] = state(1478);
	v->a[89415] = 1;
	v->a[89416] = sym__arithmetic_unary_expression;
	v->a[89417] = state(1490);
	v->a[89418] = 1;
	v->a[89419] = sym__arithmetic_ternary_expression;
	small_parse_table_4471(v);
}

void	small_parse_table_4471(t_small_parse_table_array *v)
{
	v->a[89420] = state(1511);
	v->a[89421] = 1;
	v->a[89422] = sym__arithmetic_binary_expression;
	v->a[89423] = actions(4588);
	v->a[89424] = 2;
	v->a[89425] = anon_sym_PLUS_PLUS;
	v->a[89426] = anon_sym_DASH_DASH;
	v->a[89427] = actions(4590);
	v->a[89428] = 2;
	v->a[89429] = anon_sym_DASH2;
	v->a[89430] = anon_sym_PLUS2;
	v->a[89431] = state(1431);
	v->a[89432] = 8;
	v->a[89433] = sym__arithmetic_expression;
	v->a[89434] = sym__arithmetic_literal;
	v->a[89435] = sym__arithmetic_parenthesized_expression;
	v->a[89436] = sym_string;
	v->a[89437] = sym_number;
	v->a[89438] = sym_simple_expansion;
	v->a[89439] = sym_expansion;
	small_parse_table_4472(v);
}

void	small_parse_table_4472(t_small_parse_table_array *v)
{
	v->a[89440] = sym_command_substitution;
	v->a[89441] = 21;
	v->a[89442] = actions(57);
	v->a[89443] = 1;
	v->a[89444] = sym_comment;
	v->a[89445] = actions(4584);
	v->a[89446] = 1;
	v->a[89447] = anon_sym_LPAREN;
	v->a[89448] = actions(4586);
	v->a[89449] = 1;
	v->a[89450] = anon_sym_BANG;
	v->a[89451] = actions(4592);
	v->a[89452] = 1;
	v->a[89453] = anon_sym_TILDE;
	v->a[89454] = actions(4594);
	v->a[89455] = 1;
	v->a[89456] = anon_sym_DOLLAR;
	v->a[89457] = actions(4596);
	v->a[89458] = 1;
	v->a[89459] = anon_sym_DQUOTE;
	small_parse_table_4473(v);
}

void	small_parse_table_4473(t_small_parse_table_array *v)
{
	v->a[89460] = actions(4598);
	v->a[89461] = 1;
	v->a[89462] = aux_sym_number_token1;
	v->a[89463] = actions(4600);
	v->a[89464] = 1;
	v->a[89465] = aux_sym_number_token2;
	v->a[89466] = actions(4602);
	v->a[89467] = 1;
	v->a[89468] = anon_sym_DOLLAR_LBRACE;
	v->a[89469] = actions(4604);
	v->a[89470] = 1;
	v->a[89471] = anon_sym_DOLLAR_LPAREN;
	v->a[89472] = actions(4606);
	v->a[89473] = 1;
	v->a[89474] = anon_sym_BQUOTE;
	v->a[89475] = actions(4608);
	v->a[89476] = 1;
	v->a[89477] = anon_sym_DOLLAR_BQUOTE;
	v->a[89478] = actions(4937);
	v->a[89479] = 1;
	small_parse_table_4474(v);
}

void	small_parse_table_4474(t_small_parse_table_array *v)
{
	v->a[89480] = aux_sym__simple_variable_name_token1;
	v->a[89481] = actions(4939);
	v->a[89482] = 1;
	v->a[89483] = sym_variable_name;
	v->a[89484] = state(1476);
	v->a[89485] = 1;
	v->a[89486] = sym__arithmetic_postfix_expression;
	v->a[89487] = state(1478);
	v->a[89488] = 1;
	v->a[89489] = sym__arithmetic_unary_expression;
	v->a[89490] = state(1490);
	v->a[89491] = 1;
	v->a[89492] = sym__arithmetic_ternary_expression;
	v->a[89493] = state(1511);
	v->a[89494] = 1;
	v->a[89495] = sym__arithmetic_binary_expression;
	v->a[89496] = actions(4588);
	v->a[89497] = 2;
	v->a[89498] = anon_sym_PLUS_PLUS;
	v->a[89499] = anon_sym_DASH_DASH;
	small_parse_table_4475(v);
}

/* EOF small_parse_table_894.c */
