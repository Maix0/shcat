/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_126.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_630(t_small_parse_table_array *v)
{
	v->a[12600] = anon_sym_GT;
	v->a[12601] = anon_sym_GT_GT;
	v->a[12602] = anon_sym_AMP_GT;
	v->a[12603] = anon_sym_AMP_GT_GT;
	v->a[12604] = anon_sym_LT_AMP;
	v->a[12605] = anon_sym_GT_AMP;
	v->a[12606] = anon_sym_GT_PIPE;
	v->a[12607] = anon_sym_LT_AMP_DASH;
	v->a[12608] = anon_sym_GT_AMP_DASH;
	v->a[12609] = anon_sym_LT_LT;
	v->a[12610] = anon_sym_LT_LT_DASH;
	v->a[12611] = anon_sym_AMP;
	v->a[12612] = anon_sym_SEMI;
	v->a[12613] = 6;
	v->a[12614] = actions(3);
	v->a[12615] = 1;
	v->a[12616] = sym_comment;
	v->a[12617] = state(1243);
	v->a[12618] = 1;
	v->a[12619] = aux_sym__literal_repeat1;
	small_parse_table_631(v);
}

void	small_parse_table_631(t_small_parse_table_array *v)
{
	v->a[12620] = state(1257);
	v->a[12621] = 1;
	v->a[12622] = sym_concatenation;
	v->a[12623] = actions(1530);
	v->a[12624] = 6;
	v->a[12625] = sym_file_descriptor;
	v->a[12626] = sym_variable_name;
	v->a[12627] = sym_test_operator;
	v->a[12628] = sym__brace_start;
	v->a[12629] = ts_builtin_sym_end;
	v->a[12630] = aux_sym_heredoc_redirect_token1;
	v->a[12631] = state(777);
	v->a[12632] = 7;
	v->a[12633] = sym_arithmetic_expansion;
	v->a[12634] = sym_brace_expression;
	v->a[12635] = sym_string;
	v->a[12636] = sym_number;
	v->a[12637] = sym_simple_expansion;
	v->a[12638] = sym_expansion;
	v->a[12639] = sym_command_substitution;
	small_parse_table_632(v);
}

void	small_parse_table_632(t_small_parse_table_array *v)
{
	v->a[12640] = actions(1528);
	v->a[12641] = 31;
	v->a[12642] = anon_sym_PIPE;
	v->a[12643] = anon_sym_SEMI_SEMI;
	v->a[12644] = anon_sym_PIPE_AMP;
	v->a[12645] = anon_sym_AMP_AMP;
	v->a[12646] = anon_sym_PIPE_PIPE;
	v->a[12647] = anon_sym_LT;
	v->a[12648] = anon_sym_GT;
	v->a[12649] = anon_sym_GT_GT;
	v->a[12650] = anon_sym_AMP_GT;
	v->a[12651] = anon_sym_AMP_GT_GT;
	v->a[12652] = anon_sym_LT_AMP;
	v->a[12653] = anon_sym_GT_AMP;
	v->a[12654] = anon_sym_GT_PIPE;
	v->a[12655] = anon_sym_LT_AMP_DASH;
	v->a[12656] = anon_sym_GT_AMP_DASH;
	v->a[12657] = anon_sym_LT_LT;
	v->a[12658] = anon_sym_LT_LT_DASH;
	v->a[12659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_633(v);
}

void	small_parse_table_633(t_small_parse_table_array *v)
{
	v->a[12660] = anon_sym_AMP;
	v->a[12661] = anon_sym_DOLLAR;
	v->a[12662] = sym__special_character;
	v->a[12663] = anon_sym_DQUOTE;
	v->a[12664] = sym_raw_string;
	v->a[12665] = aux_sym_number_token1;
	v->a[12666] = aux_sym_number_token2;
	v->a[12667] = anon_sym_DOLLAR_LBRACE;
	v->a[12668] = anon_sym_DOLLAR_LPAREN;
	v->a[12669] = anon_sym_BQUOTE;
	v->a[12670] = anon_sym_DOLLAR_BQUOTE;
	v->a[12671] = sym_word;
	v->a[12672] = anon_sym_SEMI;
	v->a[12673] = 6;
	v->a[12674] = actions(3);
	v->a[12675] = 1;
	v->a[12676] = sym_comment;
	v->a[12677] = state(1237);
	v->a[12678] = 1;
	v->a[12679] = aux_sym__literal_repeat1;
	small_parse_table_634(v);
}

void	small_parse_table_634(t_small_parse_table_array *v)
{
	v->a[12680] = state(410);
	v->a[12681] = 2;
	v->a[12682] = sym_concatenation;
	v->a[12683] = aux_sym_for_statement_repeat1;
	v->a[12684] = actions(1390);
	v->a[12685] = 5;
	v->a[12686] = sym_file_descriptor;
	v->a[12687] = sym_variable_name;
	v->a[12688] = sym_test_operator;
	v->a[12689] = sym__brace_start;
	v->a[12690] = aux_sym_heredoc_redirect_token1;
	v->a[12691] = state(1107);
	v->a[12692] = 7;
	v->a[12693] = sym_arithmetic_expansion;
	v->a[12694] = sym_brace_expression;
	v->a[12695] = sym_string;
	v->a[12696] = sym_number;
	v->a[12697] = sym_simple_expansion;
	v->a[12698] = sym_expansion;
	v->a[12699] = sym_command_substitution;
	small_parse_table_635(v);
}

/* EOF small_parse_table_126.c */
