/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2387.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11935(t_small_parse_table_array *v)
{
	v->a[238700] = anon_sym_DOLLAR;
	v->a[238701] = actions(9376);
	v->a[238702] = 1;
	v->a[238703] = anon_sym_DQUOTE;
	v->a[238704] = actions(9378);
	v->a[238705] = 1;
	v->a[238706] = aux_sym_number_token1;
	v->a[238707] = actions(9380);
	v->a[238708] = 1;
	v->a[238709] = aux_sym_number_token2;
	v->a[238710] = actions(9382);
	v->a[238711] = 1;
	v->a[238712] = anon_sym_DOLLAR_LBRACE;
	v->a[238713] = actions(9384);
	v->a[238714] = 1;
	v->a[238715] = anon_sym_DOLLAR_LPAREN;
	v->a[238716] = actions(9386);
	v->a[238717] = 1;
	v->a[238718] = anon_sym_BQUOTE;
	v->a[238719] = actions(9388);
	small_parse_table_11936(v);
}

void	small_parse_table_11936(t_small_parse_table_array *v)
{
	v->a[238720] = 1;
	v->a[238721] = anon_sym_DOLLAR_BQUOTE;
	v->a[238722] = actions(9392);
	v->a[238723] = 1;
	v->a[238724] = sym_variable_name;
	v->a[238725] = actions(11220);
	v->a[238726] = 1;
	v->a[238727] = aux_sym__simple_variable_name_token1;
	v->a[238728] = state(3391);
	v->a[238729] = 1;
	v->a[238730] = sym__arithmetic_binary_expression;
	v->a[238731] = state(3396);
	v->a[238732] = 1;
	v->a[238733] = sym__arithmetic_ternary_expression;
	v->a[238734] = state(3398);
	v->a[238735] = 1;
	v->a[238736] = sym__arithmetic_unary_expression;
	v->a[238737] = state(3400);
	v->a[238738] = 1;
	v->a[238739] = sym__arithmetic_postfix_expression;
	small_parse_table_11937(v);
}

void	small_parse_table_11937(t_small_parse_table_array *v)
{
	v->a[238740] = actions(9368);
	v->a[238741] = 2;
	v->a[238742] = anon_sym_PLUS_PLUS2;
	v->a[238743] = anon_sym_DASH_DASH2;
	v->a[238744] = actions(9370);
	v->a[238745] = 2;
	v->a[238746] = anon_sym_DASH2;
	v->a[238747] = anon_sym_PLUS2;
	v->a[238748] = state(3185);
	v->a[238749] = 9;
	v->a[238750] = sym_subscript;
	v->a[238751] = sym__arithmetic_expression;
	v->a[238752] = sym__arithmetic_literal;
	v->a[238753] = sym__arithmetic_parenthesized_expression;
	v->a[238754] = sym_string;
	v->a[238755] = sym_number;
	v->a[238756] = sym_simple_expansion;
	v->a[238757] = sym_expansion;
	v->a[238758] = sym_command_substitution;
	v->a[238759] = 21;
	small_parse_table_11938(v);
}

void	small_parse_table_11938(t_small_parse_table_array *v)
{
	v->a[238760] = actions(71);
	v->a[238761] = 1;
	v->a[238762] = sym_comment;
	v->a[238763] = actions(3064);
	v->a[238764] = 1;
	v->a[238765] = sym_variable_name;
	v->a[238766] = actions(9278);
	v->a[238767] = 1;
	v->a[238768] = anon_sym_LPAREN;
	v->a[238769] = actions(9280);
	v->a[238770] = 1;
	v->a[238771] = anon_sym_BANG;
	v->a[238772] = actions(9286);
	v->a[238773] = 1;
	v->a[238774] = anon_sym_TILDE;
	v->a[238775] = actions(9288);
	v->a[238776] = 1;
	v->a[238777] = anon_sym_DOLLAR;
	v->a[238778] = actions(9290);
	v->a[238779] = 1;
	small_parse_table_11939(v);
}

void	small_parse_table_11939(t_small_parse_table_array *v)
{
	v->a[238780] = anon_sym_DQUOTE;
	v->a[238781] = actions(9292);
	v->a[238782] = 1;
	v->a[238783] = aux_sym_number_token1;
	v->a[238784] = actions(9294);
	v->a[238785] = 1;
	v->a[238786] = aux_sym_number_token2;
	v->a[238787] = actions(9296);
	v->a[238788] = 1;
	v->a[238789] = anon_sym_DOLLAR_LBRACE;
	v->a[238790] = actions(9298);
	v->a[238791] = 1;
	v->a[238792] = anon_sym_DOLLAR_LPAREN;
	v->a[238793] = actions(9300);
	v->a[238794] = 1;
	v->a[238795] = anon_sym_BQUOTE;
	v->a[238796] = actions(9302);
	v->a[238797] = 1;
	v->a[238798] = anon_sym_DOLLAR_BQUOTE;
	v->a[238799] = actions(11222);
	small_parse_table_11940(v);
}

/* EOF small_parse_table_2387.c */
