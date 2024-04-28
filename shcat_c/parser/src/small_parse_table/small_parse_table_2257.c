/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2257.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11285(t_small_parse_table_array *v)
{
	v->a[225700] = 1;
	v->a[225701] = sym_concatenation;
	v->a[225702] = actions(8470);
	v->a[225703] = 2;
	v->a[225704] = anon_sym_LPAREN_LPAREN;
	v->a[225705] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225706] = actions(8496);
	v->a[225707] = 2;
	v->a[225708] = anon_sym_LT_LPAREN;
	v->a[225709] = anon_sym_GT_LPAREN;
	v->a[225710] = actions(10732);
	v->a[225711] = 2;
	v->a[225712] = sym_raw_string;
	v->a[225713] = sym_ansi_c_string;
	v->a[225714] = state(1395);
	v->a[225715] = 9;
	v->a[225716] = sym_arithmetic_expansion;
	v->a[225717] = sym_brace_expression;
	v->a[225718] = sym_string;
	v->a[225719] = sym_translated_string;
	small_parse_table_11286(v);
}

void	small_parse_table_11286(t_small_parse_table_array *v)
{
	v->a[225720] = sym_number;
	v->a[225721] = sym_simple_expansion;
	v->a[225722] = sym_expansion;
	v->a[225723] = sym_command_substitution;
	v->a[225724] = sym_process_substitution;
	v->a[225725] = 21;
	v->a[225726] = actions(71);
	v->a[225727] = 1;
	v->a[225728] = sym_comment;
	v->a[225729] = actions(3064);
	v->a[225730] = 1;
	v->a[225731] = sym_variable_name;
	v->a[225732] = actions(9278);
	v->a[225733] = 1;
	v->a[225734] = anon_sym_LPAREN;
	v->a[225735] = actions(9280);
	v->a[225736] = 1;
	v->a[225737] = anon_sym_BANG;
	v->a[225738] = actions(9286);
	v->a[225739] = 1;
	small_parse_table_11287(v);
}

void	small_parse_table_11287(t_small_parse_table_array *v)
{
	v->a[225740] = anon_sym_TILDE;
	v->a[225741] = actions(9288);
	v->a[225742] = 1;
	v->a[225743] = anon_sym_DOLLAR;
	v->a[225744] = actions(9290);
	v->a[225745] = 1;
	v->a[225746] = anon_sym_DQUOTE;
	v->a[225747] = actions(9292);
	v->a[225748] = 1;
	v->a[225749] = aux_sym_number_token1;
	v->a[225750] = actions(9294);
	v->a[225751] = 1;
	v->a[225752] = aux_sym_number_token2;
	v->a[225753] = actions(9296);
	v->a[225754] = 1;
	v->a[225755] = anon_sym_DOLLAR_LBRACE;
	v->a[225756] = actions(9298);
	v->a[225757] = 1;
	v->a[225758] = anon_sym_DOLLAR_LPAREN;
	v->a[225759] = actions(9300);
	small_parse_table_11288(v);
}

void	small_parse_table_11288(t_small_parse_table_array *v)
{
	v->a[225760] = 1;
	v->a[225761] = anon_sym_BQUOTE;
	v->a[225762] = actions(9302);
	v->a[225763] = 1;
	v->a[225764] = anon_sym_DOLLAR_BQUOTE;
	v->a[225765] = actions(10736);
	v->a[225766] = 1;
	v->a[225767] = aux_sym__simple_variable_name_token1;
	v->a[225768] = state(2801);
	v->a[225769] = 1;
	v->a[225770] = sym__arithmetic_binary_expression;
	v->a[225771] = state(2803);
	v->a[225772] = 1;
	v->a[225773] = sym__arithmetic_ternary_expression;
	v->a[225774] = state(2809);
	v->a[225775] = 1;
	v->a[225776] = sym__arithmetic_unary_expression;
	v->a[225777] = state(2825);
	v->a[225778] = 1;
	v->a[225779] = sym__arithmetic_postfix_expression;
	small_parse_table_11289(v);
}

void	small_parse_table_11289(t_small_parse_table_array *v)
{
	v->a[225780] = actions(9282);
	v->a[225781] = 2;
	v->a[225782] = anon_sym_PLUS_PLUS2;
	v->a[225783] = anon_sym_DASH_DASH2;
	v->a[225784] = actions(9284);
	v->a[225785] = 2;
	v->a[225786] = anon_sym_DASH2;
	v->a[225787] = anon_sym_PLUS2;
	v->a[225788] = state(2772);
	v->a[225789] = 9;
	v->a[225790] = sym_subscript;
	v->a[225791] = sym__arithmetic_expression;
	v->a[225792] = sym__arithmetic_literal;
	v->a[225793] = sym__arithmetic_parenthesized_expression;
	v->a[225794] = sym_string;
	v->a[225795] = sym_number;
	v->a[225796] = sym_simple_expansion;
	v->a[225797] = sym_expansion;
	v->a[225798] = sym_command_substitution;
	v->a[225799] = 18;
	small_parse_table_11290(v);
}

/* EOF small_parse_table_2257.c */
