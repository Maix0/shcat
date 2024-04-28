/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2201.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11005(t_small_parse_table_array *v)
{
	v->a[220100] = actions(9368);
	v->a[220101] = 2;
	v->a[220102] = anon_sym_PLUS_PLUS2;
	v->a[220103] = anon_sym_DASH_DASH2;
	v->a[220104] = actions(9370);
	v->a[220105] = 2;
	v->a[220106] = anon_sym_DASH2;
	v->a[220107] = anon_sym_PLUS2;
	v->a[220108] = state(3317);
	v->a[220109] = 9;
	v->a[220110] = sym_subscript;
	v->a[220111] = sym__arithmetic_expression;
	v->a[220112] = sym__arithmetic_literal;
	v->a[220113] = sym__arithmetic_parenthesized_expression;
	v->a[220114] = sym_string;
	v->a[220115] = sym_number;
	v->a[220116] = sym_simple_expansion;
	v->a[220117] = sym_expansion;
	v->a[220118] = sym_command_substitution;
	v->a[220119] = 21;
	small_parse_table_11006(v);
}

void	small_parse_table_11006(t_small_parse_table_array *v)
{
	v->a[220120] = actions(71);
	v->a[220121] = 1;
	v->a[220122] = sym_comment;
	v->a[220123] = actions(3064);
	v->a[220124] = 1;
	v->a[220125] = sym_variable_name;
	v->a[220126] = actions(9278);
	v->a[220127] = 1;
	v->a[220128] = anon_sym_LPAREN;
	v->a[220129] = actions(9280);
	v->a[220130] = 1;
	v->a[220131] = anon_sym_BANG;
	v->a[220132] = actions(9286);
	v->a[220133] = 1;
	v->a[220134] = anon_sym_TILDE;
	v->a[220135] = actions(9288);
	v->a[220136] = 1;
	v->a[220137] = anon_sym_DOLLAR;
	v->a[220138] = actions(9290);
	v->a[220139] = 1;
	small_parse_table_11007(v);
}

void	small_parse_table_11007(t_small_parse_table_array *v)
{
	v->a[220140] = anon_sym_DQUOTE;
	v->a[220141] = actions(9292);
	v->a[220142] = 1;
	v->a[220143] = aux_sym_number_token1;
	v->a[220144] = actions(9294);
	v->a[220145] = 1;
	v->a[220146] = aux_sym_number_token2;
	v->a[220147] = actions(9296);
	v->a[220148] = 1;
	v->a[220149] = anon_sym_DOLLAR_LBRACE;
	v->a[220150] = actions(9298);
	v->a[220151] = 1;
	v->a[220152] = anon_sym_DOLLAR_LPAREN;
	v->a[220153] = actions(9300);
	v->a[220154] = 1;
	v->a[220155] = anon_sym_BQUOTE;
	v->a[220156] = actions(9302);
	v->a[220157] = 1;
	v->a[220158] = anon_sym_DOLLAR_BQUOTE;
	v->a[220159] = actions(10498);
	small_parse_table_11008(v);
}

void	small_parse_table_11008(t_small_parse_table_array *v)
{
	v->a[220160] = 1;
	v->a[220161] = aux_sym__simple_variable_name_token1;
	v->a[220162] = state(2801);
	v->a[220163] = 1;
	v->a[220164] = sym__arithmetic_binary_expression;
	v->a[220165] = state(2803);
	v->a[220166] = 1;
	v->a[220167] = sym__arithmetic_ternary_expression;
	v->a[220168] = state(2809);
	v->a[220169] = 1;
	v->a[220170] = sym__arithmetic_unary_expression;
	v->a[220171] = state(2825);
	v->a[220172] = 1;
	v->a[220173] = sym__arithmetic_postfix_expression;
	v->a[220174] = actions(9282);
	v->a[220175] = 2;
	v->a[220176] = anon_sym_PLUS_PLUS2;
	v->a[220177] = anon_sym_DASH_DASH2;
	v->a[220178] = actions(9284);
	v->a[220179] = 2;
	small_parse_table_11009(v);
}

void	small_parse_table_11009(t_small_parse_table_array *v)
{
	v->a[220180] = anon_sym_DASH2;
	v->a[220181] = anon_sym_PLUS2;
	v->a[220182] = state(2763);
	v->a[220183] = 9;
	v->a[220184] = sym_subscript;
	v->a[220185] = sym__arithmetic_expression;
	v->a[220186] = sym__arithmetic_literal;
	v->a[220187] = sym__arithmetic_parenthesized_expression;
	v->a[220188] = sym_string;
	v->a[220189] = sym_number;
	v->a[220190] = sym_simple_expansion;
	v->a[220191] = sym_expansion;
	v->a[220192] = sym_command_substitution;
	v->a[220193] = 18;
	v->a[220194] = actions(3);
	v->a[220195] = 1;
	v->a[220196] = sym_comment;
	v->a[220197] = actions(2786);
	v->a[220198] = 1;
	v->a[220199] = anon_sym_DOLLAR;
	small_parse_table_11010(v);
}

/* EOF small_parse_table_2201.c */
