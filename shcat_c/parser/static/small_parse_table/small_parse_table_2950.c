/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2950.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14750(t_small_parse_table_array *v)
{
	v->a[295000] = anon_sym_DOLLAR_LBRACK;
	v->a[295001] = actions(13066);
	v->a[295002] = 1;
	v->a[295003] = sym_string_content;
	v->a[295004] = actions(13068);
	v->a[295005] = 1;
	v->a[295006] = anon_sym_DOLLAR_LBRACE;
	v->a[295007] = actions(13070);
	v->a[295008] = 1;
	v->a[295009] = anon_sym_DOLLAR_LPAREN;
	v->a[295010] = actions(13072);
	v->a[295011] = 1;
	v->a[295012] = anon_sym_BQUOTE;
	v->a[295013] = actions(13074);
	v->a[295014] = 1;
	v->a[295015] = anon_sym_DOLLAR_BQUOTE;
	v->a[295016] = actions(13156);
	v->a[295017] = 1;
	v->a[295018] = anon_sym_DOLLAR;
	v->a[295019] = actions(13158);
	small_parse_table_14751(v);
}

void	small_parse_table_14751(t_small_parse_table_array *v)
{
	v->a[295020] = 1;
	v->a[295021] = anon_sym_DQUOTE;
	v->a[295022] = state(5710);
	v->a[295023] = 1;
	v->a[295024] = aux_sym_string_repeat1;
	v->a[295025] = actions(13058);
	v->a[295026] = 2;
	v->a[295027] = anon_sym_LPAREN_LPAREN;
	v->a[295028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295029] = state(6127);
	v->a[295030] = 4;
	v->a[295031] = sym_arithmetic_expansion;
	v->a[295032] = sym_simple_expansion;
	v->a[295033] = sym_expansion;
	v->a[295034] = sym_command_substitution;
	v->a[295035] = 12;
	v->a[295036] = actions(3);
	v->a[295037] = 1;
	v->a[295038] = sym_comment;
	v->a[295039] = actions(13060);
	small_parse_table_14752(v);
}

void	small_parse_table_14752(t_small_parse_table_array *v)
{
	v->a[295040] = 1;
	v->a[295041] = anon_sym_DOLLAR_LBRACK;
	v->a[295042] = actions(13066);
	v->a[295043] = 1;
	v->a[295044] = sym_string_content;
	v->a[295045] = actions(13068);
	v->a[295046] = 1;
	v->a[295047] = anon_sym_DOLLAR_LBRACE;
	v->a[295048] = actions(13070);
	v->a[295049] = 1;
	v->a[295050] = anon_sym_DOLLAR_LPAREN;
	v->a[295051] = actions(13072);
	v->a[295052] = 1;
	v->a[295053] = anon_sym_BQUOTE;
	v->a[295054] = actions(13074);
	v->a[295055] = 1;
	v->a[295056] = anon_sym_DOLLAR_BQUOTE;
	v->a[295057] = actions(13160);
	v->a[295058] = 1;
	v->a[295059] = anon_sym_DOLLAR;
	small_parse_table_14753(v);
}

void	small_parse_table_14753(t_small_parse_table_array *v)
{
	v->a[295060] = actions(13162);
	v->a[295061] = 1;
	v->a[295062] = anon_sym_DQUOTE;
	v->a[295063] = state(5707);
	v->a[295064] = 1;
	v->a[295065] = aux_sym_string_repeat1;
	v->a[295066] = actions(13058);
	v->a[295067] = 2;
	v->a[295068] = anon_sym_LPAREN_LPAREN;
	v->a[295069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295070] = state(6127);
	v->a[295071] = 4;
	v->a[295072] = sym_arithmetic_expansion;
	v->a[295073] = sym_simple_expansion;
	v->a[295074] = sym_expansion;
	v->a[295075] = sym_command_substitution;
	v->a[295076] = 12;
	v->a[295077] = actions(3);
	v->a[295078] = 1;
	v->a[295079] = sym_comment;
	small_parse_table_14754(v);
}

void	small_parse_table_14754(t_small_parse_table_array *v)
{
	v->a[295080] = actions(13060);
	v->a[295081] = 1;
	v->a[295082] = anon_sym_DOLLAR_LBRACK;
	v->a[295083] = actions(13066);
	v->a[295084] = 1;
	v->a[295085] = sym_string_content;
	v->a[295086] = actions(13068);
	v->a[295087] = 1;
	v->a[295088] = anon_sym_DOLLAR_LBRACE;
	v->a[295089] = actions(13070);
	v->a[295090] = 1;
	v->a[295091] = anon_sym_DOLLAR_LPAREN;
	v->a[295092] = actions(13072);
	v->a[295093] = 1;
	v->a[295094] = anon_sym_BQUOTE;
	v->a[295095] = actions(13074);
	v->a[295096] = 1;
	v->a[295097] = anon_sym_DOLLAR_BQUOTE;
	v->a[295098] = actions(13164);
	v->a[295099] = 1;
	small_parse_table_14755(v);
}

/* EOF small_parse_table_2950.c */
