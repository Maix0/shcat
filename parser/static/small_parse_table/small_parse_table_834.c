/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_834.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4170(t_small_parse_table_array *v)
{
	v->a[83400] = anon_sym_AMP_GT;
	v->a[83401] = anon_sym_LT_AMP;
	v->a[83402] = anon_sym_GT_AMP;
	v->a[83403] = 9;
	v->a[83404] = actions(861);
	v->a[83405] = 1;
	v->a[83406] = anon_sym_LT_LT;
	v->a[83407] = actions(1094);
	v->a[83408] = 1;
	v->a[83409] = sym_comment;
	v->a[83410] = actions(2075);
	v->a[83411] = 1;
	v->a[83412] = sym_file_descriptor;
	v->a[83413] = actions(3076);
	v->a[83414] = 1;
	v->a[83415] = anon_sym_LT_LT_DASH;
	v->a[83416] = actions(3094);
	v->a[83417] = 2;
	v->a[83418] = anon_sym_AMP_AMP;
	v->a[83419] = anon_sym_PIPE_PIPE;
	small_parse_table_4171(v);
}

void	small_parse_table_4171(t_small_parse_table_array *v)
{
	v->a[83420] = actions(3098);
	v->a[83421] = 2;
	v->a[83422] = anon_sym_LT_AMP_DASH;
	v->a[83423] = anon_sym_GT_AMP_DASH;
	v->a[83424] = actions(3096);
	v->a[83425] = 3;
	v->a[83426] = anon_sym_GT_GT;
	v->a[83427] = anon_sym_AMP_GT_GT;
	v->a[83428] = anon_sym_GT_PIPE;
	v->a[83429] = state(1289);
	v->a[83430] = 3;
	v->a[83431] = sym_file_redirect;
	v->a[83432] = sym_heredoc_redirect;
	v->a[83433] = aux_sym_redirected_statement_repeat1;
	v->a[83434] = actions(2065);
	v->a[83435] = 5;
	v->a[83436] = anon_sym_LT;
	v->a[83437] = anon_sym_GT;
	v->a[83438] = anon_sym_AMP_GT;
	v->a[83439] = anon_sym_LT_AMP;
	small_parse_table_4172(v);
}

void	small_parse_table_4172(t_small_parse_table_array *v)
{
	v->a[83440] = anon_sym_GT_AMP;
	v->a[83441] = 3;
	v->a[83442] = actions(1094);
	v->a[83443] = 1;
	v->a[83444] = sym_comment;
	v->a[83445] = actions(1102);
	v->a[83446] = 7;
	v->a[83447] = anon_sym_PIPE;
	v->a[83448] = anon_sym_LT;
	v->a[83449] = anon_sym_GT;
	v->a[83450] = anon_sym_AMP_GT;
	v->a[83451] = anon_sym_LT_AMP;
	v->a[83452] = anon_sym_GT_AMP;
	v->a[83453] = anon_sym_LT_LT;
	v->a[83454] = actions(1100);
	v->a[83455] = 11;
	v->a[83456] = sym_file_descriptor;
	v->a[83457] = sym__concat;
	v->a[83458] = anon_sym_AMP_AMP;
	v->a[83459] = anon_sym_PIPE_PIPE;
	small_parse_table_4173(v);
}

void	small_parse_table_4173(t_small_parse_table_array *v)
{
	v->a[83460] = anon_sym_GT_GT;
	v->a[83461] = anon_sym_AMP_GT_GT;
	v->a[83462] = anon_sym_GT_PIPE;
	v->a[83463] = anon_sym_LT_AMP_DASH;
	v->a[83464] = anon_sym_GT_AMP_DASH;
	v->a[83465] = anon_sym_LT_LT_DASH;
	v->a[83466] = aux_sym_concatenation_token1;
	v->a[83467] = 9;
	v->a[83468] = actions(861);
	v->a[83469] = 1;
	v->a[83470] = anon_sym_LT_LT;
	v->a[83471] = actions(1094);
	v->a[83472] = 1;
	v->a[83473] = sym_comment;
	v->a[83474] = actions(2964);
	v->a[83475] = 1;
	v->a[83476] = sym_file_descriptor;
	v->a[83477] = actions(3076);
	v->a[83478] = 1;
	v->a[83479] = anon_sym_LT_LT_DASH;
	small_parse_table_4174(v);
}

void	small_parse_table_4174(t_small_parse_table_array *v)
{
	v->a[83480] = actions(3100);
	v->a[83481] = 2;
	v->a[83482] = anon_sym_AMP_AMP;
	v->a[83483] = anon_sym_PIPE_PIPE;
	v->a[83484] = actions(3104);
	v->a[83485] = 2;
	v->a[83486] = anon_sym_LT_AMP_DASH;
	v->a[83487] = anon_sym_GT_AMP_DASH;
	v->a[83488] = actions(3102);
	v->a[83489] = 3;
	v->a[83490] = anon_sym_GT_GT;
	v->a[83491] = anon_sym_AMP_GT_GT;
	v->a[83492] = anon_sym_GT_PIPE;
	v->a[83493] = state(1546);
	v->a[83494] = 3;
	v->a[83495] = sym_file_redirect;
	v->a[83496] = sym_heredoc_redirect;
	v->a[83497] = aux_sym_redirected_statement_repeat1;
	v->a[83498] = actions(2960);
	v->a[83499] = 5;
	small_parse_table_4175(v);
}

/* EOF small_parse_table_834.c */
