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
	v->a[24200] = sym_number;
	v->a[24201] = sym_word;
	v->a[24202] = state(616);
	v->a[24203] = 5;
	v->a[24204] = sym_arithmetic_expansion;
	v->a[24205] = sym_string;
	v->a[24206] = sym_simple_expansion;
	v->a[24207] = sym_expansion;
	v->a[24208] = sym_command_substitution;
	v->a[24209] = actions(554);
	v->a[24210] = 17;
	v->a[24211] = anon_sym_PIPE;
	v->a[24212] = anon_sym_SEMI_SEMI;
	v->a[24213] = anon_sym_AMP_AMP;
	v->a[24214] = anon_sym_PIPE_PIPE;
	v->a[24215] = anon_sym_LT;
	v->a[24216] = anon_sym_GT;
	v->a[24217] = anon_sym_GT_GT;
	v->a[24218] = anon_sym_LT_AMP;
	v->a[24219] = anon_sym_GT_AMP;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = anon_sym_GT_PIPE;
	v->a[24221] = anon_sym_LT_GT;
	v->a[24222] = anon_sym_LT_LT;
	v->a[24223] = anon_sym_LT_LT_DASH;
	v->a[24224] = aux_sym_heredoc_redirect_token1;
	v->a[24225] = anon_sym_AMP;
	v->a[24226] = anon_sym_BQUOTE;
	v->a[24227] = anon_sym_SEMI;
	v->a[24228] = 7;
	v->a[24229] = actions(3);
	v->a[24230] = 1;
	v->a[24231] = sym_comment;
	v->a[24232] = actions(761);
	v->a[24233] = 1;
	v->a[24234] = sym_variable_name;
	v->a[24235] = actions(949);
	v->a[24236] = 1;
	v->a[24237] = sym_file_descriptor;
	v->a[24238] = state(1040);
	v->a[24239] = 2;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = sym_variable_assignment;
	v->a[24241] = aux_sym__variable_assignments_repeat1;
	v->a[24242] = state(1094);
	v->a[24243] = 3;
	v->a[24244] = sym_file_redirect;
	v->a[24245] = sym_heredoc_redirect;
	v->a[24246] = aux_sym_redirected_statement_repeat1;
	v->a[24247] = actions(734);
	v->a[24248] = 9;
	v->a[24249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24250] = anon_sym_DOLLAR;
	v->a[24251] = anon_sym_DQUOTE;
	v->a[24252] = sym_raw_string;
	v->a[24253] = sym_number;
	v->a[24254] = anon_sym_DOLLAR_LBRACE;
	v->a[24255] = anon_sym_DOLLAR_LPAREN;
	v->a[24256] = anon_sym_BQUOTE;
	v->a[24257] = sym_word;
	v->a[24258] = actions(736);
	v->a[24259] = 17;
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = anon_sym_esac;
	v->a[24261] = anon_sym_PIPE;
	v->a[24262] = anon_sym_SEMI_SEMI;
	v->a[24263] = anon_sym_AMP_AMP;
	v->a[24264] = anon_sym_PIPE_PIPE;
	v->a[24265] = anon_sym_LT;
	v->a[24266] = anon_sym_GT;
	v->a[24267] = anon_sym_GT_GT;
	v->a[24268] = anon_sym_LT_AMP;
	v->a[24269] = anon_sym_GT_AMP;
	v->a[24270] = anon_sym_GT_PIPE;
	v->a[24271] = anon_sym_LT_GT;
	v->a[24272] = anon_sym_LT_LT;
	v->a[24273] = anon_sym_LT_LT_DASH;
	v->a[24274] = aux_sym_heredoc_redirect_token1;
	v->a[24275] = anon_sym_AMP;
	v->a[24276] = anon_sym_SEMI;
	v->a[24277] = 12;
	v->a[24278] = actions(3);
	v->a[24279] = 1;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = sym_comment;
	v->a[24281] = actions(495);
	v->a[24282] = 1;
	v->a[24283] = sym_file_descriptor;
	v->a[24284] = actions(871);
	v->a[24285] = 1;
	v->a[24286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24287] = actions(873);
	v->a[24288] = 1;
	v->a[24289] = anon_sym_DOLLAR;
	v->a[24290] = actions(875);
	v->a[24291] = 1;
	v->a[24292] = anon_sym_DQUOTE;
	v->a[24293] = actions(877);
	v->a[24294] = 1;
	v->a[24295] = anon_sym_DOLLAR_LBRACE;
	v->a[24296] = actions(879);
	v->a[24297] = 1;
	v->a[24298] = anon_sym_DOLLAR_LPAREN;
	v->a[24299] = actions(881);
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
