/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2162.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10810(t_small_parse_table_array *v)
{
	v->a[216200] = 1;
	v->a[216201] = anon_sym_BQUOTE;
	v->a[216202] = actions(9302);
	v->a[216203] = 1;
	v->a[216204] = anon_sym_DOLLAR_BQUOTE;
	v->a[216205] = actions(10322);
	v->a[216206] = 1;
	v->a[216207] = aux_sym__simple_variable_name_token1;
	v->a[216208] = state(2801);
	v->a[216209] = 1;
	v->a[216210] = sym__arithmetic_binary_expression;
	v->a[216211] = state(2803);
	v->a[216212] = 1;
	v->a[216213] = sym__arithmetic_ternary_expression;
	v->a[216214] = state(2809);
	v->a[216215] = 1;
	v->a[216216] = sym__arithmetic_unary_expression;
	v->a[216217] = state(2825);
	v->a[216218] = 1;
	v->a[216219] = sym__arithmetic_postfix_expression;
	small_parse_table_10811(v);
}

void	small_parse_table_10811(t_small_parse_table_array *v)
{
	v->a[216220] = actions(9282);
	v->a[216221] = 2;
	v->a[216222] = anon_sym_PLUS_PLUS2;
	v->a[216223] = anon_sym_DASH_DASH2;
	v->a[216224] = actions(9284);
	v->a[216225] = 2;
	v->a[216226] = anon_sym_DASH2;
	v->a[216227] = anon_sym_PLUS2;
	v->a[216228] = state(2797);
	v->a[216229] = 9;
	v->a[216230] = sym_subscript;
	v->a[216231] = sym__arithmetic_expression;
	v->a[216232] = sym__arithmetic_literal;
	v->a[216233] = sym__arithmetic_parenthesized_expression;
	v->a[216234] = sym_string;
	v->a[216235] = sym_number;
	v->a[216236] = sym_simple_expansion;
	v->a[216237] = sym_expansion;
	v->a[216238] = sym_command_substitution;
	v->a[216239] = 18;
	small_parse_table_10812(v);
}

void	small_parse_table_10812(t_small_parse_table_array *v)
{
	v->a[216240] = actions(3);
	v->a[216241] = 1;
	v->a[216242] = sym_comment;
	v->a[216243] = actions(6494);
	v->a[216244] = 1;
	v->a[216245] = aux_sym_number_token1;
	v->a[216246] = actions(6496);
	v->a[216247] = 1;
	v->a[216248] = aux_sym_number_token2;
	v->a[216249] = actions(6500);
	v->a[216250] = 1;
	v->a[216251] = anon_sym_DOLLAR_LPAREN;
	v->a[216252] = actions(6512);
	v->a[216253] = 1;
	v->a[216254] = sym__brace_start;
	v->a[216255] = actions(7226);
	v->a[216256] = 1;
	v->a[216257] = anon_sym_DOLLAR_LBRACK;
	v->a[216258] = actions(7230);
	v->a[216259] = 1;
	small_parse_table_10813(v);
}

void	small_parse_table_10813(t_small_parse_table_array *v)
{
	v->a[216260] = anon_sym_DQUOTE;
	v->a[216261] = actions(7234);
	v->a[216262] = 1;
	v->a[216263] = anon_sym_DOLLAR_LBRACE;
	v->a[216264] = actions(7236);
	v->a[216265] = 1;
	v->a[216266] = anon_sym_BQUOTE;
	v->a[216267] = actions(7238);
	v->a[216268] = 1;
	v->a[216269] = anon_sym_DOLLAR_BQUOTE;
	v->a[216270] = actions(10206);
	v->a[216271] = 1;
	v->a[216272] = sym_word;
	v->a[216273] = actions(10212);
	v->a[216274] = 1;
	v->a[216275] = sym__comment_word;
	v->a[216276] = actions(10324);
	v->a[216277] = 1;
	v->a[216278] = anon_sym_DOLLAR;
	v->a[216279] = actions(7224);
	small_parse_table_10814(v);
}

void	small_parse_table_10814(t_small_parse_table_array *v)
{
	v->a[216280] = 2;
	v->a[216281] = anon_sym_LPAREN_LPAREN;
	v->a[216282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216283] = actions(7240);
	v->a[216284] = 2;
	v->a[216285] = anon_sym_LT_LPAREN;
	v->a[216286] = anon_sym_GT_LPAREN;
	v->a[216287] = actions(10208);
	v->a[216288] = 2;
	v->a[216289] = sym_test_operator;
	v->a[216290] = sym__special_character;
	v->a[216291] = actions(10210);
	v->a[216292] = 3;
	v->a[216293] = sym__bare_dollar;
	v->a[216294] = sym_raw_string;
	v->a[216295] = sym_ansi_c_string;
	v->a[216296] = state(6494);
	v->a[216297] = 9;
	v->a[216298] = sym_arithmetic_expansion;
	v->a[216299] = sym_brace_expression;
	small_parse_table_10815(v);
}

/* EOF small_parse_table_2162.c */
