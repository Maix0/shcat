/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2290.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11450(t_small_parse_table_array *v)
{
	v->a[229000] = aux_sym_number_token2;
	v->a[229001] = actions(9296);
	v->a[229002] = 1;
	v->a[229003] = anon_sym_DOLLAR_LBRACE;
	v->a[229004] = actions(9298);
	v->a[229005] = 1;
	v->a[229006] = anon_sym_DOLLAR_LPAREN;
	v->a[229007] = actions(9300);
	v->a[229008] = 1;
	v->a[229009] = anon_sym_BQUOTE;
	v->a[229010] = actions(9302);
	v->a[229011] = 1;
	v->a[229012] = anon_sym_DOLLAR_BQUOTE;
	v->a[229013] = actions(10860);
	v->a[229014] = 1;
	v->a[229015] = aux_sym__simple_variable_name_token1;
	v->a[229016] = state(2801);
	v->a[229017] = 1;
	v->a[229018] = sym__arithmetic_binary_expression;
	v->a[229019] = state(2803);
	small_parse_table_11451(v);
}

void	small_parse_table_11451(t_small_parse_table_array *v)
{
	v->a[229020] = 1;
	v->a[229021] = sym__arithmetic_ternary_expression;
	v->a[229022] = state(2809);
	v->a[229023] = 1;
	v->a[229024] = sym__arithmetic_unary_expression;
	v->a[229025] = state(2825);
	v->a[229026] = 1;
	v->a[229027] = sym__arithmetic_postfix_expression;
	v->a[229028] = actions(9282);
	v->a[229029] = 2;
	v->a[229030] = anon_sym_PLUS_PLUS2;
	v->a[229031] = anon_sym_DASH_DASH2;
	v->a[229032] = actions(9284);
	v->a[229033] = 2;
	v->a[229034] = anon_sym_DASH2;
	v->a[229035] = anon_sym_PLUS2;
	v->a[229036] = state(2923);
	v->a[229037] = 9;
	v->a[229038] = sym_subscript;
	v->a[229039] = sym__arithmetic_expression;
	small_parse_table_11452(v);
}

void	small_parse_table_11452(t_small_parse_table_array *v)
{
	v->a[229040] = sym__arithmetic_literal;
	v->a[229041] = sym__arithmetic_parenthesized_expression;
	v->a[229042] = sym_string;
	v->a[229043] = sym_number;
	v->a[229044] = sym_simple_expansion;
	v->a[229045] = sym_expansion;
	v->a[229046] = sym_command_substitution;
	v->a[229047] = 18;
	v->a[229048] = actions(3);
	v->a[229049] = 1;
	v->a[229050] = sym_comment;
	v->a[229051] = actions(1837);
	v->a[229052] = 1;
	v->a[229053] = aux_sym_number_token1;
	v->a[229054] = actions(1839);
	v->a[229055] = 1;
	v->a[229056] = aux_sym_number_token2;
	v->a[229057] = actions(1843);
	v->a[229058] = 1;
	v->a[229059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11453(v);
}

void	small_parse_table_11453(t_small_parse_table_array *v)
{
	v->a[229060] = actions(1857);
	v->a[229061] = 1;
	v->a[229062] = sym__brace_start;
	v->a[229063] = actions(8232);
	v->a[229064] = 1;
	v->a[229065] = anon_sym_DOLLAR_LBRACK;
	v->a[229066] = actions(8236);
	v->a[229067] = 1;
	v->a[229068] = anon_sym_DQUOTE;
	v->a[229069] = actions(8240);
	v->a[229070] = 1;
	v->a[229071] = anon_sym_DOLLAR_LBRACE;
	v->a[229072] = actions(8242);
	v->a[229073] = 1;
	v->a[229074] = anon_sym_BQUOTE;
	v->a[229075] = actions(8244);
	v->a[229076] = 1;
	v->a[229077] = anon_sym_DOLLAR_BQUOTE;
	v->a[229078] = actions(10488);
	v->a[229079] = 1;
	small_parse_table_11454(v);
}

void	small_parse_table_11454(t_small_parse_table_array *v)
{
	v->a[229080] = sym_word;
	v->a[229081] = actions(10494);
	v->a[229082] = 1;
	v->a[229083] = sym__comment_word;
	v->a[229084] = actions(10862);
	v->a[229085] = 1;
	v->a[229086] = anon_sym_DOLLAR;
	v->a[229087] = actions(8228);
	v->a[229088] = 2;
	v->a[229089] = anon_sym_LPAREN_LPAREN;
	v->a[229090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[229091] = actions(8246);
	v->a[229092] = 2;
	v->a[229093] = anon_sym_LT_LPAREN;
	v->a[229094] = anon_sym_GT_LPAREN;
	v->a[229095] = actions(10490);
	v->a[229096] = 2;
	v->a[229097] = sym_test_operator;
	v->a[229098] = sym__special_character;
	v->a[229099] = actions(10492);
	small_parse_table_11455(v);
}

/* EOF small_parse_table_2290.c */
