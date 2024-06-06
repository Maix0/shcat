/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_116.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_580(t_small_parse_table_array *v)
{
	v->a[11600] = 1;
	v->a[11601] = aux_sym__literal_repeat1;
	v->a[11602] = actions(2303);
	v->a[11603] = 2;
	v->a[11604] = sym_raw_string;
	v->a[11605] = sym_word;
	v->a[11606] = state(394);
	v->a[11607] = 2;
	v->a[11608] = sym_concatenation;
	v->a[11609] = aux_sym_for_statement_repeat1;
	v->a[11610] = actions(1390);
	v->a[11611] = 3;
	v->a[11612] = sym_file_descriptor;
	v->a[11613] = ts_builtin_sym_end;
	v->a[11614] = aux_sym_heredoc_redirect_token1;
	v->a[11615] = state(1153);
	v->a[11616] = 7;
	v->a[11617] = sym_arithmetic_expansion;
	v->a[11618] = sym_brace_expression;
	v->a[11619] = sym_string;
	small_parse_table_581(v);
}

void	small_parse_table_581(t_small_parse_table_array *v)
{
	v->a[11620] = sym_number;
	v->a[11621] = sym_simple_expansion;
	v->a[11622] = sym_expansion;
	v->a[11623] = sym_command_substitution;
	v->a[11624] = actions(1388);
	v->a[11625] = 19;
	v->a[11626] = anon_sym_PIPE;
	v->a[11627] = anon_sym_SEMI_SEMI;
	v->a[11628] = anon_sym_PIPE_AMP;
	v->a[11629] = anon_sym_AMP_AMP;
	v->a[11630] = anon_sym_PIPE_PIPE;
	v->a[11631] = anon_sym_LT;
	v->a[11632] = anon_sym_GT;
	v->a[11633] = anon_sym_GT_GT;
	v->a[11634] = anon_sym_AMP_GT;
	v->a[11635] = anon_sym_AMP_GT_GT;
	v->a[11636] = anon_sym_LT_AMP;
	v->a[11637] = anon_sym_GT_AMP;
	v->a[11638] = anon_sym_GT_PIPE;
	v->a[11639] = anon_sym_LT_AMP_DASH;
	small_parse_table_582(v);
}

void	small_parse_table_582(t_small_parse_table_array *v)
{
	v->a[11640] = anon_sym_GT_AMP_DASH;
	v->a[11641] = anon_sym_LT_LT;
	v->a[11642] = anon_sym_LT_LT_DASH;
	v->a[11643] = anon_sym_AMP;
	v->a[11644] = anon_sym_SEMI;
	v->a[11645] = 6;
	v->a[11646] = actions(3);
	v->a[11647] = 1;
	v->a[11648] = sym_comment;
	v->a[11649] = state(1225);
	v->a[11650] = 1;
	v->a[11651] = aux_sym__literal_repeat1;
	v->a[11652] = state(1330);
	v->a[11653] = 1;
	v->a[11654] = sym_concatenation;
	v->a[11655] = actions(1534);
	v->a[11656] = 6;
	v->a[11657] = sym_file_descriptor;
	v->a[11658] = sym_variable_name;
	v->a[11659] = sym_test_operator;
	small_parse_table_583(v);
}

void	small_parse_table_583(t_small_parse_table_array *v)
{
	v->a[11660] = sym__brace_start;
	v->a[11661] = ts_builtin_sym_end;
	v->a[11662] = aux_sym_heredoc_redirect_token1;
	v->a[11663] = state(793);
	v->a[11664] = 7;
	v->a[11665] = sym_arithmetic_expansion;
	v->a[11666] = sym_brace_expression;
	v->a[11667] = sym_string;
	v->a[11668] = sym_number;
	v->a[11669] = sym_simple_expansion;
	v->a[11670] = sym_expansion;
	v->a[11671] = sym_command_substitution;
	v->a[11672] = actions(1532);
	v->a[11673] = 31;
	v->a[11674] = anon_sym_PIPE;
	v->a[11675] = anon_sym_SEMI_SEMI;
	v->a[11676] = anon_sym_PIPE_AMP;
	v->a[11677] = anon_sym_AMP_AMP;
	v->a[11678] = anon_sym_PIPE_PIPE;
	v->a[11679] = anon_sym_LT;
	small_parse_table_584(v);
}

void	small_parse_table_584(t_small_parse_table_array *v)
{
	v->a[11680] = anon_sym_GT;
	v->a[11681] = anon_sym_GT_GT;
	v->a[11682] = anon_sym_AMP_GT;
	v->a[11683] = anon_sym_AMP_GT_GT;
	v->a[11684] = anon_sym_LT_AMP;
	v->a[11685] = anon_sym_GT_AMP;
	v->a[11686] = anon_sym_GT_PIPE;
	v->a[11687] = anon_sym_LT_AMP_DASH;
	v->a[11688] = anon_sym_GT_AMP_DASH;
	v->a[11689] = anon_sym_LT_LT;
	v->a[11690] = anon_sym_LT_LT_DASH;
	v->a[11691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11692] = anon_sym_AMP;
	v->a[11693] = anon_sym_DOLLAR;
	v->a[11694] = sym__special_character;
	v->a[11695] = anon_sym_DQUOTE;
	v->a[11696] = sym_raw_string;
	v->a[11697] = aux_sym_number_token1;
	v->a[11698] = aux_sym_number_token2;
	v->a[11699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_585(v);
}

/* EOF small_parse_table_116.c */
