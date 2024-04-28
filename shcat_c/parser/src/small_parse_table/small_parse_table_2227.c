/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2227.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11135(t_small_parse_table_array *v)
{
	v->a[222700] = sym_simple_expansion;
	v->a[222701] = sym_expansion;
	v->a[222702] = sym_command_substitution;
	v->a[222703] = 21;
	v->a[222704] = actions(71);
	v->a[222705] = 1;
	v->a[222706] = sym_comment;
	v->a[222707] = actions(9364);
	v->a[222708] = 1;
	v->a[222709] = anon_sym_LPAREN;
	v->a[222710] = actions(9366);
	v->a[222711] = 1;
	v->a[222712] = anon_sym_BANG;
	v->a[222713] = actions(9372);
	v->a[222714] = 1;
	v->a[222715] = anon_sym_TILDE;
	v->a[222716] = actions(9374);
	v->a[222717] = 1;
	v->a[222718] = anon_sym_DOLLAR;
	v->a[222719] = actions(9376);
	small_parse_table_11136(v);
}

void	small_parse_table_11136(t_small_parse_table_array *v)
{
	v->a[222720] = 1;
	v->a[222721] = anon_sym_DQUOTE;
	v->a[222722] = actions(9378);
	v->a[222723] = 1;
	v->a[222724] = aux_sym_number_token1;
	v->a[222725] = actions(9380);
	v->a[222726] = 1;
	v->a[222727] = aux_sym_number_token2;
	v->a[222728] = actions(9382);
	v->a[222729] = 1;
	v->a[222730] = anon_sym_DOLLAR_LBRACE;
	v->a[222731] = actions(9384);
	v->a[222732] = 1;
	v->a[222733] = anon_sym_DOLLAR_LPAREN;
	v->a[222734] = actions(9386);
	v->a[222735] = 1;
	v->a[222736] = anon_sym_BQUOTE;
	v->a[222737] = actions(9388);
	v->a[222738] = 1;
	v->a[222739] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11137(v);
}

void	small_parse_table_11137(t_small_parse_table_array *v)
{
	v->a[222740] = actions(9392);
	v->a[222741] = 1;
	v->a[222742] = sym_variable_name;
	v->a[222743] = actions(10636);
	v->a[222744] = 1;
	v->a[222745] = aux_sym__simple_variable_name_token1;
	v->a[222746] = state(3391);
	v->a[222747] = 1;
	v->a[222748] = sym__arithmetic_binary_expression;
	v->a[222749] = state(3396);
	v->a[222750] = 1;
	v->a[222751] = sym__arithmetic_ternary_expression;
	v->a[222752] = state(3398);
	v->a[222753] = 1;
	v->a[222754] = sym__arithmetic_unary_expression;
	v->a[222755] = state(3400);
	v->a[222756] = 1;
	v->a[222757] = sym__arithmetic_postfix_expression;
	v->a[222758] = actions(9368);
	v->a[222759] = 2;
	small_parse_table_11138(v);
}

void	small_parse_table_11138(t_small_parse_table_array *v)
{
	v->a[222760] = anon_sym_PLUS_PLUS2;
	v->a[222761] = anon_sym_DASH_DASH2;
	v->a[222762] = actions(9370);
	v->a[222763] = 2;
	v->a[222764] = anon_sym_DASH2;
	v->a[222765] = anon_sym_PLUS2;
	v->a[222766] = state(3166);
	v->a[222767] = 9;
	v->a[222768] = sym_subscript;
	v->a[222769] = sym__arithmetic_expression;
	v->a[222770] = sym__arithmetic_literal;
	v->a[222771] = sym__arithmetic_parenthesized_expression;
	v->a[222772] = sym_string;
	v->a[222773] = sym_number;
	v->a[222774] = sym_simple_expansion;
	v->a[222775] = sym_expansion;
	v->a[222776] = sym_command_substitution;
	v->a[222777] = 21;
	v->a[222778] = actions(71);
	v->a[222779] = 1;
	small_parse_table_11139(v);
}

void	small_parse_table_11139(t_small_parse_table_array *v)
{
	v->a[222780] = sym_comment;
	v->a[222781] = actions(3064);
	v->a[222782] = 1;
	v->a[222783] = sym_variable_name;
	v->a[222784] = actions(9278);
	v->a[222785] = 1;
	v->a[222786] = anon_sym_LPAREN;
	v->a[222787] = actions(9280);
	v->a[222788] = 1;
	v->a[222789] = anon_sym_BANG;
	v->a[222790] = actions(9286);
	v->a[222791] = 1;
	v->a[222792] = anon_sym_TILDE;
	v->a[222793] = actions(9288);
	v->a[222794] = 1;
	v->a[222795] = anon_sym_DOLLAR;
	v->a[222796] = actions(9290);
	v->a[222797] = 1;
	v->a[222798] = anon_sym_DQUOTE;
	v->a[222799] = actions(9292);
	small_parse_table_11140(v);
}

/* EOF small_parse_table_2227.c */
