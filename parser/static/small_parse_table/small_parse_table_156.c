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
	v->a[15600] = state(3589);
	v->a[15601] = 1;
	v->a[15602] = sym__heredoc_pipeline;
	v->a[15603] = state(3590);
	v->a[15604] = 1;
	v->a[15605] = sym__heredoc_expression;
	v->a[15606] = actions(2446);
	v->a[15607] = 2;
	v->a[15608] = sym_raw_string;
	v->a[15609] = sym_word;
	v->a[15610] = actions(2448);
	v->a[15611] = 2;
	v->a[15612] = anon_sym_PIPE;
	v->a[15613] = anon_sym_PIPE_AMP;
	v->a[15614] = actions(2450);
	v->a[15615] = 2;
	v->a[15616] = anon_sym_AMP_AMP;
	v->a[15617] = anon_sym_PIPE_PIPE;
	v->a[15618] = actions(2454);
	v->a[15619] = 2;
	small_parse_table_781(v);
}

void	small_parse_table_781(t_small_parse_table_array *v)
{
	v->a[15620] = anon_sym_LT_AMP_DASH;
	v->a[15621] = anon_sym_GT_AMP_DASH;
	v->a[15622] = state(2744);
	v->a[15623] = 2;
	v->a[15624] = sym_file_redirect;
	v->a[15625] = aux_sym_redirected_statement_repeat2;
	v->a[15626] = state(2716);
	v->a[15627] = 7;
	v->a[15628] = sym_arithmetic_expansion;
	v->a[15629] = sym_brace_expression;
	v->a[15630] = sym_string;
	v->a[15631] = sym_number;
	v->a[15632] = sym_simple_expansion;
	v->a[15633] = sym_expansion;
	v->a[15634] = sym_command_substitution;
	v->a[15635] = actions(2452);
	v->a[15636] = 8;
	v->a[15637] = anon_sym_LT;
	v->a[15638] = anon_sym_GT;
	v->a[15639] = anon_sym_GT_GT;
	small_parse_table_782(v);
}

void	small_parse_table_782(t_small_parse_table_array *v)
{
	v->a[15640] = anon_sym_AMP_GT;
	v->a[15641] = anon_sym_AMP_GT_GT;
	v->a[15642] = anon_sym_LT_AMP;
	v->a[15643] = anon_sym_GT_AMP;
	v->a[15644] = anon_sym_GT_PIPE;
	v->a[15645] = 27;
	v->a[15646] = actions(3);
	v->a[15647] = 1;
	v->a[15648] = sym_comment;
	v->a[15649] = actions(2458);
	v->a[15650] = 1;
	v->a[15651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15652] = actions(2460);
	v->a[15653] = 1;
	v->a[15654] = anon_sym_DOLLAR;
	v->a[15655] = actions(2462);
	v->a[15656] = 1;
	v->a[15657] = sym__special_character;
	v->a[15658] = actions(2464);
	v->a[15659] = 1;
	small_parse_table_783(v);
}

void	small_parse_table_783(t_small_parse_table_array *v)
{
	v->a[15660] = anon_sym_DQUOTE;
	v->a[15661] = actions(2466);
	v->a[15662] = 1;
	v->a[15663] = aux_sym_number_token1;
	v->a[15664] = actions(2468);
	v->a[15665] = 1;
	v->a[15666] = aux_sym_number_token2;
	v->a[15667] = actions(2470);
	v->a[15668] = 1;
	v->a[15669] = anon_sym_DOLLAR_LBRACE;
	v->a[15670] = actions(2472);
	v->a[15671] = 1;
	v->a[15672] = anon_sym_DOLLAR_LPAREN;
	v->a[15673] = actions(2474);
	v->a[15674] = 1;
	v->a[15675] = anon_sym_BQUOTE;
	v->a[15676] = actions(2476);
	v->a[15677] = 1;
	v->a[15678] = anon_sym_DOLLAR_BQUOTE;
	v->a[15679] = actions(2478);
	small_parse_table_784(v);
}

void	small_parse_table_784(t_small_parse_table_array *v)
{
	v->a[15680] = 1;
	v->a[15681] = sym_file_descriptor;
	v->a[15682] = actions(2480);
	v->a[15683] = 1;
	v->a[15684] = sym_test_operator;
	v->a[15685] = actions(2482);
	v->a[15686] = 1;
	v->a[15687] = sym__brace_start;
	v->a[15688] = actions(2636);
	v->a[15689] = 1;
	v->a[15690] = aux_sym_heredoc_redirect_token1;
	v->a[15691] = state(2079);
	v->a[15692] = 1;
	v->a[15693] = aux_sym__heredoc_command;
	v->a[15694] = state(2852);
	v->a[15695] = 1;
	v->a[15696] = aux_sym__literal_repeat1;
	v->a[15697] = state(2882);
	v->a[15698] = 1;
	v->a[15699] = sym_concatenation;
	small_parse_table_785(v);
}

/* EOF small_parse_table_156.c */
