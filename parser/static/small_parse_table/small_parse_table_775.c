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
	v->a[77500] = aux_sym__multiline_variable_name_token1;
	v->a[77501] = actions(1823);
	v->a[77502] = 9;
	v->a[77503] = anon_sym_BANG;
	v->a[77504] = anon_sym_DASH;
	v->a[77505] = anon_sym_STAR;
	v->a[77506] = anon_sym_QMARK;
	v->a[77507] = anon_sym_DOLLAR;
	v->a[77508] = anon_sym_POUND;
	v->a[77509] = anon_sym_AT;
	v->a[77510] = anon_sym_0;
	v->a[77511] = anon_sym__;
	v->a[77512] = 10;
	v->a[77513] = actions(3);
	v->a[77514] = 1;
	v->a[77515] = sym_comment;
	v->a[77516] = actions(3104);
	v->a[77517] = 1;
	v->a[77518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77519] = actions(3110);
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = 1;
	v->a[77521] = sym_string_content;
	v->a[77522] = actions(3112);
	v->a[77523] = 1;
	v->a[77524] = anon_sym_DOLLAR_LBRACE;
	v->a[77525] = actions(3114);
	v->a[77526] = 1;
	v->a[77527] = anon_sym_DOLLAR_LPAREN;
	v->a[77528] = actions(3116);
	v->a[77529] = 1;
	v->a[77530] = anon_sym_BQUOTE;
	v->a[77531] = actions(3240);
	v->a[77532] = 1;
	v->a[77533] = anon_sym_DOLLAR;
	v->a[77534] = actions(3242);
	v->a[77535] = 1;
	v->a[77536] = anon_sym_DQUOTE;
	v->a[77537] = state(1661);
	v->a[77538] = 1;
	v->a[77539] = aux_sym_string_repeat1;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = state(1748);
	v->a[77541] = 4;
	v->a[77542] = sym_arithmetic_expansion;
	v->a[77543] = sym_simple_expansion;
	v->a[77544] = sym_expansion;
	v->a[77545] = sym_command_substitution;
	v->a[77546] = 10;
	v->a[77547] = actions(3);
	v->a[77548] = 1;
	v->a[77549] = sym_comment;
	v->a[77550] = actions(3104);
	v->a[77551] = 1;
	v->a[77552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77553] = actions(3110);
	v->a[77554] = 1;
	v->a[77555] = sym_string_content;
	v->a[77556] = actions(3112);
	v->a[77557] = 1;
	v->a[77558] = anon_sym_DOLLAR_LBRACE;
	v->a[77559] = actions(3114);
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = 1;
	v->a[77561] = anon_sym_DOLLAR_LPAREN;
	v->a[77562] = actions(3116);
	v->a[77563] = 1;
	v->a[77564] = anon_sym_BQUOTE;
	v->a[77565] = actions(3244);
	v->a[77566] = 1;
	v->a[77567] = anon_sym_DOLLAR;
	v->a[77568] = actions(3246);
	v->a[77569] = 1;
	v->a[77570] = anon_sym_DQUOTE;
	v->a[77571] = state(1661);
	v->a[77572] = 1;
	v->a[77573] = aux_sym_string_repeat1;
	v->a[77574] = state(1748);
	v->a[77575] = 4;
	v->a[77576] = sym_arithmetic_expansion;
	v->a[77577] = sym_simple_expansion;
	v->a[77578] = sym_expansion;
	v->a[77579] = sym_command_substitution;
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = 10;
	v->a[77581] = actions(3);
	v->a[77582] = 1;
	v->a[77583] = sym_comment;
	v->a[77584] = actions(3104);
	v->a[77585] = 1;
	v->a[77586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77587] = actions(3110);
	v->a[77588] = 1;
	v->a[77589] = sym_string_content;
	v->a[77590] = actions(3112);
	v->a[77591] = 1;
	v->a[77592] = anon_sym_DOLLAR_LBRACE;
	v->a[77593] = actions(3114);
	v->a[77594] = 1;
	v->a[77595] = anon_sym_DOLLAR_LPAREN;
	v->a[77596] = actions(3116);
	v->a[77597] = 1;
	v->a[77598] = anon_sym_BQUOTE;
	v->a[77599] = actions(3248);
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
