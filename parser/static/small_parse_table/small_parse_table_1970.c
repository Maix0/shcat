/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1970.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9850(t_small_parse_table_array *v)
{
	v->a[197000] = anon_sym_LT_LPAREN;
	v->a[197001] = anon_sym_GT_LPAREN;
	v->a[197002] = state(3460);
	v->a[197003] = 2;
	v->a[197004] = sym_concatenation;
	v->a[197005] = aux_sym_for_statement_repeat1;
	v->a[197006] = state(4460);
	v->a[197007] = 9;
	v->a[197008] = sym_arithmetic_expansion;
	v->a[197009] = sym_brace_expression;
	v->a[197010] = sym_string;
	v->a[197011] = sym_translated_string;
	v->a[197012] = sym_number;
	v->a[197013] = sym_simple_expansion;
	v->a[197014] = sym_expansion;
	v->a[197015] = sym_command_substitution;
	v->a[197016] = sym_process_substitution;
	v->a[197017] = 20;
	v->a[197018] = actions(71);
	v->a[197019] = 1;
	small_parse_table_9851(v);
}

void	small_parse_table_9851(t_small_parse_table_array *v)
{
	v->a[197020] = sym_comment;
	v->a[197021] = actions(3612);
	v->a[197022] = 1;
	v->a[197023] = anon_sym_DOLLAR;
	v->a[197024] = actions(3616);
	v->a[197025] = 1;
	v->a[197026] = aux_sym_number_token1;
	v->a[197027] = actions(3618);
	v->a[197028] = 1;
	v->a[197029] = aux_sym_number_token2;
	v->a[197030] = actions(3622);
	v->a[197031] = 1;
	v->a[197032] = anon_sym_DOLLAR_LPAREN;
	v->a[197033] = actions(3632);
	v->a[197034] = 1;
	v->a[197035] = sym__brace_start;
	v->a[197036] = actions(4975);
	v->a[197037] = 1;
	v->a[197038] = sym_word;
	v->a[197039] = actions(4979);
	small_parse_table_9852(v);
}

void	small_parse_table_9852(t_small_parse_table_array *v)
{
	v->a[197040] = 1;
	v->a[197041] = sym_test_operator;
	v->a[197042] = actions(8850);
	v->a[197043] = 1;
	v->a[197044] = anon_sym_DOLLAR_LBRACK;
	v->a[197045] = actions(8852);
	v->a[197046] = 1;
	v->a[197047] = sym__special_character;
	v->a[197048] = actions(8854);
	v->a[197049] = 1;
	v->a[197050] = anon_sym_DQUOTE;
	v->a[197051] = actions(8858);
	v->a[197052] = 1;
	v->a[197053] = anon_sym_DOLLAR_LBRACE;
	v->a[197054] = actions(8860);
	v->a[197055] = 1;
	v->a[197056] = anon_sym_BQUOTE;
	v->a[197057] = actions(8862);
	v->a[197058] = 1;
	v->a[197059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9853(v);
}

void	small_parse_table_9853(t_small_parse_table_array *v)
{
	v->a[197060] = state(2270);
	v->a[197061] = 1;
	v->a[197062] = aux_sym__literal_repeat1;
	v->a[197063] = actions(8848);
	v->a[197064] = 2;
	v->a[197065] = anon_sym_LPAREN_LPAREN;
	v->a[197066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197067] = actions(8856);
	v->a[197068] = 2;
	v->a[197069] = sym_raw_string;
	v->a[197070] = sym_ansi_c_string;
	v->a[197071] = actions(8864);
	v->a[197072] = 2;
	v->a[197073] = anon_sym_LT_LPAREN;
	v->a[197074] = anon_sym_GT_LPAREN;
	v->a[197075] = state(972);
	v->a[197076] = 2;
	v->a[197077] = sym_concatenation;
	v->a[197078] = aux_sym_for_statement_repeat1;
	v->a[197079] = state(2572);
	small_parse_table_9854(v);
}

void	small_parse_table_9854(t_small_parse_table_array *v)
{
	v->a[197080] = 9;
	v->a[197081] = sym_arithmetic_expansion;
	v->a[197082] = sym_brace_expression;
	v->a[197083] = sym_string;
	v->a[197084] = sym_translated_string;
	v->a[197085] = sym_number;
	v->a[197086] = sym_simple_expansion;
	v->a[197087] = sym_expansion;
	v->a[197088] = sym_command_substitution;
	v->a[197089] = sym_process_substitution;
	v->a[197090] = 8;
	v->a[197091] = actions(3);
	v->a[197092] = 1;
	v->a[197093] = sym_comment;
	v->a[197094] = actions(1241);
	v->a[197095] = 1;
	v->a[197096] = sym_file_descriptor;
	v->a[197097] = actions(8868);
	v->a[197098] = 1;
	v->a[197099] = anon_sym_DQUOTE;
	small_parse_table_9855(v);
}

/* EOF small_parse_table_1970.c */
