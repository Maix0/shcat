/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_131.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_655(t_small_parse_table_array *v)
{
	v->a[13100] = sym_file_descriptor;
	v->a[13101] = aux_sym_heredoc_redirect_token1;
	v->a[13102] = actions(2390);
	v->a[13103] = 2;
	v->a[13104] = sym_raw_string;
	v->a[13105] = sym_word;
	v->a[13106] = state(428);
	v->a[13107] = 2;
	v->a[13108] = sym_concatenation;
	v->a[13109] = aux_sym_for_statement_repeat1;
	v->a[13110] = state(1222);
	v->a[13111] = 7;
	v->a[13112] = sym_arithmetic_expansion;
	v->a[13113] = sym_brace_expression;
	v->a[13114] = sym_string;
	v->a[13115] = sym_number;
	v->a[13116] = sym_simple_expansion;
	v->a[13117] = sym_expansion;
	v->a[13118] = sym_command_substitution;
	v->a[13119] = actions(1285);
	small_parse_table_656(v);
}

void	small_parse_table_656(t_small_parse_table_array *v)
{
	v->a[13120] = 19;
	v->a[13121] = anon_sym_PIPE;
	v->a[13122] = anon_sym_SEMI_SEMI;
	v->a[13123] = anon_sym_PIPE_AMP;
	v->a[13124] = anon_sym_AMP_AMP;
	v->a[13125] = anon_sym_PIPE_PIPE;
	v->a[13126] = anon_sym_LT;
	v->a[13127] = anon_sym_GT;
	v->a[13128] = anon_sym_GT_GT;
	v->a[13129] = anon_sym_AMP_GT;
	v->a[13130] = anon_sym_AMP_GT_GT;
	v->a[13131] = anon_sym_LT_AMP;
	v->a[13132] = anon_sym_GT_AMP;
	v->a[13133] = anon_sym_GT_PIPE;
	v->a[13134] = anon_sym_LT_AMP_DASH;
	v->a[13135] = anon_sym_GT_AMP_DASH;
	v->a[13136] = anon_sym_LT_LT;
	v->a[13137] = anon_sym_LT_LT_DASH;
	v->a[13138] = anon_sym_AMP;
	v->a[13139] = anon_sym_SEMI;
	small_parse_table_657(v);
}

void	small_parse_table_657(t_small_parse_table_array *v)
{
	v->a[13140] = 21;
	v->a[13141] = actions(3);
	v->a[13142] = 1;
	v->a[13143] = sym_comment;
	v->a[13144] = actions(1009);
	v->a[13145] = 1;
	v->a[13146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13147] = actions(1011);
	v->a[13148] = 1;
	v->a[13149] = anon_sym_DOLLAR;
	v->a[13150] = actions(1015);
	v->a[13151] = 1;
	v->a[13152] = anon_sym_DQUOTE;
	v->a[13153] = actions(1017);
	v->a[13154] = 1;
	v->a[13155] = aux_sym_number_token1;
	v->a[13156] = actions(1019);
	v->a[13157] = 1;
	v->a[13158] = aux_sym_number_token2;
	v->a[13159] = actions(1021);
	small_parse_table_658(v);
}

void	small_parse_table_658(t_small_parse_table_array *v)
{
	v->a[13160] = 1;
	v->a[13161] = anon_sym_DOLLAR_LBRACE;
	v->a[13162] = actions(1023);
	v->a[13163] = 1;
	v->a[13164] = anon_sym_DOLLAR_LPAREN;
	v->a[13165] = actions(1025);
	v->a[13166] = 1;
	v->a[13167] = anon_sym_BQUOTE;
	v->a[13168] = actions(1027);
	v->a[13169] = 1;
	v->a[13170] = anon_sym_DOLLAR_BQUOTE;
	v->a[13171] = actions(1035);
	v->a[13172] = 1;
	v->a[13173] = sym__brace_start;
	v->a[13174] = actions(2401);
	v->a[13175] = 1;
	v->a[13176] = sym__special_character;
	v->a[13177] = actions(2403);
	v->a[13178] = 1;
	v->a[13179] = aux_sym__simple_variable_name_token1;
	small_parse_table_659(v);
}

void	small_parse_table_659(t_small_parse_table_array *v)
{
	v->a[13180] = actions(2405);
	v->a[13181] = 1;
	v->a[13182] = sym_variable_name;
	v->a[13183] = actions(2407);
	v->a[13184] = 1;
	v->a[13185] = sym_test_operator;
	v->a[13186] = state(1024);
	v->a[13187] = 1;
	v->a[13188] = aux_sym__literal_repeat1;
	v->a[13189] = actions(822);
	v->a[13190] = 2;
	v->a[13191] = sym_file_descriptor;
	v->a[13192] = aux_sym_heredoc_redirect_token1;
	v->a[13193] = actions(2399);
	v->a[13194] = 2;
	v->a[13195] = sym_raw_string;
	v->a[13196] = sym_word;
	v->a[13197] = state(438);
	v->a[13198] = 3;
	v->a[13199] = sym_variable_assignment;
	small_parse_table_660(v);
}

/* EOF small_parse_table_131.c */
