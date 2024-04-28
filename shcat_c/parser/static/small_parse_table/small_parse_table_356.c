/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_356.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1780(t_small_parse_table_array *v)
{
	v->a[35600] = anon_sym_LT_LPAREN;
	v->a[35601] = anon_sym_GT_LPAREN;
	v->a[35602] = sym_word;
	v->a[35603] = 22;
	v->a[35604] = actions(71);
	v->a[35605] = 1;
	v->a[35606] = sym_comment;
	v->a[35607] = actions(4767);
	v->a[35608] = 1;
	v->a[35609] = anon_sym_DOLLAR_LBRACK;
	v->a[35610] = actions(4769);
	v->a[35611] = 1;
	v->a[35612] = anon_sym_DOLLAR;
	v->a[35613] = actions(4771);
	v->a[35614] = 1;
	v->a[35615] = sym__special_character;
	v->a[35616] = actions(4773);
	v->a[35617] = 1;
	v->a[35618] = anon_sym_DQUOTE;
	v->a[35619] = actions(4777);
	small_parse_table_1781(v);
}

void	small_parse_table_1781(t_small_parse_table_array *v)
{
	v->a[35620] = 1;
	v->a[35621] = aux_sym_number_token1;
	v->a[35622] = actions(4779);
	v->a[35623] = 1;
	v->a[35624] = aux_sym_number_token2;
	v->a[35625] = actions(4781);
	v->a[35626] = 1;
	v->a[35627] = anon_sym_DOLLAR_LBRACE;
	v->a[35628] = actions(4783);
	v->a[35629] = 1;
	v->a[35630] = anon_sym_DOLLAR_LPAREN;
	v->a[35631] = actions(4785);
	v->a[35632] = 1;
	v->a[35633] = anon_sym_BQUOTE;
	v->a[35634] = actions(4787);
	v->a[35635] = 1;
	v->a[35636] = anon_sym_DOLLAR_BQUOTE;
	v->a[35637] = actions(4793);
	v->a[35638] = 1;
	v->a[35639] = sym__brace_start;
	small_parse_table_1782(v);
}

void	small_parse_table_1782(t_small_parse_table_array *v)
{
	v->a[35640] = actions(4803);
	v->a[35641] = 1;
	v->a[35642] = sym_word;
	v->a[35643] = actions(4807);
	v->a[35644] = 1;
	v->a[35645] = sym_test_operator;
	v->a[35646] = state(5376);
	v->a[35647] = 1;
	v->a[35648] = aux_sym__literal_repeat1;
	v->a[35649] = state(5530);
	v->a[35650] = 1;
	v->a[35651] = sym_concatenation;
	v->a[35652] = actions(4765);
	v->a[35653] = 2;
	v->a[35654] = anon_sym_LPAREN_LPAREN;
	v->a[35655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35656] = actions(4789);
	v->a[35657] = 2;
	v->a[35658] = anon_sym_LT_LPAREN;
	v->a[35659] = anon_sym_GT_LPAREN;
	small_parse_table_1783(v);
}

void	small_parse_table_1783(t_small_parse_table_array *v)
{
	v->a[35660] = actions(4805);
	v->a[35661] = 2;
	v->a[35662] = sym_raw_string;
	v->a[35663] = sym_ansi_c_string;
	v->a[35664] = actions(2494);
	v->a[35665] = 7;
	v->a[35666] = anon_sym_PIPE;
	v->a[35667] = anon_sym_LT;
	v->a[35668] = anon_sym_GT;
	v->a[35669] = anon_sym_LT_LT;
	v->a[35670] = anon_sym_AMP_GT;
	v->a[35671] = anon_sym_LT_AMP;
	v->a[35672] = anon_sym_GT_AMP;
	v->a[35673] = state(5182);
	v->a[35674] = 9;
	v->a[35675] = sym_arithmetic_expansion;
	v->a[35676] = sym_brace_expression;
	v->a[35677] = sym_string;
	v->a[35678] = sym_translated_string;
	v->a[35679] = sym_number;
	small_parse_table_1784(v);
}

void	small_parse_table_1784(t_small_parse_table_array *v)
{
	v->a[35680] = sym_simple_expansion;
	v->a[35681] = sym_expansion;
	v->a[35682] = sym_command_substitution;
	v->a[35683] = sym_process_substitution;
	v->a[35684] = actions(2496);
	v->a[35685] = 12;
	v->a[35686] = sym_file_descriptor;
	v->a[35687] = anon_sym_PIPE_PIPE;
	v->a[35688] = anon_sym_AMP_AMP;
	v->a[35689] = anon_sym_GT_GT;
	v->a[35690] = anon_sym_PIPE_AMP;
	v->a[35691] = anon_sym_RBRACK;
	v->a[35692] = anon_sym_AMP_GT_GT;
	v->a[35693] = anon_sym_GT_PIPE;
	v->a[35694] = anon_sym_LT_AMP_DASH;
	v->a[35695] = anon_sym_GT_AMP_DASH;
	v->a[35696] = anon_sym_LT_LT_DASH;
	v->a[35697] = anon_sym_LT_LT_LT;
	v->a[35698] = 13;
	v->a[35699] = actions(3);
	small_parse_table_1785(v);
}

/* EOF small_parse_table_356.c */
