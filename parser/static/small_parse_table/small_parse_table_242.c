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
	v->a[24200] = sym_test_operator;
	v->a[24201] = sym__brace_start;
	v->a[24202] = aux_sym_heredoc_redirect_token1;
	v->a[24203] = actions(3060);
	v->a[24204] = 36;
	v->a[24205] = anon_sym_esac;
	v->a[24206] = anon_sym_PIPE;
	v->a[24207] = anon_sym_SEMI_SEMI;
	v->a[24208] = anon_sym_SEMI_AMP;
	v->a[24209] = anon_sym_SEMI_SEMI_AMP;
	v->a[24210] = anon_sym_PIPE_AMP;
	v->a[24211] = anon_sym_AMP_AMP;
	v->a[24212] = anon_sym_PIPE_PIPE;
	v->a[24213] = anon_sym_LT;
	v->a[24214] = anon_sym_GT;
	v->a[24215] = anon_sym_GT_GT;
	v->a[24216] = anon_sym_AMP_GT;
	v->a[24217] = anon_sym_AMP_GT_GT;
	v->a[24218] = anon_sym_LT_AMP;
	v->a[24219] = anon_sym_GT_AMP;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = anon_sym_GT_PIPE;
	v->a[24221] = anon_sym_LT_AMP_DASH;
	v->a[24222] = anon_sym_GT_AMP_DASH;
	v->a[24223] = anon_sym_LT_LT;
	v->a[24224] = anon_sym_LT_LT_DASH;
	v->a[24225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24226] = anon_sym_AMP;
	v->a[24227] = aux_sym_concatenation_token1;
	v->a[24228] = anon_sym_DOLLAR;
	v->a[24229] = sym__special_character;
	v->a[24230] = anon_sym_DQUOTE;
	v->a[24231] = sym_raw_string;
	v->a[24232] = aux_sym_number_token1;
	v->a[24233] = aux_sym_number_token2;
	v->a[24234] = anon_sym_DOLLAR_LBRACE;
	v->a[24235] = anon_sym_DOLLAR_LPAREN;
	v->a[24236] = anon_sym_BQUOTE;
	v->a[24237] = anon_sym_DOLLAR_BQUOTE;
	v->a[24238] = aux_sym__simple_variable_name_token1;
	v->a[24239] = sym_word;
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = anon_sym_SEMI;
	v->a[24241] = 12;
	v->a[24242] = actions(3);
	v->a[24243] = 1;
	v->a[24244] = sym_comment;
	v->a[24245] = actions(1997);
	v->a[24246] = 1;
	v->a[24247] = ts_builtin_sym_end;
	v->a[24248] = actions(2949);
	v->a[24249] = 1;
	v->a[24250] = sym_variable_name;
	v->a[24251] = actions(3149);
	v->a[24252] = 1;
	v->a[24253] = aux_sym_heredoc_redirect_token1;
	v->a[24254] = actions(2516);
	v->a[24255] = 2;
	v->a[24256] = anon_sym_PIPE;
	v->a[24257] = anon_sym_PIPE_AMP;
	v->a[24258] = actions(2943);
	v->a[24259] = 2;
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = anon_sym_AMP_AMP;
	v->a[24261] = anon_sym_PIPE_PIPE;
	v->a[24262] = actions(2945);
	v->a[24263] = 2;
	v->a[24264] = anon_sym_LT_LT;
	v->a[24265] = anon_sym_LT_LT_DASH;
	v->a[24266] = state(2128);
	v->a[24267] = 2;
	v->a[24268] = sym_variable_assignment;
	v->a[24269] = aux_sym_variable_assignments_repeat1;
	v->a[24270] = actions(2526);
	v->a[24271] = 3;
	v->a[24272] = sym_file_descriptor;
	v->a[24273] = sym_test_operator;
	v->a[24274] = sym__brace_start;
	v->a[24275] = actions(3147);
	v->a[24276] = 3;
	v->a[24277] = anon_sym_SEMI_SEMI;
	v->a[24278] = anon_sym_AMP;
	v->a[24279] = anon_sym_SEMI;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = state(2129);
	v->a[24281] = 3;
	v->a[24282] = sym_file_redirect;
	v->a[24283] = sym_heredoc_redirect;
	v->a[24284] = aux_sym_redirected_statement_repeat1;
	v->a[24285] = actions(2512);
	v->a[24286] = 22;
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
	v->a[24297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24298] = anon_sym_DOLLAR;
	v->a[24299] = sym__special_character;
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
