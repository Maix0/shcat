/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2372.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11860(t_small_parse_table_array *v)
{
	v->a[237200] = anon_sym_DOLLAR_LBRACE;
	v->a[237201] = actions(9384);
	v->a[237202] = 1;
	v->a[237203] = anon_sym_DOLLAR_LPAREN;
	v->a[237204] = actions(9386);
	v->a[237205] = 1;
	v->a[237206] = anon_sym_BQUOTE;
	v->a[237207] = actions(9388);
	v->a[237208] = 1;
	v->a[237209] = anon_sym_DOLLAR_BQUOTE;
	v->a[237210] = actions(9392);
	v->a[237211] = 1;
	v->a[237212] = sym_variable_name;
	v->a[237213] = actions(11166);
	v->a[237214] = 1;
	v->a[237215] = aux_sym__simple_variable_name_token1;
	v->a[237216] = state(3391);
	v->a[237217] = 1;
	v->a[237218] = sym__arithmetic_binary_expression;
	v->a[237219] = state(3396);
	small_parse_table_11861(v);
}

void	small_parse_table_11861(t_small_parse_table_array *v)
{
	v->a[237220] = 1;
	v->a[237221] = sym__arithmetic_ternary_expression;
	v->a[237222] = state(3398);
	v->a[237223] = 1;
	v->a[237224] = sym__arithmetic_unary_expression;
	v->a[237225] = state(3400);
	v->a[237226] = 1;
	v->a[237227] = sym__arithmetic_postfix_expression;
	v->a[237228] = actions(9368);
	v->a[237229] = 2;
	v->a[237230] = anon_sym_PLUS_PLUS2;
	v->a[237231] = anon_sym_DASH_DASH2;
	v->a[237232] = actions(9370);
	v->a[237233] = 2;
	v->a[237234] = anon_sym_DASH2;
	v->a[237235] = anon_sym_PLUS2;
	v->a[237236] = state(3379);
	v->a[237237] = 9;
	v->a[237238] = sym_subscript;
	v->a[237239] = sym__arithmetic_expression;
	small_parse_table_11862(v);
}

void	small_parse_table_11862(t_small_parse_table_array *v)
{
	v->a[237240] = sym__arithmetic_literal;
	v->a[237241] = sym__arithmetic_parenthesized_expression;
	v->a[237242] = sym_string;
	v->a[237243] = sym_number;
	v->a[237244] = sym_simple_expansion;
	v->a[237245] = sym_expansion;
	v->a[237246] = sym_command_substitution;
	v->a[237247] = 20;
	v->a[237248] = actions(71);
	v->a[237249] = 1;
	v->a[237250] = sym_comment;
	v->a[237251] = actions(4080);
	v->a[237252] = 1;
	v->a[237253] = anon_sym_DOLLAR;
	v->a[237254] = actions(4086);
	v->a[237255] = 1;
	v->a[237256] = aux_sym_number_token1;
	v->a[237257] = actions(4088);
	v->a[237258] = 1;
	v->a[237259] = aux_sym_number_token2;
	small_parse_table_11863(v);
}

void	small_parse_table_11863(t_small_parse_table_array *v)
{
	v->a[237260] = actions(4092);
	v->a[237261] = 1;
	v->a[237262] = anon_sym_DOLLAR_LPAREN;
	v->a[237263] = actions(4102);
	v->a[237264] = 1;
	v->a[237265] = sym__brace_start;
	v->a[237266] = actions(9310);
	v->a[237267] = 1;
	v->a[237268] = anon_sym_DOLLAR_LBRACK;
	v->a[237269] = actions(9316);
	v->a[237270] = 1;
	v->a[237271] = anon_sym_DQUOTE;
	v->a[237272] = actions(9320);
	v->a[237273] = 1;
	v->a[237274] = anon_sym_DOLLAR_LBRACE;
	v->a[237275] = actions(9322);
	v->a[237276] = 1;
	v->a[237277] = anon_sym_BQUOTE;
	v->a[237278] = actions(9324);
	v->a[237279] = 1;
	small_parse_table_11864(v);
}

void	small_parse_table_11864(t_small_parse_table_array *v)
{
	v->a[237280] = anon_sym_DOLLAR_BQUOTE;
	v->a[237281] = actions(11156);
	v->a[237282] = 1;
	v->a[237283] = sym__special_character;
	v->a[237284] = actions(11168);
	v->a[237285] = 1;
	v->a[237286] = sym_word;
	v->a[237287] = actions(11172);
	v->a[237288] = 1;
	v->a[237289] = sym_test_operator;
	v->a[237290] = state(4421);
	v->a[237291] = 1;
	v->a[237292] = aux_sym__literal_repeat1;
	v->a[237293] = state(4869);
	v->a[237294] = 1;
	v->a[237295] = sym_concatenation;
	v->a[237296] = actions(9308);
	v->a[237297] = 2;
	v->a[237298] = anon_sym_LPAREN_LPAREN;
	v->a[237299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_11865(v);
}

/* EOF small_parse_table_2372.c */
