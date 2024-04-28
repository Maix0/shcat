/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2125.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10625(t_small_parse_table_array *v)
{
	v->a[212500] = aux_sym_number_token2;
	v->a[212501] = actions(9296);
	v->a[212502] = 1;
	v->a[212503] = anon_sym_DOLLAR_LBRACE;
	v->a[212504] = actions(9298);
	v->a[212505] = 1;
	v->a[212506] = anon_sym_DOLLAR_LPAREN;
	v->a[212507] = actions(9300);
	v->a[212508] = 1;
	v->a[212509] = anon_sym_BQUOTE;
	v->a[212510] = actions(9302);
	v->a[212511] = 1;
	v->a[212512] = anon_sym_DOLLAR_BQUOTE;
	v->a[212513] = actions(10104);
	v->a[212514] = 1;
	v->a[212515] = aux_sym__simple_variable_name_token1;
	v->a[212516] = state(2801);
	v->a[212517] = 1;
	v->a[212518] = sym__arithmetic_binary_expression;
	v->a[212519] = state(2803);
	small_parse_table_10626(v);
}

void	small_parse_table_10626(t_small_parse_table_array *v)
{
	v->a[212520] = 1;
	v->a[212521] = sym__arithmetic_ternary_expression;
	v->a[212522] = state(2809);
	v->a[212523] = 1;
	v->a[212524] = sym__arithmetic_unary_expression;
	v->a[212525] = state(2825);
	v->a[212526] = 1;
	v->a[212527] = sym__arithmetic_postfix_expression;
	v->a[212528] = actions(9282);
	v->a[212529] = 2;
	v->a[212530] = anon_sym_PLUS_PLUS2;
	v->a[212531] = anon_sym_DASH_DASH2;
	v->a[212532] = actions(9284);
	v->a[212533] = 2;
	v->a[212534] = anon_sym_DASH2;
	v->a[212535] = anon_sym_PLUS2;
	v->a[212536] = state(2755);
	v->a[212537] = 9;
	v->a[212538] = sym_subscript;
	v->a[212539] = sym__arithmetic_expression;
	small_parse_table_10627(v);
}

void	small_parse_table_10627(t_small_parse_table_array *v)
{
	v->a[212540] = sym__arithmetic_literal;
	v->a[212541] = sym__arithmetic_parenthesized_expression;
	v->a[212542] = sym_string;
	v->a[212543] = sym_number;
	v->a[212544] = sym_simple_expansion;
	v->a[212545] = sym_expansion;
	v->a[212546] = sym_command_substitution;
	v->a[212547] = 20;
	v->a[212548] = actions(71);
	v->a[212549] = 1;
	v->a[212550] = sym_comment;
	v->a[212551] = actions(4080);
	v->a[212552] = 1;
	v->a[212553] = anon_sym_DOLLAR;
	v->a[212554] = actions(4086);
	v->a[212555] = 1;
	v->a[212556] = aux_sym_number_token1;
	v->a[212557] = actions(4088);
	v->a[212558] = 1;
	v->a[212559] = aux_sym_number_token2;
	small_parse_table_10628(v);
}

void	small_parse_table_10628(t_small_parse_table_array *v)
{
	v->a[212560] = actions(4092);
	v->a[212561] = 1;
	v->a[212562] = anon_sym_DOLLAR_LPAREN;
	v->a[212563] = actions(4102);
	v->a[212564] = 1;
	v->a[212565] = sym__brace_start;
	v->a[212566] = actions(9310);
	v->a[212567] = 1;
	v->a[212568] = anon_sym_DOLLAR_LBRACK;
	v->a[212569] = actions(9316);
	v->a[212570] = 1;
	v->a[212571] = anon_sym_DQUOTE;
	v->a[212572] = actions(9320);
	v->a[212573] = 1;
	v->a[212574] = anon_sym_DOLLAR_LBRACE;
	v->a[212575] = actions(9322);
	v->a[212576] = 1;
	v->a[212577] = anon_sym_BQUOTE;
	v->a[212578] = actions(9324);
	v->a[212579] = 1;
	small_parse_table_10629(v);
}

void	small_parse_table_10629(t_small_parse_table_array *v)
{
	v->a[212580] = anon_sym_DOLLAR_BQUOTE;
	v->a[212581] = actions(10106);
	v->a[212582] = 1;
	v->a[212583] = sym_word;
	v->a[212584] = actions(10108);
	v->a[212585] = 1;
	v->a[212586] = sym__special_character;
	v->a[212587] = actions(10112);
	v->a[212588] = 1;
	v->a[212589] = sym_test_operator;
	v->a[212590] = state(4421);
	v->a[212591] = 1;
	v->a[212592] = aux_sym__literal_repeat1;
	v->a[212593] = state(4869);
	v->a[212594] = 1;
	v->a[212595] = sym_concatenation;
	v->a[212596] = actions(9308);
	v->a[212597] = 2;
	v->a[212598] = anon_sym_LPAREN_LPAREN;
	v->a[212599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_10630(v);
}

/* EOF small_parse_table_2125.c */
