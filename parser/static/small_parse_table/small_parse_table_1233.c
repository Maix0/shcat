/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1233.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6165(t_small_parse_table_array *v)
{
	v->a[123300] = actions(2945);
	v->a[123301] = 2;
	v->a[123302] = anon_sym_LT_LT;
	v->a[123303] = anon_sym_LT_LT_DASH;
	v->a[123304] = actions(3300);
	v->a[123305] = 2;
	v->a[123306] = anon_sym_AMP_AMP;
	v->a[123307] = anon_sym_PIPE_PIPE;
	v->a[123308] = actions(5968);
	v->a[123309] = 2;
	v->a[123310] = anon_sym_LT_AMP_DASH;
	v->a[123311] = anon_sym_GT_AMP_DASH;
	v->a[123312] = actions(3381);
	v->a[123313] = 3;
	v->a[123314] = anon_sym_SEMI_SEMI;
	v->a[123315] = anon_sym_AMP;
	v->a[123316] = anon_sym_SEMI;
	v->a[123317] = state(2295);
	v->a[123318] = 3;
	v->a[123319] = sym_file_redirect;
	small_parse_table_6166(v);
}

void	small_parse_table_6166(t_small_parse_table_array *v)
{
	v->a[123320] = sym_heredoc_redirect;
	v->a[123321] = aux_sym_redirected_statement_repeat1;
	v->a[123322] = actions(5966);
	v->a[123323] = 8;
	v->a[123324] = anon_sym_LT;
	v->a[123325] = anon_sym_GT;
	v->a[123326] = anon_sym_GT_GT;
	v->a[123327] = anon_sym_AMP_GT;
	v->a[123328] = anon_sym_AMP_GT_GT;
	v->a[123329] = anon_sym_LT_AMP;
	v->a[123330] = anon_sym_GT_AMP;
	v->a[123331] = anon_sym_GT_PIPE;
	v->a[123332] = 5;
	v->a[123333] = actions(3);
	v->a[123334] = 1;
	v->a[123335] = sym_comment;
	v->a[123336] = state(2593);
	v->a[123337] = 1;
	v->a[123338] = aux_sym_pipeline_repeat1;
	v->a[123339] = actions(5367);
	small_parse_table_6167(v);
}

void	small_parse_table_6167(t_small_parse_table_array *v)
{
	v->a[123340] = 2;
	v->a[123341] = sym_file_descriptor;
	v->a[123342] = aux_sym_heredoc_redirect_token1;
	v->a[123343] = actions(7086);
	v->a[123344] = 2;
	v->a[123345] = anon_sym_PIPE;
	v->a[123346] = anon_sym_PIPE_AMP;
	v->a[123347] = actions(5362);
	v->a[123348] = 17;
	v->a[123349] = anon_sym_SEMI_SEMI;
	v->a[123350] = anon_sym_AMP_AMP;
	v->a[123351] = anon_sym_PIPE_PIPE;
	v->a[123352] = anon_sym_LT;
	v->a[123353] = anon_sym_GT;
	v->a[123354] = anon_sym_GT_GT;
	v->a[123355] = anon_sym_AMP_GT;
	v->a[123356] = anon_sym_AMP_GT_GT;
	v->a[123357] = anon_sym_LT_AMP;
	v->a[123358] = anon_sym_GT_AMP;
	v->a[123359] = anon_sym_GT_PIPE;
	small_parse_table_6168(v);
}

void	small_parse_table_6168(t_small_parse_table_array *v)
{
	v->a[123360] = anon_sym_LT_AMP_DASH;
	v->a[123361] = anon_sym_GT_AMP_DASH;
	v->a[123362] = anon_sym_LT_LT;
	v->a[123363] = anon_sym_LT_LT_DASH;
	v->a[123364] = anon_sym_AMP;
	v->a[123365] = anon_sym_SEMI;
	v->a[123366] = 5;
	v->a[123367] = actions(57);
	v->a[123368] = 1;
	v->a[123369] = sym_comment;
	v->a[123370] = state(2594);
	v->a[123371] = 1;
	v->a[123372] = aux_sym_concatenation_repeat1;
	v->a[123373] = actions(7089);
	v->a[123374] = 2;
	v->a[123375] = sym__concat;
	v->a[123376] = aux_sym_concatenation_token1;
	v->a[123377] = actions(2652);
	v->a[123378] = 7;
	v->a[123379] = anon_sym_PIPE;
	small_parse_table_6169(v);
}

void	small_parse_table_6169(t_small_parse_table_array *v)
{
	v->a[123380] = anon_sym_LT;
	v->a[123381] = anon_sym_GT;
	v->a[123382] = anon_sym_AMP_GT;
	v->a[123383] = anon_sym_LT_AMP;
	v->a[123384] = anon_sym_GT_AMP;
	v->a[123385] = anon_sym_LT_LT;
	v->a[123386] = actions(2654);
	v->a[123387] = 11;
	v->a[123388] = sym_file_descriptor;
	v->a[123389] = sym_variable_name;
	v->a[123390] = anon_sym_PIPE_AMP;
	v->a[123391] = anon_sym_AMP_AMP;
	v->a[123392] = anon_sym_PIPE_PIPE;
	v->a[123393] = anon_sym_GT_GT;
	v->a[123394] = anon_sym_AMP_GT_GT;
	v->a[123395] = anon_sym_GT_PIPE;
	v->a[123396] = anon_sym_LT_AMP_DASH;
	v->a[123397] = anon_sym_GT_AMP_DASH;
	v->a[123398] = anon_sym_LT_LT_DASH;
	v->a[123399] = 6;
	small_parse_table_6170(v);
}

/* EOF small_parse_table_1233.c */
