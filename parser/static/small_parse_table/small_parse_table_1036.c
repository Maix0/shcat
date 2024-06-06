/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1036.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5180(t_small_parse_table_array *v)
{
	v->a[103600] = anon_sym_PIPE;
	v->a[103601] = anon_sym_SEMI_SEMI;
	v->a[103602] = anon_sym_PIPE_AMP;
	v->a[103603] = anon_sym_AMP_AMP;
	v->a[103604] = anon_sym_PIPE_PIPE;
	v->a[103605] = anon_sym_LT_LT;
	v->a[103606] = anon_sym_LT_LT_DASH;
	v->a[103607] = anon_sym_AMP;
	v->a[103608] = anon_sym_SEMI;
	v->a[103609] = 17;
	v->a[103610] = actions(57);
	v->a[103611] = 1;
	v->a[103612] = sym_comment;
	v->a[103613] = actions(2303);
	v->a[103614] = 1;
	v->a[103615] = sym_word;
	v->a[103616] = actions(2307);
	v->a[103617] = 1;
	v->a[103618] = anon_sym_DOLLAR;
	v->a[103619] = actions(2313);
	small_parse_table_5181(v);
}

void	small_parse_table_5181(t_small_parse_table_array *v)
{
	v->a[103620] = 1;
	v->a[103621] = aux_sym_number_token1;
	v->a[103622] = actions(2315);
	v->a[103623] = 1;
	v->a[103624] = aux_sym_number_token2;
	v->a[103625] = actions(2319);
	v->a[103626] = 1;
	v->a[103627] = anon_sym_DOLLAR_LPAREN;
	v->a[103628] = actions(2327);
	v->a[103629] = 1;
	v->a[103630] = sym__brace_start;
	v->a[103631] = actions(5954);
	v->a[103632] = 1;
	v->a[103633] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103634] = actions(5956);
	v->a[103635] = 1;
	v->a[103636] = sym__special_character;
	v->a[103637] = actions(5958);
	v->a[103638] = 1;
	v->a[103639] = anon_sym_DQUOTE;
	small_parse_table_5182(v);
}

void	small_parse_table_5182(t_small_parse_table_array *v)
{
	v->a[103640] = actions(5960);
	v->a[103641] = 1;
	v->a[103642] = anon_sym_DOLLAR_LBRACE;
	v->a[103643] = actions(5962);
	v->a[103644] = 1;
	v->a[103645] = anon_sym_BQUOTE;
	v->a[103646] = actions(5964);
	v->a[103647] = 1;
	v->a[103648] = anon_sym_DOLLAR_BQUOTE;
	v->a[103649] = state(1321);
	v->a[103650] = 1;
	v->a[103651] = aux_sym__literal_repeat1;
	v->a[103652] = actions(2325);
	v->a[103653] = 2;
	v->a[103654] = sym_test_operator;
	v->a[103655] = sym_raw_string;
	v->a[103656] = state(411);
	v->a[103657] = 2;
	v->a[103658] = sym_concatenation;
	v->a[103659] = aux_sym_for_statement_repeat1;
	small_parse_table_5183(v);
}

void	small_parse_table_5183(t_small_parse_table_array *v)
{
	v->a[103660] = state(1153);
	v->a[103661] = 7;
	v->a[103662] = sym_arithmetic_expansion;
	v->a[103663] = sym_brace_expression;
	v->a[103664] = sym_string;
	v->a[103665] = sym_number;
	v->a[103666] = sym_simple_expansion;
	v->a[103667] = sym_expansion;
	v->a[103668] = sym_command_substitution;
	v->a[103669] = 17;
	v->a[103670] = actions(57);
	v->a[103671] = 1;
	v->a[103672] = sym_comment;
	v->a[103673] = actions(2303);
	v->a[103674] = 1;
	v->a[103675] = sym_word;
	v->a[103676] = actions(2307);
	v->a[103677] = 1;
	v->a[103678] = anon_sym_DOLLAR;
	v->a[103679] = actions(2313);
	small_parse_table_5184(v);
}

void	small_parse_table_5184(t_small_parse_table_array *v)
{
	v->a[103680] = 1;
	v->a[103681] = aux_sym_number_token1;
	v->a[103682] = actions(2315);
	v->a[103683] = 1;
	v->a[103684] = aux_sym_number_token2;
	v->a[103685] = actions(2319);
	v->a[103686] = 1;
	v->a[103687] = anon_sym_DOLLAR_LPAREN;
	v->a[103688] = actions(2327);
	v->a[103689] = 1;
	v->a[103690] = sym__brace_start;
	v->a[103691] = actions(5954);
	v->a[103692] = 1;
	v->a[103693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103694] = actions(5956);
	v->a[103695] = 1;
	v->a[103696] = sym__special_character;
	v->a[103697] = actions(5958);
	v->a[103698] = 1;
	v->a[103699] = anon_sym_DQUOTE;
	small_parse_table_5185(v);
}

/* EOF small_parse_table_1036.c */
