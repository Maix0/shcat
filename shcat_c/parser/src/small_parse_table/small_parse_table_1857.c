/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1857.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9285(t_small_parse_table_array *v)
{
	v->a[185700] = actions(6510);
	v->a[185701] = 1;
	v->a[185702] = sym_extglob_pattern;
	v->a[185703] = actions(6512);
	v->a[185704] = 1;
	v->a[185705] = sym__brace_start;
	v->a[185706] = actions(7226);
	v->a[185707] = 1;
	v->a[185708] = anon_sym_DOLLAR_LBRACK;
	v->a[185709] = actions(7228);
	v->a[185710] = 1;
	v->a[185711] = sym__special_character;
	v->a[185712] = actions(7230);
	v->a[185713] = 1;
	v->a[185714] = anon_sym_DQUOTE;
	v->a[185715] = actions(7234);
	v->a[185716] = 1;
	v->a[185717] = anon_sym_DOLLAR_LBRACE;
	v->a[185718] = actions(7236);
	v->a[185719] = 1;
	small_parse_table_9286(v);
}

void	small_parse_table_9286(t_small_parse_table_array *v)
{
	v->a[185720] = anon_sym_BQUOTE;
	v->a[185721] = actions(7238);
	v->a[185722] = 1;
	v->a[185723] = anon_sym_DOLLAR_BQUOTE;
	v->a[185724] = state(6426);
	v->a[185725] = 1;
	v->a[185726] = aux_sym__literal_repeat1;
	v->a[185727] = state(7035);
	v->a[185728] = 1;
	v->a[185729] = sym_last_case_item;
	v->a[185730] = actions(7224);
	v->a[185731] = 2;
	v->a[185732] = anon_sym_LPAREN_LPAREN;
	v->a[185733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[185734] = actions(7232);
	v->a[185735] = 2;
	v->a[185736] = sym_raw_string;
	v->a[185737] = sym_ansi_c_string;
	v->a[185738] = actions(7240);
	v->a[185739] = 2;
	small_parse_table_9287(v);
}

void	small_parse_table_9287(t_small_parse_table_array *v)
{
	v->a[185740] = anon_sym_LT_LPAREN;
	v->a[185741] = anon_sym_GT_LPAREN;
	v->a[185742] = state(3477);
	v->a[185743] = 2;
	v->a[185744] = sym_case_item;
	v->a[185745] = aux_sym_case_statement_repeat1;
	v->a[185746] = state(6695);
	v->a[185747] = 2;
	v->a[185748] = sym_concatenation;
	v->a[185749] = sym__extglob_blob;
	v->a[185750] = state(6303);
	v->a[185751] = 9;
	v->a[185752] = sym_arithmetic_expansion;
	v->a[185753] = sym_brace_expression;
	v->a[185754] = sym_string;
	v->a[185755] = sym_translated_string;
	v->a[185756] = sym_number;
	v->a[185757] = sym_simple_expansion;
	v->a[185758] = sym_expansion;
	v->a[185759] = sym_command_substitution;
	small_parse_table_9288(v);
}

void	small_parse_table_9288(t_small_parse_table_array *v)
{
	v->a[185760] = sym_process_substitution;
	v->a[185761] = 24;
	v->a[185762] = actions(71);
	v->a[185763] = 1;
	v->a[185764] = sym_comment;
	v->a[185765] = actions(6474);
	v->a[185766] = 1;
	v->a[185767] = sym_word;
	v->a[185768] = actions(6480);
	v->a[185769] = 1;
	v->a[185770] = anon_sym_LPAREN;
	v->a[185771] = actions(6488);
	v->a[185772] = 1;
	v->a[185773] = anon_sym_DOLLAR;
	v->a[185774] = actions(6494);
	v->a[185775] = 1;
	v->a[185776] = aux_sym_number_token1;
	v->a[185777] = actions(6496);
	v->a[185778] = 1;
	v->a[185779] = aux_sym_number_token2;
	small_parse_table_9289(v);
}

void	small_parse_table_9289(t_small_parse_table_array *v)
{
	v->a[185780] = actions(6500);
	v->a[185781] = 1;
	v->a[185782] = anon_sym_DOLLAR_LPAREN;
	v->a[185783] = actions(6508);
	v->a[185784] = 1;
	v->a[185785] = sym_test_operator;
	v->a[185786] = actions(6510);
	v->a[185787] = 1;
	v->a[185788] = sym_extglob_pattern;
	v->a[185789] = actions(6512);
	v->a[185790] = 1;
	v->a[185791] = sym__brace_start;
	v->a[185792] = actions(7226);
	v->a[185793] = 1;
	v->a[185794] = anon_sym_DOLLAR_LBRACK;
	v->a[185795] = actions(7228);
	v->a[185796] = 1;
	v->a[185797] = sym__special_character;
	v->a[185798] = actions(7230);
	v->a[185799] = 1;
	small_parse_table_9290(v);
}

/* EOF small_parse_table_1857.c */
