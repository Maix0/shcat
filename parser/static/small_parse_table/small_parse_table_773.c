/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_773.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3865(t_small_parse_table_array *v)
{
	v->a[77300] = anon_sym_LT;
	v->a[77301] = anon_sym_GT;
	v->a[77302] = anon_sym_AMP_GT;
	v->a[77303] = anon_sym_LT_AMP;
	v->a[77304] = anon_sym_GT_AMP;
	v->a[77305] = 8;
	v->a[77306] = actions(1074);
	v->a[77307] = 1;
	v->a[77308] = sym_comment;
	v->a[77309] = actions(2667);
	v->a[77310] = 1;
	v->a[77311] = sym_file_descriptor;
	v->a[77312] = actions(2210);
	v->a[77313] = 2;
	v->a[77314] = anon_sym_PIPE;
	v->a[77315] = anon_sym_LT_LT;
	v->a[77316] = actions(2664);
	v->a[77317] = 2;
	v->a[77318] = anon_sym_LT_AMP_DASH;
	v->a[77319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3866(v);
}

void	small_parse_table_3866(t_small_parse_table_array *v)
{
	v->a[77320] = state(1448);
	v->a[77321] = 2;
	v->a[77322] = sym_file_redirect;
	v->a[77323] = aux_sym_redirected_statement_repeat2;
	v->a[77324] = actions(2218);
	v->a[77325] = 3;
	v->a[77326] = anon_sym_AMP_AMP;
	v->a[77327] = anon_sym_PIPE_PIPE;
	v->a[77328] = anon_sym_LT_LT_DASH;
	v->a[77329] = actions(2661);
	v->a[77330] = 3;
	v->a[77331] = anon_sym_GT_GT;
	v->a[77332] = anon_sym_AMP_GT_GT;
	v->a[77333] = anon_sym_GT_PIPE;
	v->a[77334] = actions(2658);
	v->a[77335] = 5;
	v->a[77336] = anon_sym_LT;
	v->a[77337] = anon_sym_GT;
	v->a[77338] = anon_sym_AMP_GT;
	v->a[77339] = anon_sym_LT_AMP;
	small_parse_table_3867(v);
}

void	small_parse_table_3867(t_small_parse_table_array *v)
{
	v->a[77340] = anon_sym_GT_AMP;
	v->a[77341] = 5;
	v->a[77342] = actions(3);
	v->a[77343] = 1;
	v->a[77344] = sym_comment;
	v->a[77345] = actions(2670);
	v->a[77346] = 1;
	v->a[77347] = anon_sym_PIPE;
	v->a[77348] = state(1449);
	v->a[77349] = 1;
	v->a[77350] = aux_sym_pipeline_repeat1;
	v->a[77351] = actions(2186);
	v->a[77352] = 2;
	v->a[77353] = sym_file_descriptor;
	v->a[77354] = aux_sym_heredoc_redirect_token1;
	v->a[77355] = actions(2191);
	v->a[77356] = 14;
	v->a[77357] = anon_sym_AMP_AMP;
	v->a[77358] = anon_sym_PIPE_PIPE;
	v->a[77359] = anon_sym_LT;
	small_parse_table_3868(v);
}

void	small_parse_table_3868(t_small_parse_table_array *v)
{
	v->a[77360] = anon_sym_GT;
	v->a[77361] = anon_sym_GT_GT;
	v->a[77362] = anon_sym_AMP_GT;
	v->a[77363] = anon_sym_AMP_GT_GT;
	v->a[77364] = anon_sym_LT_AMP;
	v->a[77365] = anon_sym_GT_AMP;
	v->a[77366] = anon_sym_GT_PIPE;
	v->a[77367] = anon_sym_LT_AMP_DASH;
	v->a[77368] = anon_sym_GT_AMP_DASH;
	v->a[77369] = anon_sym_LT_LT;
	v->a[77370] = anon_sym_LT_LT_DASH;
	v->a[77371] = 3;
	v->a[77372] = actions(1074);
	v->a[77373] = 1;
	v->a[77374] = sym_comment;
	v->a[77375] = actions(983);
	v->a[77376] = 7;
	v->a[77377] = anon_sym_PIPE;
	v->a[77378] = anon_sym_LT;
	v->a[77379] = anon_sym_GT;
	small_parse_table_3869(v);
}

void	small_parse_table_3869(t_small_parse_table_array *v)
{
	v->a[77380] = anon_sym_AMP_GT;
	v->a[77381] = anon_sym_LT_AMP;
	v->a[77382] = anon_sym_GT_AMP;
	v->a[77383] = anon_sym_LT_LT;
	v->a[77384] = actions(988);
	v->a[77385] = 11;
	v->a[77386] = sym_file_descriptor;
	v->a[77387] = sym__concat;
	v->a[77388] = anon_sym_AMP_AMP;
	v->a[77389] = anon_sym_PIPE_PIPE;
	v->a[77390] = anon_sym_GT_GT;
	v->a[77391] = anon_sym_AMP_GT_GT;
	v->a[77392] = anon_sym_GT_PIPE;
	v->a[77393] = anon_sym_LT_AMP_DASH;
	v->a[77394] = anon_sym_GT_AMP_DASH;
	v->a[77395] = anon_sym_LT_LT_DASH;
	v->a[77396] = aux_sym_concatenation_token1;
	v->a[77397] = 3;
	v->a[77398] = actions(1074);
	v->a[77399] = 1;
	small_parse_table_3870(v);
}

/* EOF small_parse_table_773.c */
