/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1390.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6950(t_small_parse_table_array *v)
{
	v->a[139000] = sym_comment;
	v->a[139001] = actions(7754);
	v->a[139002] = 1;
	v->a[139003] = aux_sym__simple_variable_name_token1;
	v->a[139004] = actions(7758);
	v->a[139005] = 1;
	v->a[139006] = sym_variable_name;
	v->a[139007] = actions(8141);
	v->a[139008] = 1;
	v->a[139009] = anon_sym_RBRACE3;
	v->a[139010] = state(3825);
	v->a[139011] = 1;
	v->a[139012] = sym__expansion_body;
	v->a[139013] = actions(7756);
	v->a[139014] = 2;
	v->a[139015] = anon_sym_0;
	v->a[139016] = anon_sym__;
	v->a[139017] = actions(7750);
	v->a[139018] = 7;
	v->a[139019] = anon_sym_BANG;
	small_parse_table_6951(v);
}

void	small_parse_table_6951(t_small_parse_table_array *v)
{
	v->a[139020] = anon_sym_DASH;
	v->a[139021] = anon_sym_STAR;
	v->a[139022] = anon_sym_QMARK;
	v->a[139023] = anon_sym_DOLLAR;
	v->a[139024] = anon_sym_POUND;
	v->a[139025] = anon_sym_AT;
	v->a[139026] = 11;
	v->a[139027] = actions(3);
	v->a[139028] = 1;
	v->a[139029] = sym_comment;
	v->a[139030] = actions(7760);
	v->a[139031] = 1;
	v->a[139032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139033] = actions(7766);
	v->a[139034] = 1;
	v->a[139035] = sym_string_content;
	v->a[139036] = actions(7768);
	v->a[139037] = 1;
	v->a[139038] = anon_sym_DOLLAR_LBRACE;
	v->a[139039] = actions(7770);
	small_parse_table_6952(v);
}

void	small_parse_table_6952(t_small_parse_table_array *v)
{
	v->a[139040] = 1;
	v->a[139041] = anon_sym_DOLLAR_LPAREN;
	v->a[139042] = actions(7772);
	v->a[139043] = 1;
	v->a[139044] = anon_sym_BQUOTE;
	v->a[139045] = actions(7774);
	v->a[139046] = 1;
	v->a[139047] = anon_sym_DOLLAR_BQUOTE;
	v->a[139048] = actions(8143);
	v->a[139049] = 1;
	v->a[139050] = anon_sym_DOLLAR;
	v->a[139051] = actions(8145);
	v->a[139052] = 1;
	v->a[139053] = anon_sym_DQUOTE;
	v->a[139054] = state(3114);
	v->a[139055] = 1;
	v->a[139056] = aux_sym_string_repeat1;
	v->a[139057] = state(3218);
	v->a[139058] = 4;
	v->a[139059] = sym_arithmetic_expansion;
	small_parse_table_6953(v);
}

void	small_parse_table_6953(t_small_parse_table_array *v)
{
	v->a[139060] = sym_simple_expansion;
	v->a[139061] = sym_expansion;
	v->a[139062] = sym_command_substitution;
	v->a[139063] = 11;
	v->a[139064] = actions(3);
	v->a[139065] = 1;
	v->a[139066] = sym_comment;
	v->a[139067] = actions(7760);
	v->a[139068] = 1;
	v->a[139069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139070] = actions(7766);
	v->a[139071] = 1;
	v->a[139072] = sym_string_content;
	v->a[139073] = actions(7768);
	v->a[139074] = 1;
	v->a[139075] = anon_sym_DOLLAR_LBRACE;
	v->a[139076] = actions(7770);
	v->a[139077] = 1;
	v->a[139078] = anon_sym_DOLLAR_LPAREN;
	v->a[139079] = actions(7772);
	small_parse_table_6954(v);
}

void	small_parse_table_6954(t_small_parse_table_array *v)
{
	v->a[139080] = 1;
	v->a[139081] = anon_sym_BQUOTE;
	v->a[139082] = actions(7774);
	v->a[139083] = 1;
	v->a[139084] = anon_sym_DOLLAR_BQUOTE;
	v->a[139085] = actions(8147);
	v->a[139086] = 1;
	v->a[139087] = anon_sym_DOLLAR;
	v->a[139088] = actions(8149);
	v->a[139089] = 1;
	v->a[139090] = anon_sym_DQUOTE;
	v->a[139091] = state(3124);
	v->a[139092] = 1;
	v->a[139093] = aux_sym_string_repeat1;
	v->a[139094] = state(3218);
	v->a[139095] = 4;
	v->a[139096] = sym_arithmetic_expansion;
	v->a[139097] = sym_simple_expansion;
	v->a[139098] = sym_expansion;
	v->a[139099] = sym_command_substitution;
	small_parse_table_6955(v);
}

/* EOF small_parse_table_1390.c */
