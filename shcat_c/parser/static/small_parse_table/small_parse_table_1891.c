/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1891.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9455(t_small_parse_table_array *v)
{
	v->a[189100] = 1;
	v->a[189101] = anon_sym_DOLLAR_LBRACK;
	v->a[189102] = actions(8068);
	v->a[189103] = 1;
	v->a[189104] = sym__special_character;
	v->a[189105] = actions(8070);
	v->a[189106] = 1;
	v->a[189107] = anon_sym_DQUOTE;
	v->a[189108] = actions(8074);
	v->a[189109] = 1;
	v->a[189110] = anon_sym_DOLLAR_LBRACE;
	v->a[189111] = actions(8076);
	v->a[189112] = 1;
	v->a[189113] = anon_sym_BQUOTE;
	v->a[189114] = actions(8078);
	v->a[189115] = 1;
	v->a[189116] = anon_sym_DOLLAR_BQUOTE;
	v->a[189117] = actions(8082);
	v->a[189118] = 1;
	v->a[189119] = sym__comment_word;
	small_parse_table_9456(v);
}

void	small_parse_table_9456(t_small_parse_table_array *v)
{
	v->a[189120] = actions(8084);
	v->a[189121] = 1;
	v->a[189122] = sym__empty_value;
	v->a[189123] = actions(8086);
	v->a[189124] = 1;
	v->a[189125] = sym_test_operator;
	v->a[189126] = state(1887);
	v->a[189127] = 1;
	v->a[189128] = aux_sym__literal_repeat1;
	v->a[189129] = actions(8062);
	v->a[189130] = 2;
	v->a[189131] = anon_sym_LPAREN_LPAREN;
	v->a[189132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189133] = actions(8072);
	v->a[189134] = 2;
	v->a[189135] = sym_raw_string;
	v->a[189136] = sym_ansi_c_string;
	v->a[189137] = actions(8080);
	v->a[189138] = 2;
	v->a[189139] = anon_sym_LT_LPAREN;
	small_parse_table_9457(v);
}

void	small_parse_table_9457(t_small_parse_table_array *v)
{
	v->a[189140] = anon_sym_GT_LPAREN;
	v->a[189141] = state(2158);
	v->a[189142] = 2;
	v->a[189143] = sym_concatenation;
	v->a[189144] = sym_array;
	v->a[189145] = state(2324);
	v->a[189146] = 9;
	v->a[189147] = sym_arithmetic_expansion;
	v->a[189148] = sym_brace_expression;
	v->a[189149] = sym_string;
	v->a[189150] = sym_translated_string;
	v->a[189151] = sym_number;
	v->a[189152] = sym_simple_expansion;
	v->a[189153] = sym_expansion;
	v->a[189154] = sym_command_substitution;
	v->a[189155] = sym_process_substitution;
	v->a[189156] = 23;
	v->a[189157] = actions(3);
	v->a[189158] = 1;
	v->a[189159] = sym_comment;
	small_parse_table_9458(v);
}

void	small_parse_table_9458(t_small_parse_table_array *v)
{
	v->a[189160] = actions(7956);
	v->a[189161] = 1;
	v->a[189162] = anon_sym_LPAREN;
	v->a[189163] = actions(7958);
	v->a[189164] = 1;
	v->a[189165] = anon_sym_DOLLAR_LBRACK;
	v->a[189166] = actions(7960);
	v->a[189167] = 1;
	v->a[189168] = anon_sym_DOLLAR;
	v->a[189169] = actions(7964);
	v->a[189170] = 1;
	v->a[189171] = anon_sym_DQUOTE;
	v->a[189172] = actions(7968);
	v->a[189173] = 1;
	v->a[189174] = aux_sym_number_token1;
	v->a[189175] = actions(7970);
	v->a[189176] = 1;
	v->a[189177] = aux_sym_number_token2;
	v->a[189178] = actions(7972);
	v->a[189179] = 1;
	small_parse_table_9459(v);
}

void	small_parse_table_9459(t_small_parse_table_array *v)
{
	v->a[189180] = anon_sym_DOLLAR_LBRACE;
	v->a[189181] = actions(7974);
	v->a[189182] = 1;
	v->a[189183] = anon_sym_DOLLAR_LPAREN;
	v->a[189184] = actions(7976);
	v->a[189185] = 1;
	v->a[189186] = anon_sym_BQUOTE;
	v->a[189187] = actions(7978);
	v->a[189188] = 1;
	v->a[189189] = anon_sym_DOLLAR_BQUOTE;
	v->a[189190] = actions(7982);
	v->a[189191] = 1;
	v->a[189192] = sym__comment_word;
	v->a[189193] = actions(7984);
	v->a[189194] = 1;
	v->a[189195] = sym__empty_value;
	v->a[189196] = actions(7988);
	v->a[189197] = 1;
	v->a[189198] = sym__brace_start;
	v->a[189199] = actions(8088);
	small_parse_table_9460(v);
}

/* EOF small_parse_table_1891.c */
