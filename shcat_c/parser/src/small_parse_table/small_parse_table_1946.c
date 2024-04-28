/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1946.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9730(t_small_parse_table_array *v)
{
	v->a[194600] = actions(3743);
	v->a[194601] = 1;
	v->a[194602] = anon_sym_DOLLAR_LPAREN;
	v->a[194603] = actions(3745);
	v->a[194604] = 1;
	v->a[194605] = anon_sym_BQUOTE;
	v->a[194606] = actions(3747);
	v->a[194607] = 1;
	v->a[194608] = anon_sym_DOLLAR_BQUOTE;
	v->a[194609] = actions(3753);
	v->a[194610] = 1;
	v->a[194611] = sym_test_operator;
	v->a[194612] = actions(3755);
	v->a[194613] = 1;
	v->a[194614] = sym__brace_start;
	v->a[194615] = actions(8720);
	v->a[194616] = 1;
	v->a[194617] = aux_sym_heredoc_redirect_token1;
	v->a[194618] = state(3571);
	v->a[194619] = 1;
	small_parse_table_9731(v);
}

void	small_parse_table_9731(t_small_parse_table_array *v)
{
	v->a[194620] = aux_sym__heredoc_command;
	v->a[194621] = state(5351);
	v->a[194622] = 1;
	v->a[194623] = aux_sym__literal_repeat1;
	v->a[194624] = state(5456);
	v->a[194625] = 1;
	v->a[194626] = sym_concatenation;
	v->a[194627] = actions(3715);
	v->a[194628] = 2;
	v->a[194629] = anon_sym_LPAREN_LPAREN;
	v->a[194630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194631] = actions(3749);
	v->a[194632] = 2;
	v->a[194633] = anon_sym_LT_LPAREN;
	v->a[194634] = anon_sym_GT_LPAREN;
	v->a[194635] = actions(3713);
	v->a[194636] = 3;
	v->a[194637] = sym_raw_string;
	v->a[194638] = sym_ansi_c_string;
	v->a[194639] = sym_word;
	small_parse_table_9732(v);
}

void	small_parse_table_9732(t_small_parse_table_array *v)
{
	v->a[194640] = state(5062);
	v->a[194641] = 9;
	v->a[194642] = sym_arithmetic_expansion;
	v->a[194643] = sym_brace_expression;
	v->a[194644] = sym_string;
	v->a[194645] = sym_translated_string;
	v->a[194646] = sym_number;
	v->a[194647] = sym_simple_expansion;
	v->a[194648] = sym_expansion;
	v->a[194649] = sym_command_substitution;
	v->a[194650] = sym_process_substitution;
	v->a[194651] = 8;
	v->a[194652] = actions(3);
	v->a[194653] = 1;
	v->a[194654] = sym_comment;
	v->a[194655] = actions(3735);
	v->a[194656] = 1;
	v->a[194657] = anon_sym_DQUOTE;
	v->a[194658] = actions(7757);
	v->a[194659] = 1;
	small_parse_table_9733(v);
}

void	small_parse_table_9733(t_small_parse_table_array *v)
{
	v->a[194660] = sym_variable_name;
	v->a[194661] = state(4808);
	v->a[194662] = 1;
	v->a[194663] = sym_string;
	v->a[194664] = actions(1235);
	v->a[194665] = 2;
	v->a[194666] = sym_test_operator;
	v->a[194667] = sym__brace_start;
	v->a[194668] = actions(7755);
	v->a[194669] = 2;
	v->a[194670] = aux_sym__simple_variable_name_token1;
	v->a[194671] = aux_sym__multiline_variable_name_token1;
	v->a[194672] = actions(7753);
	v->a[194673] = 9;
	v->a[194674] = anon_sym_DASH;
	v->a[194675] = anon_sym_STAR;
	v->a[194676] = anon_sym_BANG;
	v->a[194677] = anon_sym_QMARK;
	v->a[194678] = anon_sym_DOLLAR;
	v->a[194679] = anon_sym_POUND;
	small_parse_table_9734(v);
}

void	small_parse_table_9734(t_small_parse_table_array *v)
{
	v->a[194680] = anon_sym_AT2;
	v->a[194681] = anon_sym_0;
	v->a[194682] = anon_sym__;
	v->a[194683] = actions(1227);
	v->a[194684] = 16;
	v->a[194685] = anon_sym_LPAREN_LPAREN;
	v->a[194686] = aux_sym_heredoc_redirect_token1;
	v->a[194687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194688] = anon_sym_DOLLAR_LBRACK;
	v->a[194689] = sym__special_character;
	v->a[194690] = sym_raw_string;
	v->a[194691] = sym_ansi_c_string;
	v->a[194692] = aux_sym_number_token1;
	v->a[194693] = aux_sym_number_token2;
	v->a[194694] = anon_sym_DOLLAR_LBRACE;
	v->a[194695] = anon_sym_DOLLAR_LPAREN;
	v->a[194696] = anon_sym_BQUOTE;
	v->a[194697] = anon_sym_DOLLAR_BQUOTE;
	v->a[194698] = anon_sym_LT_LPAREN;
	v->a[194699] = anon_sym_GT_LPAREN;
	small_parse_table_9735(v);
}

/* EOF small_parse_table_1946.c */
