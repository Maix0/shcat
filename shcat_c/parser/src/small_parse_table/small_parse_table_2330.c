/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2330.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11650(t_small_parse_table_array *v)
{
	v->a[233000] = anon_sym_DOLLAR_LBRACE;
	v->a[233001] = actions(9646);
	v->a[233002] = 1;
	v->a[233003] = anon_sym_BQUOTE;
	v->a[233004] = actions(9648);
	v->a[233005] = 1;
	v->a[233006] = anon_sym_DOLLAR_BQUOTE;
	v->a[233007] = actions(11012);
	v->a[233008] = 1;
	v->a[233009] = sym__special_character;
	v->a[233010] = actions(11018);
	v->a[233011] = 1;
	v->a[233012] = sym_word;
	v->a[233013] = actions(11022);
	v->a[233014] = 1;
	v->a[233015] = sym_test_operator;
	v->a[233016] = state(4347);
	v->a[233017] = 1;
	v->a[233018] = aux_sym__literal_repeat1;
	v->a[233019] = state(4617);
	small_parse_table_11651(v);
}

void	small_parse_table_11651(t_small_parse_table_array *v)
{
	v->a[233020] = 1;
	v->a[233021] = sym_concatenation;
	v->a[233022] = actions(9634);
	v->a[233023] = 2;
	v->a[233024] = anon_sym_LPAREN_LPAREN;
	v->a[233025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233026] = actions(9650);
	v->a[233027] = 2;
	v->a[233028] = anon_sym_LT_LPAREN;
	v->a[233029] = anon_sym_GT_LPAREN;
	v->a[233030] = actions(11020);
	v->a[233031] = 2;
	v->a[233032] = sym_raw_string;
	v->a[233033] = sym_ansi_c_string;
	v->a[233034] = state(4750);
	v->a[233035] = 9;
	v->a[233036] = sym_arithmetic_expansion;
	v->a[233037] = sym_brace_expression;
	v->a[233038] = sym_string;
	v->a[233039] = sym_translated_string;
	small_parse_table_11652(v);
}

void	small_parse_table_11652(t_small_parse_table_array *v)
{
	v->a[233040] = sym_number;
	v->a[233041] = sym_simple_expansion;
	v->a[233042] = sym_expansion;
	v->a[233043] = sym_command_substitution;
	v->a[233044] = sym_process_substitution;
	v->a[233045] = 18;
	v->a[233046] = actions(3);
	v->a[233047] = 1;
	v->a[233048] = sym_comment;
	v->a[233049] = actions(3435);
	v->a[233050] = 1;
	v->a[233051] = anon_sym_DOLLAR;
	v->a[233052] = actions(3441);
	v->a[233053] = 1;
	v->a[233054] = aux_sym_number_token1;
	v->a[233055] = actions(3443);
	v->a[233056] = 1;
	v->a[233057] = aux_sym_number_token2;
	v->a[233058] = actions(3447);
	v->a[233059] = 1;
	small_parse_table_11653(v);
}

void	small_parse_table_11653(t_small_parse_table_array *v)
{
	v->a[233060] = anon_sym_DOLLAR_LPAREN;
	v->a[233061] = actions(3459);
	v->a[233062] = 1;
	v->a[233063] = sym__brace_start;
	v->a[233064] = actions(10930);
	v->a[233065] = 1;
	v->a[233066] = sym_word;
	v->a[233067] = actions(10934);
	v->a[233068] = 1;
	v->a[233069] = anon_sym_DOLLAR_LBRACK;
	v->a[233070] = actions(10940);
	v->a[233071] = 1;
	v->a[233072] = anon_sym_DQUOTE;
	v->a[233073] = actions(10944);
	v->a[233074] = 1;
	v->a[233075] = anon_sym_DOLLAR_LBRACE;
	v->a[233076] = actions(10946);
	v->a[233077] = 1;
	v->a[233078] = anon_sym_BQUOTE;
	v->a[233079] = actions(10948);
	small_parse_table_11654(v);
}

void	small_parse_table_11654(t_small_parse_table_array *v)
{
	v->a[233080] = 1;
	v->a[233081] = anon_sym_DOLLAR_BQUOTE;
	v->a[233082] = actions(10952);
	v->a[233083] = 1;
	v->a[233084] = sym__comment_word;
	v->a[233085] = actions(10932);
	v->a[233086] = 2;
	v->a[233087] = anon_sym_LPAREN_LPAREN;
	v->a[233088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233089] = actions(10938);
	v->a[233090] = 2;
	v->a[233091] = sym_test_operator;
	v->a[233092] = sym__special_character;
	v->a[233093] = actions(10950);
	v->a[233094] = 2;
	v->a[233095] = anon_sym_LT_LPAREN;
	v->a[233096] = anon_sym_GT_LPAREN;
	v->a[233097] = actions(10942);
	v->a[233098] = 3;
	v->a[233099] = sym__bare_dollar;
	small_parse_table_11655(v);
}

/* EOF small_parse_table_2330.c */
