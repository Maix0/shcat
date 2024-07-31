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
	v->a[24200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24201] = actions(888);
	v->a[24202] = 1;
	v->a[24203] = anon_sym_DOLLAR;
	v->a[24204] = actions(890);
	v->a[24205] = 1;
	v->a[24206] = anon_sym_DQUOTE;
	v->a[24207] = actions(892);
	v->a[24208] = 1;
	v->a[24209] = anon_sym_DOLLAR_LBRACE;
	v->a[24210] = actions(894);
	v->a[24211] = 1;
	v->a[24212] = anon_sym_DOLLAR_LPAREN;
	v->a[24213] = actions(896);
	v->a[24214] = 1;
	v->a[24215] = anon_sym_BQUOTE;
	v->a[24216] = state(301);
	v->a[24217] = 2;
	v->a[24218] = sym_concatenation;
	v->a[24219] = aux_sym_for_statement_repeat1;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = actions(944);
	v->a[24221] = 3;
	v->a[24222] = sym_raw_string;
	v->a[24223] = sym_number;
	v->a[24224] = sym_word;
	v->a[24225] = state(512);
	v->a[24226] = 5;
	v->a[24227] = sym_arithmetic_expansion;
	v->a[24228] = sym_string;
	v->a[24229] = sym_simple_expansion;
	v->a[24230] = sym_expansion;
	v->a[24231] = sym_command_substitution;
	v->a[24232] = actions(487);
	v->a[24233] = 15;
	v->a[24234] = anon_sym_PIPE;
	v->a[24235] = anon_sym_SEMI_SEMI;
	v->a[24236] = anon_sym_AMP_AMP;
	v->a[24237] = anon_sym_PIPE_PIPE;
	v->a[24238] = anon_sym_LT;
	v->a[24239] = anon_sym_GT;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = anon_sym_GT_GT;
	v->a[24241] = anon_sym_LT_AMP;
	v->a[24242] = anon_sym_GT_AMP;
	v->a[24243] = anon_sym_GT_PIPE;
	v->a[24244] = anon_sym_LT_GT;
	v->a[24245] = anon_sym_LT_LT;
	v->a[24246] = anon_sym_LT_LT_DASH;
	v->a[24247] = aux_sym_heredoc_redirect_token1;
	v->a[24248] = anon_sym_SEMI;
	v->a[24249] = 10;
	v->a[24250] = actions(3);
	v->a[24251] = 1;
	v->a[24252] = sym_comment;
	v->a[24253] = actions(746);
	v->a[24254] = 1;
	v->a[24255] = anon_sym_PIPE;
	v->a[24256] = actions(900);
	v->a[24257] = 1;
	v->a[24258] = sym_variable_name;
	v->a[24259] = state(385);
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = 1;
	v->a[24261] = sym_terminator;
	v->a[24262] = actions(850);
	v->a[24263] = 2;
	v->a[24264] = anon_sym_LT_LT;
	v->a[24265] = anon_sym_LT_LT_DASH;
	v->a[24266] = actions(898);
	v->a[24267] = 2;
	v->a[24268] = anon_sym_AMP_AMP;
	v->a[24269] = anon_sym_PIPE_PIPE;
	v->a[24270] = state(1002);
	v->a[24271] = 2;
	v->a[24272] = sym_variable_assignment;
	v->a[24273] = aux_sym__variable_assignments_repeat1;
	v->a[24274] = actions(946);
	v->a[24275] = 3;
	v->a[24276] = anon_sym_SEMI_SEMI;
	v->a[24277] = aux_sym_heredoc_redirect_token1;
	v->a[24278] = anon_sym_SEMI;
	v->a[24279] = state(984);
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = 3;
	v->a[24281] = sym_file_redirect;
	v->a[24282] = sym_heredoc_redirect;
	v->a[24283] = aux_sym_redirected_statement_repeat1;
	v->a[24284] = actions(742);
	v->a[24285] = 16;
	v->a[24286] = anon_sym_LT;
	v->a[24287] = anon_sym_GT;
	v->a[24288] = anon_sym_GT_GT;
	v->a[24289] = anon_sym_LT_AMP;
	v->a[24290] = anon_sym_GT_AMP;
	v->a[24291] = anon_sym_GT_PIPE;
	v->a[24292] = anon_sym_LT_GT;
	v->a[24293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24294] = anon_sym_DOLLAR;
	v->a[24295] = anon_sym_DQUOTE;
	v->a[24296] = sym_raw_string;
	v->a[24297] = sym_number;
	v->a[24298] = anon_sym_DOLLAR_LBRACE;
	v->a[24299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
