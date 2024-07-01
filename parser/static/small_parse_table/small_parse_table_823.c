/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_823.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4115(t_small_parse_table_array *v)
{
	v->a[82300] = 1;
	v->a[82301] = anon_sym_DQUOTE;
	v->a[82302] = actions(3193);
	v->a[82303] = 2;
	v->a[82304] = aux_sym__simple_variable_name_token1;
	v->a[82305] = aux_sym__multiline_variable_name_token1;
	v->a[82306] = actions(3187);
	v->a[82307] = 9;
	v->a[82308] = anon_sym_BANG;
	v->a[82309] = anon_sym_DASH;
	v->a[82310] = anon_sym_STAR;
	v->a[82311] = anon_sym_QMARK;
	v->a[82312] = anon_sym_DOLLAR;
	v->a[82313] = anon_sym_POUND;
	v->a[82314] = anon_sym_AT;
	v->a[82315] = anon_sym_0;
	v->a[82316] = anon_sym__;
	v->a[82317] = 3;
	v->a[82318] = actions(3);
	v->a[82319] = 1;
	small_parse_table_4116(v);
}

void	small_parse_table_4116(t_small_parse_table_array *v)
{
	v->a[82320] = sym_comment;
	v->a[82321] = actions(1283);
	v->a[82322] = 3;
	v->a[82323] = sym_file_descriptor;
	v->a[82324] = sym__concat;
	v->a[82325] = aux_sym_heredoc_redirect_token1;
	v->a[82326] = actions(1285);
	v->a[82327] = 11;
	v->a[82328] = anon_sym_AMP_AMP;
	v->a[82329] = anon_sym_PIPE_PIPE;
	v->a[82330] = anon_sym_LT;
	v->a[82331] = anon_sym_GT;
	v->a[82332] = anon_sym_GT_GT;
	v->a[82333] = anon_sym_LT_AMP;
	v->a[82334] = anon_sym_GT_AMP;
	v->a[82335] = anon_sym_GT_PIPE;
	v->a[82336] = anon_sym_LT_AMP_DASH;
	v->a[82337] = anon_sym_GT_AMP_DASH;
	v->a[82338] = aux_sym_concatenation_token1;
	v->a[82339] = 3;
	small_parse_table_4117(v);
}

void	small_parse_table_4117(t_small_parse_table_array *v)
{
	v->a[82340] = actions(870);
	v->a[82341] = 1;
	v->a[82342] = sym_comment;
	v->a[82343] = actions(2270);
	v->a[82344] = 6;
	v->a[82345] = anon_sym_PIPE;
	v->a[82346] = anon_sym_LT;
	v->a[82347] = anon_sym_GT;
	v->a[82348] = anon_sym_LT_AMP;
	v->a[82349] = anon_sym_GT_AMP;
	v->a[82350] = anon_sym_LT_LT;
	v->a[82351] = actions(2268);
	v->a[82352] = 8;
	v->a[82353] = sym_file_descriptor;
	v->a[82354] = anon_sym_AMP_AMP;
	v->a[82355] = anon_sym_PIPE_PIPE;
	v->a[82356] = anon_sym_GT_GT;
	v->a[82357] = anon_sym_GT_PIPE;
	v->a[82358] = anon_sym_LT_AMP_DASH;
	v->a[82359] = anon_sym_GT_AMP_DASH;
	small_parse_table_4118(v);
}

void	small_parse_table_4118(t_small_parse_table_array *v)
{
	v->a[82360] = anon_sym_LT_LT_DASH;
	v->a[82361] = 7;
	v->a[82362] = actions(3);
	v->a[82363] = 1;
	v->a[82364] = sym_comment;
	v->a[82365] = actions(2255);
	v->a[82366] = 1;
	v->a[82367] = aux_sym_heredoc_redirect_token1;
	v->a[82368] = actions(3235);
	v->a[82369] = 1;
	v->a[82370] = sym_file_descriptor;
	v->a[82371] = actions(2247);
	v->a[82372] = 2;
	v->a[82373] = anon_sym_AMP_AMP;
	v->a[82374] = anon_sym_PIPE_PIPE;
	v->a[82375] = actions(3232);
	v->a[82376] = 2;
	v->a[82377] = anon_sym_LT_AMP_DASH;
	v->a[82378] = anon_sym_GT_AMP_DASH;
	v->a[82379] = state(1670);
	small_parse_table_4119(v);
}

void	small_parse_table_4119(t_small_parse_table_array *v)
{
	v->a[82380] = 2;
	v->a[82381] = sym_file_redirect;
	v->a[82382] = aux_sym_redirected_statement_repeat2;
	v->a[82383] = actions(3229);
	v->a[82384] = 6;
	v->a[82385] = anon_sym_LT;
	v->a[82386] = anon_sym_GT;
	v->a[82387] = anon_sym_GT_GT;
	v->a[82388] = anon_sym_LT_AMP;
	v->a[82389] = anon_sym_GT_AMP;
	v->a[82390] = anon_sym_GT_PIPE;
	v->a[82391] = 3;
	v->a[82392] = actions(870);
	v->a[82393] = 1;
	v->a[82394] = sym_comment;
	v->a[82395] = actions(2359);
	v->a[82396] = 6;
	v->a[82397] = anon_sym_PIPE;
	v->a[82398] = anon_sym_LT;
	v->a[82399] = anon_sym_GT;
	small_parse_table_4120(v);
}

/* EOF small_parse_table_823.c */
