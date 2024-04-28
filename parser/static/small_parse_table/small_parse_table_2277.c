/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2277.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11385(t_small_parse_table_array *v)
{
	v->a[227700] = actions(10812);
	v->a[227701] = 1;
	v->a[227702] = sym_word;
	v->a[227703] = actions(10816);
	v->a[227704] = 1;
	v->a[227705] = sym_test_operator;
	v->a[227706] = state(1436);
	v->a[227707] = 1;
	v->a[227708] = aux_sym__literal_repeat1;
	v->a[227709] = state(1543);
	v->a[227710] = 1;
	v->a[227711] = sym_concatenation;
	v->a[227712] = actions(9196);
	v->a[227713] = 2;
	v->a[227714] = anon_sym_LPAREN_LPAREN;
	v->a[227715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227716] = actions(9212);
	v->a[227717] = 2;
	v->a[227718] = anon_sym_LT_LPAREN;
	v->a[227719] = anon_sym_GT_LPAREN;
	small_parse_table_11386(v);
}

void	small_parse_table_11386(t_small_parse_table_array *v)
{
	v->a[227720] = actions(10814);
	v->a[227721] = 2;
	v->a[227722] = sym_raw_string;
	v->a[227723] = sym_ansi_c_string;
	v->a[227724] = state(1273);
	v->a[227725] = 9;
	v->a[227726] = sym_arithmetic_expansion;
	v->a[227727] = sym_brace_expression;
	v->a[227728] = sym_string;
	v->a[227729] = sym_translated_string;
	v->a[227730] = sym_number;
	v->a[227731] = sym_simple_expansion;
	v->a[227732] = sym_expansion;
	v->a[227733] = sym_command_substitution;
	v->a[227734] = sym_process_substitution;
	v->a[227735] = 20;
	v->a[227736] = actions(71);
	v->a[227737] = 1;
	v->a[227738] = sym_comment;
	v->a[227739] = actions(1551);
	small_parse_table_11387(v);
}

void	small_parse_table_11387(t_small_parse_table_array *v)
{
	v->a[227740] = 1;
	v->a[227741] = anon_sym_DOLLAR;
	v->a[227742] = actions(1557);
	v->a[227743] = 1;
	v->a[227744] = aux_sym_number_token1;
	v->a[227745] = actions(1559);
	v->a[227746] = 1;
	v->a[227747] = aux_sym_number_token2;
	v->a[227748] = actions(1563);
	v->a[227749] = 1;
	v->a[227750] = anon_sym_DOLLAR_LPAREN;
	v->a[227751] = actions(1575);
	v->a[227752] = 1;
	v->a[227753] = sym__brace_start;
	v->a[227754] = actions(9198);
	v->a[227755] = 1;
	v->a[227756] = anon_sym_DOLLAR_LBRACK;
	v->a[227757] = actions(9200);
	v->a[227758] = 1;
	v->a[227759] = sym__special_character;
	small_parse_table_11388(v);
}

void	small_parse_table_11388(t_small_parse_table_array *v)
{
	v->a[227760] = actions(9202);
	v->a[227761] = 1;
	v->a[227762] = anon_sym_DQUOTE;
	v->a[227763] = actions(9206);
	v->a[227764] = 1;
	v->a[227765] = anon_sym_DOLLAR_LBRACE;
	v->a[227766] = actions(9208);
	v->a[227767] = 1;
	v->a[227768] = anon_sym_BQUOTE;
	v->a[227769] = actions(9210);
	v->a[227770] = 1;
	v->a[227771] = anon_sym_DOLLAR_BQUOTE;
	v->a[227772] = actions(10818);
	v->a[227773] = 1;
	v->a[227774] = sym_word;
	v->a[227775] = actions(10822);
	v->a[227776] = 1;
	v->a[227777] = sym_test_operator;
	v->a[227778] = state(1401);
	v->a[227779] = 1;
	small_parse_table_11389(v);
}

void	small_parse_table_11389(t_small_parse_table_array *v)
{
	v->a[227780] = aux_sym__literal_repeat1;
	v->a[227781] = state(1573);
	v->a[227782] = 1;
	v->a[227783] = sym_concatenation;
	v->a[227784] = actions(9196);
	v->a[227785] = 2;
	v->a[227786] = anon_sym_LPAREN_LPAREN;
	v->a[227787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227788] = actions(9212);
	v->a[227789] = 2;
	v->a[227790] = anon_sym_LT_LPAREN;
	v->a[227791] = anon_sym_GT_LPAREN;
	v->a[227792] = actions(10820);
	v->a[227793] = 2;
	v->a[227794] = sym_raw_string;
	v->a[227795] = sym_ansi_c_string;
	v->a[227796] = state(1276);
	v->a[227797] = 9;
	v->a[227798] = sym_arithmetic_expansion;
	v->a[227799] = sym_brace_expression;
	small_parse_table_11390(v);
}

/* EOF small_parse_table_2277.c */
