/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_492.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2460(t_small_parse_table_array *v)
{
	v->a[49200] = sym__special_character;
	v->a[49201] = anon_sym_DQUOTE;
	v->a[49202] = sym_raw_string;
	v->a[49203] = sym_ansi_c_string;
	v->a[49204] = aux_sym_number_token1;
	v->a[49205] = aux_sym_number_token2;
	v->a[49206] = anon_sym_DOLLAR_LBRACE;
	v->a[49207] = anon_sym_DOLLAR_LPAREN;
	v->a[49208] = anon_sym_BQUOTE;
	v->a[49209] = anon_sym_DOLLAR_BQUOTE;
	v->a[49210] = anon_sym_LT_LPAREN;
	v->a[49211] = anon_sym_GT_LPAREN;
	v->a[49212] = sym_word;
	v->a[49213] = 3;
	v->a[49214] = actions(3);
	v->a[49215] = 1;
	v->a[49216] = sym_comment;
	v->a[49217] = actions(1354);
	v->a[49218] = 6;
	v->a[49219] = sym_file_descriptor;
	small_parse_table_2461(v);
}

void	small_parse_table_2461(t_small_parse_table_array *v)
{
	v->a[49220] = sym__concat;
	v->a[49221] = sym_test_operator;
	v->a[49222] = sym__bare_dollar;
	v->a[49223] = sym__brace_start;
	v->a[49224] = aux_sym_heredoc_redirect_token1;
	v->a[49225] = actions(1352);
	v->a[49226] = 42;
	v->a[49227] = anon_sym_LPAREN_LPAREN;
	v->a[49228] = anon_sym_SEMI;
	v->a[49229] = anon_sym_PIPE_PIPE;
	v->a[49230] = anon_sym_AMP_AMP;
	v->a[49231] = anon_sym_PIPE;
	v->a[49232] = anon_sym_AMP;
	v->a[49233] = anon_sym_EQ_EQ;
	v->a[49234] = anon_sym_LT;
	v->a[49235] = anon_sym_GT;
	v->a[49236] = anon_sym_LT_LT;
	v->a[49237] = anon_sym_GT_GT;
	v->a[49238] = anon_sym_LPAREN;
	v->a[49239] = anon_sym_RPAREN;
	small_parse_table_2462(v);
}

void	small_parse_table_2462(t_small_parse_table_array *v)
{
	v->a[49240] = anon_sym_SEMI_SEMI;
	v->a[49241] = anon_sym_PIPE_AMP;
	v->a[49242] = anon_sym_EQ_TILDE;
	v->a[49243] = anon_sym_AMP_GT;
	v->a[49244] = anon_sym_AMP_GT_GT;
	v->a[49245] = anon_sym_LT_AMP;
	v->a[49246] = anon_sym_GT_AMP;
	v->a[49247] = anon_sym_GT_PIPE;
	v->a[49248] = anon_sym_LT_AMP_DASH;
	v->a[49249] = anon_sym_GT_AMP_DASH;
	v->a[49250] = anon_sym_LT_LT_DASH;
	v->a[49251] = anon_sym_LT_LT_LT;
	v->a[49252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49253] = anon_sym_DOLLAR_LBRACK;
	v->a[49254] = aux_sym_concatenation_token1;
	v->a[49255] = anon_sym_DOLLAR;
	v->a[49256] = sym__special_character;
	v->a[49257] = anon_sym_DQUOTE;
	v->a[49258] = sym_raw_string;
	v->a[49259] = sym_ansi_c_string;
	small_parse_table_2463(v);
}

void	small_parse_table_2463(t_small_parse_table_array *v)
{
	v->a[49260] = aux_sym_number_token1;
	v->a[49261] = aux_sym_number_token2;
	v->a[49262] = anon_sym_DOLLAR_LBRACE;
	v->a[49263] = anon_sym_DOLLAR_LPAREN;
	v->a[49264] = anon_sym_BQUOTE;
	v->a[49265] = anon_sym_DOLLAR_BQUOTE;
	v->a[49266] = anon_sym_LT_LPAREN;
	v->a[49267] = anon_sym_GT_LPAREN;
	v->a[49268] = sym_word;
	v->a[49269] = 12;
	v->a[49270] = actions(3);
	v->a[49271] = 1;
	v->a[49272] = sym_comment;
	v->a[49273] = actions(5103);
	v->a[49274] = 1;
	v->a[49275] = sym_variable_name;
	v->a[49276] = actions(5387);
	v->a[49277] = 1;
	v->a[49278] = aux_sym_heredoc_redirect_token1;
	v->a[49279] = state(6727);
	small_parse_table_2464(v);
}

void	small_parse_table_2464(t_small_parse_table_array *v)
{
	v->a[49280] = 1;
	v->a[49281] = sym_subscript;
	v->a[49282] = actions(4253);
	v->a[49283] = 2;
	v->a[49284] = anon_sym_PIPE;
	v->a[49285] = anon_sym_PIPE_AMP;
	v->a[49286] = actions(4692);
	v->a[49287] = 2;
	v->a[49288] = anon_sym_LT_LT;
	v->a[49289] = anon_sym_LT_LT_DASH;
	v->a[49290] = actions(5099);
	v->a[49291] = 2;
	v->a[49292] = anon_sym_PIPE_PIPE;
	v->a[49293] = anon_sym_AMP_AMP;
	v->a[49294] = state(4787);
	v->a[49295] = 2;
	v->a[49296] = sym_variable_assignment;
	v->a[49297] = aux_sym_variable_assignments_repeat1;
	v->a[49298] = actions(4261);
	v->a[49299] = 3;
	small_parse_table_2465(v);
}

/* EOF small_parse_table_492.c */
