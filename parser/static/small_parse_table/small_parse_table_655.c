/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_655.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3275(t_small_parse_table_array *v)
{
	v->a[65500] = actions(1094);
	v->a[65501] = 1;
	v->a[65502] = sym_comment;
	v->a[65503] = actions(2003);
	v->a[65504] = 1;
	v->a[65505] = anon_sym_LPAREN;
	v->a[65506] = actions(2005);
	v->a[65507] = 1;
	v->a[65508] = anon_sym_BANG;
	v->a[65509] = actions(2011);
	v->a[65510] = 1;
	v->a[65511] = anon_sym_TILDE;
	v->a[65512] = actions(2013);
	v->a[65513] = 1;
	v->a[65514] = anon_sym_DOLLAR;
	v->a[65515] = actions(2015);
	v->a[65516] = 1;
	v->a[65517] = anon_sym_DQUOTE;
	v->a[65518] = actions(2019);
	v->a[65519] = 1;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = anon_sym_DOLLAR_LBRACE;
	v->a[65521] = actions(2021);
	v->a[65522] = 1;
	v->a[65523] = anon_sym_DOLLAR_LPAREN;
	v->a[65524] = actions(2023);
	v->a[65525] = 1;
	v->a[65526] = anon_sym_BQUOTE;
	v->a[65527] = actions(2025);
	v->a[65528] = 1;
	v->a[65529] = sym_variable_name;
	v->a[65530] = actions(2007);
	v->a[65531] = 2;
	v->a[65532] = anon_sym_PLUS_PLUS;
	v->a[65533] = anon_sym_DASH_DASH;
	v->a[65534] = actions(2009);
	v->a[65535] = 2;
	v->a[65536] = anon_sym_DASH2;
	v->a[65537] = anon_sym_PLUS2;
	v->a[65538] = actions(2017);
	v->a[65539] = 2;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = sym_number;
	v->a[65541] = aux_sym__simple_variable_name_token1;
	v->a[65542] = state(503);
	v->a[65543] = 3;
	v->a[65544] = sym_string;
	v->a[65545] = sym_simple_expansion;
	v->a[65546] = sym_expansion;
	v->a[65547] = state(587);
	v->a[65548] = 8;
	v->a[65549] = sym__arithmetic_expression;
	v->a[65550] = sym_arithmetic_literal;
	v->a[65551] = sym_arithmetic_binary_expression;
	v->a[65552] = sym_arithmetic_ternary_expression;
	v->a[65553] = sym_arithmetic_unary_expression;
	v->a[65554] = sym_arithmetic_postfix_expression;
	v->a[65555] = sym_arithmetic_parenthesized_expression;
	v->a[65556] = sym_command_substitution;
	v->a[65557] = 15;
	v->a[65558] = actions(1094);
	v->a[65559] = 1;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = sym_comment;
	v->a[65561] = actions(2003);
	v->a[65562] = 1;
	v->a[65563] = anon_sym_LPAREN;
	v->a[65564] = actions(2005);
	v->a[65565] = 1;
	v->a[65566] = anon_sym_BANG;
	v->a[65567] = actions(2011);
	v->a[65568] = 1;
	v->a[65569] = anon_sym_TILDE;
	v->a[65570] = actions(2013);
	v->a[65571] = 1;
	v->a[65572] = anon_sym_DOLLAR;
	v->a[65573] = actions(2015);
	v->a[65574] = 1;
	v->a[65575] = anon_sym_DQUOTE;
	v->a[65576] = actions(2019);
	v->a[65577] = 1;
	v->a[65578] = anon_sym_DOLLAR_LBRACE;
	v->a[65579] = actions(2021);
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = 1;
	v->a[65581] = anon_sym_DOLLAR_LPAREN;
	v->a[65582] = actions(2023);
	v->a[65583] = 1;
	v->a[65584] = anon_sym_BQUOTE;
	v->a[65585] = actions(2025);
	v->a[65586] = 1;
	v->a[65587] = sym_variable_name;
	v->a[65588] = actions(2007);
	v->a[65589] = 2;
	v->a[65590] = anon_sym_PLUS_PLUS;
	v->a[65591] = anon_sym_DASH_DASH;
	v->a[65592] = actions(2009);
	v->a[65593] = 2;
	v->a[65594] = anon_sym_DASH2;
	v->a[65595] = anon_sym_PLUS2;
	v->a[65596] = actions(2017);
	v->a[65597] = 2;
	v->a[65598] = sym_number;
	v->a[65599] = aux_sym__simple_variable_name_token1;
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */
