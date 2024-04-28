/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_156.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_780(t_small_parse_table_array *v)
{
	v->a[15600] = 1;
	v->a[15601] = aux_sym_number_token1;
	v->a[15602] = actions(3193);
	v->a[15603] = 1;
	v->a[15604] = aux_sym_number_token2;
	v->a[15605] = actions(3195);
	v->a[15606] = 1;
	v->a[15607] = anon_sym_DOLLAR_LBRACE;
	v->a[15608] = actions(3197);
	v->a[15609] = 1;
	v->a[15610] = anon_sym_DOLLAR_LPAREN;
	v->a[15611] = actions(3199);
	v->a[15612] = 1;
	v->a[15613] = anon_sym_BQUOTE;
	v->a[15614] = actions(3201);
	v->a[15615] = 1;
	v->a[15616] = anon_sym_DOLLAR_BQUOTE;
	v->a[15617] = actions(3207);
	v->a[15618] = 1;
	v->a[15619] = sym_test_operator;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = actions(3209);
	v->a[15621] = 1;
	v->a[15622] = sym__brace_start;
	v->a[15623] = actions(3461);
	v->a[15624] = 1;
	v->a[15625] = aux_sym__simple_variable_name_token1;
	v->a[15626] = state(1966);
	v->a[15627] = 1;
	v->a[15628] = aux_sym__literal_repeat1;
	v->a[15629] = actions(2299);
	v->a[15630] = 2;
	v->a[15631] = sym_file_descriptor;
	v->a[15632] = aux_sym_heredoc_redirect_token1;
	v->a[15633] = actions(3181);
	v->a[15634] = 2;
	v->a[15635] = anon_sym_LPAREN_LPAREN;
	v->a[15636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15637] = actions(3203);
	v->a[15638] = 2;
	v->a[15639] = anon_sym_LT_LPAREN;
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = anon_sym_GT_LPAREN;
	v->a[15641] = state(667);
	v->a[15642] = 2;
	v->a[15643] = sym_concatenation;
	v->a[15644] = aux_sym_unset_command_repeat1;
	v->a[15645] = actions(3179);
	v->a[15646] = 3;
	v->a[15647] = sym_raw_string;
	v->a[15648] = sym_ansi_c_string;
	v->a[15649] = sym_word;
	v->a[15650] = state(1650);
	v->a[15651] = 9;
	v->a[15652] = sym_arithmetic_expansion;
	v->a[15653] = sym_brace_expression;
	v->a[15654] = sym_string;
	v->a[15655] = sym_translated_string;
	v->a[15656] = sym_number;
	v->a[15657] = sym_simple_expansion;
	v->a[15658] = sym_expansion;
	v->a[15659] = sym_command_substitution;
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = sym_process_substitution;
	v->a[15661] = actions(2297);
	v->a[15662] = 20;
	v->a[15663] = anon_sym_SEMI;
	v->a[15664] = anon_sym_PIPE_PIPE;
	v->a[15665] = anon_sym_AMP_AMP;
	v->a[15666] = anon_sym_PIPE;
	v->a[15667] = anon_sym_AMP;
	v->a[15668] = anon_sym_LT;
	v->a[15669] = anon_sym_GT;
	v->a[15670] = anon_sym_LT_LT;
	v->a[15671] = anon_sym_GT_GT;
	v->a[15672] = anon_sym_RPAREN;
	v->a[15673] = anon_sym_SEMI_SEMI;
	v->a[15674] = anon_sym_PIPE_AMP;
	v->a[15675] = anon_sym_AMP_GT;
	v->a[15676] = anon_sym_AMP_GT_GT;
	v->a[15677] = anon_sym_LT_AMP;
	v->a[15678] = anon_sym_GT_AMP;
	v->a[15679] = anon_sym_GT_PIPE;
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = anon_sym_LT_AMP_DASH;
	v->a[15681] = anon_sym_GT_AMP_DASH;
	v->a[15682] = anon_sym_LT_LT_DASH;
	v->a[15683] = 6;
	v->a[15684] = actions(3);
	v->a[15685] = 1;
	v->a[15686] = sym_comment;
	v->a[15687] = state(1739);
	v->a[15688] = 1;
	v->a[15689] = aux_sym__literal_repeat1;
	v->a[15690] = state(1953);
	v->a[15691] = 1;
	v->a[15692] = sym_concatenation;
	v->a[15693] = actions(2496);
	v->a[15694] = 5;
	v->a[15695] = sym_file_descriptor;
	v->a[15696] = sym_variable_name;
	v->a[15697] = sym_test_operator;
	v->a[15698] = sym__brace_start;
	v->a[15699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
