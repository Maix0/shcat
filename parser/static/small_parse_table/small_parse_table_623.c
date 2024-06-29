/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_623.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3115(t_small_parse_table_array *v)
{
	v->a[62300] = ts_builtin_sym_end;
	v->a[62301] = aux_sym_heredoc_redirect_token1;
	v->a[62302] = actions(983);
	v->a[62303] = 21;
	v->a[62304] = anon_sym_PIPE;
	v->a[62305] = anon_sym_RPAREN;
	v->a[62306] = anon_sym_SEMI_SEMI;
	v->a[62307] = anon_sym_AMP_AMP;
	v->a[62308] = anon_sym_PIPE_PIPE;
	v->a[62309] = anon_sym_LT;
	v->a[62310] = anon_sym_GT;
	v->a[62311] = anon_sym_GT_GT;
	v->a[62312] = anon_sym_AMP_GT;
	v->a[62313] = anon_sym_AMP_GT_GT;
	v->a[62314] = anon_sym_LT_AMP;
	v->a[62315] = anon_sym_GT_AMP;
	v->a[62316] = anon_sym_GT_PIPE;
	v->a[62317] = anon_sym_LT_AMP_DASH;
	v->a[62318] = anon_sym_GT_AMP_DASH;
	v->a[62319] = anon_sym_LT_LT;
	small_parse_table_3116(v);
}

void	small_parse_table_3116(t_small_parse_table_array *v)
{
	v->a[62320] = anon_sym_LT_LT_DASH;
	v->a[62321] = anon_sym_AMP;
	v->a[62322] = aux_sym_concatenation_token1;
	v->a[62323] = anon_sym_BQUOTE;
	v->a[62324] = anon_sym_SEMI;
	v->a[62325] = 12;
	v->a[62326] = actions(3);
	v->a[62327] = 1;
	v->a[62328] = sym_comment;
	v->a[62329] = actions(766);
	v->a[62330] = 1;
	v->a[62331] = anon_sym_PIPE;
	v->a[62332] = actions(840);
	v->a[62333] = 1;
	v->a[62334] = ts_builtin_sym_end;
	v->a[62335] = actions(2017);
	v->a[62336] = 1;
	v->a[62337] = aux_sym_heredoc_redirect_token1;
	v->a[62338] = actions(2019);
	v->a[62339] = 1;
	small_parse_table_3117(v);
}

void	small_parse_table_3117(t_small_parse_table_array *v)
{
	v->a[62340] = sym_file_descriptor;
	v->a[62341] = state(788);
	v->a[62342] = 1;
	v->a[62343] = sym_terminator;
	v->a[62344] = actions(804);
	v->a[62345] = 2;
	v->a[62346] = anon_sym_LT_LT;
	v->a[62347] = anon_sym_LT_LT_DASH;
	v->a[62348] = actions(835);
	v->a[62349] = 2;
	v->a[62350] = anon_sym_AMP_AMP;
	v->a[62351] = anon_sym_PIPE_PIPE;
	v->a[62352] = actions(2015);
	v->a[62353] = 2;
	v->a[62354] = anon_sym_LT_AMP_DASH;
	v->a[62355] = anon_sym_GT_AMP_DASH;
	v->a[62356] = actions(833);
	v->a[62357] = 3;
	v->a[62358] = anon_sym_SEMI_SEMI;
	v->a[62359] = anon_sym_AMP;
	small_parse_table_3118(v);
}

void	small_parse_table_3118(t_small_parse_table_array *v)
{
	v->a[62360] = anon_sym_SEMI;
	v->a[62361] = state(1133);
	v->a[62362] = 3;
	v->a[62363] = sym_file_redirect;
	v->a[62364] = sym_heredoc_redirect;
	v->a[62365] = aux_sym_redirected_statement_repeat1;
	v->a[62366] = actions(2013);
	v->a[62367] = 8;
	v->a[62368] = anon_sym_LT;
	v->a[62369] = anon_sym_GT;
	v->a[62370] = anon_sym_GT_GT;
	v->a[62371] = anon_sym_AMP_GT;
	v->a[62372] = anon_sym_AMP_GT_GT;
	v->a[62373] = anon_sym_LT_AMP;
	v->a[62374] = anon_sym_GT_AMP;
	v->a[62375] = anon_sym_GT_PIPE;
	v->a[62376] = 6;
	v->a[62377] = actions(3);
	v->a[62378] = 1;
	v->a[62379] = sym_comment;
	small_parse_table_3119(v);
}

void	small_parse_table_3119(t_small_parse_table_array *v)
{
	v->a[62380] = actions(2035);
	v->a[62381] = 1;
	v->a[62382] = aux_sym_concatenation_token1;
	v->a[62383] = actions(2037);
	v->a[62384] = 1;
	v->a[62385] = sym__concat;
	v->a[62386] = state(893);
	v->a[62387] = 1;
	v->a[62388] = aux_sym_concatenation_repeat1;
	v->a[62389] = actions(961);
	v->a[62390] = 3;
	v->a[62391] = sym_file_descriptor;
	v->a[62392] = sym_variable_name;
	v->a[62393] = aux_sym_heredoc_redirect_token1;
	v->a[62394] = actions(957);
	v->a[62395] = 19;
	v->a[62396] = anon_sym_PIPE;
	v->a[62397] = anon_sym_RPAREN;
	v->a[62398] = anon_sym_SEMI_SEMI;
	v->a[62399] = anon_sym_AMP_AMP;
	small_parse_table_3120(v);
}

/* EOF small_parse_table_623.c */
