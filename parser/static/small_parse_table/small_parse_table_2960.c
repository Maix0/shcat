/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2960.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14800(t_small_parse_table_array *v)
{
	v->a[296000] = state(6127);
	v->a[296001] = 4;
	v->a[296002] = sym_arithmetic_expansion;
	v->a[296003] = sym_simple_expansion;
	v->a[296004] = sym_expansion;
	v->a[296005] = sym_command_substitution;
	v->a[296006] = 12;
	v->a[296007] = actions(3);
	v->a[296008] = 1;
	v->a[296009] = sym_comment;
	v->a[296010] = actions(13060);
	v->a[296011] = 1;
	v->a[296012] = anon_sym_DOLLAR_LBRACK;
	v->a[296013] = actions(13066);
	v->a[296014] = 1;
	v->a[296015] = sym_string_content;
	v->a[296016] = actions(13068);
	v->a[296017] = 1;
	v->a[296018] = anon_sym_DOLLAR_LBRACE;
	v->a[296019] = actions(13070);
	small_parse_table_14801(v);
}

void	small_parse_table_14801(t_small_parse_table_array *v)
{
	v->a[296020] = 1;
	v->a[296021] = anon_sym_DOLLAR_LPAREN;
	v->a[296022] = actions(13072);
	v->a[296023] = 1;
	v->a[296024] = anon_sym_BQUOTE;
	v->a[296025] = actions(13074);
	v->a[296026] = 1;
	v->a[296027] = anon_sym_DOLLAR_BQUOTE;
	v->a[296028] = actions(13248);
	v->a[296029] = 1;
	v->a[296030] = anon_sym_DOLLAR;
	v->a[296031] = actions(13250);
	v->a[296032] = 1;
	v->a[296033] = anon_sym_DQUOTE;
	v->a[296034] = state(5768);
	v->a[296035] = 1;
	v->a[296036] = aux_sym_string_repeat1;
	v->a[296037] = actions(13058);
	v->a[296038] = 2;
	v->a[296039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14802(v);
}

void	small_parse_table_14802(t_small_parse_table_array *v)
{
	v->a[296040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296041] = state(6127);
	v->a[296042] = 4;
	v->a[296043] = sym_arithmetic_expansion;
	v->a[296044] = sym_simple_expansion;
	v->a[296045] = sym_expansion;
	v->a[296046] = sym_command_substitution;
	v->a[296047] = 12;
	v->a[296048] = actions(3);
	v->a[296049] = 1;
	v->a[296050] = sym_comment;
	v->a[296051] = actions(13060);
	v->a[296052] = 1;
	v->a[296053] = anon_sym_DOLLAR_LBRACK;
	v->a[296054] = actions(13066);
	v->a[296055] = 1;
	v->a[296056] = sym_string_content;
	v->a[296057] = actions(13068);
	v->a[296058] = 1;
	v->a[296059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14803(v);
}

void	small_parse_table_14803(t_small_parse_table_array *v)
{
	v->a[296060] = actions(13070);
	v->a[296061] = 1;
	v->a[296062] = anon_sym_DOLLAR_LPAREN;
	v->a[296063] = actions(13072);
	v->a[296064] = 1;
	v->a[296065] = anon_sym_BQUOTE;
	v->a[296066] = actions(13074);
	v->a[296067] = 1;
	v->a[296068] = anon_sym_DOLLAR_BQUOTE;
	v->a[296069] = actions(13252);
	v->a[296070] = 1;
	v->a[296071] = anon_sym_DOLLAR;
	v->a[296072] = actions(13254);
	v->a[296073] = 1;
	v->a[296074] = anon_sym_DQUOTE;
	v->a[296075] = state(5745);
	v->a[296076] = 1;
	v->a[296077] = aux_sym_string_repeat1;
	v->a[296078] = actions(13058);
	v->a[296079] = 2;
	small_parse_table_14804(v);
}

void	small_parse_table_14804(t_small_parse_table_array *v)
{
	v->a[296080] = anon_sym_LPAREN_LPAREN;
	v->a[296081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296082] = state(6127);
	v->a[296083] = 4;
	v->a[296084] = sym_arithmetic_expansion;
	v->a[296085] = sym_simple_expansion;
	v->a[296086] = sym_expansion;
	v->a[296087] = sym_command_substitution;
	v->a[296088] = 12;
	v->a[296089] = actions(3);
	v->a[296090] = 1;
	v->a[296091] = sym_comment;
	v->a[296092] = actions(13060);
	v->a[296093] = 1;
	v->a[296094] = anon_sym_DOLLAR_LBRACK;
	v->a[296095] = actions(13066);
	v->a[296096] = 1;
	v->a[296097] = sym_string_content;
	v->a[296098] = actions(13068);
	v->a[296099] = 1;
	small_parse_table_14805(v);
}

/* EOF small_parse_table_2960.c */
