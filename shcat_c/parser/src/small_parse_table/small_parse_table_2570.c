/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2570.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12850(t_small_parse_table_array *v)
{
	v->a[257000] = anon_sym_DOLLAR_BQUOTE;
	v->a[257001] = actions(11770);
	v->a[257002] = 1;
	v->a[257003] = aux_sym__simple_variable_name_token1;
	v->a[257004] = actions(11772);
	v->a[257005] = 1;
	v->a[257006] = sym_variable_name;
	v->a[257007] = actions(11852);
	v->a[257008] = 1;
	v->a[257009] = anon_sym_RBRACE3;
	v->a[257010] = state(3532);
	v->a[257011] = 1;
	v->a[257012] = sym_subscript;
	v->a[257013] = state(6428);
	v->a[257014] = 1;
	v->a[257015] = aux_sym__expansion_body_repeat1;
	v->a[257016] = state(6472);
	v->a[257017] = 1;
	v->a[257018] = sym_command_substitution;
	v->a[257019] = state(7261);
	small_parse_table_12851(v);
}

void	small_parse_table_12851(t_small_parse_table_array *v)
{
	v->a[257020] = 1;
	v->a[257021] = sym__expansion_body;
	v->a[257022] = actions(11762);
	v->a[257023] = 2;
	v->a[257024] = anon_sym_POUND2;
	v->a[257025] = anon_sym_EQ2;
	v->a[257026] = actions(8050);
	v->a[257027] = 3;
	v->a[257028] = sym__external_expansion_sym_hash;
	v->a[257029] = sym__external_expansion_sym_bang;
	v->a[257030] = sym__external_expansion_sym_equal;
	v->a[257031] = actions(11754);
	v->a[257032] = 4;
	v->a[257033] = anon_sym_DASH;
	v->a[257034] = anon_sym_STAR;
	v->a[257035] = anon_sym_QMARK;
	v->a[257036] = anon_sym_AT2;
	v->a[257037] = actions(11756);
	v->a[257038] = 5;
	v->a[257039] = anon_sym_BANG;
	small_parse_table_12852(v);
}

void	small_parse_table_12852(t_small_parse_table_array *v)
{
	v->a[257040] = anon_sym_DOLLAR;
	v->a[257041] = anon_sym_POUND;
	v->a[257042] = anon_sym_0;
	v->a[257043] = anon_sym__;
	v->a[257044] = 16;
	v->a[257045] = actions(3);
	v->a[257046] = 1;
	v->a[257047] = sym_comment;
	v->a[257048] = actions(11760);
	v->a[257049] = 1;
	v->a[257050] = anon_sym_BANG2;
	v->a[257051] = actions(11764);
	v->a[257052] = 1;
	v->a[257053] = anon_sym_DOLLAR_LPAREN;
	v->a[257054] = actions(11766);
	v->a[257055] = 1;
	v->a[257056] = anon_sym_BQUOTE;
	v->a[257057] = actions(11768);
	v->a[257058] = 1;
	v->a[257059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12853(v);
}

void	small_parse_table_12853(t_small_parse_table_array *v)
{
	v->a[257060] = actions(11770);
	v->a[257061] = 1;
	v->a[257062] = aux_sym__simple_variable_name_token1;
	v->a[257063] = actions(11772);
	v->a[257064] = 1;
	v->a[257065] = sym_variable_name;
	v->a[257066] = actions(11854);
	v->a[257067] = 1;
	v->a[257068] = anon_sym_RBRACE3;
	v->a[257069] = state(3532);
	v->a[257070] = 1;
	v->a[257071] = sym_subscript;
	v->a[257072] = state(6428);
	v->a[257073] = 1;
	v->a[257074] = aux_sym__expansion_body_repeat1;
	v->a[257075] = state(6472);
	v->a[257076] = 1;
	v->a[257077] = sym_command_substitution;
	v->a[257078] = state(7112);
	v->a[257079] = 1;
	small_parse_table_12854(v);
}

void	small_parse_table_12854(t_small_parse_table_array *v)
{
	v->a[257080] = sym__expansion_body;
	v->a[257081] = actions(11762);
	v->a[257082] = 2;
	v->a[257083] = anon_sym_POUND2;
	v->a[257084] = anon_sym_EQ2;
	v->a[257085] = actions(8050);
	v->a[257086] = 3;
	v->a[257087] = sym__external_expansion_sym_hash;
	v->a[257088] = sym__external_expansion_sym_bang;
	v->a[257089] = sym__external_expansion_sym_equal;
	v->a[257090] = actions(11754);
	v->a[257091] = 4;
	v->a[257092] = anon_sym_DASH;
	v->a[257093] = anon_sym_STAR;
	v->a[257094] = anon_sym_QMARK;
	v->a[257095] = anon_sym_AT2;
	v->a[257096] = actions(11756);
	v->a[257097] = 5;
	v->a[257098] = anon_sym_BANG;
	v->a[257099] = anon_sym_DOLLAR;
	small_parse_table_12855(v);
}

/* EOF small_parse_table_2570.c */
