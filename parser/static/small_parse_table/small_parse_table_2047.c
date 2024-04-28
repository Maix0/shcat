/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2047.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10235(t_small_parse_table_array *v)
{
	v->a[204700] = 1;
	v->a[204701] = anon_sym_BQUOTE;
	v->a[204702] = actions(9210);
	v->a[204703] = 1;
	v->a[204704] = anon_sym_DOLLAR_BQUOTE;
	v->a[204705] = actions(9224);
	v->a[204706] = 1;
	v->a[204707] = sym__special_character;
	v->a[204708] = actions(9484);
	v->a[204709] = 1;
	v->a[204710] = sym_word;
	v->a[204711] = actions(9488);
	v->a[204712] = 1;
	v->a[204713] = sym_test_operator;
	v->a[204714] = state(1436);
	v->a[204715] = 1;
	v->a[204716] = aux_sym__literal_repeat1;
	v->a[204717] = state(1543);
	v->a[204718] = 1;
	v->a[204719] = sym_concatenation;
	small_parse_table_10236(v);
}

void	small_parse_table_10236(t_small_parse_table_array *v)
{
	v->a[204720] = actions(9196);
	v->a[204721] = 2;
	v->a[204722] = anon_sym_LPAREN_LPAREN;
	v->a[204723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204724] = actions(9212);
	v->a[204725] = 2;
	v->a[204726] = anon_sym_LT_LPAREN;
	v->a[204727] = anon_sym_GT_LPAREN;
	v->a[204728] = actions(9486);
	v->a[204729] = 2;
	v->a[204730] = sym_raw_string;
	v->a[204731] = sym_ansi_c_string;
	v->a[204732] = state(1107);
	v->a[204733] = 9;
	v->a[204734] = sym_arithmetic_expansion;
	v->a[204735] = sym_brace_expression;
	v->a[204736] = sym_string;
	v->a[204737] = sym_translated_string;
	v->a[204738] = sym_number;
	v->a[204739] = sym_simple_expansion;
	small_parse_table_10237(v);
}

void	small_parse_table_10237(t_small_parse_table_array *v)
{
	v->a[204740] = sym_expansion;
	v->a[204741] = sym_command_substitution;
	v->a[204742] = sym_process_substitution;
	v->a[204743] = 21;
	v->a[204744] = actions(71);
	v->a[204745] = 1;
	v->a[204746] = sym_comment;
	v->a[204747] = actions(9364);
	v->a[204748] = 1;
	v->a[204749] = anon_sym_LPAREN;
	v->a[204750] = actions(9366);
	v->a[204751] = 1;
	v->a[204752] = anon_sym_BANG;
	v->a[204753] = actions(9372);
	v->a[204754] = 1;
	v->a[204755] = anon_sym_TILDE;
	v->a[204756] = actions(9374);
	v->a[204757] = 1;
	v->a[204758] = anon_sym_DOLLAR;
	v->a[204759] = actions(9376);
	small_parse_table_10238(v);
}

void	small_parse_table_10238(t_small_parse_table_array *v)
{
	v->a[204760] = 1;
	v->a[204761] = anon_sym_DQUOTE;
	v->a[204762] = actions(9378);
	v->a[204763] = 1;
	v->a[204764] = aux_sym_number_token1;
	v->a[204765] = actions(9380);
	v->a[204766] = 1;
	v->a[204767] = aux_sym_number_token2;
	v->a[204768] = actions(9382);
	v->a[204769] = 1;
	v->a[204770] = anon_sym_DOLLAR_LBRACE;
	v->a[204771] = actions(9384);
	v->a[204772] = 1;
	v->a[204773] = anon_sym_DOLLAR_LPAREN;
	v->a[204774] = actions(9386);
	v->a[204775] = 1;
	v->a[204776] = anon_sym_BQUOTE;
	v->a[204777] = actions(9388);
	v->a[204778] = 1;
	v->a[204779] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10239(v);
}

void	small_parse_table_10239(t_small_parse_table_array *v)
{
	v->a[204780] = actions(9392);
	v->a[204781] = 1;
	v->a[204782] = sym_variable_name;
	v->a[204783] = actions(9490);
	v->a[204784] = 1;
	v->a[204785] = aux_sym__simple_variable_name_token1;
	v->a[204786] = state(3391);
	v->a[204787] = 1;
	v->a[204788] = sym__arithmetic_binary_expression;
	v->a[204789] = state(3396);
	v->a[204790] = 1;
	v->a[204791] = sym__arithmetic_ternary_expression;
	v->a[204792] = state(3398);
	v->a[204793] = 1;
	v->a[204794] = sym__arithmetic_unary_expression;
	v->a[204795] = state(3400);
	v->a[204796] = 1;
	v->a[204797] = sym__arithmetic_postfix_expression;
	v->a[204798] = actions(9368);
	v->a[204799] = 2;
	small_parse_table_10240(v);
}

/* EOF small_parse_table_2047.c */
