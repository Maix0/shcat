/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2610.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13050(t_small_parse_table_array *v)
{
	v->a[261000] = state(3286);
	v->a[261001] = 1;
	v->a[261002] = sym__c_binary_expression;
	v->a[261003] = state(3290);
	v->a[261004] = 1;
	v->a[261005] = sym__c_unary_expression;
	v->a[261006] = state(6632);
	v->a[261007] = 1;
	v->a[261008] = sym__c_expression;
	v->a[261009] = state(6768);
	v->a[261010] = 1;
	v->a[261011] = sym__c_variable_assignment;
	v->a[261012] = actions(11806);
	v->a[261013] = 2;
	v->a[261014] = anon_sym_PLUS_PLUS;
	v->a[261015] = anon_sym_DASH_DASH;
	v->a[261016] = state(3292);
	v->a[261017] = 7;
	v->a[261018] = sym__c_expression_not_assignment;
	v->a[261019] = sym__c_parenthesized_expression;
	small_parse_table_13051(v);
}

void	small_parse_table_13051(t_small_parse_table_array *v)
{
	v->a[261020] = sym_string;
	v->a[261021] = sym_number;
	v->a[261022] = sym_simple_expansion;
	v->a[261023] = sym_expansion;
	v->a[261024] = sym_command_substitution;
	v->a[261025] = 16;
	v->a[261026] = actions(3);
	v->a[261027] = 1;
	v->a[261028] = sym_comment;
	v->a[261029] = actions(11760);
	v->a[261030] = 1;
	v->a[261031] = anon_sym_BANG2;
	v->a[261032] = actions(11764);
	v->a[261033] = 1;
	v->a[261034] = anon_sym_DOLLAR_LPAREN;
	v->a[261035] = actions(11766);
	v->a[261036] = 1;
	v->a[261037] = anon_sym_BQUOTE;
	v->a[261038] = actions(11768);
	v->a[261039] = 1;
	small_parse_table_13052(v);
}

void	small_parse_table_13052(t_small_parse_table_array *v)
{
	v->a[261040] = anon_sym_DOLLAR_BQUOTE;
	v->a[261041] = actions(11770);
	v->a[261042] = 1;
	v->a[261043] = aux_sym__simple_variable_name_token1;
	v->a[261044] = actions(11772);
	v->a[261045] = 1;
	v->a[261046] = sym_variable_name;
	v->a[261047] = actions(11991);
	v->a[261048] = 1;
	v->a[261049] = anon_sym_RBRACE3;
	v->a[261050] = state(3532);
	v->a[261051] = 1;
	v->a[261052] = sym_subscript;
	v->a[261053] = state(6428);
	v->a[261054] = 1;
	v->a[261055] = aux_sym__expansion_body_repeat1;
	v->a[261056] = state(6472);
	v->a[261057] = 1;
	v->a[261058] = sym_command_substitution;
	v->a[261059] = state(7412);
	small_parse_table_13053(v);
}

void	small_parse_table_13053(t_small_parse_table_array *v)
{
	v->a[261060] = 1;
	v->a[261061] = sym__expansion_body;
	v->a[261062] = actions(11762);
	v->a[261063] = 2;
	v->a[261064] = anon_sym_POUND2;
	v->a[261065] = anon_sym_EQ2;
	v->a[261066] = actions(8050);
	v->a[261067] = 3;
	v->a[261068] = sym__external_expansion_sym_hash;
	v->a[261069] = sym__external_expansion_sym_bang;
	v->a[261070] = sym__external_expansion_sym_equal;
	v->a[261071] = actions(11754);
	v->a[261072] = 4;
	v->a[261073] = anon_sym_DASH;
	v->a[261074] = anon_sym_STAR;
	v->a[261075] = anon_sym_QMARK;
	v->a[261076] = anon_sym_AT2;
	v->a[261077] = actions(11756);
	v->a[261078] = 5;
	v->a[261079] = anon_sym_BANG;
	small_parse_table_13054(v);
}

void	small_parse_table_13054(t_small_parse_table_array *v)
{
	v->a[261080] = anon_sym_DOLLAR;
	v->a[261081] = anon_sym_POUND;
	v->a[261082] = anon_sym_0;
	v->a[261083] = anon_sym__;
	v->a[261084] = 5;
	v->a[261085] = actions(3);
	v->a[261086] = 1;
	v->a[261087] = sym_comment;
	v->a[261088] = actions(4253);
	v->a[261089] = 2;
	v->a[261090] = anon_sym_PIPE;
	v->a[261091] = anon_sym_PIPE_AMP;
	v->a[261092] = actions(4272);
	v->a[261093] = 3;
	v->a[261094] = sym_file_descriptor;
	v->a[261095] = ts_builtin_sym_end;
	v->a[261096] = aux_sym_heredoc_redirect_token1;
	v->a[261097] = state(4650);
	v->a[261098] = 3;
	v->a[261099] = sym_file_redirect;
	small_parse_table_13055(v);
}

/* EOF small_parse_table_2610.c */
