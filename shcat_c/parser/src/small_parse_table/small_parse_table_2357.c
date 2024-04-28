/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2357.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11785(t_small_parse_table_array *v)
{
	v->a[235700] = 1;
	v->a[235701] = anon_sym_DOLLAR;
	v->a[235702] = actions(9290);
	v->a[235703] = 1;
	v->a[235704] = anon_sym_DQUOTE;
	v->a[235705] = actions(9292);
	v->a[235706] = 1;
	v->a[235707] = aux_sym_number_token1;
	v->a[235708] = actions(9294);
	v->a[235709] = 1;
	v->a[235710] = aux_sym_number_token2;
	v->a[235711] = actions(9296);
	v->a[235712] = 1;
	v->a[235713] = anon_sym_DOLLAR_LBRACE;
	v->a[235714] = actions(9298);
	v->a[235715] = 1;
	v->a[235716] = anon_sym_DOLLAR_LPAREN;
	v->a[235717] = actions(9300);
	v->a[235718] = 1;
	v->a[235719] = anon_sym_BQUOTE;
	small_parse_table_11786(v);
}

void	small_parse_table_11786(t_small_parse_table_array *v)
{
	v->a[235720] = actions(9302);
	v->a[235721] = 1;
	v->a[235722] = anon_sym_DOLLAR_BQUOTE;
	v->a[235723] = actions(11100);
	v->a[235724] = 1;
	v->a[235725] = aux_sym__simple_variable_name_token1;
	v->a[235726] = state(2801);
	v->a[235727] = 1;
	v->a[235728] = sym__arithmetic_binary_expression;
	v->a[235729] = state(2803);
	v->a[235730] = 1;
	v->a[235731] = sym__arithmetic_ternary_expression;
	v->a[235732] = state(2809);
	v->a[235733] = 1;
	v->a[235734] = sym__arithmetic_unary_expression;
	v->a[235735] = state(2825);
	v->a[235736] = 1;
	v->a[235737] = sym__arithmetic_postfix_expression;
	v->a[235738] = actions(9282);
	v->a[235739] = 2;
	small_parse_table_11787(v);
}

void	small_parse_table_11787(t_small_parse_table_array *v)
{
	v->a[235740] = anon_sym_PLUS_PLUS2;
	v->a[235741] = anon_sym_DASH_DASH2;
	v->a[235742] = actions(9284);
	v->a[235743] = 2;
	v->a[235744] = anon_sym_DASH2;
	v->a[235745] = anon_sym_PLUS2;
	v->a[235746] = state(2783);
	v->a[235747] = 9;
	v->a[235748] = sym_subscript;
	v->a[235749] = sym__arithmetic_expression;
	v->a[235750] = sym__arithmetic_literal;
	v->a[235751] = sym__arithmetic_parenthesized_expression;
	v->a[235752] = sym_string;
	v->a[235753] = sym_number;
	v->a[235754] = sym_simple_expansion;
	v->a[235755] = sym_expansion;
	v->a[235756] = sym_command_substitution;
	v->a[235757] = 20;
	v->a[235758] = actions(71);
	v->a[235759] = 1;
	small_parse_table_11788(v);
}

void	small_parse_table_11788(t_small_parse_table_array *v)
{
	v->a[235760] = sym_comment;
	v->a[235761] = actions(4080);
	v->a[235762] = 1;
	v->a[235763] = anon_sym_DOLLAR;
	v->a[235764] = actions(4086);
	v->a[235765] = 1;
	v->a[235766] = aux_sym_number_token1;
	v->a[235767] = actions(4088);
	v->a[235768] = 1;
	v->a[235769] = aux_sym_number_token2;
	v->a[235770] = actions(4092);
	v->a[235771] = 1;
	v->a[235772] = anon_sym_DOLLAR_LPAREN;
	v->a[235773] = actions(4102);
	v->a[235774] = 1;
	v->a[235775] = sym__brace_start;
	v->a[235776] = actions(9310);
	v->a[235777] = 1;
	v->a[235778] = anon_sym_DOLLAR_LBRACK;
	v->a[235779] = actions(9316);
	small_parse_table_11789(v);
}

void	small_parse_table_11789(t_small_parse_table_array *v)
{
	v->a[235780] = 1;
	v->a[235781] = anon_sym_DQUOTE;
	v->a[235782] = actions(9320);
	v->a[235783] = 1;
	v->a[235784] = anon_sym_DOLLAR_LBRACE;
	v->a[235785] = actions(9322);
	v->a[235786] = 1;
	v->a[235787] = anon_sym_BQUOTE;
	v->a[235788] = actions(9324);
	v->a[235789] = 1;
	v->a[235790] = anon_sym_DOLLAR_BQUOTE;
	v->a[235791] = actions(11102);
	v->a[235792] = 1;
	v->a[235793] = sym_word;
	v->a[235794] = actions(11104);
	v->a[235795] = 1;
	v->a[235796] = sym__special_character;
	v->a[235797] = actions(11108);
	v->a[235798] = 1;
	v->a[235799] = sym_test_operator;
	small_parse_table_11790(v);
}

/* EOF small_parse_table_2357.c */
