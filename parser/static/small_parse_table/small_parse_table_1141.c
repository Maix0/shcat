/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1141.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5705(t_small_parse_table_array *v)
{
	v->a[114100] = 9;
	v->a[114101] = sym_arithmetic_expansion;
	v->a[114102] = sym_brace_expression;
	v->a[114103] = sym_string;
	v->a[114104] = sym_translated_string;
	v->a[114105] = sym_number;
	v->a[114106] = sym_simple_expansion;
	v->a[114107] = sym_expansion;
	v->a[114108] = sym_command_substitution;
	v->a[114109] = sym_process_substitution;
	v->a[114110] = 26;
	v->a[114111] = actions(71);
	v->a[114112] = 1;
	v->a[114113] = sym_comment;
	v->a[114114] = actions(107);
	v->a[114115] = 1;
	v->a[114116] = anon_sym_TILDE;
	v->a[114117] = actions(237);
	v->a[114118] = 1;
	v->a[114119] = sym_word;
	small_parse_table_5706(v);
}

void	small_parse_table_5706(t_small_parse_table_array *v)
{
	v->a[114120] = actions(248);
	v->a[114121] = 1;
	v->a[114122] = anon_sym_LPAREN;
	v->a[114123] = actions(250);
	v->a[114124] = 1;
	v->a[114125] = anon_sym_BANG;
	v->a[114126] = actions(258);
	v->a[114127] = 1;
	v->a[114128] = anon_sym_DOLLAR;
	v->a[114129] = actions(264);
	v->a[114130] = 1;
	v->a[114131] = aux_sym_number_token1;
	v->a[114132] = actions(266);
	v->a[114133] = 1;
	v->a[114134] = aux_sym_number_token2;
	v->a[114135] = actions(270);
	v->a[114136] = 1;
	v->a[114137] = anon_sym_DOLLAR_LPAREN;
	v->a[114138] = actions(282);
	v->a[114139] = 1;
	small_parse_table_5707(v);
}

void	small_parse_table_5707(t_small_parse_table_array *v)
{
	v->a[114140] = sym_test_operator;
	v->a[114141] = actions(284);
	v->a[114142] = 1;
	v->a[114143] = sym__brace_start;
	v->a[114144] = actions(1075);
	v->a[114145] = 1;
	v->a[114146] = anon_sym_DOLLAR_LBRACK;
	v->a[114147] = actions(1079);
	v->a[114148] = 1;
	v->a[114149] = sym__special_character;
	v->a[114150] = actions(1081);
	v->a[114151] = 1;
	v->a[114152] = anon_sym_DQUOTE;
	v->a[114153] = actions(1085);
	v->a[114154] = 1;
	v->a[114155] = anon_sym_DOLLAR_LBRACE;
	v->a[114156] = actions(1087);
	v->a[114157] = 1;
	v->a[114158] = anon_sym_DOLLAR_BQUOTE;
	v->a[114159] = actions(3598);
	small_parse_table_5708(v);
}

void	small_parse_table_5708(t_small_parse_table_array *v)
{
	v->a[114160] = 1;
	v->a[114161] = anon_sym_BQUOTE;
	v->a[114162] = state(2690);
	v->a[114163] = 1;
	v->a[114164] = aux_sym__literal_repeat1;
	v->a[114165] = state(3088);
	v->a[114166] = 1;
	v->a[114167] = sym__expression;
	v->a[114168] = actions(103);
	v->a[114169] = 2;
	v->a[114170] = anon_sym_PLUS_PLUS2;
	v->a[114171] = anon_sym_DASH_DASH2;
	v->a[114172] = actions(105);
	v->a[114173] = 2;
	v->a[114174] = anon_sym_DASH2;
	v->a[114175] = anon_sym_PLUS2;
	v->a[114176] = actions(1073);
	v->a[114177] = 2;
	v->a[114178] = anon_sym_LPAREN_LPAREN;
	v->a[114179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5709(v);
}

void	small_parse_table_5709(t_small_parse_table_array *v)
{
	v->a[114180] = actions(1083);
	v->a[114181] = 2;
	v->a[114182] = sym_raw_string;
	v->a[114183] = sym_ansi_c_string;
	v->a[114184] = actions(1089);
	v->a[114185] = 2;
	v->a[114186] = anon_sym_LT_LPAREN;
	v->a[114187] = anon_sym_GT_LPAREN;
	v->a[114188] = state(3053);
	v->a[114189] = 6;
	v->a[114190] = sym_binary_expression;
	v->a[114191] = sym_ternary_expression;
	v->a[114192] = sym_unary_expression;
	v->a[114193] = sym_postfix_expression;
	v->a[114194] = sym_parenthesized_expression;
	v->a[114195] = sym_concatenation;
	v->a[114196] = state(2500);
	v->a[114197] = 9;
	v->a[114198] = sym_arithmetic_expansion;
	v->a[114199] = sym_brace_expression;
	small_parse_table_5710(v);
}

/* EOF small_parse_table_1141.c */
