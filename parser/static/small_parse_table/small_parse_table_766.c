/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_766.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3830(t_small_parse_table_array *v)
{
	v->a[76600] = anon_sym_AMP_GT_GT;
	v->a[76601] = anon_sym_GT_PIPE;
	v->a[76602] = anon_sym_LT_AMP_DASH;
	v->a[76603] = anon_sym_GT_AMP_DASH;
	v->a[76604] = anon_sym_LT_LT_DASH;
	v->a[76605] = aux_sym_concatenation_token1;
	v->a[76606] = 12;
	v->a[76607] = actions(3);
	v->a[76608] = 1;
	v->a[76609] = sym_comment;
	v->a[76610] = actions(2953);
	v->a[76611] = 1;
	v->a[76612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76613] = actions(2957);
	v->a[76614] = 1;
	v->a[76615] = anon_sym_DQUOTE;
	v->a[76616] = actions(2959);
	v->a[76617] = 1;
	v->a[76618] = aux_sym_number_token1;
	v->a[76619] = actions(2961);
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = 1;
	v->a[76621] = aux_sym_number_token2;
	v->a[76622] = actions(2963);
	v->a[76623] = 1;
	v->a[76624] = anon_sym_DOLLAR_LBRACE;
	v->a[76625] = actions(2965);
	v->a[76626] = 1;
	v->a[76627] = anon_sym_DOLLAR_LPAREN;
	v->a[76628] = actions(2967);
	v->a[76629] = 1;
	v->a[76630] = anon_sym_BQUOTE;
	v->a[76631] = actions(3097);
	v->a[76632] = 1;
	v->a[76633] = anon_sym_DOLLAR;
	v->a[76634] = actions(3099);
	v->a[76635] = 1;
	v->a[76636] = sym__bare_dollar;
	v->a[76637] = actions(3095);
	v->a[76638] = 3;
	v->a[76639] = sym_raw_string;
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = sym__comment_word;
	v->a[76641] = sym_word;
	v->a[76642] = state(1027);
	v->a[76643] = 6;
	v->a[76644] = sym_arithmetic_expansion;
	v->a[76645] = sym_string;
	v->a[76646] = sym_number;
	v->a[76647] = sym_simple_expansion;
	v->a[76648] = sym_expansion;
	v->a[76649] = sym_command_substitution;
	v->a[76650] = 9;
	v->a[76651] = actions(1062);
	v->a[76652] = 1;
	v->a[76653] = anon_sym_LT_LT;
	v->a[76654] = actions(1404);
	v->a[76655] = 1;
	v->a[76656] = sym_comment;
	v->a[76657] = actions(2277);
	v->a[76658] = 1;
	v->a[76659] = sym_file_descriptor;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = actions(3107);
	v->a[76661] = 1;
	v->a[76662] = anon_sym_LT_LT_DASH;
	v->a[76663] = actions(3101);
	v->a[76664] = 2;
	v->a[76665] = anon_sym_AMP_AMP;
	v->a[76666] = anon_sym_PIPE_PIPE;
	v->a[76667] = actions(3105);
	v->a[76668] = 2;
	v->a[76669] = anon_sym_LT_AMP_DASH;
	v->a[76670] = anon_sym_GT_AMP_DASH;
	v->a[76671] = actions(3103);
	v->a[76672] = 3;
	v->a[76673] = anon_sym_GT_GT;
	v->a[76674] = anon_sym_AMP_GT_GT;
	v->a[76675] = anon_sym_GT_PIPE;
	v->a[76676] = state(1043);
	v->a[76677] = 3;
	v->a[76678] = sym_file_redirect;
	v->a[76679] = sym_heredoc_redirect;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = aux_sym_redirected_statement_repeat1;
	v->a[76681] = actions(2271);
	v->a[76682] = 5;
	v->a[76683] = anon_sym_LT;
	v->a[76684] = anon_sym_GT;
	v->a[76685] = anon_sym_AMP_GT;
	v->a[76686] = anon_sym_LT_AMP;
	v->a[76687] = anon_sym_GT_AMP;
	v->a[76688] = 12;
	v->a[76689] = actions(3);
	v->a[76690] = 1;
	v->a[76691] = sym_comment;
	v->a[76692] = actions(2905);
	v->a[76693] = 1;
	v->a[76694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76695] = actions(2907);
	v->a[76696] = 1;
	v->a[76697] = anon_sym_DOLLAR;
	v->a[76698] = actions(2909);
	v->a[76699] = 1;
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
