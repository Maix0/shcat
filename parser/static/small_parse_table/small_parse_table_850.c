/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_850.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4250(t_small_parse_table_array *v)
{
	v->a[85000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85001] = anon_sym_DOLLAR;
	v->a[85002] = anon_sym_DQUOTE;
	v->a[85003] = sym_raw_string;
	v->a[85004] = sym_number;
	v->a[85005] = anon_sym_DOLLAR_LBRACE;
	v->a[85006] = anon_sym_DOLLAR_LPAREN;
	v->a[85007] = anon_sym_BQUOTE;
	v->a[85008] = sym_word;
	v->a[85009] = 9;
	v->a[85010] = actions(3);
	v->a[85011] = 1;
	v->a[85012] = sym_comment;
	v->a[85013] = actions(1780);
	v->a[85014] = 1;
	v->a[85015] = anon_sym_DOLLAR;
	v->a[85016] = actions(1782);
	v->a[85017] = 1;
	v->a[85018] = anon_sym_DQUOTE;
	v->a[85019] = actions(1784);
	small_parse_table_4251(v);
}

void	small_parse_table_4251(t_small_parse_table_array *v)
{
	v->a[85020] = 1;
	v->a[85021] = anon_sym_DOLLAR_LBRACE;
	v->a[85022] = actions(1786);
	v->a[85023] = 1;
	v->a[85024] = anon_sym_DOLLAR_LPAREN;
	v->a[85025] = actions(1788);
	v->a[85026] = 1;
	v->a[85027] = anon_sym_BQUOTE;
	v->a[85028] = actions(3356);
	v->a[85029] = 1;
	v->a[85030] = sym_raw_string;
	v->a[85031] = actions(3354);
	v->a[85032] = 3;
	v->a[85033] = sym_variable_name;
	v->a[85034] = sym__expansion_word;
	v->a[85035] = sym_word;
	v->a[85036] = state(2099);
	v->a[85037] = 4;
	v->a[85038] = sym_string;
	v->a[85039] = sym_simple_expansion;
	small_parse_table_4252(v);
}

void	small_parse_table_4252(t_small_parse_table_array *v)
{
	v->a[85040] = sym_expansion;
	v->a[85041] = sym_command_substitution;
	v->a[85042] = 7;
	v->a[85043] = actions(3);
	v->a[85044] = 1;
	v->a[85045] = sym_comment;
	v->a[85046] = actions(3336);
	v->a[85047] = 1;
	v->a[85048] = aux_sym__simple_variable_name_token1;
	v->a[85049] = actions(3340);
	v->a[85050] = 1;
	v->a[85051] = sym_variable_name;
	v->a[85052] = actions(3358);
	v->a[85053] = 1;
	v->a[85054] = anon_sym_RBRACE;
	v->a[85055] = state(2229);
	v->a[85056] = 1;
	v->a[85057] = sym__expansion_body;
	v->a[85058] = actions(3338);
	v->a[85059] = 2;
	small_parse_table_4253(v);
}

void	small_parse_table_4253(t_small_parse_table_array *v)
{
	v->a[85060] = anon_sym_0;
	v->a[85061] = anon_sym__;
	v->a[85062] = actions(3334);
	v->a[85063] = 7;
	v->a[85064] = anon_sym_BANG;
	v->a[85065] = anon_sym_DASH;
	v->a[85066] = anon_sym_STAR;
	v->a[85067] = anon_sym_QMARK;
	v->a[85068] = anon_sym_DOLLAR;
	v->a[85069] = anon_sym_POUND;
	v->a[85070] = anon_sym_AT;
	v->a[85071] = 7;
	v->a[85072] = actions(3);
	v->a[85073] = 1;
	v->a[85074] = sym_comment;
	v->a[85075] = actions(3336);
	v->a[85076] = 1;
	v->a[85077] = aux_sym__simple_variable_name_token1;
	v->a[85078] = actions(3340);
	v->a[85079] = 1;
	small_parse_table_4254(v);
}

void	small_parse_table_4254(t_small_parse_table_array *v)
{
	v->a[85080] = sym_variable_name;
	v->a[85081] = actions(3360);
	v->a[85082] = 1;
	v->a[85083] = anon_sym_RBRACE;
	v->a[85084] = state(2233);
	v->a[85085] = 1;
	v->a[85086] = sym__expansion_body;
	v->a[85087] = actions(3338);
	v->a[85088] = 2;
	v->a[85089] = anon_sym_0;
	v->a[85090] = anon_sym__;
	v->a[85091] = actions(3334);
	v->a[85092] = 7;
	v->a[85093] = anon_sym_BANG;
	v->a[85094] = anon_sym_DASH;
	v->a[85095] = anon_sym_STAR;
	v->a[85096] = anon_sym_QMARK;
	v->a[85097] = anon_sym_DOLLAR;
	v->a[85098] = anon_sym_POUND;
	v->a[85099] = anon_sym_AT;
	small_parse_table_4255(v);
}

/* EOF small_parse_table_850.c */
