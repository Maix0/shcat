/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2117.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10585(t_small_parse_table_array *v)
{
	v->a[211700] = anon_sym_TILDE;
	v->a[211701] = actions(9288);
	v->a[211702] = 1;
	v->a[211703] = anon_sym_DOLLAR;
	v->a[211704] = actions(9290);
	v->a[211705] = 1;
	v->a[211706] = anon_sym_DQUOTE;
	v->a[211707] = actions(9292);
	v->a[211708] = 1;
	v->a[211709] = aux_sym_number_token1;
	v->a[211710] = actions(9294);
	v->a[211711] = 1;
	v->a[211712] = aux_sym_number_token2;
	v->a[211713] = actions(9296);
	v->a[211714] = 1;
	v->a[211715] = anon_sym_DOLLAR_LBRACE;
	v->a[211716] = actions(9298);
	v->a[211717] = 1;
	v->a[211718] = anon_sym_DOLLAR_LPAREN;
	v->a[211719] = actions(9300);
	small_parse_table_10586(v);
}

void	small_parse_table_10586(t_small_parse_table_array *v)
{
	v->a[211720] = 1;
	v->a[211721] = anon_sym_BQUOTE;
	v->a[211722] = actions(9302);
	v->a[211723] = 1;
	v->a[211724] = anon_sym_DOLLAR_BQUOTE;
	v->a[211725] = actions(10044);
	v->a[211726] = 1;
	v->a[211727] = aux_sym__simple_variable_name_token1;
	v->a[211728] = state(2801);
	v->a[211729] = 1;
	v->a[211730] = sym__arithmetic_binary_expression;
	v->a[211731] = state(2803);
	v->a[211732] = 1;
	v->a[211733] = sym__arithmetic_ternary_expression;
	v->a[211734] = state(2809);
	v->a[211735] = 1;
	v->a[211736] = sym__arithmetic_unary_expression;
	v->a[211737] = state(2825);
	v->a[211738] = 1;
	v->a[211739] = sym__arithmetic_postfix_expression;
	small_parse_table_10587(v);
}

void	small_parse_table_10587(t_small_parse_table_array *v)
{
	v->a[211740] = actions(9282);
	v->a[211741] = 2;
	v->a[211742] = anon_sym_PLUS_PLUS2;
	v->a[211743] = anon_sym_DASH_DASH2;
	v->a[211744] = actions(9284);
	v->a[211745] = 2;
	v->a[211746] = anon_sym_DASH2;
	v->a[211747] = anon_sym_PLUS2;
	v->a[211748] = state(2793);
	v->a[211749] = 9;
	v->a[211750] = sym_subscript;
	v->a[211751] = sym__arithmetic_expression;
	v->a[211752] = sym__arithmetic_literal;
	v->a[211753] = sym__arithmetic_parenthesized_expression;
	v->a[211754] = sym_string;
	v->a[211755] = sym_number;
	v->a[211756] = sym_simple_expansion;
	v->a[211757] = sym_expansion;
	v->a[211758] = sym_command_substitution;
	v->a[211759] = 21;
	small_parse_table_10588(v);
}

void	small_parse_table_10588(t_small_parse_table_array *v)
{
	v->a[211760] = actions(71);
	v->a[211761] = 1;
	v->a[211762] = sym_comment;
	v->a[211763] = actions(9364);
	v->a[211764] = 1;
	v->a[211765] = anon_sym_LPAREN;
	v->a[211766] = actions(9366);
	v->a[211767] = 1;
	v->a[211768] = anon_sym_BANG;
	v->a[211769] = actions(9372);
	v->a[211770] = 1;
	v->a[211771] = anon_sym_TILDE;
	v->a[211772] = actions(9374);
	v->a[211773] = 1;
	v->a[211774] = anon_sym_DOLLAR;
	v->a[211775] = actions(9376);
	v->a[211776] = 1;
	v->a[211777] = anon_sym_DQUOTE;
	v->a[211778] = actions(9378);
	v->a[211779] = 1;
	small_parse_table_10589(v);
}

void	small_parse_table_10589(t_small_parse_table_array *v)
{
	v->a[211780] = aux_sym_number_token1;
	v->a[211781] = actions(9380);
	v->a[211782] = 1;
	v->a[211783] = aux_sym_number_token2;
	v->a[211784] = actions(9382);
	v->a[211785] = 1;
	v->a[211786] = anon_sym_DOLLAR_LBRACE;
	v->a[211787] = actions(9384);
	v->a[211788] = 1;
	v->a[211789] = anon_sym_DOLLAR_LPAREN;
	v->a[211790] = actions(9386);
	v->a[211791] = 1;
	v->a[211792] = anon_sym_BQUOTE;
	v->a[211793] = actions(9388);
	v->a[211794] = 1;
	v->a[211795] = anon_sym_DOLLAR_BQUOTE;
	v->a[211796] = actions(9392);
	v->a[211797] = 1;
	v->a[211798] = sym_variable_name;
	v->a[211799] = actions(10046);
	small_parse_table_10590(v);
}

/* EOF small_parse_table_2117.c */
