/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_242.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1210(t_small_parse_table_array *v)
{
	v->a[24200] = anon_sym_PIPE_AMP;
	v->a[24201] = anon_sym_AMP_GT;
	v->a[24202] = anon_sym_AMP_GT_GT;
	v->a[24203] = anon_sym_LT_AMP;
	v->a[24204] = anon_sym_GT_AMP;
	v->a[24205] = anon_sym_GT_PIPE;
	v->a[24206] = anon_sym_LT_AMP_DASH;
	v->a[24207] = anon_sym_GT_AMP_DASH;
	v->a[24208] = anon_sym_LT_LT_DASH;
	v->a[24209] = 8;
	v->a[24210] = actions(3);
	v->a[24211] = 1;
	v->a[24212] = sym_comment;
	v->a[24213] = actions(3189);
	v->a[24214] = 1;
	v->a[24215] = anon_sym_DQUOTE;
	v->a[24216] = actions(4058);
	v->a[24217] = 1;
	v->a[24218] = sym_variable_name;
	v->a[24219] = state(1737);
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = 1;
	v->a[24221] = sym_string;
	v->a[24222] = actions(4056);
	v->a[24223] = 2;
	v->a[24224] = aux_sym__simple_variable_name_token1;
	v->a[24225] = aux_sym__multiline_variable_name_token1;
	v->a[24226] = actions(1235);
	v->a[24227] = 3;
	v->a[24228] = sym_file_descriptor;
	v->a[24229] = sym_test_operator;
	v->a[24230] = sym__brace_start;
	v->a[24231] = actions(4054);
	v->a[24232] = 9;
	v->a[24233] = anon_sym_DASH;
	v->a[24234] = anon_sym_STAR;
	v->a[24235] = anon_sym_BANG;
	v->a[24236] = anon_sym_QMARK;
	v->a[24237] = anon_sym_DOLLAR;
	v->a[24238] = anon_sym_POUND;
	v->a[24239] = anon_sym_AT2;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = anon_sym_0;
	v->a[24241] = anon_sym__;
	v->a[24242] = actions(1227);
	v->a[24243] = 35;
	v->a[24244] = anon_sym_LPAREN_LPAREN;
	v->a[24245] = anon_sym_SEMI;
	v->a[24246] = anon_sym_PIPE_PIPE;
	v->a[24247] = anon_sym_AMP_AMP;
	v->a[24248] = anon_sym_PIPE;
	v->a[24249] = anon_sym_AMP;
	v->a[24250] = anon_sym_LT;
	v->a[24251] = anon_sym_GT;
	v->a[24252] = anon_sym_LT_LT;
	v->a[24253] = anon_sym_GT_GT;
	v->a[24254] = anon_sym_SEMI_SEMI;
	v->a[24255] = anon_sym_PIPE_AMP;
	v->a[24256] = anon_sym_AMP_GT;
	v->a[24257] = anon_sym_AMP_GT_GT;
	v->a[24258] = anon_sym_LT_AMP;
	v->a[24259] = anon_sym_GT_AMP;
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = anon_sym_GT_PIPE;
	v->a[24261] = anon_sym_LT_AMP_DASH;
	v->a[24262] = anon_sym_GT_AMP_DASH;
	v->a[24263] = anon_sym_LT_LT_DASH;
	v->a[24264] = aux_sym_heredoc_redirect_token1;
	v->a[24265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24266] = anon_sym_DOLLAR_LBRACK;
	v->a[24267] = sym__special_character;
	v->a[24268] = sym_raw_string;
	v->a[24269] = sym_ansi_c_string;
	v->a[24270] = aux_sym_number_token1;
	v->a[24271] = aux_sym_number_token2;
	v->a[24272] = anon_sym_DOLLAR_LBRACE;
	v->a[24273] = anon_sym_DOLLAR_LPAREN;
	v->a[24274] = anon_sym_BQUOTE;
	v->a[24275] = anon_sym_DOLLAR_BQUOTE;
	v->a[24276] = anon_sym_LT_LPAREN;
	v->a[24277] = anon_sym_GT_LPAREN;
	v->a[24278] = sym_word;
	v->a[24279] = 20;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = actions(3);
	v->a[24281] = 1;
	v->a[24282] = sym_comment;
	v->a[24283] = actions(3785);
	v->a[24284] = 1;
	v->a[24285] = anon_sym_DOLLAR_LBRACK;
	v->a[24286] = actions(3787);
	v->a[24287] = 1;
	v->a[24288] = anon_sym_DOLLAR;
	v->a[24289] = actions(3791);
	v->a[24290] = 1;
	v->a[24291] = anon_sym_DQUOTE;
	v->a[24292] = actions(3793);
	v->a[24293] = 1;
	v->a[24294] = aux_sym_number_token1;
	v->a[24295] = actions(3795);
	v->a[24296] = 1;
	v->a[24297] = aux_sym_number_token2;
	v->a[24298] = actions(3797);
	v->a[24299] = 1;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
