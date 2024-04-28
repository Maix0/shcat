/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2780.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13900(t_small_parse_table_array *v)
{
	v->a[278000] = actions(12173);
	v->a[278001] = 1;
	v->a[278002] = anon_sym_DQUOTE;
	v->a[278003] = actions(12175);
	v->a[278004] = 1;
	v->a[278005] = aux_sym_number_token1;
	v->a[278006] = actions(12177);
	v->a[278007] = 1;
	v->a[278008] = aux_sym_number_token2;
	v->a[278009] = actions(12179);
	v->a[278010] = 1;
	v->a[278011] = anon_sym_DOLLAR_LBRACE;
	v->a[278012] = actions(12181);
	v->a[278013] = 1;
	v->a[278014] = anon_sym_DOLLAR_LPAREN;
	v->a[278015] = actions(12183);
	v->a[278016] = 1;
	v->a[278017] = anon_sym_BQUOTE;
	v->a[278018] = actions(12185);
	v->a[278019] = 1;
	small_parse_table_13901(v);
}

void	small_parse_table_13901(t_small_parse_table_array *v)
{
	v->a[278020] = anon_sym_DOLLAR_BQUOTE;
	v->a[278021] = actions(12512);
	v->a[278022] = 1;
	v->a[278023] = aux_sym__c_word_token1;
	v->a[278024] = state(3442);
	v->a[278025] = 1;
	v->a[278026] = sym__c_unary_expression;
	v->a[278027] = state(3443);
	v->a[278028] = 1;
	v->a[278029] = sym__c_binary_expression;
	v->a[278030] = state(3444);
	v->a[278031] = 1;
	v->a[278032] = sym__c_postfix_expression;
	v->a[278033] = actions(12165);
	v->a[278034] = 2;
	v->a[278035] = anon_sym_PLUS_PLUS;
	v->a[278036] = anon_sym_DASH_DASH;
	v->a[278037] = state(3387);
	v->a[278038] = 7;
	v->a[278039] = sym__c_expression_not_assignment;
	small_parse_table_13902(v);
}

void	small_parse_table_13902(t_small_parse_table_array *v)
{
	v->a[278040] = sym__c_parenthesized_expression;
	v->a[278041] = sym_string;
	v->a[278042] = sym_number;
	v->a[278043] = sym_simple_expansion;
	v->a[278044] = sym_expansion;
	v->a[278045] = sym_command_substitution;
	v->a[278046] = 3;
	v->a[278047] = actions(71);
	v->a[278048] = 1;
	v->a[278049] = sym_comment;
	v->a[278050] = actions(1251);
	v->a[278051] = 6;
	v->a[278052] = anon_sym_DOLLAR;
	v->a[278053] = aux_sym_number_token1;
	v->a[278054] = aux_sym_number_token2;
	v->a[278055] = anon_sym_DOLLAR_LPAREN;
	v->a[278056] = anon_sym_BQUOTE;
	v->a[278057] = sym_word;
	v->a[278058] = actions(1253);
	v->a[278059] = 16;
	small_parse_table_13903(v);
}

void	small_parse_table_13903(t_small_parse_table_array *v)
{
	v->a[278060] = sym__concat;
	v->a[278061] = sym_test_operator;
	v->a[278062] = sym__brace_start;
	v->a[278063] = anon_sym_LPAREN_LPAREN;
	v->a[278064] = anon_sym_RPAREN;
	v->a[278065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278066] = anon_sym_DOLLAR_LBRACK;
	v->a[278067] = aux_sym_concatenation_token1;
	v->a[278068] = sym__special_character;
	v->a[278069] = anon_sym_DQUOTE;
	v->a[278070] = sym_raw_string;
	v->a[278071] = sym_ansi_c_string;
	v->a[278072] = anon_sym_DOLLAR_LBRACE;
	v->a[278073] = anon_sym_DOLLAR_BQUOTE;
	v->a[278074] = anon_sym_LT_LPAREN;
	v->a[278075] = anon_sym_GT_LPAREN;
	v->a[278076] = 3;
	v->a[278077] = actions(71);
	v->a[278078] = 1;
	v->a[278079] = sym_comment;
	small_parse_table_13904(v);
}

void	small_parse_table_13904(t_small_parse_table_array *v)
{
	v->a[278080] = actions(1324);
	v->a[278081] = 6;
	v->a[278082] = anon_sym_DOLLAR;
	v->a[278083] = aux_sym_number_token1;
	v->a[278084] = aux_sym_number_token2;
	v->a[278085] = anon_sym_DOLLAR_LPAREN;
	v->a[278086] = anon_sym_BQUOTE;
	v->a[278087] = sym_word;
	v->a[278088] = actions(1326);
	v->a[278089] = 16;
	v->a[278090] = sym__concat;
	v->a[278091] = sym_test_operator;
	v->a[278092] = sym__brace_start;
	v->a[278093] = anon_sym_LPAREN_LPAREN;
	v->a[278094] = anon_sym_RPAREN;
	v->a[278095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278096] = anon_sym_DOLLAR_LBRACK;
	v->a[278097] = aux_sym_concatenation_token1;
	v->a[278098] = sym__special_character;
	v->a[278099] = anon_sym_DQUOTE;
	small_parse_table_13905(v);
}

/* EOF small_parse_table_2780.c */
