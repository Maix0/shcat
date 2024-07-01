/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_633.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3165(t_small_parse_table_array *v)
{
	v->a[63300] = ts_builtin_sym_end;
	v->a[63301] = aux_sym_heredoc_redirect_token1;
	v->a[63302] = state(1160);
	v->a[63303] = 3;
	v->a[63304] = sym_file_redirect;
	v->a[63305] = sym_heredoc_redirect;
	v->a[63306] = aux_sym_redirected_statement_repeat1;
	v->a[63307] = actions(935);
	v->a[63308] = 15;
	v->a[63309] = anon_sym_SEMI_SEMI;
	v->a[63310] = anon_sym_AMP_AMP;
	v->a[63311] = anon_sym_PIPE_PIPE;
	v->a[63312] = anon_sym_LT;
	v->a[63313] = anon_sym_GT;
	v->a[63314] = anon_sym_GT_GT;
	v->a[63315] = anon_sym_LT_AMP;
	v->a[63316] = anon_sym_GT_AMP;
	v->a[63317] = anon_sym_GT_PIPE;
	v->a[63318] = anon_sym_LT_AMP_DASH;
	v->a[63319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3166(v);
}

void	small_parse_table_3166(t_small_parse_table_array *v)
{
	v->a[63320] = anon_sym_LT_LT;
	v->a[63321] = anon_sym_LT_LT_DASH;
	v->a[63322] = anon_sym_AMP;
	v->a[63323] = anon_sym_SEMI;
	v->a[63324] = 6;
	v->a[63325] = actions(3);
	v->a[63326] = 1;
	v->a[63327] = sym_comment;
	v->a[63328] = actions(2057);
	v->a[63329] = 1;
	v->a[63330] = aux_sym_concatenation_token1;
	v->a[63331] = actions(2059);
	v->a[63332] = 1;
	v->a[63333] = sym__concat;
	v->a[63334] = state(1148);
	v->a[63335] = 1;
	v->a[63336] = aux_sym_concatenation_repeat1;
	v->a[63337] = actions(602);
	v->a[63338] = 2;
	v->a[63339] = sym_file_descriptor;
	small_parse_table_3167(v);
}

void	small_parse_table_3167(t_small_parse_table_array *v)
{
	v->a[63340] = aux_sym_heredoc_redirect_token1;
	v->a[63341] = actions(604);
	v->a[63342] = 17;
	v->a[63343] = anon_sym_PIPE;
	v->a[63344] = anon_sym_SEMI_SEMI;
	v->a[63345] = anon_sym_AMP_AMP;
	v->a[63346] = anon_sym_PIPE_PIPE;
	v->a[63347] = anon_sym_LT;
	v->a[63348] = anon_sym_GT;
	v->a[63349] = anon_sym_GT_GT;
	v->a[63350] = anon_sym_LT_AMP;
	v->a[63351] = anon_sym_GT_AMP;
	v->a[63352] = anon_sym_GT_PIPE;
	v->a[63353] = anon_sym_LT_AMP_DASH;
	v->a[63354] = anon_sym_GT_AMP_DASH;
	v->a[63355] = anon_sym_LT_LT;
	v->a[63356] = anon_sym_LT_LT_DASH;
	v->a[63357] = anon_sym_AMP;
	v->a[63358] = anon_sym_BQUOTE;
	v->a[63359] = anon_sym_SEMI;
	small_parse_table_3168(v);
}

void	small_parse_table_3168(t_small_parse_table_array *v)
{
	v->a[63360] = 3;
	v->a[63361] = actions(3);
	v->a[63362] = 1;
	v->a[63363] = sym_comment;
	v->a[63364] = actions(970);
	v->a[63365] = 4;
	v->a[63366] = sym_file_descriptor;
	v->a[63367] = sym__concat;
	v->a[63368] = sym_variable_name;
	v->a[63369] = aux_sym_heredoc_redirect_token1;
	v->a[63370] = actions(968);
	v->a[63371] = 18;
	v->a[63372] = anon_sym_esac;
	v->a[63373] = anon_sym_PIPE;
	v->a[63374] = anon_sym_SEMI_SEMI;
	v->a[63375] = anon_sym_AMP_AMP;
	v->a[63376] = anon_sym_PIPE_PIPE;
	v->a[63377] = anon_sym_LT;
	v->a[63378] = anon_sym_GT;
	v->a[63379] = anon_sym_GT_GT;
	small_parse_table_3169(v);
}

void	small_parse_table_3169(t_small_parse_table_array *v)
{
	v->a[63380] = anon_sym_LT_AMP;
	v->a[63381] = anon_sym_GT_AMP;
	v->a[63382] = anon_sym_GT_PIPE;
	v->a[63383] = anon_sym_LT_AMP_DASH;
	v->a[63384] = anon_sym_GT_AMP_DASH;
	v->a[63385] = anon_sym_LT_LT;
	v->a[63386] = anon_sym_LT_LT_DASH;
	v->a[63387] = anon_sym_AMP;
	v->a[63388] = aux_sym_concatenation_token1;
	v->a[63389] = anon_sym_SEMI;
	v->a[63390] = 3;
	v->a[63391] = actions(3);
	v->a[63392] = 1;
	v->a[63393] = sym_comment;
	v->a[63394] = actions(939);
	v->a[63395] = 4;
	v->a[63396] = sym_file_descriptor;
	v->a[63397] = sym__concat;
	v->a[63398] = sym_variable_name;
	v->a[63399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3170(v);
}

/* EOF small_parse_table_633.c */
