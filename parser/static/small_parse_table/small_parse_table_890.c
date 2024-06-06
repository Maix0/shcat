/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_890.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4450(t_small_parse_table_array *v)
{
	v->a[89000] = 1;
	v->a[89001] = anon_sym_BANG;
	v->a[89002] = actions(4622);
	v->a[89003] = 1;
	v->a[89004] = anon_sym_TILDE;
	v->a[89005] = actions(4624);
	v->a[89006] = 1;
	v->a[89007] = anon_sym_DOLLAR;
	v->a[89008] = actions(4626);
	v->a[89009] = 1;
	v->a[89010] = anon_sym_DQUOTE;
	v->a[89011] = actions(4628);
	v->a[89012] = 1;
	v->a[89013] = aux_sym_number_token1;
	v->a[89014] = actions(4630);
	v->a[89015] = 1;
	v->a[89016] = aux_sym_number_token2;
	v->a[89017] = actions(4632);
	v->a[89018] = 1;
	v->a[89019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4451(v);
}

void	small_parse_table_4451(t_small_parse_table_array *v)
{
	v->a[89020] = actions(4634);
	v->a[89021] = 1;
	v->a[89022] = anon_sym_DOLLAR_LPAREN;
	v->a[89023] = actions(4636);
	v->a[89024] = 1;
	v->a[89025] = anon_sym_BQUOTE;
	v->a[89026] = actions(4638);
	v->a[89027] = 1;
	v->a[89028] = anon_sym_DOLLAR_BQUOTE;
	v->a[89029] = actions(4917);
	v->a[89030] = 1;
	v->a[89031] = aux_sym__simple_variable_name_token1;
	v->a[89032] = actions(4919);
	v->a[89033] = 1;
	v->a[89034] = sym_variable_name;
	v->a[89035] = state(1637);
	v->a[89036] = 1;
	v->a[89037] = sym__arithmetic_postfix_expression;
	v->a[89038] = state(1638);
	v->a[89039] = 1;
	small_parse_table_4452(v);
}

void	small_parse_table_4452(t_small_parse_table_array *v)
{
	v->a[89040] = sym__arithmetic_unary_expression;
	v->a[89041] = state(1640);
	v->a[89042] = 1;
	v->a[89043] = sym__arithmetic_ternary_expression;
	v->a[89044] = state(1642);
	v->a[89045] = 1;
	v->a[89046] = sym__arithmetic_binary_expression;
	v->a[89047] = actions(4618);
	v->a[89048] = 2;
	v->a[89049] = anon_sym_PLUS_PLUS;
	v->a[89050] = anon_sym_DASH_DASH;
	v->a[89051] = actions(4620);
	v->a[89052] = 2;
	v->a[89053] = anon_sym_DASH2;
	v->a[89054] = anon_sym_PLUS2;
	v->a[89055] = state(1627);
	v->a[89056] = 8;
	v->a[89057] = sym__arithmetic_expression;
	v->a[89058] = sym__arithmetic_literal;
	v->a[89059] = sym__arithmetic_parenthesized_expression;
	small_parse_table_4453(v);
}

void	small_parse_table_4453(t_small_parse_table_array *v)
{
	v->a[89060] = sym_string;
	v->a[89061] = sym_number;
	v->a[89062] = sym_simple_expansion;
	v->a[89063] = sym_expansion;
	v->a[89064] = sym_command_substitution;
	v->a[89065] = 6;
	v->a[89066] = actions(3);
	v->a[89067] = 1;
	v->a[89068] = sym_comment;
	v->a[89069] = actions(4885);
	v->a[89070] = 1;
	v->a[89071] = sym_variable_name;
	v->a[89072] = actions(816);
	v->a[89073] = 2;
	v->a[89074] = sym_test_operator;
	v->a[89075] = sym__brace_start;
	v->a[89076] = actions(4883);
	v->a[89077] = 2;
	v->a[89078] = aux_sym__simple_variable_name_token1;
	v->a[89079] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4454(v);
}

void	small_parse_table_4454(t_small_parse_table_array *v)
{
	v->a[89080] = actions(4881);
	v->a[89081] = 9;
	v->a[89082] = anon_sym_BANG;
	v->a[89083] = anon_sym_DASH;
	v->a[89084] = anon_sym_STAR;
	v->a[89085] = anon_sym_QMARK;
	v->a[89086] = anon_sym_DOLLAR;
	v->a[89087] = anon_sym_POUND;
	v->a[89088] = anon_sym_AT;
	v->a[89089] = anon_sym_0;
	v->a[89090] = anon_sym__;
	v->a[89091] = actions(810);
	v->a[89092] = 15;
	v->a[89093] = anon_sym_SEMI_SEMI;
	v->a[89094] = aux_sym_heredoc_redirect_token1;
	v->a[89095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89096] = anon_sym_AMP;
	v->a[89097] = sym__special_character;
	v->a[89098] = anon_sym_DQUOTE;
	v->a[89099] = sym_raw_string;
	small_parse_table_4455(v);
}

/* EOF small_parse_table_890.c */
