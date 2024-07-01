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
	v->a[77500] = sym_string_content;
	v->a[77501] = actions(3079);
	v->a[77502] = 1;
	v->a[77503] = anon_sym_DOLLAR_LBRACE;
	v->a[77504] = actions(3081);
	v->a[77505] = 1;
	v->a[77506] = anon_sym_DOLLAR_LPAREN;
	v->a[77507] = actions(3083);
	v->a[77508] = 1;
	v->a[77509] = anon_sym_BQUOTE;
	v->a[77510] = actions(3223);
	v->a[77511] = 1;
	v->a[77512] = anon_sym_DOLLAR;
	v->a[77513] = actions(3225);
	v->a[77514] = 1;
	v->a[77515] = anon_sym_DQUOTE;
	v->a[77516] = state(1651);
	v->a[77517] = 1;
	v->a[77518] = aux_sym_string_repeat1;
	v->a[77519] = state(1739);
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = 4;
	v->a[77521] = sym_arithmetic_expansion;
	v->a[77522] = sym_simple_expansion;
	v->a[77523] = sym_expansion;
	v->a[77524] = sym_command_substitution;
	v->a[77525] = 4;
	v->a[77526] = actions(3);
	v->a[77527] = 1;
	v->a[77528] = sym_comment;
	v->a[77529] = actions(1803);
	v->a[77530] = 1;
	v->a[77531] = sym_variable_name;
	v->a[77532] = actions(1801);
	v->a[77533] = 2;
	v->a[77534] = aux_sym__simple_variable_name_token1;
	v->a[77535] = aux_sym__multiline_variable_name_token1;
	v->a[77536] = actions(1799);
	v->a[77537] = 9;
	v->a[77538] = anon_sym_BANG;
	v->a[77539] = anon_sym_DASH;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = anon_sym_STAR;
	v->a[77541] = anon_sym_QMARK;
	v->a[77542] = anon_sym_DOLLAR;
	v->a[77543] = anon_sym_POUND;
	v->a[77544] = anon_sym_AT;
	v->a[77545] = anon_sym_0;
	v->a[77546] = anon_sym__;
	v->a[77547] = 10;
	v->a[77548] = actions(3);
	v->a[77549] = 1;
	v->a[77550] = sym_comment;
	v->a[77551] = actions(3071);
	v->a[77552] = 1;
	v->a[77553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77554] = actions(3077);
	v->a[77555] = 1;
	v->a[77556] = sym_string_content;
	v->a[77557] = actions(3079);
	v->a[77558] = 1;
	v->a[77559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = actions(3081);
	v->a[77561] = 1;
	v->a[77562] = anon_sym_DOLLAR_LPAREN;
	v->a[77563] = actions(3083);
	v->a[77564] = 1;
	v->a[77565] = anon_sym_BQUOTE;
	v->a[77566] = actions(3227);
	v->a[77567] = 1;
	v->a[77568] = anon_sym_DOLLAR;
	v->a[77569] = actions(3229);
	v->a[77570] = 1;
	v->a[77571] = anon_sym_DQUOTE;
	v->a[77572] = state(1650);
	v->a[77573] = 1;
	v->a[77574] = aux_sym_string_repeat1;
	v->a[77575] = state(1739);
	v->a[77576] = 4;
	v->a[77577] = sym_arithmetic_expansion;
	v->a[77578] = sym_simple_expansion;
	v->a[77579] = sym_expansion;
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = sym_command_substitution;
	v->a[77581] = 10;
	v->a[77582] = actions(3);
	v->a[77583] = 1;
	v->a[77584] = sym_comment;
	v->a[77585] = actions(3071);
	v->a[77586] = 1;
	v->a[77587] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77588] = actions(3077);
	v->a[77589] = 1;
	v->a[77590] = sym_string_content;
	v->a[77591] = actions(3079);
	v->a[77592] = 1;
	v->a[77593] = anon_sym_DOLLAR_LBRACE;
	v->a[77594] = actions(3081);
	v->a[77595] = 1;
	v->a[77596] = anon_sym_DOLLAR_LPAREN;
	v->a[77597] = actions(3083);
	v->a[77598] = 1;
	v->a[77599] = anon_sym_BQUOTE;
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
