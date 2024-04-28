/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2990.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14950(t_small_parse_table_array *v)
{
	v->a[299000] = actions(13074);
	v->a[299001] = 1;
	v->a[299002] = anon_sym_DOLLAR_BQUOTE;
	v->a[299003] = actions(13558);
	v->a[299004] = 1;
	v->a[299005] = anon_sym_DOLLAR;
	v->a[299006] = actions(13560);
	v->a[299007] = 1;
	v->a[299008] = anon_sym_DQUOTE;
	v->a[299009] = state(5829);
	v->a[299010] = 1;
	v->a[299011] = aux_sym_string_repeat1;
	v->a[299012] = actions(13058);
	v->a[299013] = 2;
	v->a[299014] = anon_sym_LPAREN_LPAREN;
	v->a[299015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299016] = state(6127);
	v->a[299017] = 4;
	v->a[299018] = sym_arithmetic_expansion;
	v->a[299019] = sym_simple_expansion;
	small_parse_table_14951(v);
}

void	small_parse_table_14951(t_small_parse_table_array *v)
{
	v->a[299020] = sym_expansion;
	v->a[299021] = sym_command_substitution;
	v->a[299022] = 12;
	v->a[299023] = actions(3);
	v->a[299024] = 1;
	v->a[299025] = sym_comment;
	v->a[299026] = actions(13060);
	v->a[299027] = 1;
	v->a[299028] = anon_sym_DOLLAR_LBRACK;
	v->a[299029] = actions(13066);
	v->a[299030] = 1;
	v->a[299031] = sym_string_content;
	v->a[299032] = actions(13068);
	v->a[299033] = 1;
	v->a[299034] = anon_sym_DOLLAR_LBRACE;
	v->a[299035] = actions(13070);
	v->a[299036] = 1;
	v->a[299037] = anon_sym_DOLLAR_LPAREN;
	v->a[299038] = actions(13072);
	v->a[299039] = 1;
	small_parse_table_14952(v);
}

void	small_parse_table_14952(t_small_parse_table_array *v)
{
	v->a[299040] = anon_sym_BQUOTE;
	v->a[299041] = actions(13074);
	v->a[299042] = 1;
	v->a[299043] = anon_sym_DOLLAR_BQUOTE;
	v->a[299044] = actions(13562);
	v->a[299045] = 1;
	v->a[299046] = anon_sym_DOLLAR;
	v->a[299047] = actions(13564);
	v->a[299048] = 1;
	v->a[299049] = anon_sym_DQUOTE;
	v->a[299050] = state(5820);
	v->a[299051] = 1;
	v->a[299052] = aux_sym_string_repeat1;
	v->a[299053] = actions(13058);
	v->a[299054] = 2;
	v->a[299055] = anon_sym_LPAREN_LPAREN;
	v->a[299056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299057] = state(6127);
	v->a[299058] = 4;
	v->a[299059] = sym_arithmetic_expansion;
	small_parse_table_14953(v);
}

void	small_parse_table_14953(t_small_parse_table_array *v)
{
	v->a[299060] = sym_simple_expansion;
	v->a[299061] = sym_expansion;
	v->a[299062] = sym_command_substitution;
	v->a[299063] = 12;
	v->a[299064] = actions(3);
	v->a[299065] = 1;
	v->a[299066] = sym_comment;
	v->a[299067] = actions(13060);
	v->a[299068] = 1;
	v->a[299069] = anon_sym_DOLLAR_LBRACK;
	v->a[299070] = actions(13066);
	v->a[299071] = 1;
	v->a[299072] = sym_string_content;
	v->a[299073] = actions(13068);
	v->a[299074] = 1;
	v->a[299075] = anon_sym_DOLLAR_LBRACE;
	v->a[299076] = actions(13070);
	v->a[299077] = 1;
	v->a[299078] = anon_sym_DOLLAR_LPAREN;
	v->a[299079] = actions(13072);
	small_parse_table_14954(v);
}

void	small_parse_table_14954(t_small_parse_table_array *v)
{
	v->a[299080] = 1;
	v->a[299081] = anon_sym_BQUOTE;
	v->a[299082] = actions(13074);
	v->a[299083] = 1;
	v->a[299084] = anon_sym_DOLLAR_BQUOTE;
	v->a[299085] = actions(13566);
	v->a[299086] = 1;
	v->a[299087] = anon_sym_DOLLAR;
	v->a[299088] = actions(13568);
	v->a[299089] = 1;
	v->a[299090] = anon_sym_DQUOTE;
	v->a[299091] = state(5768);
	v->a[299092] = 1;
	v->a[299093] = aux_sym_string_repeat1;
	v->a[299094] = actions(13058);
	v->a[299095] = 2;
	v->a[299096] = anon_sym_LPAREN_LPAREN;
	v->a[299097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299098] = state(6127);
	v->a[299099] = 4;
	small_parse_table_14955(v);
}

/* EOF small_parse_table_2990.c */
