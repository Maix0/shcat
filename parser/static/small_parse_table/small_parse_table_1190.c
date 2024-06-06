/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1190.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5950(t_small_parse_table_array *v)
{
	v->a[119000] = 16;
	v->a[119001] = actions(3);
	v->a[119002] = 1;
	v->a[119003] = sym_comment;
	v->a[119004] = actions(5334);
	v->a[119005] = 1;
	v->a[119006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119007] = actions(5340);
	v->a[119008] = 1;
	v->a[119009] = anon_sym_DQUOTE;
	v->a[119010] = actions(5344);
	v->a[119011] = 1;
	v->a[119012] = aux_sym_number_token1;
	v->a[119013] = actions(5346);
	v->a[119014] = 1;
	v->a[119015] = aux_sym_number_token2;
	v->a[119016] = actions(5348);
	v->a[119017] = 1;
	v->a[119018] = anon_sym_DOLLAR_LBRACE;
	v->a[119019] = actions(5350);
	small_parse_table_5951(v);
}

void	small_parse_table_5951(t_small_parse_table_array *v)
{
	v->a[119020] = 1;
	v->a[119021] = anon_sym_DOLLAR_LPAREN;
	v->a[119022] = actions(5352);
	v->a[119023] = 1;
	v->a[119024] = anon_sym_BQUOTE;
	v->a[119025] = actions(5354);
	v->a[119026] = 1;
	v->a[119027] = anon_sym_DOLLAR_BQUOTE;
	v->a[119028] = actions(5360);
	v->a[119029] = 1;
	v->a[119030] = sym__brace_start;
	v->a[119031] = actions(6833);
	v->a[119032] = 1;
	v->a[119033] = sym_word;
	v->a[119034] = actions(6837);
	v->a[119035] = 1;
	v->a[119036] = sym__special_character;
	v->a[119037] = actions(6841);
	v->a[119038] = 1;
	v->a[119039] = sym__comment_word;
	small_parse_table_5952(v);
}

void	small_parse_table_5952(t_small_parse_table_array *v)
{
	v->a[119040] = actions(6973);
	v->a[119041] = 1;
	v->a[119042] = anon_sym_DOLLAR;
	v->a[119043] = actions(6839);
	v->a[119044] = 3;
	v->a[119045] = sym_test_operator;
	v->a[119046] = sym__bare_dollar;
	v->a[119047] = sym_raw_string;
	v->a[119048] = state(1070);
	v->a[119049] = 7;
	v->a[119050] = sym_arithmetic_expansion;
	v->a[119051] = sym_brace_expression;
	v->a[119052] = sym_string;
	v->a[119053] = sym_number;
	v->a[119054] = sym_simple_expansion;
	v->a[119055] = sym_expansion;
	v->a[119056] = sym_command_substitution;
	v->a[119057] = 16;
	v->a[119058] = actions(3);
	v->a[119059] = 1;
	small_parse_table_5953(v);
}

void	small_parse_table_5953(t_small_parse_table_array *v)
{
	v->a[119060] = sym_comment;
	v->a[119061] = actions(3264);
	v->a[119062] = 1;
	v->a[119063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119064] = actions(3266);
	v->a[119065] = 1;
	v->a[119066] = anon_sym_DOLLAR;
	v->a[119067] = actions(3270);
	v->a[119068] = 1;
	v->a[119069] = anon_sym_DQUOTE;
	v->a[119070] = actions(3274);
	v->a[119071] = 1;
	v->a[119072] = aux_sym_number_token1;
	v->a[119073] = actions(3276);
	v->a[119074] = 1;
	v->a[119075] = aux_sym_number_token2;
	v->a[119076] = actions(3278);
	v->a[119077] = 1;
	v->a[119078] = anon_sym_DOLLAR_LBRACE;
	v->a[119079] = actions(3280);
	small_parse_table_5954(v);
}

void	small_parse_table_5954(t_small_parse_table_array *v)
{
	v->a[119080] = 1;
	v->a[119081] = anon_sym_DOLLAR_LPAREN;
	v->a[119082] = actions(3282);
	v->a[119083] = 1;
	v->a[119084] = anon_sym_BQUOTE;
	v->a[119085] = actions(3284);
	v->a[119086] = 1;
	v->a[119087] = anon_sym_DOLLAR_BQUOTE;
	v->a[119088] = actions(3286);
	v->a[119089] = 1;
	v->a[119090] = sym__brace_start;
	v->a[119091] = actions(6763);
	v->a[119092] = 1;
	v->a[119093] = sym_word;
	v->a[119094] = actions(6767);
	v->a[119095] = 1;
	v->a[119096] = sym__special_character;
	v->a[119097] = actions(6771);
	v->a[119098] = 1;
	v->a[119099] = sym__comment_word;
	small_parse_table_5955(v);
}

/* EOF small_parse_table_1190.c */
