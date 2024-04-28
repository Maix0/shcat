/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2113.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10565(t_small_parse_table_array *v)
{
	v->a[211300] = state(3391);
	v->a[211301] = 1;
	v->a[211302] = sym__arithmetic_binary_expression;
	v->a[211303] = state(3396);
	v->a[211304] = 1;
	v->a[211305] = sym__arithmetic_ternary_expression;
	v->a[211306] = state(3398);
	v->a[211307] = 1;
	v->a[211308] = sym__arithmetic_unary_expression;
	v->a[211309] = state(3400);
	v->a[211310] = 1;
	v->a[211311] = sym__arithmetic_postfix_expression;
	v->a[211312] = actions(9368);
	v->a[211313] = 2;
	v->a[211314] = anon_sym_PLUS_PLUS2;
	v->a[211315] = anon_sym_DASH_DASH2;
	v->a[211316] = actions(9370);
	v->a[211317] = 2;
	v->a[211318] = anon_sym_DASH2;
	v->a[211319] = anon_sym_PLUS2;
	small_parse_table_10566(v);
}

void	small_parse_table_10566(t_small_parse_table_array *v)
{
	v->a[211320] = state(3336);
	v->a[211321] = 9;
	v->a[211322] = sym_subscript;
	v->a[211323] = sym__arithmetic_expression;
	v->a[211324] = sym__arithmetic_literal;
	v->a[211325] = sym__arithmetic_parenthesized_expression;
	v->a[211326] = sym_string;
	v->a[211327] = sym_number;
	v->a[211328] = sym_simple_expansion;
	v->a[211329] = sym_expansion;
	v->a[211330] = sym_command_substitution;
	v->a[211331] = 18;
	v->a[211332] = actions(3);
	v->a[211333] = 1;
	v->a[211334] = sym_comment;
	v->a[211335] = actions(3616);
	v->a[211336] = 1;
	v->a[211337] = aux_sym_number_token1;
	v->a[211338] = actions(3618);
	v->a[211339] = 1;
	small_parse_table_10567(v);
}

void	small_parse_table_10567(t_small_parse_table_array *v)
{
	v->a[211340] = aux_sym_number_token2;
	v->a[211341] = actions(3622);
	v->a[211342] = 1;
	v->a[211343] = anon_sym_DOLLAR_LPAREN;
	v->a[211344] = actions(3632);
	v->a[211345] = 1;
	v->a[211346] = sym__brace_start;
	v->a[211347] = actions(8850);
	v->a[211348] = 1;
	v->a[211349] = anon_sym_DOLLAR_LBRACK;
	v->a[211350] = actions(8854);
	v->a[211351] = 1;
	v->a[211352] = anon_sym_DQUOTE;
	v->a[211353] = actions(8858);
	v->a[211354] = 1;
	v->a[211355] = anon_sym_DOLLAR_LBRACE;
	v->a[211356] = actions(8860);
	v->a[211357] = 1;
	v->a[211358] = anon_sym_BQUOTE;
	v->a[211359] = actions(8862);
	small_parse_table_10568(v);
}

void	small_parse_table_10568(t_small_parse_table_array *v)
{
	v->a[211360] = 1;
	v->a[211361] = anon_sym_DOLLAR_BQUOTE;
	v->a[211362] = actions(9516);
	v->a[211363] = 1;
	v->a[211364] = sym_word;
	v->a[211365] = actions(9524);
	v->a[211366] = 1;
	v->a[211367] = sym__comment_word;
	v->a[211368] = actions(10028);
	v->a[211369] = 1;
	v->a[211370] = anon_sym_DOLLAR;
	v->a[211371] = actions(8848);
	v->a[211372] = 2;
	v->a[211373] = anon_sym_LPAREN_LPAREN;
	v->a[211374] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211375] = actions(8864);
	v->a[211376] = 2;
	v->a[211377] = anon_sym_LT_LPAREN;
	v->a[211378] = anon_sym_GT_LPAREN;
	v->a[211379] = actions(9520);
	small_parse_table_10569(v);
}

void	small_parse_table_10569(t_small_parse_table_array *v)
{
	v->a[211380] = 2;
	v->a[211381] = sym_test_operator;
	v->a[211382] = sym__special_character;
	v->a[211383] = actions(9522);
	v->a[211384] = 3;
	v->a[211385] = sym__bare_dollar;
	v->a[211386] = sym_raw_string;
	v->a[211387] = sym_ansi_c_string;
	v->a[211388] = state(2210);
	v->a[211389] = 9;
	v->a[211390] = sym_arithmetic_expansion;
	v->a[211391] = sym_brace_expression;
	v->a[211392] = sym_string;
	v->a[211393] = sym_translated_string;
	v->a[211394] = sym_number;
	v->a[211395] = sym_simple_expansion;
	v->a[211396] = sym_expansion;
	v->a[211397] = sym_command_substitution;
	v->a[211398] = sym_process_substitution;
	v->a[211399] = 21;
	small_parse_table_10570(v);
}

/* EOF small_parse_table_2113.c */
