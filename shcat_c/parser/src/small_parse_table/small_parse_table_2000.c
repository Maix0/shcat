/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2000.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10000(t_small_parse_table_array *v)
{
	v->a[200000] = anon_sym_LPAREN_LPAREN;
	v->a[200001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200002] = actions(8864);
	v->a[200003] = 2;
	v->a[200004] = anon_sym_LT_LPAREN;
	v->a[200005] = anon_sym_GT_LPAREN;
	v->a[200006] = actions(9088);
	v->a[200007] = 2;
	v->a[200008] = sym_raw_string;
	v->a[200009] = sym_ansi_c_string;
	v->a[200010] = state(786);
	v->a[200011] = 2;
	v->a[200012] = sym_concatenation;
	v->a[200013] = aux_sym_for_statement_repeat1;
	v->a[200014] = state(1968);
	v->a[200015] = 9;
	v->a[200016] = sym_arithmetic_expansion;
	v->a[200017] = sym_brace_expression;
	v->a[200018] = sym_string;
	v->a[200019] = sym_translated_string;
	small_parse_table_10001(v);
}

void	small_parse_table_10001(t_small_parse_table_array *v)
{
	v->a[200020] = sym_number;
	v->a[200021] = sym_simple_expansion;
	v->a[200022] = sym_expansion;
	v->a[200023] = sym_command_substitution;
	v->a[200024] = sym_process_substitution;
	v->a[200025] = 21;
	v->a[200026] = actions(71);
	v->a[200027] = 1;
	v->a[200028] = sym_comment;
	v->a[200029] = actions(1414);
	v->a[200030] = 1;
	v->a[200031] = anon_sym_DOLLAR;
	v->a[200032] = actions(1420);
	v->a[200033] = 1;
	v->a[200034] = aux_sym_number_token1;
	v->a[200035] = actions(1422);
	v->a[200036] = 1;
	v->a[200037] = aux_sym_number_token2;
	v->a[200038] = actions(1426);
	v->a[200039] = 1;
	small_parse_table_10002(v);
}

void	small_parse_table_10002(t_small_parse_table_array *v)
{
	v->a[200040] = anon_sym_DOLLAR_LPAREN;
	v->a[200041] = actions(1438);
	v->a[200042] = 1;
	v->a[200043] = sym__brace_start;
	v->a[200044] = actions(9090);
	v->a[200045] = 1;
	v->a[200046] = sym_word;
	v->a[200047] = actions(9094);
	v->a[200048] = 1;
	v->a[200049] = anon_sym_DOLLAR_LBRACK;
	v->a[200050] = actions(9096);
	v->a[200051] = 1;
	v->a[200052] = sym__special_character;
	v->a[200053] = actions(9098);
	v->a[200054] = 1;
	v->a[200055] = anon_sym_DQUOTE;
	v->a[200056] = actions(9102);
	v->a[200057] = 1;
	v->a[200058] = anon_sym_DOLLAR_LBRACE;
	v->a[200059] = actions(9104);
	small_parse_table_10003(v);
}

void	small_parse_table_10003(t_small_parse_table_array *v)
{
	v->a[200060] = 1;
	v->a[200061] = anon_sym_BQUOTE;
	v->a[200062] = actions(9106);
	v->a[200063] = 1;
	v->a[200064] = anon_sym_DOLLAR_BQUOTE;
	v->a[200065] = actions(9110);
	v->a[200066] = 1;
	v->a[200067] = sym_test_operator;
	v->a[200068] = actions(9112);
	v->a[200069] = 1;
	v->a[200070] = sym_regex;
	v->a[200071] = state(1014);
	v->a[200072] = 1;
	v->a[200073] = aux_sym__literal_repeat1;
	v->a[200074] = state(1168);
	v->a[200075] = 1;
	v->a[200076] = sym_concatenation;
	v->a[200077] = actions(9092);
	v->a[200078] = 2;
	v->a[200079] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10004(v);
}

void	small_parse_table_10004(t_small_parse_table_array *v)
{
	v->a[200080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200081] = actions(9100);
	v->a[200082] = 2;
	v->a[200083] = sym_raw_string;
	v->a[200084] = sym_ansi_c_string;
	v->a[200085] = actions(9108);
	v->a[200086] = 2;
	v->a[200087] = anon_sym_LT_LPAREN;
	v->a[200088] = anon_sym_GT_LPAREN;
	v->a[200089] = state(854);
	v->a[200090] = 9;
	v->a[200091] = sym_arithmetic_expansion;
	v->a[200092] = sym_brace_expression;
	v->a[200093] = sym_string;
	v->a[200094] = sym_translated_string;
	v->a[200095] = sym_number;
	v->a[200096] = sym_simple_expansion;
	v->a[200097] = sym_expansion;
	v->a[200098] = sym_command_substitution;
	v->a[200099] = sym_process_substitution;
	small_parse_table_10005(v);
}

/* EOF small_parse_table_2000.c */
