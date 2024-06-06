/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_913.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4565(t_small_parse_table_array *v)
{
	v->a[91300] = state(2666);
	v->a[91301] = 1;
	v->a[91302] = aux_sym__literal_repeat1;
	v->a[91303] = actions(5066);
	v->a[91304] = 2;
	v->a[91305] = sym_raw_string;
	v->a[91306] = sym_word;
	v->a[91307] = state(1852);
	v->a[91308] = 2;
	v->a[91309] = sym_concatenation;
	v->a[91310] = aux_sym_for_statement_repeat1;
	v->a[91311] = actions(5086);
	v->a[91312] = 3;
	v->a[91313] = anon_sym_SEMI_SEMI;
	v->a[91314] = anon_sym_AMP;
	v->a[91315] = anon_sym_SEMI;
	v->a[91316] = state(2609);
	v->a[91317] = 7;
	v->a[91318] = sym_arithmetic_expansion;
	v->a[91319] = sym_brace_expression;
	small_parse_table_4566(v);
}

void	small_parse_table_4566(t_small_parse_table_array *v)
{
	v->a[91320] = sym_string;
	v->a[91321] = sym_number;
	v->a[91322] = sym_simple_expansion;
	v->a[91323] = sym_expansion;
	v->a[91324] = sym_command_substitution;
	v->a[91325] = 19;
	v->a[91326] = actions(3);
	v->a[91327] = 1;
	v->a[91328] = sym_comment;
	v->a[91329] = actions(2458);
	v->a[91330] = 1;
	v->a[91331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91332] = actions(2460);
	v->a[91333] = 1;
	v->a[91334] = anon_sym_DOLLAR;
	v->a[91335] = actions(2464);
	v->a[91336] = 1;
	v->a[91337] = anon_sym_DQUOTE;
	v->a[91338] = actions(2466);
	v->a[91339] = 1;
	small_parse_table_4567(v);
}

void	small_parse_table_4567(t_small_parse_table_array *v)
{
	v->a[91340] = aux_sym_number_token1;
	v->a[91341] = actions(2468);
	v->a[91342] = 1;
	v->a[91343] = aux_sym_number_token2;
	v->a[91344] = actions(2470);
	v->a[91345] = 1;
	v->a[91346] = anon_sym_DOLLAR_LBRACE;
	v->a[91347] = actions(2472);
	v->a[91348] = 1;
	v->a[91349] = anon_sym_DOLLAR_LPAREN;
	v->a[91350] = actions(2474);
	v->a[91351] = 1;
	v->a[91352] = anon_sym_BQUOTE;
	v->a[91353] = actions(2476);
	v->a[91354] = 1;
	v->a[91355] = anon_sym_DOLLAR_BQUOTE;
	v->a[91356] = actions(2482);
	v->a[91357] = 1;
	v->a[91358] = sym__brace_start;
	v->a[91359] = actions(5072);
	small_parse_table_4568(v);
}

void	small_parse_table_4568(t_small_parse_table_array *v)
{
	v->a[91360] = 1;
	v->a[91361] = sym__special_character;
	v->a[91362] = actions(5074);
	v->a[91363] = 1;
	v->a[91364] = sym_test_operator;
	v->a[91365] = actions(5092);
	v->a[91366] = 1;
	v->a[91367] = aux_sym_heredoc_redirect_token1;
	v->a[91368] = state(2666);
	v->a[91369] = 1;
	v->a[91370] = aux_sym__literal_repeat1;
	v->a[91371] = actions(5066);
	v->a[91372] = 2;
	v->a[91373] = sym_raw_string;
	v->a[91374] = sym_word;
	v->a[91375] = state(1852);
	v->a[91376] = 2;
	v->a[91377] = sym_concatenation;
	v->a[91378] = aux_sym_for_statement_repeat1;
	v->a[91379] = actions(5090);
	small_parse_table_4569(v);
}

void	small_parse_table_4569(t_small_parse_table_array *v)
{
	v->a[91380] = 3;
	v->a[91381] = anon_sym_SEMI_SEMI;
	v->a[91382] = anon_sym_AMP;
	v->a[91383] = anon_sym_SEMI;
	v->a[91384] = state(2609);
	v->a[91385] = 7;
	v->a[91386] = sym_arithmetic_expansion;
	v->a[91387] = sym_brace_expression;
	v->a[91388] = sym_string;
	v->a[91389] = sym_number;
	v->a[91390] = sym_simple_expansion;
	v->a[91391] = sym_expansion;
	v->a[91392] = sym_command_substitution;
	v->a[91393] = 6;
	v->a[91394] = actions(3);
	v->a[91395] = 1;
	v->a[91396] = sym_comment;
	v->a[91397] = actions(4907);
	v->a[91398] = 1;
	v->a[91399] = aux_sym_concatenation_token1;
	small_parse_table_4570(v);
}

/* EOF small_parse_table_913.c */
