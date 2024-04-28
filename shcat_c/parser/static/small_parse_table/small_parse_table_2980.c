/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2980.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14900(t_small_parse_table_array *v)
{
	v->a[298000] = sym_comment;
	v->a[298001] = actions(13060);
	v->a[298002] = 1;
	v->a[298003] = anon_sym_DOLLAR_LBRACK;
	v->a[298004] = actions(13066);
	v->a[298005] = 1;
	v->a[298006] = sym_string_content;
	v->a[298007] = actions(13068);
	v->a[298008] = 1;
	v->a[298009] = anon_sym_DOLLAR_LBRACE;
	v->a[298010] = actions(13070);
	v->a[298011] = 1;
	v->a[298012] = anon_sym_DOLLAR_LPAREN;
	v->a[298013] = actions(13072);
	v->a[298014] = 1;
	v->a[298015] = anon_sym_BQUOTE;
	v->a[298016] = actions(13074);
	v->a[298017] = 1;
	v->a[298018] = anon_sym_DOLLAR_BQUOTE;
	v->a[298019] = actions(13462);
	small_parse_table_14901(v);
}

void	small_parse_table_14901(t_small_parse_table_array *v)
{
	v->a[298020] = 1;
	v->a[298021] = anon_sym_DOLLAR;
	v->a[298022] = actions(13464);
	v->a[298023] = 1;
	v->a[298024] = anon_sym_DQUOTE;
	v->a[298025] = state(5768);
	v->a[298026] = 1;
	v->a[298027] = aux_sym_string_repeat1;
	v->a[298028] = actions(13058);
	v->a[298029] = 2;
	v->a[298030] = anon_sym_LPAREN_LPAREN;
	v->a[298031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298032] = state(6127);
	v->a[298033] = 4;
	v->a[298034] = sym_arithmetic_expansion;
	v->a[298035] = sym_simple_expansion;
	v->a[298036] = sym_expansion;
	v->a[298037] = sym_command_substitution;
	v->a[298038] = 12;
	v->a[298039] = actions(3);
	small_parse_table_14902(v);
}

void	small_parse_table_14902(t_small_parse_table_array *v)
{
	v->a[298040] = 1;
	v->a[298041] = sym_comment;
	v->a[298042] = actions(13060);
	v->a[298043] = 1;
	v->a[298044] = anon_sym_DOLLAR_LBRACK;
	v->a[298045] = actions(13066);
	v->a[298046] = 1;
	v->a[298047] = sym_string_content;
	v->a[298048] = actions(13068);
	v->a[298049] = 1;
	v->a[298050] = anon_sym_DOLLAR_LBRACE;
	v->a[298051] = actions(13070);
	v->a[298052] = 1;
	v->a[298053] = anon_sym_DOLLAR_LPAREN;
	v->a[298054] = actions(13072);
	v->a[298055] = 1;
	v->a[298056] = anon_sym_BQUOTE;
	v->a[298057] = actions(13074);
	v->a[298058] = 1;
	v->a[298059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14903(v);
}

void	small_parse_table_14903(t_small_parse_table_array *v)
{
	v->a[298060] = actions(13466);
	v->a[298061] = 1;
	v->a[298062] = anon_sym_DOLLAR;
	v->a[298063] = actions(13468);
	v->a[298064] = 1;
	v->a[298065] = anon_sym_DQUOTE;
	v->a[298066] = state(5798);
	v->a[298067] = 1;
	v->a[298068] = aux_sym_string_repeat1;
	v->a[298069] = actions(13058);
	v->a[298070] = 2;
	v->a[298071] = anon_sym_LPAREN_LPAREN;
	v->a[298072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298073] = state(6127);
	v->a[298074] = 4;
	v->a[298075] = sym_arithmetic_expansion;
	v->a[298076] = sym_simple_expansion;
	v->a[298077] = sym_expansion;
	v->a[298078] = sym_command_substitution;
	v->a[298079] = 12;
	small_parse_table_14904(v);
}

void	small_parse_table_14904(t_small_parse_table_array *v)
{
	v->a[298080] = actions(3);
	v->a[298081] = 1;
	v->a[298082] = sym_comment;
	v->a[298083] = actions(13060);
	v->a[298084] = 1;
	v->a[298085] = anon_sym_DOLLAR_LBRACK;
	v->a[298086] = actions(13066);
	v->a[298087] = 1;
	v->a[298088] = sym_string_content;
	v->a[298089] = actions(13068);
	v->a[298090] = 1;
	v->a[298091] = anon_sym_DOLLAR_LBRACE;
	v->a[298092] = actions(13070);
	v->a[298093] = 1;
	v->a[298094] = anon_sym_DOLLAR_LPAREN;
	v->a[298095] = actions(13072);
	v->a[298096] = 1;
	v->a[298097] = anon_sym_BQUOTE;
	v->a[298098] = actions(13074);
	v->a[298099] = 1;
	small_parse_table_14905(v);
}

/* EOF small_parse_table_2980.c */
