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
	v->a[11600] = anon_sym_SEMI_AMP;
	v->a[11601] = anon_sym_SEMI_SEMI_AMP;
	v->a[11602] = anon_sym_PIPE_AMP;
	v->a[11603] = anon_sym_AMP_GT;
	v->a[11604] = anon_sym_AMP_GT_GT;
	v->a[11605] = anon_sym_LT_AMP;
	v->a[11606] = anon_sym_GT_AMP;
	v->a[11607] = anon_sym_GT_PIPE;
	v->a[11608] = anon_sym_LT_AMP_DASH;
	v->a[11609] = anon_sym_GT_AMP_DASH;
	v->a[11610] = anon_sym_LT_LT_DASH;
	v->a[11611] = anon_sym_LT_LT_LT;
	v->a[11612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11613] = anon_sym_DOLLAR_LBRACK;
	v->a[11614] = anon_sym_DOLLAR;
	v->a[11615] = sym__special_character;
	v->a[11616] = anon_sym_DQUOTE;
	v->a[11617] = sym_raw_string;
	v->a[11618] = sym_ansi_c_string;
	v->a[11619] = aux_sym_number_token1;
	small_parse_table_581(v);
}

void	small_parse_table_581(t_small_parse_table_array *v)
{
	v->a[11620] = aux_sym_number_token2;
	v->a[11621] = anon_sym_DOLLAR_LBRACE;
	v->a[11622] = anon_sym_DOLLAR_LPAREN;
	v->a[11623] = anon_sym_BQUOTE;
	v->a[11624] = anon_sym_DOLLAR_BQUOTE;
	v->a[11625] = anon_sym_LT_LPAREN;
	v->a[11626] = anon_sym_GT_LPAREN;
	v->a[11627] = sym_word;
	v->a[11628] = 6;
	v->a[11629] = actions(3);
	v->a[11630] = 1;
	v->a[11631] = sym_comment;
	v->a[11632] = state(1744);
	v->a[11633] = 1;
	v->a[11634] = aux_sym__literal_repeat1;
	v->a[11635] = state(627);
	v->a[11636] = 2;
	v->a[11637] = sym_concatenation;
	v->a[11638] = aux_sym_for_statement_repeat1;
	v->a[11639] = actions(2074);
	small_parse_table_582(v);
}

void	small_parse_table_582(t_small_parse_table_array *v)
{
	v->a[11640] = 5;
	v->a[11641] = sym_file_descriptor;
	v->a[11642] = sym_variable_name;
	v->a[11643] = sym_test_operator;
	v->a[11644] = sym__brace_start;
	v->a[11645] = aux_sym_heredoc_redirect_token1;
	v->a[11646] = state(1370);
	v->a[11647] = 9;
	v->a[11648] = sym_arithmetic_expansion;
	v->a[11649] = sym_brace_expression;
	v->a[11650] = sym_string;
	v->a[11651] = sym_translated_string;
	v->a[11652] = sym_number;
	v->a[11653] = sym_simple_expansion;
	v->a[11654] = sym_expansion;
	v->a[11655] = sym_command_substitution;
	v->a[11656] = sym_process_substitution;
	v->a[11657] = actions(2072);
	v->a[11658] = 38;
	v->a[11659] = anon_sym_LPAREN_LPAREN;
	small_parse_table_583(v);
}

void	small_parse_table_583(t_small_parse_table_array *v)
{
	v->a[11660] = anon_sym_SEMI;
	v->a[11661] = anon_sym_PIPE_PIPE;
	v->a[11662] = anon_sym_AMP_AMP;
	v->a[11663] = anon_sym_PIPE;
	v->a[11664] = anon_sym_AMP;
	v->a[11665] = anon_sym_LT;
	v->a[11666] = anon_sym_GT;
	v->a[11667] = anon_sym_LT_LT;
	v->a[11668] = anon_sym_GT_GT;
	v->a[11669] = anon_sym_RPAREN;
	v->a[11670] = anon_sym_SEMI_SEMI;
	v->a[11671] = anon_sym_PIPE_AMP;
	v->a[11672] = anon_sym_AMP_GT;
	v->a[11673] = anon_sym_AMP_GT_GT;
	v->a[11674] = anon_sym_LT_AMP;
	v->a[11675] = anon_sym_GT_AMP;
	v->a[11676] = anon_sym_GT_PIPE;
	v->a[11677] = anon_sym_LT_AMP_DASH;
	v->a[11678] = anon_sym_GT_AMP_DASH;
	v->a[11679] = anon_sym_LT_LT_DASH;
	small_parse_table_584(v);
}

void	small_parse_table_584(t_small_parse_table_array *v)
{
	v->a[11680] = anon_sym_LT_LT_LT;
	v->a[11681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11682] = anon_sym_DOLLAR_LBRACK;
	v->a[11683] = anon_sym_DOLLAR;
	v->a[11684] = sym__special_character;
	v->a[11685] = anon_sym_DQUOTE;
	v->a[11686] = sym_raw_string;
	v->a[11687] = sym_ansi_c_string;
	v->a[11688] = aux_sym_number_token1;
	v->a[11689] = aux_sym_number_token2;
	v->a[11690] = anon_sym_DOLLAR_LBRACE;
	v->a[11691] = anon_sym_DOLLAR_LPAREN;
	v->a[11692] = anon_sym_BQUOTE;
	v->a[11693] = anon_sym_DOLLAR_BQUOTE;
	v->a[11694] = anon_sym_LT_LPAREN;
	v->a[11695] = anon_sym_GT_LPAREN;
	v->a[11696] = sym_word;
	v->a[11697] = 37;
	v->a[11698] = actions(71);
	v->a[11699] = 1;
	small_parse_table_585(v);
}

/* EOF small_parse_table_116.c */
