/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1186.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5930(t_small_parse_table_array *v)
{
	v->a[118600] = aux_sym__literal_repeat1;
	v->a[118601] = state(3104);
	v->a[118602] = 1;
	v->a[118603] = sym__expression;
	v->a[118604] = actions(1129);
	v->a[118605] = 2;
	v->a[118606] = anon_sym_LPAREN_LPAREN;
	v->a[118607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118608] = actions(1135);
	v->a[118609] = 2;
	v->a[118610] = anon_sym_PLUS_PLUS2;
	v->a[118611] = anon_sym_DASH_DASH2;
	v->a[118612] = actions(1137);
	v->a[118613] = 2;
	v->a[118614] = anon_sym_DASH2;
	v->a[118615] = anon_sym_PLUS2;
	v->a[118616] = actions(1151);
	v->a[118617] = 2;
	v->a[118618] = sym_raw_string;
	v->a[118619] = sym_ansi_c_string;
	small_parse_table_5931(v);
}

void	small_parse_table_5931(t_small_parse_table_array *v)
{
	v->a[118620] = actions(1165);
	v->a[118621] = 2;
	v->a[118622] = anon_sym_LT_LPAREN;
	v->a[118623] = anon_sym_GT_LPAREN;
	v->a[118624] = state(2594);
	v->a[118625] = 6;
	v->a[118626] = sym_binary_expression;
	v->a[118627] = sym_ternary_expression;
	v->a[118628] = sym_unary_expression;
	v->a[118629] = sym_postfix_expression;
	v->a[118630] = sym_parenthesized_expression;
	v->a[118631] = sym_concatenation;
	v->a[118632] = state(2573);
	v->a[118633] = 9;
	v->a[118634] = sym_arithmetic_expansion;
	v->a[118635] = sym_brace_expression;
	v->a[118636] = sym_string;
	v->a[118637] = sym_translated_string;
	v->a[118638] = sym_number;
	v->a[118639] = sym_simple_expansion;
	small_parse_table_5932(v);
}

void	small_parse_table_5932(t_small_parse_table_array *v)
{
	v->a[118640] = sym_expansion;
	v->a[118641] = sym_command_substitution;
	v->a[118642] = sym_process_substitution;
	v->a[118643] = 3;
	v->a[118644] = actions(71);
	v->a[118645] = 1;
	v->a[118646] = sym_comment;
	v->a[118647] = actions(1316);
	v->a[118648] = 15;
	v->a[118649] = anon_sym_PIPE;
	v->a[118650] = anon_sym_EQ_EQ;
	v->a[118651] = anon_sym_LT;
	v->a[118652] = anon_sym_GT;
	v->a[118653] = anon_sym_LT_LT;
	v->a[118654] = anon_sym_EQ_TILDE;
	v->a[118655] = anon_sym_AMP_GT;
	v->a[118656] = anon_sym_LT_AMP;
	v->a[118657] = anon_sym_GT_AMP;
	v->a[118658] = anon_sym_DOLLAR;
	v->a[118659] = aux_sym_number_token1;
	small_parse_table_5933(v);
}

void	small_parse_table_5933(t_small_parse_table_array *v)
{
	v->a[118660] = aux_sym_number_token2;
	v->a[118661] = anon_sym_DOLLAR_LPAREN;
	v->a[118662] = anon_sym_BQUOTE;
	v->a[118663] = sym_word;
	v->a[118664] = actions(1318);
	v->a[118665] = 27;
	v->a[118666] = sym_file_descriptor;
	v->a[118667] = sym__concat;
	v->a[118668] = sym_test_operator;
	v->a[118669] = sym__bare_dollar;
	v->a[118670] = sym__brace_start;
	v->a[118671] = anon_sym_LPAREN_LPAREN;
	v->a[118672] = anon_sym_PIPE_PIPE;
	v->a[118673] = anon_sym_AMP_AMP;
	v->a[118674] = anon_sym_GT_GT;
	v->a[118675] = anon_sym_PIPE_AMP;
	v->a[118676] = anon_sym_AMP_GT_GT;
	v->a[118677] = anon_sym_GT_PIPE;
	v->a[118678] = anon_sym_LT_AMP_DASH;
	v->a[118679] = anon_sym_GT_AMP_DASH;
	small_parse_table_5934(v);
}

void	small_parse_table_5934(t_small_parse_table_array *v)
{
	v->a[118680] = anon_sym_LT_LT_DASH;
	v->a[118681] = anon_sym_LT_LT_LT;
	v->a[118682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118683] = anon_sym_DOLLAR_LBRACK;
	v->a[118684] = aux_sym_concatenation_token1;
	v->a[118685] = sym__special_character;
	v->a[118686] = anon_sym_DQUOTE;
	v->a[118687] = sym_raw_string;
	v->a[118688] = sym_ansi_c_string;
	v->a[118689] = anon_sym_DOLLAR_LBRACE;
	v->a[118690] = anon_sym_DOLLAR_BQUOTE;
	v->a[118691] = anon_sym_LT_LPAREN;
	v->a[118692] = anon_sym_GT_LPAREN;
	v->a[118693] = 3;
	v->a[118694] = actions(71);
	v->a[118695] = 1;
	v->a[118696] = sym_comment;
	v->a[118697] = actions(1332);
	v->a[118698] = 15;
	v->a[118699] = anon_sym_PIPE;
	small_parse_table_5935(v);
}

/* EOF small_parse_table_1186.c */
