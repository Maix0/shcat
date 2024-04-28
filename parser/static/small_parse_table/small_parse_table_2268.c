/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2268.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11340(t_small_parse_table_array *v)
{
	v->a[226800] = anon_sym_LPAREN;
	v->a[226801] = actions(9900);
	v->a[226802] = 1;
	v->a[226803] = anon_sym_BANG;
	v->a[226804] = actions(9906);
	v->a[226805] = 1;
	v->a[226806] = anon_sym_TILDE;
	v->a[226807] = actions(9908);
	v->a[226808] = 1;
	v->a[226809] = anon_sym_DOLLAR;
	v->a[226810] = actions(9910);
	v->a[226811] = 1;
	v->a[226812] = anon_sym_DQUOTE;
	v->a[226813] = actions(9912);
	v->a[226814] = 1;
	v->a[226815] = aux_sym_number_token1;
	v->a[226816] = actions(9914);
	v->a[226817] = 1;
	v->a[226818] = aux_sym_number_token2;
	v->a[226819] = actions(9916);
	small_parse_table_11341(v);
}

void	small_parse_table_11341(t_small_parse_table_array *v)
{
	v->a[226820] = 1;
	v->a[226821] = anon_sym_DOLLAR_LBRACE;
	v->a[226822] = actions(9918);
	v->a[226823] = 1;
	v->a[226824] = anon_sym_DOLLAR_LPAREN;
	v->a[226825] = actions(9920);
	v->a[226826] = 1;
	v->a[226827] = anon_sym_BQUOTE;
	v->a[226828] = actions(9922);
	v->a[226829] = 1;
	v->a[226830] = anon_sym_DOLLAR_BQUOTE;
	v->a[226831] = actions(10778);
	v->a[226832] = 1;
	v->a[226833] = aux_sym__simple_variable_name_token1;
	v->a[226834] = state(3359);
	v->a[226835] = 1;
	v->a[226836] = sym__arithmetic_postfix_expression;
	v->a[226837] = state(3361);
	v->a[226838] = 1;
	v->a[226839] = sym__arithmetic_unary_expression;
	small_parse_table_11342(v);
}

void	small_parse_table_11342(t_small_parse_table_array *v)
{
	v->a[226840] = state(3367);
	v->a[226841] = 1;
	v->a[226842] = sym__arithmetic_ternary_expression;
	v->a[226843] = state(3375);
	v->a[226844] = 1;
	v->a[226845] = sym__arithmetic_binary_expression;
	v->a[226846] = actions(9902);
	v->a[226847] = 2;
	v->a[226848] = anon_sym_PLUS_PLUS2;
	v->a[226849] = anon_sym_DASH_DASH2;
	v->a[226850] = actions(9904);
	v->a[226851] = 2;
	v->a[226852] = anon_sym_DASH2;
	v->a[226853] = anon_sym_PLUS2;
	v->a[226854] = state(3248);
	v->a[226855] = 9;
	v->a[226856] = sym_subscript;
	v->a[226857] = sym__arithmetic_expression;
	v->a[226858] = sym__arithmetic_literal;
	v->a[226859] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11343(v);
}

void	small_parse_table_11343(t_small_parse_table_array *v)
{
	v->a[226860] = sym_string;
	v->a[226861] = sym_number;
	v->a[226862] = sym_simple_expansion;
	v->a[226863] = sym_expansion;
	v->a[226864] = sym_command_substitution;
	v->a[226865] = 21;
	v->a[226866] = actions(71);
	v->a[226867] = 1;
	v->a[226868] = sym_comment;
	v->a[226869] = actions(3602);
	v->a[226870] = 1;
	v->a[226871] = sym_variable_name;
	v->a[226872] = actions(9898);
	v->a[226873] = 1;
	v->a[226874] = anon_sym_LPAREN;
	v->a[226875] = actions(9900);
	v->a[226876] = 1;
	v->a[226877] = anon_sym_BANG;
	v->a[226878] = actions(9906);
	v->a[226879] = 1;
	small_parse_table_11344(v);
}

void	small_parse_table_11344(t_small_parse_table_array *v)
{
	v->a[226880] = anon_sym_TILDE;
	v->a[226881] = actions(9908);
	v->a[226882] = 1;
	v->a[226883] = anon_sym_DOLLAR;
	v->a[226884] = actions(9910);
	v->a[226885] = 1;
	v->a[226886] = anon_sym_DQUOTE;
	v->a[226887] = actions(9912);
	v->a[226888] = 1;
	v->a[226889] = aux_sym_number_token1;
	v->a[226890] = actions(9914);
	v->a[226891] = 1;
	v->a[226892] = aux_sym_number_token2;
	v->a[226893] = actions(9916);
	v->a[226894] = 1;
	v->a[226895] = anon_sym_DOLLAR_LBRACE;
	v->a[226896] = actions(9918);
	v->a[226897] = 1;
	v->a[226898] = anon_sym_DOLLAR_LPAREN;
	v->a[226899] = actions(9920);
	small_parse_table_11345(v);
}

/* EOF small_parse_table_2268.c */
