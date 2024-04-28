/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2027.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10135(t_small_parse_table_array *v)
{
	v->a[202700] = actions(9202);
	v->a[202701] = 1;
	v->a[202702] = anon_sym_DQUOTE;
	v->a[202703] = actions(9206);
	v->a[202704] = 1;
	v->a[202705] = anon_sym_DOLLAR_LBRACE;
	v->a[202706] = actions(9208);
	v->a[202707] = 1;
	v->a[202708] = anon_sym_BQUOTE;
	v->a[202709] = actions(9210);
	v->a[202710] = 1;
	v->a[202711] = anon_sym_DOLLAR_BQUOTE;
	v->a[202712] = actions(9216);
	v->a[202713] = 1;
	v->a[202714] = sym_regex;
	v->a[202715] = actions(9260);
	v->a[202716] = 1;
	v->a[202717] = sym_word;
	v->a[202718] = actions(9262);
	v->a[202719] = 1;
	small_parse_table_10136(v);
}

void	small_parse_table_10136(t_small_parse_table_array *v)
{
	v->a[202720] = sym__special_character;
	v->a[202721] = actions(9266);
	v->a[202722] = 1;
	v->a[202723] = sym_test_operator;
	v->a[202724] = state(1379);
	v->a[202725] = 1;
	v->a[202726] = aux_sym__literal_repeat1;
	v->a[202727] = state(1611);
	v->a[202728] = 1;
	v->a[202729] = sym_concatenation;
	v->a[202730] = actions(9196);
	v->a[202731] = 2;
	v->a[202732] = anon_sym_LPAREN_LPAREN;
	v->a[202733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202734] = actions(9212);
	v->a[202735] = 2;
	v->a[202736] = anon_sym_LT_LPAREN;
	v->a[202737] = anon_sym_GT_LPAREN;
	v->a[202738] = actions(9264);
	v->a[202739] = 2;
	small_parse_table_10137(v);
}

void	small_parse_table_10137(t_small_parse_table_array *v)
{
	v->a[202740] = sym_raw_string;
	v->a[202741] = sym_ansi_c_string;
	v->a[202742] = state(1784);
	v->a[202743] = 9;
	v->a[202744] = sym_arithmetic_expansion;
	v->a[202745] = sym_brace_expression;
	v->a[202746] = sym_string;
	v->a[202747] = sym_translated_string;
	v->a[202748] = sym_number;
	v->a[202749] = sym_simple_expansion;
	v->a[202750] = sym_expansion;
	v->a[202751] = sym_command_substitution;
	v->a[202752] = sym_process_substitution;
	v->a[202753] = 18;
	v->a[202754] = actions(3);
	v->a[202755] = 1;
	v->a[202756] = sym_comment;
	v->a[202757] = actions(1557);
	v->a[202758] = 1;
	v->a[202759] = aux_sym_number_token1;
	small_parse_table_10138(v);
}

void	small_parse_table_10138(t_small_parse_table_array *v)
{
	v->a[202760] = actions(1559);
	v->a[202761] = 1;
	v->a[202762] = aux_sym_number_token2;
	v->a[202763] = actions(1563);
	v->a[202764] = 1;
	v->a[202765] = anon_sym_DOLLAR_LPAREN;
	v->a[202766] = actions(1575);
	v->a[202767] = 1;
	v->a[202768] = sym__brace_start;
	v->a[202769] = actions(9198);
	v->a[202770] = 1;
	v->a[202771] = anon_sym_DOLLAR_LBRACK;
	v->a[202772] = actions(9202);
	v->a[202773] = 1;
	v->a[202774] = anon_sym_DQUOTE;
	v->a[202775] = actions(9206);
	v->a[202776] = 1;
	v->a[202777] = anon_sym_DOLLAR_LBRACE;
	v->a[202778] = actions(9208);
	v->a[202779] = 1;
	small_parse_table_10139(v);
}

void	small_parse_table_10139(t_small_parse_table_array *v)
{
	v->a[202780] = anon_sym_BQUOTE;
	v->a[202781] = actions(9210);
	v->a[202782] = 1;
	v->a[202783] = anon_sym_DOLLAR_BQUOTE;
	v->a[202784] = actions(9268);
	v->a[202785] = 1;
	v->a[202786] = sym_word;
	v->a[202787] = actions(9270);
	v->a[202788] = 1;
	v->a[202789] = anon_sym_DOLLAR;
	v->a[202790] = actions(9276);
	v->a[202791] = 1;
	v->a[202792] = sym__comment_word;
	v->a[202793] = actions(9196);
	v->a[202794] = 2;
	v->a[202795] = anon_sym_LPAREN_LPAREN;
	v->a[202796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202797] = actions(9212);
	v->a[202798] = 2;
	v->a[202799] = anon_sym_LT_LPAREN;
	small_parse_table_10140(v);
}

/* EOF small_parse_table_2027.c */
