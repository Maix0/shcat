/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2061.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10305(t_small_parse_table_array *v)
{
	v->a[206100] = sym_string;
	v->a[206101] = sym_number;
	v->a[206102] = sym_simple_expansion;
	v->a[206103] = sym_expansion;
	v->a[206104] = sym_command_substitution;
	v->a[206105] = 18;
	v->a[206106] = actions(3);
	v->a[206107] = 1;
	v->a[206108] = sym_comment;
	v->a[206109] = actions(1557);
	v->a[206110] = 1;
	v->a[206111] = aux_sym_number_token1;
	v->a[206112] = actions(1559);
	v->a[206113] = 1;
	v->a[206114] = aux_sym_number_token2;
	v->a[206115] = actions(1563);
	v->a[206116] = 1;
	v->a[206117] = anon_sym_DOLLAR_LPAREN;
	v->a[206118] = actions(1575);
	v->a[206119] = 1;
	small_parse_table_10306(v);
}

void	small_parse_table_10306(t_small_parse_table_array *v)
{
	v->a[206120] = sym__brace_start;
	v->a[206121] = actions(9198);
	v->a[206122] = 1;
	v->a[206123] = anon_sym_DOLLAR_LBRACK;
	v->a[206124] = actions(9202);
	v->a[206125] = 1;
	v->a[206126] = anon_sym_DQUOTE;
	v->a[206127] = actions(9206);
	v->a[206128] = 1;
	v->a[206129] = anon_sym_DOLLAR_LBRACE;
	v->a[206130] = actions(9208);
	v->a[206131] = 1;
	v->a[206132] = anon_sym_BQUOTE;
	v->a[206133] = actions(9210);
	v->a[206134] = 1;
	v->a[206135] = anon_sym_DOLLAR_BQUOTE;
	v->a[206136] = actions(9268);
	v->a[206137] = 1;
	v->a[206138] = sym_word;
	v->a[206139] = actions(9276);
	small_parse_table_10307(v);
}

void	small_parse_table_10307(t_small_parse_table_array *v)
{
	v->a[206140] = 1;
	v->a[206141] = sym__comment_word;
	v->a[206142] = actions(9578);
	v->a[206143] = 1;
	v->a[206144] = anon_sym_DOLLAR;
	v->a[206145] = actions(9196);
	v->a[206146] = 2;
	v->a[206147] = anon_sym_LPAREN_LPAREN;
	v->a[206148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206149] = actions(9212);
	v->a[206150] = 2;
	v->a[206151] = anon_sym_LT_LPAREN;
	v->a[206152] = anon_sym_GT_LPAREN;
	v->a[206153] = actions(9272);
	v->a[206154] = 2;
	v->a[206155] = sym_test_operator;
	v->a[206156] = sym__special_character;
	v->a[206157] = actions(9274);
	v->a[206158] = 3;
	v->a[206159] = sym__bare_dollar;
	small_parse_table_10308(v);
}

void	small_parse_table_10308(t_small_parse_table_array *v)
{
	v->a[206160] = sym_raw_string;
	v->a[206161] = sym_ansi_c_string;
	v->a[206162] = state(1189);
	v->a[206163] = 9;
	v->a[206164] = sym_arithmetic_expansion;
	v->a[206165] = sym_brace_expression;
	v->a[206166] = sym_string;
	v->a[206167] = sym_translated_string;
	v->a[206168] = sym_number;
	v->a[206169] = sym_simple_expansion;
	v->a[206170] = sym_expansion;
	v->a[206171] = sym_command_substitution;
	v->a[206172] = sym_process_substitution;
	v->a[206173] = 18;
	v->a[206174] = actions(3);
	v->a[206175] = 1;
	v->a[206176] = sym_comment;
	v->a[206177] = actions(2269);
	v->a[206178] = 1;
	v->a[206179] = aux_sym_number_token1;
	small_parse_table_10309(v);
}

void	small_parse_table_10309(t_small_parse_table_array *v)
{
	v->a[206180] = actions(2271);
	v->a[206181] = 1;
	v->a[206182] = aux_sym_number_token2;
	v->a[206183] = actions(2275);
	v->a[206184] = 1;
	v->a[206185] = anon_sym_DOLLAR_LPAREN;
	v->a[206186] = actions(2289);
	v->a[206187] = 1;
	v->a[206188] = sym__brace_start;
	v->a[206189] = actions(8066);
	v->a[206190] = 1;
	v->a[206191] = anon_sym_DOLLAR_LBRACK;
	v->a[206192] = actions(8070);
	v->a[206193] = 1;
	v->a[206194] = anon_sym_DQUOTE;
	v->a[206195] = actions(8074);
	v->a[206196] = 1;
	v->a[206197] = anon_sym_DOLLAR_LBRACE;
	v->a[206198] = actions(8076);
	v->a[206199] = 1;
	small_parse_table_10310(v);
}

/* EOF small_parse_table_2061.c */
