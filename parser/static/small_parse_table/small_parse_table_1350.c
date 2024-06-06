/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1350.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6750(t_small_parse_table_array *v)
{
	v->a[135000] = actions(7772);
	v->a[135001] = 1;
	v->a[135002] = anon_sym_BQUOTE;
	v->a[135003] = actions(7774);
	v->a[135004] = 1;
	v->a[135005] = anon_sym_DOLLAR_BQUOTE;
	v->a[135006] = actions(7814);
	v->a[135007] = 1;
	v->a[135008] = anon_sym_DOLLAR;
	v->a[135009] = actions(7816);
	v->a[135010] = 1;
	v->a[135011] = anon_sym_DQUOTE;
	v->a[135012] = state(3000);
	v->a[135013] = 1;
	v->a[135014] = aux_sym_string_repeat1;
	v->a[135015] = state(3218);
	v->a[135016] = 4;
	v->a[135017] = sym_arithmetic_expansion;
	v->a[135018] = sym_simple_expansion;
	v->a[135019] = sym_expansion;
	small_parse_table_6751(v);
}

void	small_parse_table_6751(t_small_parse_table_array *v)
{
	v->a[135020] = sym_command_substitution;
	v->a[135021] = 7;
	v->a[135022] = actions(3);
	v->a[135023] = 1;
	v->a[135024] = sym_comment;
	v->a[135025] = actions(7754);
	v->a[135026] = 1;
	v->a[135027] = aux_sym__simple_variable_name_token1;
	v->a[135028] = actions(7758);
	v->a[135029] = 1;
	v->a[135030] = sym_variable_name;
	v->a[135031] = actions(7818);
	v->a[135032] = 1;
	v->a[135033] = anon_sym_RBRACE3;
	v->a[135034] = state(4024);
	v->a[135035] = 1;
	v->a[135036] = sym__expansion_body;
	v->a[135037] = actions(7756);
	v->a[135038] = 2;
	v->a[135039] = anon_sym_0;
	small_parse_table_6752(v);
}

void	small_parse_table_6752(t_small_parse_table_array *v)
{
	v->a[135040] = anon_sym__;
	v->a[135041] = actions(7750);
	v->a[135042] = 7;
	v->a[135043] = anon_sym_BANG;
	v->a[135044] = anon_sym_DASH;
	v->a[135045] = anon_sym_STAR;
	v->a[135046] = anon_sym_QMARK;
	v->a[135047] = anon_sym_DOLLAR;
	v->a[135048] = anon_sym_POUND;
	v->a[135049] = anon_sym_AT;
	v->a[135050] = 11;
	v->a[135051] = actions(3);
	v->a[135052] = 1;
	v->a[135053] = sym_comment;
	v->a[135054] = actions(7760);
	v->a[135055] = 1;
	v->a[135056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135057] = actions(7766);
	v->a[135058] = 1;
	v->a[135059] = sym_string_content;
	small_parse_table_6753(v);
}

void	small_parse_table_6753(t_small_parse_table_array *v)
{
	v->a[135060] = actions(7768);
	v->a[135061] = 1;
	v->a[135062] = anon_sym_DOLLAR_LBRACE;
	v->a[135063] = actions(7770);
	v->a[135064] = 1;
	v->a[135065] = anon_sym_DOLLAR_LPAREN;
	v->a[135066] = actions(7772);
	v->a[135067] = 1;
	v->a[135068] = anon_sym_BQUOTE;
	v->a[135069] = actions(7774);
	v->a[135070] = 1;
	v->a[135071] = anon_sym_DOLLAR_BQUOTE;
	v->a[135072] = actions(7820);
	v->a[135073] = 1;
	v->a[135074] = anon_sym_DOLLAR;
	v->a[135075] = actions(7822);
	v->a[135076] = 1;
	v->a[135077] = anon_sym_DQUOTE;
	v->a[135078] = state(3010);
	v->a[135079] = 1;
	small_parse_table_6754(v);
}

void	small_parse_table_6754(t_small_parse_table_array *v)
{
	v->a[135080] = aux_sym_string_repeat1;
	v->a[135081] = state(3218);
	v->a[135082] = 4;
	v->a[135083] = sym_arithmetic_expansion;
	v->a[135084] = sym_simple_expansion;
	v->a[135085] = sym_expansion;
	v->a[135086] = sym_command_substitution;
	v->a[135087] = 11;
	v->a[135088] = actions(3);
	v->a[135089] = 1;
	v->a[135090] = sym_comment;
	v->a[135091] = actions(7656);
	v->a[135092] = 1;
	v->a[135093] = anon_sym_DQUOTE;
	v->a[135094] = actions(7760);
	v->a[135095] = 1;
	v->a[135096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135097] = actions(7766);
	v->a[135098] = 1;
	v->a[135099] = sym_string_content;
	small_parse_table_6755(v);
}

/* EOF small_parse_table_1350.c */
