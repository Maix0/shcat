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
	v->a[13100] = sym_test_operator;
	v->a[13101] = actions(3172);
	v->a[13102] = 1;
	v->a[13103] = sym__brace_start;
	v->a[13104] = state(2190);
	v->a[13105] = 1;
	v->a[13106] = aux_sym__literal_repeat1;
	v->a[13107] = actions(3130);
	v->a[13108] = 2;
	v->a[13109] = anon_sym_LPAREN_LPAREN;
	v->a[13110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13111] = actions(3163);
	v->a[13112] = 2;
	v->a[13113] = anon_sym_LT_LPAREN;
	v->a[13114] = anon_sym_GT_LPAREN;
	v->a[13115] = state(664);
	v->a[13116] = 2;
	v->a[13117] = sym_concatenation;
	v->a[13118] = aux_sym_unset_command_repeat1;
	v->a[13119] = actions(2442);
	small_parse_table_656(v);
}

void	small_parse_table_656(t_small_parse_table_array *v)
{
	v->a[13120] = 3;
	v->a[13121] = sym_file_descriptor;
	v->a[13122] = ts_builtin_sym_end;
	v->a[13123] = aux_sym_heredoc_redirect_token1;
	v->a[13124] = actions(3127);
	v->a[13125] = 3;
	v->a[13126] = sym_raw_string;
	v->a[13127] = sym_ansi_c_string;
	v->a[13128] = sym_word;
	v->a[13129] = state(1681);
	v->a[13130] = 9;
	v->a[13131] = sym_arithmetic_expansion;
	v->a[13132] = sym_brace_expression;
	v->a[13133] = sym_string;
	v->a[13134] = sym_translated_string;
	v->a[13135] = sym_number;
	v->a[13136] = sym_simple_expansion;
	v->a[13137] = sym_expansion;
	v->a[13138] = sym_command_substitution;
	v->a[13139] = sym_process_substitution;
	small_parse_table_657(v);
}

void	small_parse_table_657(t_small_parse_table_array *v)
{
	v->a[13140] = actions(2440);
	v->a[13141] = 19;
	v->a[13142] = anon_sym_SEMI;
	v->a[13143] = anon_sym_PIPE_PIPE;
	v->a[13144] = anon_sym_AMP_AMP;
	v->a[13145] = anon_sym_PIPE;
	v->a[13146] = anon_sym_AMP;
	v->a[13147] = anon_sym_LT;
	v->a[13148] = anon_sym_GT;
	v->a[13149] = anon_sym_LT_LT;
	v->a[13150] = anon_sym_GT_GT;
	v->a[13151] = anon_sym_SEMI_SEMI;
	v->a[13152] = anon_sym_PIPE_AMP;
	v->a[13153] = anon_sym_AMP_GT;
	v->a[13154] = anon_sym_AMP_GT_GT;
	v->a[13155] = anon_sym_LT_AMP;
	v->a[13156] = anon_sym_GT_AMP;
	v->a[13157] = anon_sym_GT_PIPE;
	v->a[13158] = anon_sym_LT_AMP_DASH;
	v->a[13159] = anon_sym_GT_AMP_DASH;
	small_parse_table_658(v);
}

void	small_parse_table_658(t_small_parse_table_array *v)
{
	v->a[13160] = anon_sym_LT_LT_DASH;
	v->a[13161] = 21;
	v->a[13162] = actions(3);
	v->a[13163] = 1;
	v->a[13164] = sym_comment;
	v->a[13165] = actions(3024);
	v->a[13166] = 1;
	v->a[13167] = anon_sym_DOLLAR_LBRACK;
	v->a[13168] = actions(3026);
	v->a[13169] = 1;
	v->a[13170] = anon_sym_DOLLAR;
	v->a[13171] = actions(3028);
	v->a[13172] = 1;
	v->a[13173] = sym__special_character;
	v->a[13174] = actions(3030);
	v->a[13175] = 1;
	v->a[13176] = anon_sym_DQUOTE;
	v->a[13177] = actions(3032);
	v->a[13178] = 1;
	v->a[13179] = aux_sym_number_token1;
	small_parse_table_659(v);
}

void	small_parse_table_659(t_small_parse_table_array *v)
{
	v->a[13180] = actions(3034);
	v->a[13181] = 1;
	v->a[13182] = aux_sym_number_token2;
	v->a[13183] = actions(3036);
	v->a[13184] = 1;
	v->a[13185] = anon_sym_DOLLAR_LBRACE;
	v->a[13186] = actions(3038);
	v->a[13187] = 1;
	v->a[13188] = anon_sym_DOLLAR_LPAREN;
	v->a[13189] = actions(3040);
	v->a[13190] = 1;
	v->a[13191] = anon_sym_BQUOTE;
	v->a[13192] = actions(3042);
	v->a[13193] = 1;
	v->a[13194] = anon_sym_DOLLAR_BQUOTE;
	v->a[13195] = actions(3048);
	v->a[13196] = 1;
	v->a[13197] = sym__brace_start;
	v->a[13198] = actions(3177);
	v->a[13199] = 1;
	small_parse_table_660(v);
}

/* EOF small_parse_table_131.c */
