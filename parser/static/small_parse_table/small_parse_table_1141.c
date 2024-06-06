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
	v->a[114100] = actions(6605);
	v->a[114101] = 1;
	v->a[114102] = sym_word;
	v->a[114103] = actions(6607);
	v->a[114104] = 1;
	v->a[114105] = anon_sym_DOLLAR;
	v->a[114106] = actions(6609);
	v->a[114107] = 1;
	v->a[114108] = sym__special_character;
	v->a[114109] = actions(6613);
	v->a[114110] = 1;
	v->a[114111] = sym__comment_word;
	v->a[114112] = actions(6611);
	v->a[114113] = 3;
	v->a[114114] = sym_test_operator;
	v->a[114115] = sym__bare_dollar;
	v->a[114116] = sym_raw_string;
	v->a[114117] = state(796);
	v->a[114118] = 7;
	v->a[114119] = sym_arithmetic_expansion;
	small_parse_table_5706(v);
}

void	small_parse_table_5706(t_small_parse_table_array *v)
{
	v->a[114120] = sym_brace_expression;
	v->a[114121] = sym_string;
	v->a[114122] = sym_number;
	v->a[114123] = sym_simple_expansion;
	v->a[114124] = sym_expansion;
	v->a[114125] = sym_command_substitution;
	v->a[114126] = 16;
	v->a[114127] = actions(3);
	v->a[114128] = 1;
	v->a[114129] = sym_comment;
	v->a[114130] = actions(1979);
	v->a[114131] = 1;
	v->a[114132] = aux_sym_number_token1;
	v->a[114133] = actions(1981);
	v->a[114134] = 1;
	v->a[114135] = aux_sym_number_token2;
	v->a[114136] = actions(1985);
	v->a[114137] = 1;
	v->a[114138] = anon_sym_DOLLAR_LPAREN;
	v->a[114139] = actions(1993);
	small_parse_table_5707(v);
}

void	small_parse_table_5707(t_small_parse_table_array *v)
{
	v->a[114140] = 1;
	v->a[114141] = sym__brace_start;
	v->a[114142] = actions(6246);
	v->a[114143] = 1;
	v->a[114144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114145] = actions(6250);
	v->a[114146] = 1;
	v->a[114147] = anon_sym_DQUOTE;
	v->a[114148] = actions(6252);
	v->a[114149] = 1;
	v->a[114150] = anon_sym_DOLLAR_LBRACE;
	v->a[114151] = actions(6254);
	v->a[114152] = 1;
	v->a[114153] = anon_sym_BQUOTE;
	v->a[114154] = actions(6256);
	v->a[114155] = 1;
	v->a[114156] = anon_sym_DOLLAR_BQUOTE;
	v->a[114157] = actions(6615);
	v->a[114158] = 1;
	v->a[114159] = sym_word;
	small_parse_table_5708(v);
}

void	small_parse_table_5708(t_small_parse_table_array *v)
{
	v->a[114160] = actions(6617);
	v->a[114161] = 1;
	v->a[114162] = anon_sym_DOLLAR;
	v->a[114163] = actions(6619);
	v->a[114164] = 1;
	v->a[114165] = sym__special_character;
	v->a[114166] = actions(6623);
	v->a[114167] = 1;
	v->a[114168] = sym__comment_word;
	v->a[114169] = actions(6621);
	v->a[114170] = 3;
	v->a[114171] = sym_test_operator;
	v->a[114172] = sym__bare_dollar;
	v->a[114173] = sym_raw_string;
	v->a[114174] = state(981);
	v->a[114175] = 7;
	v->a[114176] = sym_arithmetic_expansion;
	v->a[114177] = sym_brace_expression;
	v->a[114178] = sym_string;
	v->a[114179] = sym_number;
	small_parse_table_5709(v);
}

void	small_parse_table_5709(t_small_parse_table_array *v)
{
	v->a[114180] = sym_simple_expansion;
	v->a[114181] = sym_expansion;
	v->a[114182] = sym_command_substitution;
	v->a[114183] = 16;
	v->a[114184] = actions(3);
	v->a[114185] = 1;
	v->a[114186] = sym_comment;
	v->a[114187] = actions(5407);
	v->a[114188] = 1;
	v->a[114189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114190] = actions(5409);
	v->a[114191] = 1;
	v->a[114192] = anon_sym_DOLLAR;
	v->a[114193] = actions(5413);
	v->a[114194] = 1;
	v->a[114195] = anon_sym_DQUOTE;
	v->a[114196] = actions(5417);
	v->a[114197] = 1;
	v->a[114198] = aux_sym_number_token1;
	v->a[114199] = actions(5419);
	small_parse_table_5710(v);
}

/* EOF small_parse_table_1141.c */
