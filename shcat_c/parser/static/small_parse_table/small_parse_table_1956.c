/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1956.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9780(t_small_parse_table_array *v)
{
	v->a[195600] = sym_ansi_c_string;
	v->a[195601] = sym_word;
	v->a[195602] = state(5062);
	v->a[195603] = 9;
	v->a[195604] = sym_arithmetic_expansion;
	v->a[195605] = sym_brace_expression;
	v->a[195606] = sym_string;
	v->a[195607] = sym_translated_string;
	v->a[195608] = sym_number;
	v->a[195609] = sym_simple_expansion;
	v->a[195610] = sym_expansion;
	v->a[195611] = sym_command_substitution;
	v->a[195612] = sym_process_substitution;
	v->a[195613] = 3;
	v->a[195614] = actions(71);
	v->a[195615] = 1;
	v->a[195616] = sym_comment;
	v->a[195617] = actions(5770);
	v->a[195618] = 10;
	v->a[195619] = anon_sym_LT;
	small_parse_table_9781(v);
}

void	small_parse_table_9781(t_small_parse_table_array *v)
{
	v->a[195620] = anon_sym_GT;
	v->a[195621] = anon_sym_AMP_GT;
	v->a[195622] = anon_sym_LT_AMP;
	v->a[195623] = anon_sym_GT_AMP;
	v->a[195624] = anon_sym_DOLLAR;
	v->a[195625] = aux_sym_number_token1;
	v->a[195626] = aux_sym_number_token2;
	v->a[195627] = anon_sym_DOLLAR_LPAREN;
	v->a[195628] = sym_word;
	v->a[195629] = actions(5772);
	v->a[195630] = 22;
	v->a[195631] = sym_file_descriptor;
	v->a[195632] = sym_variable_name;
	v->a[195633] = sym_test_operator;
	v->a[195634] = sym__brace_start;
	v->a[195635] = anon_sym_LPAREN_LPAREN;
	v->a[195636] = anon_sym_GT_GT;
	v->a[195637] = anon_sym_AMP_GT_GT;
	v->a[195638] = anon_sym_GT_PIPE;
	v->a[195639] = anon_sym_LT_AMP_DASH;
	small_parse_table_9782(v);
}

void	small_parse_table_9782(t_small_parse_table_array *v)
{
	v->a[195640] = anon_sym_GT_AMP_DASH;
	v->a[195641] = anon_sym_LT_LT_LT;
	v->a[195642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195643] = anon_sym_DOLLAR_LBRACK;
	v->a[195644] = sym__special_character;
	v->a[195645] = anon_sym_DQUOTE;
	v->a[195646] = sym_raw_string;
	v->a[195647] = sym_ansi_c_string;
	v->a[195648] = anon_sym_DOLLAR_LBRACE;
	v->a[195649] = anon_sym_BQUOTE;
	v->a[195650] = anon_sym_DOLLAR_BQUOTE;
	v->a[195651] = anon_sym_LT_LPAREN;
	v->a[195652] = anon_sym_GT_LPAREN;
	v->a[195653] = 8;
	v->a[195654] = actions(3);
	v->a[195655] = 1;
	v->a[195656] = sym_comment;
	v->a[195657] = actions(1241);
	v->a[195658] = 1;
	v->a[195659] = sym_file_descriptor;
	small_parse_table_9783(v);
}

void	small_parse_table_9783(t_small_parse_table_array *v)
{
	v->a[195660] = actions(8694);
	v->a[195661] = 1;
	v->a[195662] = anon_sym_DQUOTE;
	v->a[195663] = actions(8698);
	v->a[195664] = 1;
	v->a[195665] = sym_variable_name;
	v->a[195666] = state(5487);
	v->a[195667] = 1;
	v->a[195668] = sym_string;
	v->a[195669] = actions(8696);
	v->a[195670] = 2;
	v->a[195671] = aux_sym__simple_variable_name_token1;
	v->a[195672] = aux_sym__multiline_variable_name_token1;
	v->a[195673] = actions(8692);
	v->a[195674] = 9;
	v->a[195675] = anon_sym_DASH;
	v->a[195676] = anon_sym_STAR;
	v->a[195677] = anon_sym_BANG;
	v->a[195678] = anon_sym_QMARK;
	v->a[195679] = anon_sym_DOLLAR;
	small_parse_table_9784(v);
}

void	small_parse_table_9784(t_small_parse_table_array *v)
{
	v->a[195680] = anon_sym_POUND;
	v->a[195681] = anon_sym_AT2;
	v->a[195682] = anon_sym_0;
	v->a[195683] = anon_sym__;
	v->a[195684] = actions(1239);
	v->a[195685] = 17;
	v->a[195686] = anon_sym_PIPE_PIPE;
	v->a[195687] = anon_sym_AMP_AMP;
	v->a[195688] = anon_sym_PIPE;
	v->a[195689] = anon_sym_LT;
	v->a[195690] = anon_sym_GT;
	v->a[195691] = anon_sym_LT_LT;
	v->a[195692] = anon_sym_GT_GT;
	v->a[195693] = anon_sym_PIPE_AMP;
	v->a[195694] = anon_sym_RBRACK;
	v->a[195695] = anon_sym_AMP_GT;
	v->a[195696] = anon_sym_AMP_GT_GT;
	v->a[195697] = anon_sym_LT_AMP;
	v->a[195698] = anon_sym_GT_AMP;
	v->a[195699] = anon_sym_GT_PIPE;
	small_parse_table_9785(v);
}

/* EOF small_parse_table_1956.c */
