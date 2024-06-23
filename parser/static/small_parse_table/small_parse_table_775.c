/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_775.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3875(t_small_parse_table_array *v)
{
	v->a[77500] = anon_sym_AMP_GT;
	v->a[77501] = anon_sym_AMP_GT_GT;
	v->a[77502] = anon_sym_LT_AMP;
	v->a[77503] = anon_sym_GT_AMP;
	v->a[77504] = anon_sym_GT_PIPE;
	v->a[77505] = anon_sym_LT_AMP_DASH;
	v->a[77506] = anon_sym_GT_AMP_DASH;
	v->a[77507] = anon_sym_LT_LT;
	v->a[77508] = anon_sym_LT_LT_DASH;
	v->a[77509] = anon_sym_AMP;
	v->a[77510] = anon_sym_BQUOTE;
	v->a[77511] = anon_sym_SEMI;
	v->a[77512] = 11;
	v->a[77513] = actions(3);
	v->a[77514] = 1;
	v->a[77515] = sym_comment;
	v->a[77516] = actions(807);
	v->a[77517] = 1;
	v->a[77518] = anon_sym_PIPE;
	v->a[77519] = actions(943);
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = 1;
	v->a[77521] = anon_sym_SEMI_SEMI;
	v->a[77522] = actions(2081);
	v->a[77523] = 1;
	v->a[77524] = aux_sym_heredoc_redirect_token1;
	v->a[77525] = actions(2602);
	v->a[77526] = 1;
	v->a[77527] = sym_file_descriptor;
	v->a[77528] = actions(861);
	v->a[77529] = 2;
	v->a[77530] = anon_sym_LT_LT;
	v->a[77531] = anon_sym_LT_LT_DASH;
	v->a[77532] = actions(945);
	v->a[77533] = 2;
	v->a[77534] = anon_sym_AMP;
	v->a[77535] = anon_sym_SEMI;
	v->a[77536] = actions(965);
	v->a[77537] = 2;
	v->a[77538] = anon_sym_AMP_AMP;
	v->a[77539] = anon_sym_PIPE_PIPE;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = actions(2598);
	v->a[77541] = 2;
	v->a[77542] = anon_sym_LT_AMP_DASH;
	v->a[77543] = anon_sym_GT_AMP_DASH;
	v->a[77544] = state(1322);
	v->a[77545] = 3;
	v->a[77546] = sym_file_redirect;
	v->a[77547] = sym_heredoc_redirect;
	v->a[77548] = aux_sym_redirected_statement_repeat1;
	v->a[77549] = actions(2596);
	v->a[77550] = 8;
	v->a[77551] = anon_sym_LT;
	v->a[77552] = anon_sym_GT;
	v->a[77553] = anon_sym_GT_GT;
	v->a[77554] = anon_sym_AMP_GT;
	v->a[77555] = anon_sym_AMP_GT_GT;
	v->a[77556] = anon_sym_LT_AMP;
	v->a[77557] = anon_sym_GT_AMP;
	v->a[77558] = anon_sym_GT_PIPE;
	v->a[77559] = 5;
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = actions(3);
	v->a[77561] = 1;
	v->a[77562] = sym_comment;
	v->a[77563] = actions(811);
	v->a[77564] = 1;
	v->a[77565] = sym_file_descriptor;
	v->a[77566] = actions(1034);
	v->a[77567] = 1;
	v->a[77568] = sym_variable_name;
	v->a[77569] = state(1199);
	v->a[77570] = 2;
	v->a[77571] = sym_variable_assignment;
	v->a[77572] = aux_sym__variable_assignments_repeat1;
	v->a[77573] = actions(805);
	v->a[77574] = 19;
	v->a[77575] = anon_sym_LT;
	v->a[77576] = anon_sym_GT;
	v->a[77577] = anon_sym_GT_GT;
	v->a[77578] = anon_sym_AMP_GT;
	v->a[77579] = anon_sym_AMP_GT_GT;
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = anon_sym_LT_AMP;
	v->a[77581] = anon_sym_GT_AMP;
	v->a[77582] = anon_sym_GT_PIPE;
	v->a[77583] = anon_sym_LT_AMP_DASH;
	v->a[77584] = anon_sym_GT_AMP_DASH;
	v->a[77585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77586] = anon_sym_DOLLAR;
	v->a[77587] = anon_sym_DQUOTE;
	v->a[77588] = sym_raw_string;
	v->a[77589] = sym_number;
	v->a[77590] = anon_sym_DOLLAR_LBRACE;
	v->a[77591] = anon_sym_DOLLAR_LPAREN;
	v->a[77592] = anon_sym_BQUOTE;
	v->a[77593] = sym_word;
	v->a[77594] = 3;
	v->a[77595] = actions(3);
	v->a[77596] = 1;
	v->a[77597] = sym_comment;
	v->a[77598] = actions(2872);
	v->a[77599] = 3;
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
