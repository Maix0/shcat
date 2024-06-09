/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_713.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3565(t_small_parse_table_array *v)
{
	v->a[71300] = aux_sym_heredoc_redirect_token1;
	v->a[71301] = actions(2460);
	v->a[71302] = 1;
	v->a[71303] = sym_file_descriptor;
	v->a[71304] = actions(1062);
	v->a[71305] = 2;
	v->a[71306] = anon_sym_LT_LT;
	v->a[71307] = anon_sym_LT_LT_DASH;
	v->a[71308] = actions(1077);
	v->a[71309] = 2;
	v->a[71310] = anon_sym_AMP;
	v->a[71311] = anon_sym_SEMI;
	v->a[71312] = actions(1093);
	v->a[71313] = 2;
	v->a[71314] = anon_sym_AMP_AMP;
	v->a[71315] = anon_sym_PIPE_PIPE;
	v->a[71316] = actions(2456);
	v->a[71317] = 2;
	v->a[71318] = anon_sym_LT_AMP_DASH;
	v->a[71319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3566(v);
}

void	small_parse_table_3566(t_small_parse_table_array *v)
{
	v->a[71320] = state(1160);
	v->a[71321] = 3;
	v->a[71322] = sym_file_redirect;
	v->a[71323] = sym_heredoc_redirect;
	v->a[71324] = aux_sym_redirected_statement_repeat1;
	v->a[71325] = actions(2454);
	v->a[71326] = 8;
	v->a[71327] = anon_sym_LT;
	v->a[71328] = anon_sym_GT;
	v->a[71329] = anon_sym_GT_GT;
	v->a[71330] = anon_sym_AMP_GT;
	v->a[71331] = anon_sym_AMP_GT_GT;
	v->a[71332] = anon_sym_LT_AMP;
	v->a[71333] = anon_sym_GT_AMP;
	v->a[71334] = anon_sym_GT_PIPE;
	v->a[71335] = 5;
	v->a[71336] = actions(3);
	v->a[71337] = 1;
	v->a[71338] = sym_comment;
	v->a[71339] = actions(2657);
	small_parse_table_3567(v);
}

void	small_parse_table_3567(t_small_parse_table_array *v)
{
	v->a[71340] = 1;
	v->a[71341] = anon_sym_PIPE;
	v->a[71342] = state(1220);
	v->a[71343] = 1;
	v->a[71344] = aux_sym_pipeline_repeat1;
	v->a[71345] = actions(2659);
	v->a[71346] = 2;
	v->a[71347] = sym_file_descriptor;
	v->a[71348] = aux_sym_heredoc_redirect_token1;
	v->a[71349] = actions(2655);
	v->a[71350] = 18;
	v->a[71351] = anon_sym_esac;
	v->a[71352] = anon_sym_SEMI_SEMI;
	v->a[71353] = anon_sym_AMP_AMP;
	v->a[71354] = anon_sym_PIPE_PIPE;
	v->a[71355] = anon_sym_LT;
	v->a[71356] = anon_sym_GT;
	v->a[71357] = anon_sym_GT_GT;
	v->a[71358] = anon_sym_AMP_GT;
	v->a[71359] = anon_sym_AMP_GT_GT;
	small_parse_table_3568(v);
}

void	small_parse_table_3568(t_small_parse_table_array *v)
{
	v->a[71360] = anon_sym_LT_AMP;
	v->a[71361] = anon_sym_GT_AMP;
	v->a[71362] = anon_sym_GT_PIPE;
	v->a[71363] = anon_sym_LT_AMP_DASH;
	v->a[71364] = anon_sym_GT_AMP_DASH;
	v->a[71365] = anon_sym_LT_LT;
	v->a[71366] = anon_sym_LT_LT_DASH;
	v->a[71367] = anon_sym_AMP;
	v->a[71368] = anon_sym_SEMI;
	v->a[71369] = 5;
	v->a[71370] = actions(3);
	v->a[71371] = 1;
	v->a[71372] = sym_comment;
	v->a[71373] = actions(2661);
	v->a[71374] = 1;
	v->a[71375] = anon_sym_PIPE;
	v->a[71376] = state(1235);
	v->a[71377] = 1;
	v->a[71378] = aux_sym_pipeline_repeat1;
	v->a[71379] = actions(2659);
	small_parse_table_3569(v);
}

void	small_parse_table_3569(t_small_parse_table_array *v)
{
	v->a[71380] = 2;
	v->a[71381] = sym_file_descriptor;
	v->a[71382] = aux_sym_heredoc_redirect_token1;
	v->a[71383] = actions(2655);
	v->a[71384] = 18;
	v->a[71385] = anon_sym_SEMI_SEMI;
	v->a[71386] = anon_sym_AMP_AMP;
	v->a[71387] = anon_sym_PIPE_PIPE;
	v->a[71388] = anon_sym_LT;
	v->a[71389] = anon_sym_GT;
	v->a[71390] = anon_sym_GT_GT;
	v->a[71391] = anon_sym_AMP_GT;
	v->a[71392] = anon_sym_AMP_GT_GT;
	v->a[71393] = anon_sym_LT_AMP;
	v->a[71394] = anon_sym_GT_AMP;
	v->a[71395] = anon_sym_GT_PIPE;
	v->a[71396] = anon_sym_LT_AMP_DASH;
	v->a[71397] = anon_sym_GT_AMP_DASH;
	v->a[71398] = anon_sym_LT_LT;
	v->a[71399] = anon_sym_LT_LT_DASH;
	small_parse_table_3570(v);
}

/* EOF small_parse_table_713.c */
