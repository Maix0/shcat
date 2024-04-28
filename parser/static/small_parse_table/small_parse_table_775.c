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
	v->a[77500] = anon_sym_GT_PIPE;
	v->a[77501] = anon_sym_LT_AMP_DASH;
	v->a[77502] = anon_sym_GT_AMP_DASH;
	v->a[77503] = anon_sym_LT_LT_DASH;
	v->a[77504] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77505] = anon_sym_DOLLAR_LBRACK;
	v->a[77506] = anon_sym_DOLLAR;
	v->a[77507] = sym__special_character;
	v->a[77508] = anon_sym_DQUOTE;
	v->a[77509] = sym_raw_string;
	v->a[77510] = sym_ansi_c_string;
	v->a[77511] = aux_sym_number_token1;
	v->a[77512] = aux_sym_number_token2;
	v->a[77513] = anon_sym_DOLLAR_LBRACE;
	v->a[77514] = anon_sym_DOLLAR_LPAREN;
	v->a[77515] = anon_sym_BQUOTE;
	v->a[77516] = anon_sym_DOLLAR_BQUOTE;
	v->a[77517] = anon_sym_LT_LPAREN;
	v->a[77518] = anon_sym_GT_LPAREN;
	v->a[77519] = aux_sym__simple_variable_name_token1;
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = sym_word;
	v->a[77521] = 9;
	v->a[77522] = actions(71);
	v->a[77523] = 1;
	v->a[77524] = sym_comment;
	v->a[77525] = actions(5848);
	v->a[77526] = 1;
	v->a[77527] = anon_sym_DQUOTE;
	v->a[77528] = actions(5850);
	v->a[77529] = 1;
	v->a[77530] = anon_sym_DOLLAR_LBRACE;
	v->a[77531] = actions(5852);
	v->a[77532] = 1;
	v->a[77533] = anon_sym_DOLLAR_LPAREN;
	v->a[77534] = actions(5854);
	v->a[77535] = 1;
	v->a[77536] = anon_sym_BQUOTE;
	v->a[77537] = actions(5856);
	v->a[77538] = 1;
	v->a[77539] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = state(2862);
	v->a[77541] = 3;
	v->a[77542] = sym_string;
	v->a[77543] = sym_expansion;
	v->a[77544] = sym_command_substitution;
	v->a[77545] = actions(5435);
	v->a[77546] = 14;
	v->a[77547] = anon_sym_EQ;
	v->a[77548] = anon_sym_PIPE;
	v->a[77549] = anon_sym_CARET;
	v->a[77550] = anon_sym_AMP;
	v->a[77551] = anon_sym_LT;
	v->a[77552] = anon_sym_GT;
	v->a[77553] = anon_sym_LT_LT;
	v->a[77554] = anon_sym_GT_GT;
	v->a[77555] = anon_sym_PLUS;
	v->a[77556] = anon_sym_DASH;
	v->a[77557] = anon_sym_STAR;
	v->a[77558] = anon_sym_SLASH;
	v->a[77559] = anon_sym_PERCENT;
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = anon_sym_STAR_STAR;
	v->a[77561] = actions(5433);
	v->a[77562] = 23;
	v->a[77563] = sym_test_operator;
	v->a[77564] = anon_sym_PLUS_PLUS;
	v->a[77565] = anon_sym_DASH_DASH;
	v->a[77566] = anon_sym_PLUS_EQ;
	v->a[77567] = anon_sym_DASH_EQ;
	v->a[77568] = anon_sym_STAR_EQ;
	v->a[77569] = anon_sym_SLASH_EQ;
	v->a[77570] = anon_sym_PERCENT_EQ;
	v->a[77571] = anon_sym_STAR_STAR_EQ;
	v->a[77572] = anon_sym_LT_LT_EQ;
	v->a[77573] = anon_sym_GT_GT_EQ;
	v->a[77574] = anon_sym_AMP_EQ;
	v->a[77575] = anon_sym_CARET_EQ;
	v->a[77576] = anon_sym_PIPE_EQ;
	v->a[77577] = anon_sym_PIPE_PIPE;
	v->a[77578] = anon_sym_AMP_AMP;
	v->a[77579] = anon_sym_EQ_EQ;
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = anon_sym_BANG_EQ;
	v->a[77581] = anon_sym_LT_EQ;
	v->a[77582] = anon_sym_GT_EQ;
	v->a[77583] = anon_sym_RPAREN;
	v->a[77584] = anon_sym_EQ_TILDE;
	v->a[77585] = anon_sym_QMARK;
	v->a[77586] = 6;
	v->a[77587] = actions(3);
	v->a[77588] = 1;
	v->a[77589] = sym_comment;
	v->a[77590] = actions(5858);
	v->a[77591] = 1;
	v->a[77592] = aux_sym_concatenation_token1;
	v->a[77593] = actions(5861);
	v->a[77594] = 1;
	v->a[77595] = sym__concat;
	v->a[77596] = state(1649);
	v->a[77597] = 1;
	v->a[77598] = aux_sym_concatenation_repeat1;
	v->a[77599] = actions(1253);
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
