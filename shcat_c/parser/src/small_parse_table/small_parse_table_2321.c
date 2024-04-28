/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2321.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11605(t_small_parse_table_array *v)
{
	v->a[232100] = sym_string;
	v->a[232101] = sym_translated_string;
	v->a[232102] = sym_number;
	v->a[232103] = sym_simple_expansion;
	v->a[232104] = sym_expansion;
	v->a[232105] = sym_command_substitution;
	v->a[232106] = sym_process_substitution;
	v->a[232107] = 21;
	v->a[232108] = actions(71);
	v->a[232109] = 1;
	v->a[232110] = sym_comment;
	v->a[232111] = actions(3064);
	v->a[232112] = 1;
	v->a[232113] = sym_variable_name;
	v->a[232114] = actions(9278);
	v->a[232115] = 1;
	v->a[232116] = anon_sym_LPAREN;
	v->a[232117] = actions(9280);
	v->a[232118] = 1;
	v->a[232119] = anon_sym_BANG;
	small_parse_table_11606(v);
}

void	small_parse_table_11606(t_small_parse_table_array *v)
{
	v->a[232120] = actions(9286);
	v->a[232121] = 1;
	v->a[232122] = anon_sym_TILDE;
	v->a[232123] = actions(9288);
	v->a[232124] = 1;
	v->a[232125] = anon_sym_DOLLAR;
	v->a[232126] = actions(9290);
	v->a[232127] = 1;
	v->a[232128] = anon_sym_DQUOTE;
	v->a[232129] = actions(9292);
	v->a[232130] = 1;
	v->a[232131] = aux_sym_number_token1;
	v->a[232132] = actions(9294);
	v->a[232133] = 1;
	v->a[232134] = aux_sym_number_token2;
	v->a[232135] = actions(9296);
	v->a[232136] = 1;
	v->a[232137] = anon_sym_DOLLAR_LBRACE;
	v->a[232138] = actions(9298);
	v->a[232139] = 1;
	small_parse_table_11607(v);
}

void	small_parse_table_11607(t_small_parse_table_array *v)
{
	v->a[232140] = anon_sym_DOLLAR_LPAREN;
	v->a[232141] = actions(9300);
	v->a[232142] = 1;
	v->a[232143] = anon_sym_BQUOTE;
	v->a[232144] = actions(9302);
	v->a[232145] = 1;
	v->a[232146] = anon_sym_DOLLAR_BQUOTE;
	v->a[232147] = actions(10978);
	v->a[232148] = 1;
	v->a[232149] = aux_sym__simple_variable_name_token1;
	v->a[232150] = state(2801);
	v->a[232151] = 1;
	v->a[232152] = sym__arithmetic_binary_expression;
	v->a[232153] = state(2803);
	v->a[232154] = 1;
	v->a[232155] = sym__arithmetic_ternary_expression;
	v->a[232156] = state(2809);
	v->a[232157] = 1;
	v->a[232158] = sym__arithmetic_unary_expression;
	v->a[232159] = state(2825);
	small_parse_table_11608(v);
}

void	small_parse_table_11608(t_small_parse_table_array *v)
{
	v->a[232160] = 1;
	v->a[232161] = sym__arithmetic_postfix_expression;
	v->a[232162] = actions(9282);
	v->a[232163] = 2;
	v->a[232164] = anon_sym_PLUS_PLUS2;
	v->a[232165] = anon_sym_DASH_DASH2;
	v->a[232166] = actions(9284);
	v->a[232167] = 2;
	v->a[232168] = anon_sym_DASH2;
	v->a[232169] = anon_sym_PLUS2;
	v->a[232170] = state(2781);
	v->a[232171] = 9;
	v->a[232172] = sym_subscript;
	v->a[232173] = sym__arithmetic_expression;
	v->a[232174] = sym__arithmetic_literal;
	v->a[232175] = sym__arithmetic_parenthesized_expression;
	v->a[232176] = sym_string;
	v->a[232177] = sym_number;
	v->a[232178] = sym_simple_expansion;
	v->a[232179] = sym_expansion;
	small_parse_table_11609(v);
}

void	small_parse_table_11609(t_small_parse_table_array *v)
{
	v->a[232180] = sym_command_substitution;
	v->a[232181] = 20;
	v->a[232182] = actions(71);
	v->a[232183] = 1;
	v->a[232184] = sym_comment;
	v->a[232185] = actions(8178);
	v->a[232186] = 1;
	v->a[232187] = anon_sym_DOLLAR_LBRACK;
	v->a[232188] = actions(8180);
	v->a[232189] = 1;
	v->a[232190] = anon_sym_DOLLAR;
	v->a[232191] = actions(8184);
	v->a[232192] = 1;
	v->a[232193] = anon_sym_DQUOTE;
	v->a[232194] = actions(8188);
	v->a[232195] = 1;
	v->a[232196] = aux_sym_number_token1;
	v->a[232197] = actions(8190);
	v->a[232198] = 1;
	v->a[232199] = aux_sym_number_token2;
	small_parse_table_11610(v);
}

/* EOF small_parse_table_2321.c */
