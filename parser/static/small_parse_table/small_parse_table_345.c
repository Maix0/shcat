/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_345.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1725(t_small_parse_table_array *v)
{
	v->a[34500] = sym_word;
	v->a[34501] = 3;
	v->a[34502] = actions(3);
	v->a[34503] = 1;
	v->a[34504] = sym_comment;
	v->a[34505] = actions(1050);
	v->a[34506] = 2;
	v->a[34507] = sym__concat;
	v->a[34508] = sym_variable_name;
	v->a[34509] = actions(1052);
	v->a[34510] = 17;
	v->a[34511] = anon_sym_PIPE;
	v->a[34512] = anon_sym_AMP_AMP;
	v->a[34513] = anon_sym_PIPE_PIPE;
	v->a[34514] = anon_sym_LT;
	v->a[34515] = anon_sym_GT;
	v->a[34516] = anon_sym_GT_GT;
	v->a[34517] = anon_sym_LT_LT;
	v->a[34518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34519] = aux_sym_concatenation_token1;
	small_parse_table_1726(v);
}

void	small_parse_table_1726(t_small_parse_table_array *v)
{
	v->a[34520] = anon_sym_DOLLAR;
	v->a[34521] = anon_sym_DQUOTE;
	v->a[34522] = sym_raw_string;
	v->a[34523] = sym_number;
	v->a[34524] = anon_sym_DOLLAR_LBRACE;
	v->a[34525] = anon_sym_DOLLAR_LPAREN;
	v->a[34526] = anon_sym_BQUOTE;
	v->a[34527] = sym_word;
	v->a[34528] = 3;
	v->a[34529] = actions(3);
	v->a[34530] = 1;
	v->a[34531] = sym_comment;
	v->a[34532] = actions(1126);
	v->a[34533] = 2;
	v->a[34534] = sym__concat;
	v->a[34535] = sym__bare_dollar;
	v->a[34536] = actions(1124);
	v->a[34537] = 17;
	v->a[34538] = anon_sym_PIPE;
	v->a[34539] = anon_sym_AMP_AMP;
	small_parse_table_1727(v);
}

void	small_parse_table_1727(t_small_parse_table_array *v)
{
	v->a[34540] = anon_sym_PIPE_PIPE;
	v->a[34541] = anon_sym_LT;
	v->a[34542] = anon_sym_GT;
	v->a[34543] = anon_sym_GT_GT;
	v->a[34544] = anon_sym_LT_LT;
	v->a[34545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34546] = aux_sym_concatenation_token1;
	v->a[34547] = anon_sym_DOLLAR;
	v->a[34548] = anon_sym_DQUOTE;
	v->a[34549] = sym_raw_string;
	v->a[34550] = sym_number;
	v->a[34551] = anon_sym_DOLLAR_LBRACE;
	v->a[34552] = anon_sym_DOLLAR_LPAREN;
	v->a[34553] = anon_sym_BQUOTE;
	v->a[34554] = sym_word;
	v->a[34555] = 10;
	v->a[34556] = actions(1424);
	v->a[34557] = 1;
	v->a[34558] = anon_sym_LPAREN;
	v->a[34559] = actions(1428);
	small_parse_table_1728(v);
}

void	small_parse_table_1728(t_small_parse_table_array *v)
{
	v->a[34560] = 1;
	v->a[34561] = anon_sym_DOLLAR;
	v->a[34562] = actions(1430);
	v->a[34563] = 1;
	v->a[34564] = anon_sym_DQUOTE;
	v->a[34565] = actions(1434);
	v->a[34566] = 1;
	v->a[34567] = anon_sym_DOLLAR_LBRACE;
	v->a[34568] = actions(1436);
	v->a[34569] = 1;
	v->a[34570] = sym_comment;
	v->a[34571] = actions(1438);
	v->a[34572] = 1;
	v->a[34573] = sym_variable_name;
	v->a[34574] = actions(1426);
	v->a[34575] = 2;
	v->a[34576] = anon_sym_DASH2;
	v->a[34577] = anon_sym_PLUS2;
	v->a[34578] = actions(1432);
	v->a[34579] = 2;
	small_parse_table_1729(v);
}

void	small_parse_table_1729(t_small_parse_table_array *v)
{
	v->a[34580] = sym_number;
	v->a[34581] = aux_sym__simple_variable_name_token1;
	v->a[34582] = state(1312);
	v->a[34583] = 3;
	v->a[34584] = sym_string;
	v->a[34585] = sym_simple_expansion;
	v->a[34586] = sym_expansion;
	v->a[34587] = state(1323);
	v->a[34588] = 7;
	v->a[34589] = sym__arithmetic_expression;
	v->a[34590] = sym_arithmetic_literal;
	v->a[34591] = sym_arithmetic_binary_expression;
	v->a[34592] = sym_arithmetic_ternary_expression;
	v->a[34593] = sym_arithmetic_unary_expression;
	v->a[34594] = sym_arithmetic_postfix_expression;
	v->a[34595] = sym_arithmetic_parenthesized_expression;
	v->a[34596] = 10;
	v->a[34597] = actions(1424);
	v->a[34598] = 1;
	v->a[34599] = anon_sym_LPAREN;
	small_parse_table_1730(v);
}

/* EOF small_parse_table_345.c */
