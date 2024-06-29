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
	v->a[24200] = anon_sym_PIPE;
	v->a[24201] = actions(774);
	v->a[24202] = 1;
	v->a[24203] = sym_file_descriptor;
	v->a[24204] = actions(831);
	v->a[24205] = 1;
	v->a[24206] = ts_builtin_sym_end;
	v->a[24207] = actions(837);
	v->a[24208] = 1;
	v->a[24209] = sym_variable_name;
	v->a[24210] = state(770);
	v->a[24211] = 1;
	v->a[24212] = sym_terminator;
	v->a[24213] = actions(804);
	v->a[24214] = 2;
	v->a[24215] = anon_sym_LT_LT;
	v->a[24216] = anon_sym_LT_LT_DASH;
	v->a[24217] = actions(835);
	v->a[24218] = 2;
	v->a[24219] = anon_sym_AMP_AMP;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = anon_sym_PIPE_PIPE;
	v->a[24221] = state(1131);
	v->a[24222] = 2;
	v->a[24223] = sym_variable_assignment;
	v->a[24224] = aux_sym__variable_assignments_repeat1;
	v->a[24225] = state(1133);
	v->a[24226] = 3;
	v->a[24227] = sym_file_redirect;
	v->a[24228] = sym_heredoc_redirect;
	v->a[24229] = aux_sym_redirected_statement_repeat1;
	v->a[24230] = actions(833);
	v->a[24231] = 4;
	v->a[24232] = anon_sym_SEMI_SEMI;
	v->a[24233] = aux_sym_heredoc_redirect_token1;
	v->a[24234] = anon_sym_AMP;
	v->a[24235] = anon_sym_SEMI;
	v->a[24236] = actions(762);
	v->a[24237] = 19;
	v->a[24238] = anon_sym_LT;
	v->a[24239] = anon_sym_GT;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = anon_sym_GT_GT;
	v->a[24241] = anon_sym_AMP_GT;
	v->a[24242] = anon_sym_AMP_GT_GT;
	v->a[24243] = anon_sym_LT_AMP;
	v->a[24244] = anon_sym_GT_AMP;
	v->a[24245] = anon_sym_GT_PIPE;
	v->a[24246] = anon_sym_LT_AMP_DASH;
	v->a[24247] = anon_sym_GT_AMP_DASH;
	v->a[24248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24249] = anon_sym_DOLLAR;
	v->a[24250] = anon_sym_DQUOTE;
	v->a[24251] = sym_raw_string;
	v->a[24252] = sym_number;
	v->a[24253] = anon_sym_DOLLAR_LBRACE;
	v->a[24254] = anon_sym_DOLLAR_LPAREN;
	v->a[24255] = anon_sym_BQUOTE;
	v->a[24256] = sym_word;
	v->a[24257] = 6;
	v->a[24258] = actions(3);
	v->a[24259] = 1;
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = sym_comment;
	v->a[24261] = actions(385);
	v->a[24262] = 1;
	v->a[24263] = sym_file_descriptor;
	v->a[24264] = actions(423);
	v->a[24265] = 1;
	v->a[24266] = sym_variable_name;
	v->a[24267] = actions(421);
	v->a[24268] = 2;
	v->a[24269] = aux_sym__simple_variable_name_token1;
	v->a[24270] = aux_sym__multiline_variable_name_token1;
	v->a[24271] = actions(419);
	v->a[24272] = 9;
	v->a[24273] = anon_sym_BANG;
	v->a[24274] = anon_sym_DASH;
	v->a[24275] = anon_sym_STAR;
	v->a[24276] = anon_sym_QMARK;
	v->a[24277] = anon_sym_DOLLAR;
	v->a[24278] = anon_sym_POUND;
	v->a[24279] = anon_sym_AT;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = anon_sym_0;
	v->a[24281] = anon_sym__;
	v->a[24282] = actions(379);
	v->a[24283] = 24;
	v->a[24284] = anon_sym_PIPE;
	v->a[24285] = anon_sym_AMP_AMP;
	v->a[24286] = anon_sym_PIPE_PIPE;
	v->a[24287] = anon_sym_LT;
	v->a[24288] = anon_sym_GT;
	v->a[24289] = anon_sym_GT_GT;
	v->a[24290] = anon_sym_AMP_GT;
	v->a[24291] = anon_sym_AMP_GT_GT;
	v->a[24292] = anon_sym_LT_AMP;
	v->a[24293] = anon_sym_GT_AMP;
	v->a[24294] = anon_sym_GT_PIPE;
	v->a[24295] = anon_sym_LT_AMP_DASH;
	v->a[24296] = anon_sym_GT_AMP_DASH;
	v->a[24297] = anon_sym_LT_LT;
	v->a[24298] = anon_sym_LT_LT_DASH;
	v->a[24299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
