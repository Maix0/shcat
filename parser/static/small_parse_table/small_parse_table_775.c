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
	v->a[77500] = 1;
	v->a[77501] = anon_sym_DOLLAR;
	v->a[77502] = actions(3372);
	v->a[77503] = 1;
	v->a[77504] = anon_sym_DQUOTE;
	v->a[77505] = state(1651);
	v->a[77506] = 1;
	v->a[77507] = aux_sym_string_repeat1;
	v->a[77508] = state(1748);
	v->a[77509] = 4;
	v->a[77510] = sym_arithmetic_expansion;
	v->a[77511] = sym_simple_expansion;
	v->a[77512] = sym_expansion;
	v->a[77513] = sym_command_substitution;
	v->a[77514] = 8;
	v->a[77515] = actions(3);
	v->a[77516] = 1;
	v->a[77517] = sym_comment;
	v->a[77518] = actions(3040);
	v->a[77519] = 1;
	small_parse_table_3876(v);
}

void	small_parse_table_3876(t_small_parse_table_array *v)
{
	v->a[77520] = anon_sym_POUND;
	v->a[77521] = actions(3042);
	v->a[77522] = 1;
	v->a[77523] = aux_sym__simple_variable_name_token1;
	v->a[77524] = actions(3044);
	v->a[77525] = 1;
	v->a[77526] = anon_sym_0;
	v->a[77527] = actions(3046);
	v->a[77528] = 1;
	v->a[77529] = sym_variable_name;
	v->a[77530] = actions(3374);
	v->a[77531] = 1;
	v->a[77532] = anon_sym_RBRACE;
	v->a[77533] = state(1998);
	v->a[77534] = 1;
	v->a[77535] = sym__expansion_body;
	v->a[77536] = actions(3038);
	v->a[77537] = 6;
	v->a[77538] = anon_sym_BANG;
	v->a[77539] = anon_sym_DASH;
	small_parse_table_3877(v);
}

void	small_parse_table_3877(t_small_parse_table_array *v)
{
	v->a[77540] = anon_sym_STAR;
	v->a[77541] = anon_sym_QMARK;
	v->a[77542] = anon_sym_DOLLAR;
	v->a[77543] = anon_sym_AT;
	v->a[77544] = 10;
	v->a[77545] = actions(3);
	v->a[77546] = 1;
	v->a[77547] = sym_comment;
	v->a[77548] = actions(3058);
	v->a[77549] = 1;
	v->a[77550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77551] = actions(3064);
	v->a[77552] = 1;
	v->a[77553] = sym_string_content;
	v->a[77554] = actions(3066);
	v->a[77555] = 1;
	v->a[77556] = anon_sym_DOLLAR_LBRACE;
	v->a[77557] = actions(3068);
	v->a[77558] = 1;
	v->a[77559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3878(v);
}

void	small_parse_table_3878(t_small_parse_table_array *v)
{
	v->a[77560] = actions(3070);
	v->a[77561] = 1;
	v->a[77562] = anon_sym_BQUOTE;
	v->a[77563] = actions(3376);
	v->a[77564] = 1;
	v->a[77565] = anon_sym_DOLLAR;
	v->a[77566] = actions(3378);
	v->a[77567] = 1;
	v->a[77568] = anon_sym_DQUOTE;
	v->a[77569] = state(1610);
	v->a[77570] = 1;
	v->a[77571] = aux_sym_string_repeat1;
	v->a[77572] = state(1748);
	v->a[77573] = 4;
	v->a[77574] = sym_arithmetic_expansion;
	v->a[77575] = sym_simple_expansion;
	v->a[77576] = sym_expansion;
	v->a[77577] = sym_command_substitution;
	v->a[77578] = 10;
	v->a[77579] = actions(3);
	small_parse_table_3879(v);
}

void	small_parse_table_3879(t_small_parse_table_array *v)
{
	v->a[77580] = 1;
	v->a[77581] = sym_comment;
	v->a[77582] = actions(3058);
	v->a[77583] = 1;
	v->a[77584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77585] = actions(3064);
	v->a[77586] = 1;
	v->a[77587] = sym_string_content;
	v->a[77588] = actions(3066);
	v->a[77589] = 1;
	v->a[77590] = anon_sym_DOLLAR_LBRACE;
	v->a[77591] = actions(3068);
	v->a[77592] = 1;
	v->a[77593] = anon_sym_DOLLAR_LPAREN;
	v->a[77594] = actions(3070);
	v->a[77595] = 1;
	v->a[77596] = anon_sym_BQUOTE;
	v->a[77597] = actions(3380);
	v->a[77598] = 1;
	v->a[77599] = anon_sym_DOLLAR;
	small_parse_table_3880(v);
}

/* EOF small_parse_table_775.c */
