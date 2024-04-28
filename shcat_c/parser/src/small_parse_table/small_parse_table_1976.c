/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1976.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9880(t_small_parse_table_array *v)
{
	v->a[197600] = aux_sym_number_token1;
	v->a[197601] = actions(5124);
	v->a[197602] = 1;
	v->a[197603] = aux_sym_number_token2;
	v->a[197604] = actions(5126);
	v->a[197605] = 1;
	v->a[197606] = anon_sym_DOLLAR_LBRACE;
	v->a[197607] = actions(5128);
	v->a[197608] = 1;
	v->a[197609] = anon_sym_DOLLAR_LPAREN;
	v->a[197610] = actions(5130);
	v->a[197611] = 1;
	v->a[197612] = anon_sym_BQUOTE;
	v->a[197613] = actions(5132);
	v->a[197614] = 1;
	v->a[197615] = anon_sym_DOLLAR_BQUOTE;
	v->a[197616] = actions(5136);
	v->a[197617] = 1;
	v->a[197618] = sym_test_operator;
	v->a[197619] = actions(5138);
	small_parse_table_9881(v);
}

void	small_parse_table_9881(t_small_parse_table_array *v)
{
	v->a[197620] = 1;
	v->a[197621] = sym__brace_start;
	v->a[197622] = state(3114);
	v->a[197623] = 1;
	v->a[197624] = aux_sym__literal_repeat1;
	v->a[197625] = actions(5110);
	v->a[197626] = 2;
	v->a[197627] = anon_sym_LPAREN_LPAREN;
	v->a[197628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197629] = actions(5120);
	v->a[197630] = 2;
	v->a[197631] = sym_raw_string;
	v->a[197632] = sym_ansi_c_string;
	v->a[197633] = actions(5134);
	v->a[197634] = 2;
	v->a[197635] = anon_sym_LT_LPAREN;
	v->a[197636] = anon_sym_GT_LPAREN;
	v->a[197637] = state(1056);
	v->a[197638] = 2;
	v->a[197639] = sym_concatenation;
	small_parse_table_9882(v);
}

void	small_parse_table_9882(t_small_parse_table_array *v)
{
	v->a[197640] = aux_sym_for_statement_repeat1;
	v->a[197641] = state(2613);
	v->a[197642] = 9;
	v->a[197643] = sym_arithmetic_expansion;
	v->a[197644] = sym_brace_expression;
	v->a[197645] = sym_string;
	v->a[197646] = sym_translated_string;
	v->a[197647] = sym_number;
	v->a[197648] = sym_simple_expansion;
	v->a[197649] = sym_expansion;
	v->a[197650] = sym_command_substitution;
	v->a[197651] = sym_process_substitution;
	v->a[197652] = 20;
	v->a[197653] = actions(71);
	v->a[197654] = 1;
	v->a[197655] = sym_comment;
	v->a[197656] = actions(3471);
	v->a[197657] = 1;
	v->a[197658] = sym_word;
	v->a[197659] = actions(3477);
	small_parse_table_9883(v);
}

void	small_parse_table_9883(t_small_parse_table_array *v)
{
	v->a[197660] = 1;
	v->a[197661] = anon_sym_DOLLAR;
	v->a[197662] = actions(3481);
	v->a[197663] = 1;
	v->a[197664] = aux_sym_number_token1;
	v->a[197665] = actions(3483);
	v->a[197666] = 1;
	v->a[197667] = aux_sym_number_token2;
	v->a[197668] = actions(3487);
	v->a[197669] = 1;
	v->a[197670] = anon_sym_DOLLAR_LPAREN;
	v->a[197671] = actions(3495);
	v->a[197672] = 1;
	v->a[197673] = sym_test_operator;
	v->a[197674] = actions(3497);
	v->a[197675] = 1;
	v->a[197676] = sym__brace_start;
	v->a[197677] = actions(8906);
	v->a[197678] = 1;
	v->a[197679] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9884(v);
}

void	small_parse_table_9884(t_small_parse_table_array *v)
{
	v->a[197680] = actions(8908);
	v->a[197681] = 1;
	v->a[197682] = sym__special_character;
	v->a[197683] = actions(8910);
	v->a[197684] = 1;
	v->a[197685] = anon_sym_DQUOTE;
	v->a[197686] = actions(8914);
	v->a[197687] = 1;
	v->a[197688] = anon_sym_DOLLAR_LBRACE;
	v->a[197689] = actions(8916);
	v->a[197690] = 1;
	v->a[197691] = anon_sym_BQUOTE;
	v->a[197692] = actions(8918);
	v->a[197693] = 1;
	v->a[197694] = anon_sym_DOLLAR_BQUOTE;
	v->a[197695] = state(2024);
	v->a[197696] = 1;
	v->a[197697] = aux_sym__literal_repeat1;
	v->a[197698] = actions(8904);
	v->a[197699] = 2;
	small_parse_table_9885(v);
}

/* EOF small_parse_table_1976.c */
