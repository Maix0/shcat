/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_671.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3355(t_small_parse_table_array *v)
{
	v->a[67100] = anon_sym_AMP_EQ;
	v->a[67101] = anon_sym_CARET_EQ;
	v->a[67102] = anon_sym_PIPE_EQ;
	v->a[67103] = 3;
	v->a[67104] = actions(57);
	v->a[67105] = 1;
	v->a[67106] = sym_comment;
	v->a[67107] = actions(2772);
	v->a[67108] = 14;
	v->a[67109] = anon_sym_PIPE;
	v->a[67110] = anon_sym_LT;
	v->a[67111] = anon_sym_GT;
	v->a[67112] = anon_sym_AMP_GT;
	v->a[67113] = anon_sym_LT_AMP;
	v->a[67114] = anon_sym_GT_AMP;
	v->a[67115] = anon_sym_LT_LT;
	v->a[67116] = anon_sym_DOLLAR;
	v->a[67117] = aux_sym_number_token1;
	v->a[67118] = aux_sym_number_token2;
	v->a[67119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3356(v);
}

void	small_parse_table_3356(t_small_parse_table_array *v)
{
	v->a[67120] = anon_sym_BQUOTE;
	v->a[67121] = aux_sym__simple_variable_name_token1;
	v->a[67122] = sym_word;
	v->a[67123] = actions(2774);
	v->a[67124] = 21;
	v->a[67125] = sym_file_descriptor;
	v->a[67126] = sym__concat;
	v->a[67127] = sym_variable_name;
	v->a[67128] = sym_test_operator;
	v->a[67129] = sym__brace_start;
	v->a[67130] = anon_sym_PIPE_AMP;
	v->a[67131] = anon_sym_AMP_AMP;
	v->a[67132] = anon_sym_PIPE_PIPE;
	v->a[67133] = anon_sym_GT_GT;
	v->a[67134] = anon_sym_AMP_GT_GT;
	v->a[67135] = anon_sym_GT_PIPE;
	v->a[67136] = anon_sym_LT_AMP_DASH;
	v->a[67137] = anon_sym_GT_AMP_DASH;
	v->a[67138] = anon_sym_LT_LT_DASH;
	v->a[67139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3357(v);
}

void	small_parse_table_3357(t_small_parse_table_array *v)
{
	v->a[67140] = aux_sym_concatenation_token1;
	v->a[67141] = sym__special_character;
	v->a[67142] = anon_sym_DQUOTE;
	v->a[67143] = sym_raw_string;
	v->a[67144] = anon_sym_DOLLAR_LBRACE;
	v->a[67145] = anon_sym_DOLLAR_BQUOTE;
	v->a[67146] = 19;
	v->a[67147] = actions(57);
	v->a[67148] = 1;
	v->a[67149] = sym_comment;
	v->a[67150] = actions(4120);
	v->a[67151] = 1;
	v->a[67152] = anon_sym_PIPE;
	v->a[67153] = actions(4122);
	v->a[67154] = 1;
	v->a[67155] = anon_sym_AMP_AMP;
	v->a[67156] = actions(4124);
	v->a[67157] = 1;
	v->a[67158] = anon_sym_PIPE_PIPE;
	v->a[67159] = actions(4126);
	small_parse_table_3358(v);
}

void	small_parse_table_3358(t_small_parse_table_array *v)
{
	v->a[67160] = 1;
	v->a[67161] = anon_sym_EQ;
	v->a[67162] = actions(4132);
	v->a[67163] = 1;
	v->a[67164] = anon_sym_COMMA;
	v->a[67165] = actions(4138);
	v->a[67166] = 1;
	v->a[67167] = anon_sym_CARET;
	v->a[67168] = actions(4140);
	v->a[67169] = 1;
	v->a[67170] = anon_sym_AMP;
	v->a[67171] = actions(4150);
	v->a[67172] = 1;
	v->a[67173] = anon_sym_QMARK;
	v->a[67174] = actions(4231);
	v->a[67175] = 1;
	v->a[67176] = anon_sym_RPAREN_RPAREN;
	v->a[67177] = state(3548);
	v->a[67178] = 1;
	v->a[67179] = aux_sym_arithmetic_expansion_repeat1;
	small_parse_table_3359(v);
}

void	small_parse_table_3359(t_small_parse_table_array *v)
{
	v->a[67180] = actions(4128);
	v->a[67181] = 2;
	v->a[67182] = anon_sym_LT;
	v->a[67183] = anon_sym_GT;
	v->a[67184] = actions(4130);
	v->a[67185] = 2;
	v->a[67186] = anon_sym_GT_GT;
	v->a[67187] = anon_sym_LT_LT;
	v->a[67188] = actions(4142);
	v->a[67189] = 2;
	v->a[67190] = anon_sym_EQ_EQ;
	v->a[67191] = anon_sym_BANG_EQ;
	v->a[67192] = actions(4144);
	v->a[67193] = 2;
	v->a[67194] = anon_sym_LT_EQ;
	v->a[67195] = anon_sym_GT_EQ;
	v->a[67196] = actions(4146);
	v->a[67197] = 2;
	v->a[67198] = anon_sym_PLUS;
	v->a[67199] = anon_sym_DASH;
	small_parse_table_3360(v);
}

/* EOF small_parse_table_671.c */
