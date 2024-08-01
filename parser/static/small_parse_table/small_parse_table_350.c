/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_350.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1750(t_small_parse_table_array *v)
{
	v->a[35000] = sym_arithmetic_ternary_expression;
	v->a[35001] = sym_arithmetic_unary_expression;
	v->a[35002] = sym_arithmetic_postfix_expression;
	v->a[35003] = sym_arithmetic_parenthesized_expression;
	v->a[35004] = 11;
	v->a[35005] = actions(3);
	v->a[35006] = 1;
	v->a[35007] = sym_comment;
	v->a[35008] = actions(1225);
	v->a[35009] = 1;
	v->a[35010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35011] = actions(1228);
	v->a[35012] = 1;
	v->a[35013] = anon_sym_DOLLAR;
	v->a[35014] = actions(1231);
	v->a[35015] = 1;
	v->a[35016] = anon_sym_DQUOTE;
	v->a[35017] = actions(1234);
	v->a[35018] = 1;
	v->a[35019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1751(v);
}

void	small_parse_table_1751(t_small_parse_table_array *v)
{
	v->a[35020] = actions(1237);
	v->a[35021] = 1;
	v->a[35022] = anon_sym_DOLLAR_LPAREN;
	v->a[35023] = actions(1240);
	v->a[35024] = 1;
	v->a[35025] = anon_sym_BQUOTE;
	v->a[35026] = state(650);
	v->a[35027] = 2;
	v->a[35028] = sym_concatenation;
	v->a[35029] = aux_sym_for_statement_repeat1;
	v->a[35030] = actions(428);
	v->a[35031] = 3;
	v->a[35032] = anon_sym_SEMI_SEMI;
	v->a[35033] = aux_sym_heredoc_redirect_token1;
	v->a[35034] = anon_sym_SEMI;
	v->a[35035] = actions(1462);
	v->a[35036] = 3;
	v->a[35037] = sym_raw_string;
	v->a[35038] = sym_number;
	v->a[35039] = sym_word;
	small_parse_table_1752(v);
}

void	small_parse_table_1752(t_small_parse_table_array *v)
{
	v->a[35040] = state(857);
	v->a[35041] = 5;
	v->a[35042] = sym_arithmetic_expansion;
	v->a[35043] = sym_string;
	v->a[35044] = sym_simple_expansion;
	v->a[35045] = sym_expansion;
	v->a[35046] = sym_command_substitution;
	v->a[35047] = 10;
	v->a[35048] = actions(1424);
	v->a[35049] = 1;
	v->a[35050] = anon_sym_LPAREN;
	v->a[35051] = actions(1428);
	v->a[35052] = 1;
	v->a[35053] = anon_sym_DOLLAR;
	v->a[35054] = actions(1430);
	v->a[35055] = 1;
	v->a[35056] = anon_sym_DQUOTE;
	v->a[35057] = actions(1434);
	v->a[35058] = 1;
	v->a[35059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1753(v);
}

void	small_parse_table_1753(t_small_parse_table_array *v)
{
	v->a[35060] = actions(1436);
	v->a[35061] = 1;
	v->a[35062] = sym_comment;
	v->a[35063] = actions(1438);
	v->a[35064] = 1;
	v->a[35065] = sym_variable_name;
	v->a[35066] = actions(1426);
	v->a[35067] = 2;
	v->a[35068] = anon_sym_DASH2;
	v->a[35069] = anon_sym_PLUS2;
	v->a[35070] = actions(1432);
	v->a[35071] = 2;
	v->a[35072] = sym_number;
	v->a[35073] = aux_sym__simple_variable_name_token1;
	v->a[35074] = state(1312);
	v->a[35075] = 3;
	v->a[35076] = sym_string;
	v->a[35077] = sym_simple_expansion;
	v->a[35078] = sym_expansion;
	v->a[35079] = state(1359);
	small_parse_table_1754(v);
}

void	small_parse_table_1754(t_small_parse_table_array *v)
{
	v->a[35080] = 7;
	v->a[35081] = sym__arithmetic_expression;
	v->a[35082] = sym_arithmetic_literal;
	v->a[35083] = sym_arithmetic_binary_expression;
	v->a[35084] = sym_arithmetic_ternary_expression;
	v->a[35085] = sym_arithmetic_unary_expression;
	v->a[35086] = sym_arithmetic_postfix_expression;
	v->a[35087] = sym_arithmetic_parenthesized_expression;
	v->a[35088] = 3;
	v->a[35089] = actions(3);
	v->a[35090] = 1;
	v->a[35091] = sym_comment;
	v->a[35092] = actions(1116);
	v->a[35093] = 2;
	v->a[35094] = sym__concat;
	v->a[35095] = sym_variable_name;
	v->a[35096] = actions(1114);
	v->a[35097] = 17;
	v->a[35098] = anon_sym_PIPE;
	v->a[35099] = anon_sym_AMP_AMP;
	small_parse_table_1755(v);
}

/* EOF small_parse_table_350.c */
