/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1151.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5755(t_small_parse_table_array *v)
{
	v->a[115100] = 1;
	v->a[115101] = aux_sym_number_token1;
	v->a[115102] = actions(1158);
	v->a[115103] = 1;
	v->a[115104] = aux_sym_number_token2;
	v->a[115105] = actions(1162);
	v->a[115106] = 1;
	v->a[115107] = anon_sym_DOLLAR_LPAREN;
	v->a[115108] = actions(1172);
	v->a[115109] = 1;
	v->a[115110] = sym__brace_start;
	v->a[115111] = actions(6707);
	v->a[115112] = 1;
	v->a[115113] = sym_word;
	v->a[115114] = actions(6709);
	v->a[115115] = 1;
	v->a[115116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115117] = actions(6711);
	v->a[115118] = 1;
	v->a[115119] = sym__special_character;
	small_parse_table_5756(v);
}

void	small_parse_table_5756(t_small_parse_table_array *v)
{
	v->a[115120] = actions(6713);
	v->a[115121] = 1;
	v->a[115122] = anon_sym_DQUOTE;
	v->a[115123] = actions(6717);
	v->a[115124] = 1;
	v->a[115125] = anon_sym_DOLLAR_LBRACE;
	v->a[115126] = actions(6719);
	v->a[115127] = 1;
	v->a[115128] = anon_sym_BQUOTE;
	v->a[115129] = actions(6721);
	v->a[115130] = 1;
	v->a[115131] = anon_sym_DOLLAR_BQUOTE;
	v->a[115132] = actions(6723);
	v->a[115133] = 1;
	v->a[115134] = sym__comment_word;
	v->a[115135] = actions(6727);
	v->a[115136] = 1;
	v->a[115137] = anon_sym_DOLLAR;
	v->a[115138] = actions(6715);
	v->a[115139] = 3;
	small_parse_table_5757(v);
}

void	small_parse_table_5757(t_small_parse_table_array *v)
{
	v->a[115140] = sym_test_operator;
	v->a[115141] = sym__bare_dollar;
	v->a[115142] = sym_raw_string;
	v->a[115143] = state(1158);
	v->a[115144] = 7;
	v->a[115145] = sym_arithmetic_expansion;
	v->a[115146] = sym_brace_expression;
	v->a[115147] = sym_string;
	v->a[115148] = sym_number;
	v->a[115149] = sym_simple_expansion;
	v->a[115150] = sym_expansion;
	v->a[115151] = sym_command_substitution;
	v->a[115152] = 16;
	v->a[115153] = actions(3);
	v->a[115154] = 1;
	v->a[115155] = sym_comment;
	v->a[115156] = actions(929);
	v->a[115157] = 1;
	v->a[115158] = aux_sym_number_token1;
	v->a[115159] = actions(931);
	small_parse_table_5758(v);
}

void	small_parse_table_5758(t_small_parse_table_array *v)
{
	v->a[115160] = 1;
	v->a[115161] = aux_sym_number_token2;
	v->a[115162] = actions(935);
	v->a[115163] = 1;
	v->a[115164] = anon_sym_DOLLAR_LPAREN;
	v->a[115165] = actions(945);
	v->a[115166] = 1;
	v->a[115167] = sym__brace_start;
	v->a[115168] = actions(6685);
	v->a[115169] = 1;
	v->a[115170] = sym_word;
	v->a[115171] = actions(6687);
	v->a[115172] = 1;
	v->a[115173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115174] = actions(6691);
	v->a[115175] = 1;
	v->a[115176] = sym__special_character;
	v->a[115177] = actions(6693);
	v->a[115178] = 1;
	v->a[115179] = anon_sym_DQUOTE;
	small_parse_table_5759(v);
}

void	small_parse_table_5759(t_small_parse_table_array *v)
{
	v->a[115180] = actions(6697);
	v->a[115181] = 1;
	v->a[115182] = anon_sym_DOLLAR_LBRACE;
	v->a[115183] = actions(6699);
	v->a[115184] = 1;
	v->a[115185] = anon_sym_BQUOTE;
	v->a[115186] = actions(6701);
	v->a[115187] = 1;
	v->a[115188] = anon_sym_DOLLAR_BQUOTE;
	v->a[115189] = actions(6703);
	v->a[115190] = 1;
	v->a[115191] = sym__comment_word;
	v->a[115192] = actions(6729);
	v->a[115193] = 1;
	v->a[115194] = anon_sym_DOLLAR;
	v->a[115195] = actions(6695);
	v->a[115196] = 3;
	v->a[115197] = sym_test_operator;
	v->a[115198] = sym__bare_dollar;
	v->a[115199] = sym_raw_string;
	small_parse_table_5760(v);
}

/* EOF small_parse_table_1151.c */
