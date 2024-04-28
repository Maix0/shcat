/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2033.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10165(t_small_parse_table_array *v)
{
	v->a[203300] = anon_sym_DASH2;
	v->a[203301] = anon_sym_PLUS2;
	v->a[203302] = state(3357);
	v->a[203303] = 9;
	v->a[203304] = sym_subscript;
	v->a[203305] = sym__arithmetic_expression;
	v->a[203306] = sym__arithmetic_literal;
	v->a[203307] = sym__arithmetic_parenthesized_expression;
	v->a[203308] = sym_string;
	v->a[203309] = sym_number;
	v->a[203310] = sym_simple_expansion;
	v->a[203311] = sym_expansion;
	v->a[203312] = sym_command_substitution;
	v->a[203313] = 20;
	v->a[203314] = actions(71);
	v->a[203315] = 1;
	v->a[203316] = sym_comment;
	v->a[203317] = actions(2636);
	v->a[203318] = 1;
	v->a[203319] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10166(v);
}

void	small_parse_table_10166(t_small_parse_table_array *v)
{
	v->a[203320] = actions(2638);
	v->a[203321] = 1;
	v->a[203322] = anon_sym_DOLLAR;
	v->a[203323] = actions(2640);
	v->a[203324] = 1;
	v->a[203325] = sym__special_character;
	v->a[203326] = actions(2642);
	v->a[203327] = 1;
	v->a[203328] = anon_sym_DQUOTE;
	v->a[203329] = actions(2646);
	v->a[203330] = 1;
	v->a[203331] = aux_sym_number_token1;
	v->a[203332] = actions(2648);
	v->a[203333] = 1;
	v->a[203334] = aux_sym_number_token2;
	v->a[203335] = actions(2650);
	v->a[203336] = 1;
	v->a[203337] = anon_sym_DOLLAR_LBRACE;
	v->a[203338] = actions(2652);
	v->a[203339] = 1;
	small_parse_table_10167(v);
}

void	small_parse_table_10167(t_small_parse_table_array *v)
{
	v->a[203340] = anon_sym_DOLLAR_LPAREN;
	v->a[203341] = actions(2654);
	v->a[203342] = 1;
	v->a[203343] = anon_sym_BQUOTE;
	v->a[203344] = actions(2656);
	v->a[203345] = 1;
	v->a[203346] = anon_sym_DOLLAR_BQUOTE;
	v->a[203347] = actions(2664);
	v->a[203348] = 1;
	v->a[203349] = sym__brace_start;
	v->a[203350] = actions(9394);
	v->a[203351] = 1;
	v->a[203352] = sym_word;
	v->a[203353] = actions(9398);
	v->a[203354] = 1;
	v->a[203355] = sym_test_operator;
	v->a[203356] = state(2352);
	v->a[203357] = 1;
	v->a[203358] = aux_sym__literal_repeat1;
	v->a[203359] = state(2522);
	small_parse_table_10168(v);
}

void	small_parse_table_10168(t_small_parse_table_array *v)
{
	v->a[203360] = 1;
	v->a[203361] = sym_concatenation;
	v->a[203362] = actions(2630);
	v->a[203363] = 2;
	v->a[203364] = anon_sym_LPAREN_LPAREN;
	v->a[203365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203366] = actions(2658);
	v->a[203367] = 2;
	v->a[203368] = anon_sym_LT_LPAREN;
	v->a[203369] = anon_sym_GT_LPAREN;
	v->a[203370] = actions(9396);
	v->a[203371] = 2;
	v->a[203372] = sym_raw_string;
	v->a[203373] = sym_ansi_c_string;
	v->a[203374] = state(2125);
	v->a[203375] = 9;
	v->a[203376] = sym_arithmetic_expansion;
	v->a[203377] = sym_brace_expression;
	v->a[203378] = sym_string;
	v->a[203379] = sym_translated_string;
	small_parse_table_10169(v);
}

void	small_parse_table_10169(t_small_parse_table_array *v)
{
	v->a[203380] = sym_number;
	v->a[203381] = sym_simple_expansion;
	v->a[203382] = sym_expansion;
	v->a[203383] = sym_command_substitution;
	v->a[203384] = sym_process_substitution;
	v->a[203385] = 18;
	v->a[203386] = actions(3);
	v->a[203387] = 1;
	v->a[203388] = sym_comment;
	v->a[203389] = actions(314);
	v->a[203390] = 1;
	v->a[203391] = anon_sym_DOLLAR_LBRACK;
	v->a[203392] = actions(316);
	v->a[203393] = 1;
	v->a[203394] = anon_sym_DOLLAR;
	v->a[203395] = actions(320);
	v->a[203396] = 1;
	v->a[203397] = anon_sym_DQUOTE;
	v->a[203398] = actions(324);
	v->a[203399] = 1;
	small_parse_table_10170(v);
}

/* EOF small_parse_table_2033.c */
