/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2371.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11855(t_small_parse_table_array *v)
{
	v->a[237100] = actions(71);
	v->a[237101] = 1;
	v->a[237102] = sym_comment;
	v->a[237103] = actions(3064);
	v->a[237104] = 1;
	v->a[237105] = sym_variable_name;
	v->a[237106] = actions(9278);
	v->a[237107] = 1;
	v->a[237108] = anon_sym_LPAREN;
	v->a[237109] = actions(9280);
	v->a[237110] = 1;
	v->a[237111] = anon_sym_BANG;
	v->a[237112] = actions(9286);
	v->a[237113] = 1;
	v->a[237114] = anon_sym_TILDE;
	v->a[237115] = actions(9288);
	v->a[237116] = 1;
	v->a[237117] = anon_sym_DOLLAR;
	v->a[237118] = actions(9290);
	v->a[237119] = 1;
	small_parse_table_11856(v);
}

void	small_parse_table_11856(t_small_parse_table_array *v)
{
	v->a[237120] = anon_sym_DQUOTE;
	v->a[237121] = actions(9292);
	v->a[237122] = 1;
	v->a[237123] = aux_sym_number_token1;
	v->a[237124] = actions(9294);
	v->a[237125] = 1;
	v->a[237126] = aux_sym_number_token2;
	v->a[237127] = actions(9296);
	v->a[237128] = 1;
	v->a[237129] = anon_sym_DOLLAR_LBRACE;
	v->a[237130] = actions(9298);
	v->a[237131] = 1;
	v->a[237132] = anon_sym_DOLLAR_LPAREN;
	v->a[237133] = actions(9300);
	v->a[237134] = 1;
	v->a[237135] = anon_sym_BQUOTE;
	v->a[237136] = actions(9302);
	v->a[237137] = 1;
	v->a[237138] = anon_sym_DOLLAR_BQUOTE;
	v->a[237139] = actions(11164);
	small_parse_table_11857(v);
}

void	small_parse_table_11857(t_small_parse_table_array *v)
{
	v->a[237140] = 1;
	v->a[237141] = aux_sym__simple_variable_name_token1;
	v->a[237142] = state(2801);
	v->a[237143] = 1;
	v->a[237144] = sym__arithmetic_binary_expression;
	v->a[237145] = state(2803);
	v->a[237146] = 1;
	v->a[237147] = sym__arithmetic_ternary_expression;
	v->a[237148] = state(2809);
	v->a[237149] = 1;
	v->a[237150] = sym__arithmetic_unary_expression;
	v->a[237151] = state(2825);
	v->a[237152] = 1;
	v->a[237153] = sym__arithmetic_postfix_expression;
	v->a[237154] = actions(9282);
	v->a[237155] = 2;
	v->a[237156] = anon_sym_PLUS_PLUS2;
	v->a[237157] = anon_sym_DASH_DASH2;
	v->a[237158] = actions(9284);
	v->a[237159] = 2;
	small_parse_table_11858(v);
}

void	small_parse_table_11858(t_small_parse_table_array *v)
{
	v->a[237160] = anon_sym_DASH2;
	v->a[237161] = anon_sym_PLUS2;
	v->a[237162] = state(2785);
	v->a[237163] = 9;
	v->a[237164] = sym_subscript;
	v->a[237165] = sym__arithmetic_expression;
	v->a[237166] = sym__arithmetic_literal;
	v->a[237167] = sym__arithmetic_parenthesized_expression;
	v->a[237168] = sym_string;
	v->a[237169] = sym_number;
	v->a[237170] = sym_simple_expansion;
	v->a[237171] = sym_expansion;
	v->a[237172] = sym_command_substitution;
	v->a[237173] = 21;
	v->a[237174] = actions(71);
	v->a[237175] = 1;
	v->a[237176] = sym_comment;
	v->a[237177] = actions(9364);
	v->a[237178] = 1;
	v->a[237179] = anon_sym_LPAREN;
	small_parse_table_11859(v);
}

void	small_parse_table_11859(t_small_parse_table_array *v)
{
	v->a[237180] = actions(9366);
	v->a[237181] = 1;
	v->a[237182] = anon_sym_BANG;
	v->a[237183] = actions(9372);
	v->a[237184] = 1;
	v->a[237185] = anon_sym_TILDE;
	v->a[237186] = actions(9374);
	v->a[237187] = 1;
	v->a[237188] = anon_sym_DOLLAR;
	v->a[237189] = actions(9376);
	v->a[237190] = 1;
	v->a[237191] = anon_sym_DQUOTE;
	v->a[237192] = actions(9378);
	v->a[237193] = 1;
	v->a[237194] = aux_sym_number_token1;
	v->a[237195] = actions(9380);
	v->a[237196] = 1;
	v->a[237197] = aux_sym_number_token2;
	v->a[237198] = actions(9382);
	v->a[237199] = 1;
	small_parse_table_11860(v);
}

/* EOF small_parse_table_2371.c */
