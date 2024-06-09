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
	v->a[77500] = actions(2641);
	v->a[77501] = 2;
	v->a[77502] = sym_raw_string;
	v->a[77503] = sym_word;
	v->a[77504] = state(1219);
	v->a[77505] = 2;
	v->a[77506] = sym_concatenation;
	v->a[77507] = aux_sym_for_statement_repeat1;
	v->a[77508] = state(1503);
	v->a[77509] = 6;
	v->a[77510] = sym_arithmetic_expansion;
	v->a[77511] = sym_string;
	v->a[77512] = sym_number;
	v->a[77513] = sym_simple_expansion;
	v->a[77514] = sym_expansion;
	v->a[77515] = sym_command_substitution;
	v->a[77516] = 12;
	v->a[77517] = actions(3);
	v->a[77518] = 1;
	v->a[77519] = sym_comment;
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = actions(2873);
	v->a[77521] = 1;
	v->a[77522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77523] = actions(2877);
	v->a[77524] = 1;
	v->a[77525] = anon_sym_DQUOTE;
	v->a[77526] = actions(2879);
	v->a[77527] = 1;
	v->a[77528] = aux_sym_number_token1;
	v->a[77529] = actions(2881);
	v->a[77530] = 1;
	v->a[77531] = aux_sym_number_token2;
	v->a[77532] = actions(2883);
	v->a[77533] = 1;
	v->a[77534] = anon_sym_DOLLAR_LBRACE;
	v->a[77535] = actions(2885);
	v->a[77536] = 1;
	v->a[77537] = anon_sym_DOLLAR_LPAREN;
	v->a[77538] = actions(2887);
	v->a[77539] = 1;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = anon_sym_BQUOTE;
	v->a[77541] = actions(3073);
	v->a[77542] = 1;
	v->a[77543] = sym__bare_dollar;
	v->a[77544] = actions(3148);
	v->a[77545] = 1;
	v->a[77546] = anon_sym_DOLLAR;
	v->a[77547] = actions(3071);
	v->a[77548] = 3;
	v->a[77549] = sym_raw_string;
	v->a[77550] = sym__comment_word;
	v->a[77551] = sym_word;
	v->a[77552] = state(956);
	v->a[77553] = 6;
	v->a[77554] = sym_arithmetic_expansion;
	v->a[77555] = sym_string;
	v->a[77556] = sym_number;
	v->a[77557] = sym_simple_expansion;
	v->a[77558] = sym_expansion;
	v->a[77559] = sym_command_substitution;
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = 8;
	v->a[77561] = actions(1404);
	v->a[77562] = 1;
	v->a[77563] = sym_comment;
	v->a[77564] = actions(3150);
	v->a[77565] = 1;
	v->a[77566] = sym_file_descriptor;
	v->a[77567] = actions(2466);
	v->a[77568] = 2;
	v->a[77569] = anon_sym_PIPE;
	v->a[77570] = anon_sym_LT_LT;
	v->a[77571] = actions(3044);
	v->a[77572] = 2;
	v->a[77573] = anon_sym_LT_AMP_DASH;
	v->a[77574] = anon_sym_GT_AMP_DASH;
	v->a[77575] = state(1422);
	v->a[77576] = 2;
	v->a[77577] = sym_file_redirect;
	v->a[77578] = aux_sym_redirected_statement_repeat2;
	v->a[77579] = actions(2468);
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = 3;
	v->a[77581] = anon_sym_AMP_AMP;
	v->a[77582] = anon_sym_PIPE_PIPE;
	v->a[77583] = anon_sym_LT_LT_DASH;
	v->a[77584] = actions(3042);
	v->a[77585] = 3;
	v->a[77586] = anon_sym_GT_GT;
	v->a[77587] = anon_sym_AMP_GT_GT;
	v->a[77588] = anon_sym_GT_PIPE;
	v->a[77589] = actions(3040);
	v->a[77590] = 5;
	v->a[77591] = anon_sym_LT;
	v->a[77592] = anon_sym_GT;
	v->a[77593] = anon_sym_AMP_GT;
	v->a[77594] = anon_sym_LT_AMP;
	v->a[77595] = anon_sym_GT_AMP;
	v->a[77596] = 12;
	v->a[77597] = actions(3);
	v->a[77598] = 1;
	v->a[77599] = sym_comment;
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
