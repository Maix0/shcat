/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2067.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10335(t_small_parse_table_array *v)
{
	v->a[206700] = anon_sym_DOLLAR_LPAREN;
	v->a[206701] = actions(9300);
	v->a[206702] = 1;
	v->a[206703] = anon_sym_BQUOTE;
	v->a[206704] = actions(9302);
	v->a[206705] = 1;
	v->a[206706] = anon_sym_DOLLAR_BQUOTE;
	v->a[206707] = actions(9610);
	v->a[206708] = 1;
	v->a[206709] = aux_sym__simple_variable_name_token1;
	v->a[206710] = state(2801);
	v->a[206711] = 1;
	v->a[206712] = sym__arithmetic_binary_expression;
	v->a[206713] = state(2803);
	v->a[206714] = 1;
	v->a[206715] = sym__arithmetic_ternary_expression;
	v->a[206716] = state(2809);
	v->a[206717] = 1;
	v->a[206718] = sym__arithmetic_unary_expression;
	v->a[206719] = state(2825);
	small_parse_table_10336(v);
}

void	small_parse_table_10336(t_small_parse_table_array *v)
{
	v->a[206720] = 1;
	v->a[206721] = sym__arithmetic_postfix_expression;
	v->a[206722] = actions(9282);
	v->a[206723] = 2;
	v->a[206724] = anon_sym_PLUS_PLUS2;
	v->a[206725] = anon_sym_DASH_DASH2;
	v->a[206726] = actions(9284);
	v->a[206727] = 2;
	v->a[206728] = anon_sym_DASH2;
	v->a[206729] = anon_sym_PLUS2;
	v->a[206730] = state(2749);
	v->a[206731] = 9;
	v->a[206732] = sym_subscript;
	v->a[206733] = sym__arithmetic_expression;
	v->a[206734] = sym__arithmetic_literal;
	v->a[206735] = sym__arithmetic_parenthesized_expression;
	v->a[206736] = sym_string;
	v->a[206737] = sym_number;
	v->a[206738] = sym_simple_expansion;
	v->a[206739] = sym_expansion;
	small_parse_table_10337(v);
}

void	small_parse_table_10337(t_small_parse_table_array *v)
{
	v->a[206740] = sym_command_substitution;
	v->a[206741] = 21;
	v->a[206742] = actions(71);
	v->a[206743] = 1;
	v->a[206744] = sym_comment;
	v->a[206745] = actions(9364);
	v->a[206746] = 1;
	v->a[206747] = anon_sym_LPAREN;
	v->a[206748] = actions(9366);
	v->a[206749] = 1;
	v->a[206750] = anon_sym_BANG;
	v->a[206751] = actions(9372);
	v->a[206752] = 1;
	v->a[206753] = anon_sym_TILDE;
	v->a[206754] = actions(9374);
	v->a[206755] = 1;
	v->a[206756] = anon_sym_DOLLAR;
	v->a[206757] = actions(9376);
	v->a[206758] = 1;
	v->a[206759] = anon_sym_DQUOTE;
	small_parse_table_10338(v);
}

void	small_parse_table_10338(t_small_parse_table_array *v)
{
	v->a[206760] = actions(9378);
	v->a[206761] = 1;
	v->a[206762] = aux_sym_number_token1;
	v->a[206763] = actions(9380);
	v->a[206764] = 1;
	v->a[206765] = aux_sym_number_token2;
	v->a[206766] = actions(9382);
	v->a[206767] = 1;
	v->a[206768] = anon_sym_DOLLAR_LBRACE;
	v->a[206769] = actions(9384);
	v->a[206770] = 1;
	v->a[206771] = anon_sym_DOLLAR_LPAREN;
	v->a[206772] = actions(9386);
	v->a[206773] = 1;
	v->a[206774] = anon_sym_BQUOTE;
	v->a[206775] = actions(9388);
	v->a[206776] = 1;
	v->a[206777] = anon_sym_DOLLAR_BQUOTE;
	v->a[206778] = actions(9392);
	v->a[206779] = 1;
	small_parse_table_10339(v);
}

void	small_parse_table_10339(t_small_parse_table_array *v)
{
	v->a[206780] = sym_variable_name;
	v->a[206781] = actions(9612);
	v->a[206782] = 1;
	v->a[206783] = aux_sym__simple_variable_name_token1;
	v->a[206784] = state(3391);
	v->a[206785] = 1;
	v->a[206786] = sym__arithmetic_binary_expression;
	v->a[206787] = state(3396);
	v->a[206788] = 1;
	v->a[206789] = sym__arithmetic_ternary_expression;
	v->a[206790] = state(3398);
	v->a[206791] = 1;
	v->a[206792] = sym__arithmetic_unary_expression;
	v->a[206793] = state(3400);
	v->a[206794] = 1;
	v->a[206795] = sym__arithmetic_postfix_expression;
	v->a[206796] = actions(9368);
	v->a[206797] = 2;
	v->a[206798] = anon_sym_PLUS_PLUS2;
	v->a[206799] = anon_sym_DASH_DASH2;
	small_parse_table_10340(v);
}

/* EOF small_parse_table_2067.c */
