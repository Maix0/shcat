/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2010.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10050(t_small_parse_table_array *v)
{
	v->a[201000] = sym_comment;
	v->a[201001] = actions(3391);
	v->a[201002] = 1;
	v->a[201003] = sym_word;
	v->a[201004] = actions(3397);
	v->a[201005] = 1;
	v->a[201006] = anon_sym_DOLLAR;
	v->a[201007] = actions(3401);
	v->a[201008] = 1;
	v->a[201009] = aux_sym_number_token1;
	v->a[201010] = actions(3403);
	v->a[201011] = 1;
	v->a[201012] = aux_sym_number_token2;
	v->a[201013] = actions(3407);
	v->a[201014] = 1;
	v->a[201015] = anon_sym_DOLLAR_LPAREN;
	v->a[201016] = actions(3415);
	v->a[201017] = 1;
	v->a[201018] = sym_test_operator;
	v->a[201019] = actions(3417);
	small_parse_table_10051(v);
}

void	small_parse_table_10051(t_small_parse_table_array *v)
{
	v->a[201020] = 1;
	v->a[201021] = sym__brace_start;
	v->a[201022] = actions(8926);
	v->a[201023] = 1;
	v->a[201024] = anon_sym_DOLLAR_LBRACK;
	v->a[201025] = actions(8930);
	v->a[201026] = 1;
	v->a[201027] = anon_sym_DQUOTE;
	v->a[201028] = actions(8934);
	v->a[201029] = 1;
	v->a[201030] = anon_sym_DOLLAR_LBRACE;
	v->a[201031] = actions(8936);
	v->a[201032] = 1;
	v->a[201033] = anon_sym_BQUOTE;
	v->a[201034] = actions(8938);
	v->a[201035] = 1;
	v->a[201036] = anon_sym_DOLLAR_BQUOTE;
	v->a[201037] = actions(9160);
	v->a[201038] = 1;
	v->a[201039] = sym__special_character;
	small_parse_table_10052(v);
}

void	small_parse_table_10052(t_small_parse_table_array *v)
{
	v->a[201040] = state(2161);
	v->a[201041] = 1;
	v->a[201042] = aux_sym__literal_repeat1;
	v->a[201043] = actions(8924);
	v->a[201044] = 2;
	v->a[201045] = anon_sym_LPAREN_LPAREN;
	v->a[201046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201047] = actions(8940);
	v->a[201048] = 2;
	v->a[201049] = anon_sym_LT_LPAREN;
	v->a[201050] = anon_sym_GT_LPAREN;
	v->a[201051] = actions(9162);
	v->a[201052] = 2;
	v->a[201053] = sym_raw_string;
	v->a[201054] = sym_ansi_c_string;
	v->a[201055] = state(684);
	v->a[201056] = 2;
	v->a[201057] = sym_concatenation;
	v->a[201058] = aux_sym_for_statement_repeat1;
	v->a[201059] = state(1711);
	small_parse_table_10053(v);
}

void	small_parse_table_10053(t_small_parse_table_array *v)
{
	v->a[201060] = 9;
	v->a[201061] = sym_arithmetic_expansion;
	v->a[201062] = sym_brace_expression;
	v->a[201063] = sym_string;
	v->a[201064] = sym_translated_string;
	v->a[201065] = sym_number;
	v->a[201066] = sym_simple_expansion;
	v->a[201067] = sym_expansion;
	v->a[201068] = sym_command_substitution;
	v->a[201069] = sym_process_substitution;
	v->a[201070] = 20;
	v->a[201071] = actions(71);
	v->a[201072] = 1;
	v->a[201073] = sym_comment;
	v->a[201074] = actions(7996);
	v->a[201075] = 1;
	v->a[201076] = anon_sym_DOLLAR_LBRACK;
	v->a[201077] = actions(7998);
	v->a[201078] = 1;
	v->a[201079] = anon_sym_DOLLAR;
	small_parse_table_10054(v);
}

void	small_parse_table_10054(t_small_parse_table_array *v)
{
	v->a[201080] = actions(8000);
	v->a[201081] = 1;
	v->a[201082] = sym__special_character;
	v->a[201083] = actions(8002);
	v->a[201084] = 1;
	v->a[201085] = anon_sym_DQUOTE;
	v->a[201086] = actions(8006);
	v->a[201087] = 1;
	v->a[201088] = aux_sym_number_token1;
	v->a[201089] = actions(8008);
	v->a[201090] = 1;
	v->a[201091] = aux_sym_number_token2;
	v->a[201092] = actions(8010);
	v->a[201093] = 1;
	v->a[201094] = anon_sym_DOLLAR_LBRACE;
	v->a[201095] = actions(8012);
	v->a[201096] = 1;
	v->a[201097] = anon_sym_DOLLAR_LPAREN;
	v->a[201098] = actions(8014);
	v->a[201099] = 1;
	small_parse_table_10055(v);
}

/* EOF small_parse_table_2010.c */
