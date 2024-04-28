/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2030.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10150(t_small_parse_table_array *v)
{
	v->a[203000] = actions(9338);
	v->a[203001] = 1;
	v->a[203002] = sym__comment_word;
	v->a[203003] = actions(4631);
	v->a[203004] = 2;
	v->a[203005] = anon_sym_LPAREN_LPAREN;
	v->a[203006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203007] = actions(4655);
	v->a[203008] = 2;
	v->a[203009] = anon_sym_LT_LPAREN;
	v->a[203010] = anon_sym_GT_LPAREN;
	v->a[203011] = actions(9334);
	v->a[203012] = 2;
	v->a[203013] = sym_test_operator;
	v->a[203014] = sym__special_character;
	v->a[203015] = actions(9336);
	v->a[203016] = 3;
	v->a[203017] = sym__bare_dollar;
	v->a[203018] = sym_raw_string;
	v->a[203019] = sym_ansi_c_string;
	small_parse_table_10151(v);
}

void	small_parse_table_10151(t_small_parse_table_array *v)
{
	v->a[203020] = state(2634);
	v->a[203021] = 9;
	v->a[203022] = sym_arithmetic_expansion;
	v->a[203023] = sym_brace_expression;
	v->a[203024] = sym_string;
	v->a[203025] = sym_translated_string;
	v->a[203026] = sym_number;
	v->a[203027] = sym_simple_expansion;
	v->a[203028] = sym_expansion;
	v->a[203029] = sym_command_substitution;
	v->a[203030] = sym_process_substitution;
	v->a[203031] = 18;
	v->a[203032] = actions(3);
	v->a[203033] = 1;
	v->a[203034] = sym_comment;
	v->a[203035] = actions(111);
	v->a[203036] = 1;
	v->a[203037] = anon_sym_DOLLAR_LBRACK;
	v->a[203038] = actions(113);
	v->a[203039] = 1;
	small_parse_table_10152(v);
}

void	small_parse_table_10152(t_small_parse_table_array *v)
{
	v->a[203040] = anon_sym_DOLLAR;
	v->a[203041] = actions(117);
	v->a[203042] = 1;
	v->a[203043] = anon_sym_DQUOTE;
	v->a[203044] = actions(121);
	v->a[203045] = 1;
	v->a[203046] = aux_sym_number_token1;
	v->a[203047] = actions(123);
	v->a[203048] = 1;
	v->a[203049] = aux_sym_number_token2;
	v->a[203050] = actions(125);
	v->a[203051] = 1;
	v->a[203052] = anon_sym_DOLLAR_LBRACE;
	v->a[203053] = actions(127);
	v->a[203054] = 1;
	v->a[203055] = anon_sym_DOLLAR_LPAREN;
	v->a[203056] = actions(129);
	v->a[203057] = 1;
	v->a[203058] = anon_sym_BQUOTE;
	v->a[203059] = actions(131);
	small_parse_table_10153(v);
}

void	small_parse_table_10153(t_small_parse_table_array *v)
{
	v->a[203060] = 1;
	v->a[203061] = anon_sym_DOLLAR_BQUOTE;
	v->a[203062] = actions(141);
	v->a[203063] = 1;
	v->a[203064] = sym__brace_start;
	v->a[203065] = actions(9340);
	v->a[203066] = 1;
	v->a[203067] = sym_word;
	v->a[203068] = actions(9346);
	v->a[203069] = 1;
	v->a[203070] = sym__comment_word;
	v->a[203071] = actions(109);
	v->a[203072] = 2;
	v->a[203073] = anon_sym_LPAREN_LPAREN;
	v->a[203074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203075] = actions(133);
	v->a[203076] = 2;
	v->a[203077] = anon_sym_LT_LPAREN;
	v->a[203078] = anon_sym_GT_LPAREN;
	v->a[203079] = actions(9342);
	small_parse_table_10154(v);
}

void	small_parse_table_10154(t_small_parse_table_array *v)
{
	v->a[203080] = 2;
	v->a[203081] = sym_test_operator;
	v->a[203082] = sym__special_character;
	v->a[203083] = actions(9344);
	v->a[203084] = 3;
	v->a[203085] = sym__bare_dollar;
	v->a[203086] = sym_raw_string;
	v->a[203087] = sym_ansi_c_string;
	v->a[203088] = state(482);
	v->a[203089] = 9;
	v->a[203090] = sym_arithmetic_expansion;
	v->a[203091] = sym_brace_expression;
	v->a[203092] = sym_string;
	v->a[203093] = sym_translated_string;
	v->a[203094] = sym_number;
	v->a[203095] = sym_simple_expansion;
	v->a[203096] = sym_expansion;
	v->a[203097] = sym_command_substitution;
	v->a[203098] = sym_process_substitution;
	v->a[203099] = 20;
	small_parse_table_10155(v);
}

/* EOF small_parse_table_2030.c */
