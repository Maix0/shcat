/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_203.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1015(t_small_parse_table_array *v)
{
	v->a[20300] = sym_number;
	v->a[20301] = anon_sym_DOLLAR_LBRACE;
	v->a[20302] = anon_sym_DOLLAR_LPAREN;
	v->a[20303] = anon_sym_BQUOTE;
	v->a[20304] = sym_word;
	v->a[20305] = 6;
	v->a[20306] = actions(3);
	v->a[20307] = 1;
	v->a[20308] = sym_comment;
	v->a[20309] = actions(588);
	v->a[20310] = 1;
	v->a[20311] = sym_variable_name;
	v->a[20312] = state(970);
	v->a[20313] = 2;
	v->a[20314] = sym_variable_assignment;
	v->a[20315] = aux_sym__variable_assignments_repeat1;
	v->a[20316] = state(971);
	v->a[20317] = 3;
	v->a[20318] = sym_file_redirect;
	v->a[20319] = sym_heredoc_redirect;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = aux_sym_redirected_statement_repeat1;
	v->a[20321] = actions(576);
	v->a[20322] = 9;
	v->a[20323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20324] = anon_sym_DOLLAR;
	v->a[20325] = anon_sym_DQUOTE;
	v->a[20326] = sym_raw_string;
	v->a[20327] = sym_number;
	v->a[20328] = anon_sym_DOLLAR_LBRACE;
	v->a[20329] = anon_sym_DOLLAR_LPAREN;
	v->a[20330] = anon_sym_BQUOTE;
	v->a[20331] = sym_word;
	v->a[20332] = actions(580);
	v->a[20333] = 11;
	v->a[20334] = anon_sym_esac;
	v->a[20335] = anon_sym_PIPE;
	v->a[20336] = anon_sym_SEMI_SEMI;
	v->a[20337] = anon_sym_AMP_AMP;
	v->a[20338] = anon_sym_PIPE_PIPE;
	v->a[20339] = anon_sym_LT;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = anon_sym_GT;
	v->a[20341] = anon_sym_GT_GT;
	v->a[20342] = anon_sym_LT_LT;
	v->a[20343] = aux_sym_heredoc_redirect_token1;
	v->a[20344] = anon_sym_SEMI;
	v->a[20345] = 7;
	v->a[20346] = actions(3);
	v->a[20347] = 1;
	v->a[20348] = sym_comment;
	v->a[20349] = actions(697);
	v->a[20350] = 1;
	v->a[20351] = sym_variable_name;
	v->a[20352] = actions(829);
	v->a[20353] = 1;
	v->a[20354] = ts_builtin_sym_end;
	v->a[20355] = state(924);
	v->a[20356] = 2;
	v->a[20357] = sym_variable_assignment;
	v->a[20358] = aux_sym__variable_assignments_repeat1;
	v->a[20359] = state(922);
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = 3;
	v->a[20361] = sym_file_redirect;
	v->a[20362] = sym_heredoc_redirect;
	v->a[20363] = aux_sym_redirected_statement_repeat1;
	v->a[20364] = actions(576);
	v->a[20365] = 9;
	v->a[20366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20367] = anon_sym_DOLLAR;
	v->a[20368] = anon_sym_DQUOTE;
	v->a[20369] = sym_raw_string;
	v->a[20370] = sym_number;
	v->a[20371] = anon_sym_DOLLAR_LBRACE;
	v->a[20372] = anon_sym_DOLLAR_LPAREN;
	v->a[20373] = anon_sym_BQUOTE;
	v->a[20374] = sym_word;
	v->a[20375] = actions(580);
	v->a[20376] = 10;
	v->a[20377] = anon_sym_PIPE;
	v->a[20378] = anon_sym_SEMI_SEMI;
	v->a[20379] = anon_sym_AMP_AMP;
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = anon_sym_PIPE_PIPE;
	v->a[20381] = anon_sym_LT;
	v->a[20382] = anon_sym_GT;
	v->a[20383] = anon_sym_GT_GT;
	v->a[20384] = anon_sym_LT_LT;
	v->a[20385] = aux_sym_heredoc_redirect_token1;
	v->a[20386] = anon_sym_SEMI;
	v->a[20387] = 10;
	v->a[20388] = actions(3);
	v->a[20389] = 1;
	v->a[20390] = sym_comment;
	v->a[20391] = actions(580);
	v->a[20392] = 1;
	v->a[20393] = anon_sym_PIPE;
	v->a[20394] = actions(597);
	v->a[20395] = 1;
	v->a[20396] = anon_sym_LT_LT;
	v->a[20397] = actions(771);
	v->a[20398] = 1;
	v->a[20399] = sym_variable_name;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
