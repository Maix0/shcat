/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1360.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6800(t_small_parse_table_array *v)
{
	v->a[136000] = anon_sym_DOLLAR_LPAREN;
	v->a[136001] = actions(7772);
	v->a[136002] = 1;
	v->a[136003] = anon_sym_BQUOTE;
	v->a[136004] = actions(7774);
	v->a[136005] = 1;
	v->a[136006] = anon_sym_DOLLAR_BQUOTE;
	v->a[136007] = actions(7892);
	v->a[136008] = 1;
	v->a[136009] = anon_sym_DOLLAR;
	v->a[136010] = actions(7894);
	v->a[136011] = 1;
	v->a[136012] = anon_sym_DQUOTE;
	v->a[136013] = state(3028);
	v->a[136014] = 1;
	v->a[136015] = aux_sym_string_repeat1;
	v->a[136016] = state(3218);
	v->a[136017] = 4;
	v->a[136018] = sym_arithmetic_expansion;
	v->a[136019] = sym_simple_expansion;
	small_parse_table_6801(v);
}

void	small_parse_table_6801(t_small_parse_table_array *v)
{
	v->a[136020] = sym_expansion;
	v->a[136021] = sym_command_substitution;
	v->a[136022] = 7;
	v->a[136023] = actions(3);
	v->a[136024] = 1;
	v->a[136025] = sym_comment;
	v->a[136026] = actions(7754);
	v->a[136027] = 1;
	v->a[136028] = aux_sym__simple_variable_name_token1;
	v->a[136029] = actions(7758);
	v->a[136030] = 1;
	v->a[136031] = sym_variable_name;
	v->a[136032] = actions(7896);
	v->a[136033] = 1;
	v->a[136034] = anon_sym_RBRACE3;
	v->a[136035] = state(3771);
	v->a[136036] = 1;
	v->a[136037] = sym__expansion_body;
	v->a[136038] = actions(7756);
	v->a[136039] = 2;
	small_parse_table_6802(v);
}

void	small_parse_table_6802(t_small_parse_table_array *v)
{
	v->a[136040] = anon_sym_0;
	v->a[136041] = anon_sym__;
	v->a[136042] = actions(7750);
	v->a[136043] = 7;
	v->a[136044] = anon_sym_BANG;
	v->a[136045] = anon_sym_DASH;
	v->a[136046] = anon_sym_STAR;
	v->a[136047] = anon_sym_QMARK;
	v->a[136048] = anon_sym_DOLLAR;
	v->a[136049] = anon_sym_POUND;
	v->a[136050] = anon_sym_AT;
	v->a[136051] = 11;
	v->a[136052] = actions(3);
	v->a[136053] = 1;
	v->a[136054] = sym_comment;
	v->a[136055] = actions(7554);
	v->a[136056] = 1;
	v->a[136057] = anon_sym_DQUOTE;
	v->a[136058] = actions(7760);
	v->a[136059] = 1;
	small_parse_table_6803(v);
}

void	small_parse_table_6803(t_small_parse_table_array *v)
{
	v->a[136060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136061] = actions(7766);
	v->a[136062] = 1;
	v->a[136063] = sym_string_content;
	v->a[136064] = actions(7768);
	v->a[136065] = 1;
	v->a[136066] = anon_sym_DOLLAR_LBRACE;
	v->a[136067] = actions(7770);
	v->a[136068] = 1;
	v->a[136069] = anon_sym_DOLLAR_LPAREN;
	v->a[136070] = actions(7772);
	v->a[136071] = 1;
	v->a[136072] = anon_sym_BQUOTE;
	v->a[136073] = actions(7774);
	v->a[136074] = 1;
	v->a[136075] = anon_sym_DOLLAR_BQUOTE;
	v->a[136076] = actions(7898);
	v->a[136077] = 1;
	v->a[136078] = anon_sym_DOLLAR;
	v->a[136079] = state(3061);
	small_parse_table_6804(v);
}

void	small_parse_table_6804(t_small_parse_table_array *v)
{
	v->a[136080] = 1;
	v->a[136081] = aux_sym_string_repeat1;
	v->a[136082] = state(3218);
	v->a[136083] = 4;
	v->a[136084] = sym_arithmetic_expansion;
	v->a[136085] = sym_simple_expansion;
	v->a[136086] = sym_expansion;
	v->a[136087] = sym_command_substitution;
	v->a[136088] = 7;
	v->a[136089] = actions(3);
	v->a[136090] = 1;
	v->a[136091] = sym_comment;
	v->a[136092] = actions(7754);
	v->a[136093] = 1;
	v->a[136094] = aux_sym__simple_variable_name_token1;
	v->a[136095] = actions(7758);
	v->a[136096] = 1;
	v->a[136097] = sym_variable_name;
	v->a[136098] = actions(7900);
	v->a[136099] = 1;
	small_parse_table_6805(v);
}

/* EOF small_parse_table_1360.c */
