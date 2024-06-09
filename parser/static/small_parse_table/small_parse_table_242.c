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
	v->a[24200] = 2;
	v->a[24201] = sym_file_descriptor;
	v->a[24202] = ts_builtin_sym_end;
	v->a[24203] = actions(777);
	v->a[24204] = 2;
	v->a[24205] = sym_raw_string;
	v->a[24206] = sym_word;
	v->a[24207] = state(234);
	v->a[24208] = 2;
	v->a[24209] = sym_concatenation;
	v->a[24210] = aux_sym_for_statement_repeat1;
	v->a[24211] = state(502);
	v->a[24212] = 6;
	v->a[24213] = sym_arithmetic_expansion;
	v->a[24214] = sym_string;
	v->a[24215] = sym_number;
	v->a[24216] = sym_simple_expansion;
	v->a[24217] = sym_expansion;
	v->a[24218] = sym_command_substitution;
	v->a[24219] = actions(553);
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = 19;
	v->a[24221] = anon_sym_PIPE;
	v->a[24222] = anon_sym_SEMI_SEMI;
	v->a[24223] = anon_sym_AMP_AMP;
	v->a[24224] = anon_sym_PIPE_PIPE;
	v->a[24225] = anon_sym_LT;
	v->a[24226] = anon_sym_GT;
	v->a[24227] = anon_sym_GT_GT;
	v->a[24228] = anon_sym_AMP_GT;
	v->a[24229] = anon_sym_AMP_GT_GT;
	v->a[24230] = anon_sym_LT_AMP;
	v->a[24231] = anon_sym_GT_AMP;
	v->a[24232] = anon_sym_GT_PIPE;
	v->a[24233] = anon_sym_LT_AMP_DASH;
	v->a[24234] = anon_sym_GT_AMP_DASH;
	v->a[24235] = anon_sym_LT_LT;
	v->a[24236] = anon_sym_LT_LT_DASH;
	v->a[24237] = aux_sym_heredoc_redirect_token1;
	v->a[24238] = anon_sym_AMP;
	v->a[24239] = anon_sym_SEMI;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = 14;
	v->a[24241] = actions(3);
	v->a[24242] = 1;
	v->a[24243] = sym_comment;
	v->a[24244] = actions(779);
	v->a[24245] = 1;
	v->a[24246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24247] = actions(781);
	v->a[24248] = 1;
	v->a[24249] = anon_sym_DOLLAR;
	v->a[24250] = actions(783);
	v->a[24251] = 1;
	v->a[24252] = anon_sym_DQUOTE;
	v->a[24253] = actions(785);
	v->a[24254] = 1;
	v->a[24255] = aux_sym_number_token1;
	v->a[24256] = actions(787);
	v->a[24257] = 1;
	v->a[24258] = aux_sym_number_token2;
	v->a[24259] = actions(789);
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = 1;
	v->a[24261] = anon_sym_DOLLAR_LBRACE;
	v->a[24262] = actions(791);
	v->a[24263] = 1;
	v->a[24264] = anon_sym_DOLLAR_LPAREN;
	v->a[24265] = actions(793);
	v->a[24266] = 1;
	v->a[24267] = anon_sym_BQUOTE;
	v->a[24268] = actions(565);
	v->a[24269] = 2;
	v->a[24270] = sym_file_descriptor;
	v->a[24271] = ts_builtin_sym_end;
	v->a[24272] = actions(777);
	v->a[24273] = 2;
	v->a[24274] = sym_raw_string;
	v->a[24275] = sym_word;
	v->a[24276] = state(234);
	v->a[24277] = 2;
	v->a[24278] = sym_concatenation;
	v->a[24279] = aux_sym_for_statement_repeat1;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = state(502);
	v->a[24281] = 6;
	v->a[24282] = sym_arithmetic_expansion;
	v->a[24283] = sym_string;
	v->a[24284] = sym_number;
	v->a[24285] = sym_simple_expansion;
	v->a[24286] = sym_expansion;
	v->a[24287] = sym_command_substitution;
	v->a[24288] = actions(567);
	v->a[24289] = 19;
	v->a[24290] = anon_sym_PIPE;
	v->a[24291] = anon_sym_SEMI_SEMI;
	v->a[24292] = anon_sym_AMP_AMP;
	v->a[24293] = anon_sym_PIPE_PIPE;
	v->a[24294] = anon_sym_LT;
	v->a[24295] = anon_sym_GT;
	v->a[24296] = anon_sym_GT_GT;
	v->a[24297] = anon_sym_AMP_GT;
	v->a[24298] = anon_sym_AMP_GT_GT;
	v->a[24299] = anon_sym_LT_AMP;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
