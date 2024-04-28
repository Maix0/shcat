/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_137.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_685(t_small_parse_table_array *v)
{
	v->a[13700] = 1;
	v->a[13701] = anon_sym_BQUOTE;
	v->a[13702] = actions(3064);
	v->a[13703] = 1;
	v->a[13704] = sym_variable_name;
	v->a[13705] = actions(3225);
	v->a[13706] = 1;
	v->a[13707] = aux_sym__simple_variable_name_token1;
	v->a[13708] = state(2387);
	v->a[13709] = 1;
	v->a[13710] = sym_command_substitution;
	v->a[13711] = state(2484);
	v->a[13712] = 1;
	v->a[13713] = aux_sym__literal_repeat1;
	v->a[13714] = state(2801);
	v->a[13715] = 1;
	v->a[13716] = sym__arithmetic_binary_expression;
	v->a[13717] = state(2803);
	v->a[13718] = 1;
	v->a[13719] = sym__arithmetic_ternary_expression;
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = state(2809);
	v->a[13721] = 1;
	v->a[13722] = sym__arithmetic_unary_expression;
	v->a[13723] = state(2825);
	v->a[13724] = 1;
	v->a[13725] = sym__arithmetic_postfix_expression;
	v->a[13726] = state(3139);
	v->a[13727] = 1;
	v->a[13728] = sym__expression;
	v->a[13729] = actions(1129);
	v->a[13730] = 2;
	v->a[13731] = anon_sym_LPAREN_LPAREN;
	v->a[13732] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13733] = actions(1165);
	v->a[13734] = 2;
	v->a[13735] = anon_sym_LT_LPAREN;
	v->a[13736] = anon_sym_GT_LPAREN;
	v->a[13737] = actions(1183);
	v->a[13738] = 2;
	v->a[13739] = sym_raw_string;
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = sym_ansi_c_string;
	v->a[13741] = actions(3054);
	v->a[13742] = 2;
	v->a[13743] = anon_sym_PLUS_PLUS2;
	v->a[13744] = anon_sym_DASH_DASH2;
	v->a[13745] = actions(3056);
	v->a[13746] = 2;
	v->a[13747] = anon_sym_DASH2;
	v->a[13748] = anon_sym_PLUS2;
	v->a[13749] = state(2397);
	v->a[13750] = 4;
	v->a[13751] = sym_string;
	v->a[13752] = sym_number;
	v->a[13753] = sym_simple_expansion;
	v->a[13754] = sym_expansion;
	v->a[13755] = state(2456);
	v->a[13756] = 4;
	v->a[13757] = sym_arithmetic_expansion;
	v->a[13758] = sym_brace_expression;
	v->a[13759] = sym_translated_string;
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = sym_process_substitution;
	v->a[13761] = state(2756);
	v->a[13762] = 4;
	v->a[13763] = sym_subscript;
	v->a[13764] = sym__arithmetic_expression;
	v->a[13765] = sym__arithmetic_literal;
	v->a[13766] = sym__arithmetic_parenthesized_expression;
	v->a[13767] = state(2594);
	v->a[13768] = 6;
	v->a[13769] = sym_binary_expression;
	v->a[13770] = sym_ternary_expression;
	v->a[13771] = sym_unary_expression;
	v->a[13772] = sym_postfix_expression;
	v->a[13773] = sym_parenthesized_expression;
	v->a[13774] = sym_concatenation;
	v->a[13775] = 21;
	v->a[13776] = actions(3);
	v->a[13777] = 1;
	v->a[13778] = sym_comment;
	v->a[13779] = actions(3233);
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = 1;
	v->a[13781] = anon_sym_DOLLAR_LBRACK;
	v->a[13782] = actions(3236);
	v->a[13783] = 1;
	v->a[13784] = anon_sym_DOLLAR;
	v->a[13785] = actions(3239);
	v->a[13786] = 1;
	v->a[13787] = sym__special_character;
	v->a[13788] = actions(3242);
	v->a[13789] = 1;
	v->a[13790] = anon_sym_DQUOTE;
	v->a[13791] = actions(3245);
	v->a[13792] = 1;
	v->a[13793] = aux_sym_number_token1;
	v->a[13794] = actions(3248);
	v->a[13795] = 1;
	v->a[13796] = aux_sym_number_token2;
	v->a[13797] = actions(3251);
	v->a[13798] = 1;
	v->a[13799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
