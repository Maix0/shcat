/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_97.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_485(t_small_parse_table_array *v)
{
	v->a[9700] = 2;
	v->a[9701] = anon_sym_LT_AMP_DASH;
	v->a[9702] = anon_sym_GT_AMP_DASH;
	v->a[9703] = state(3581);
	v->a[9704] = 2;
	v->a[9705] = sym_file_redirect;
	v->a[9706] = sym_herestring_redirect;
	v->a[9707] = state(5014);
	v->a[9708] = 2;
	v->a[9709] = sym_subshell;
	v->a[9710] = sym_test_command;
	v->a[9711] = actions(1390);
	v->a[9712] = 3;
	v->a[9713] = anon_sym_GT_GT;
	v->a[9714] = anon_sym_AMP_GT_GT;
	v->a[9715] = anon_sym_GT_PIPE;
	v->a[9716] = actions(1388);
	v->a[9717] = 5;
	v->a[9718] = anon_sym_LT;
	v->a[9719] = anon_sym_GT;
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = anon_sym_AMP_GT;
	v->a[9721] = anon_sym_LT_AMP;
	v->a[9722] = anon_sym_GT_AMP;
	v->a[9723] = state(1078);
	v->a[9724] = 9;
	v->a[9725] = sym_arithmetic_expansion;
	v->a[9726] = sym_brace_expression;
	v->a[9727] = sym_string;
	v->a[9728] = sym_translated_string;
	v->a[9729] = sym_number;
	v->a[9730] = sym_simple_expansion;
	v->a[9731] = sym_expansion;
	v->a[9732] = sym_command_substitution;
	v->a[9733] = sym_process_substitution;
	v->a[9734] = 21;
	v->a[9735] = actions(3);
	v->a[9736] = 1;
	v->a[9737] = sym_comment;
	v->a[9738] = actions(2735);
	v->a[9739] = 1;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = anon_sym_DOLLAR_LBRACK;
	v->a[9741] = actions(2738);
	v->a[9742] = 1;
	v->a[9743] = anon_sym_DOLLAR;
	v->a[9744] = actions(2741);
	v->a[9745] = 1;
	v->a[9746] = sym__special_character;
	v->a[9747] = actions(2744);
	v->a[9748] = 1;
	v->a[9749] = anon_sym_DQUOTE;
	v->a[9750] = actions(2747);
	v->a[9751] = 1;
	v->a[9752] = aux_sym_number_token1;
	v->a[9753] = actions(2750);
	v->a[9754] = 1;
	v->a[9755] = aux_sym_number_token2;
	v->a[9756] = actions(2753);
	v->a[9757] = 1;
	v->a[9758] = anon_sym_DOLLAR_LBRACE;
	v->a[9759] = actions(2756);
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = 1;
	v->a[9761] = anon_sym_DOLLAR_LPAREN;
	v->a[9762] = actions(2759);
	v->a[9763] = 1;
	v->a[9764] = anon_sym_BQUOTE;
	v->a[9765] = actions(2762);
	v->a[9766] = 1;
	v->a[9767] = anon_sym_DOLLAR_BQUOTE;
	v->a[9768] = actions(2768);
	v->a[9769] = 1;
	v->a[9770] = sym_test_operator;
	v->a[9771] = actions(2771);
	v->a[9772] = 1;
	v->a[9773] = sym__brace_start;
	v->a[9774] = state(1744);
	v->a[9775] = 1;
	v->a[9776] = aux_sym__literal_repeat1;
	v->a[9777] = actions(2732);
	v->a[9778] = 2;
	v->a[9779] = anon_sym_LPAREN_LPAREN;
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9781] = actions(2765);
	v->a[9782] = 2;
	v->a[9783] = anon_sym_LT_LPAREN;
	v->a[9784] = anon_sym_GT_LPAREN;
	v->a[9785] = state(627);
	v->a[9786] = 2;
	v->a[9787] = sym_concatenation;
	v->a[9788] = aux_sym_for_statement_repeat1;
	v->a[9789] = actions(2216);
	v->a[9790] = 3;
	v->a[9791] = sym_file_descriptor;
	v->a[9792] = sym_variable_name;
	v->a[9793] = aux_sym_heredoc_redirect_token1;
	v->a[9794] = actions(2729);
	v->a[9795] = 3;
	v->a[9796] = sym_raw_string;
	v->a[9797] = sym_ansi_c_string;
	v->a[9798] = sym_word;
	v->a[9799] = state(1370);
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
