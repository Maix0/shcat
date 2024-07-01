/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_860.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4300(t_small_parse_table_array *v)
{
	v->a[86000] = anon_sym_BQUOTE;
	v->a[86001] = actions(3432);
	v->a[86002] = 1;
	v->a[86003] = anon_sym_DOLLAR;
	v->a[86004] = actions(3434);
	v->a[86005] = 1;
	v->a[86006] = anon_sym_DQUOTE;
	v->a[86007] = state(1906);
	v->a[86008] = 1;
	v->a[86009] = aux_sym_string_repeat1;
	v->a[86010] = state(1959);
	v->a[86011] = 4;
	v->a[86012] = sym_arithmetic_expansion;
	v->a[86013] = sym_simple_expansion;
	v->a[86014] = sym_expansion;
	v->a[86015] = sym_command_substitution;
	v->a[86016] = 10;
	v->a[86017] = actions(3);
	v->a[86018] = 1;
	v->a[86019] = sym_comment;
	small_parse_table_4301(v);
}

void	small_parse_table_4301(t_small_parse_table_array *v)
{
	v->a[86020] = actions(3414);
	v->a[86021] = 1;
	v->a[86022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86023] = actions(3420);
	v->a[86024] = 1;
	v->a[86025] = sym_string_content;
	v->a[86026] = actions(3422);
	v->a[86027] = 1;
	v->a[86028] = anon_sym_DOLLAR_LBRACE;
	v->a[86029] = actions(3424);
	v->a[86030] = 1;
	v->a[86031] = anon_sym_DOLLAR_LPAREN;
	v->a[86032] = actions(3426);
	v->a[86033] = 1;
	v->a[86034] = anon_sym_BQUOTE;
	v->a[86035] = actions(3436);
	v->a[86036] = 1;
	v->a[86037] = anon_sym_DOLLAR;
	v->a[86038] = actions(3438);
	v->a[86039] = 1;
	small_parse_table_4302(v);
}

void	small_parse_table_4302(t_small_parse_table_array *v)
{
	v->a[86040] = anon_sym_DQUOTE;
	v->a[86041] = state(1906);
	v->a[86042] = 1;
	v->a[86043] = aux_sym_string_repeat1;
	v->a[86044] = state(1959);
	v->a[86045] = 4;
	v->a[86046] = sym_arithmetic_expansion;
	v->a[86047] = sym_simple_expansion;
	v->a[86048] = sym_expansion;
	v->a[86049] = sym_command_substitution;
	v->a[86050] = 4;
	v->a[86051] = actions(3);
	v->a[86052] = 1;
	v->a[86053] = sym_comment;
	v->a[86054] = actions(1989);
	v->a[86055] = 1;
	v->a[86056] = sym_variable_name;
	v->a[86057] = actions(1987);
	v->a[86058] = 2;
	v->a[86059] = aux_sym__simple_variable_name_token1;
	small_parse_table_4303(v);
}

void	small_parse_table_4303(t_small_parse_table_array *v)
{
	v->a[86060] = aux_sym__multiline_variable_name_token1;
	v->a[86061] = actions(1985);
	v->a[86062] = 9;
	v->a[86063] = anon_sym_BANG;
	v->a[86064] = anon_sym_DASH;
	v->a[86065] = anon_sym_STAR;
	v->a[86066] = anon_sym_QMARK;
	v->a[86067] = anon_sym_DOLLAR;
	v->a[86068] = anon_sym_POUND;
	v->a[86069] = anon_sym_AT;
	v->a[86070] = anon_sym_0;
	v->a[86071] = anon_sym__;
	v->a[86072] = 10;
	v->a[86073] = actions(3);
	v->a[86074] = 1;
	v->a[86075] = sym_comment;
	v->a[86076] = actions(3414);
	v->a[86077] = 1;
	v->a[86078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86079] = actions(3420);
	small_parse_table_4304(v);
}

void	small_parse_table_4304(t_small_parse_table_array *v)
{
	v->a[86080] = 1;
	v->a[86081] = sym_string_content;
	v->a[86082] = actions(3422);
	v->a[86083] = 1;
	v->a[86084] = anon_sym_DOLLAR_LBRACE;
	v->a[86085] = actions(3424);
	v->a[86086] = 1;
	v->a[86087] = anon_sym_DOLLAR_LPAREN;
	v->a[86088] = actions(3426);
	v->a[86089] = 1;
	v->a[86090] = anon_sym_BQUOTE;
	v->a[86091] = actions(3440);
	v->a[86092] = 1;
	v->a[86093] = anon_sym_DOLLAR;
	v->a[86094] = actions(3442);
	v->a[86095] = 1;
	v->a[86096] = anon_sym_DQUOTE;
	v->a[86097] = state(1814);
	v->a[86098] = 1;
	v->a[86099] = aux_sym_string_repeat1;
	small_parse_table_4305(v);
}

/* EOF small_parse_table_860.c */
