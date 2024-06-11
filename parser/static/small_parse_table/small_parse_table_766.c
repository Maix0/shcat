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
	v->a[76600] = 20;
	v->a[76601] = anon_sym_esac;
	v->a[76602] = anon_sym_PIPE;
	v->a[76603] = anon_sym_SEMI_SEMI;
	v->a[76604] = anon_sym_AMP_AMP;
	v->a[76605] = anon_sym_PIPE_PIPE;
	v->a[76606] = anon_sym_LT;
	v->a[76607] = anon_sym_GT;
	v->a[76608] = anon_sym_GT_GT;
	v->a[76609] = anon_sym_AMP_GT;
	v->a[76610] = anon_sym_AMP_GT_GT;
	v->a[76611] = anon_sym_LT_AMP;
	v->a[76612] = anon_sym_GT_AMP;
	v->a[76613] = anon_sym_GT_PIPE;
	v->a[76614] = anon_sym_LT_AMP_DASH;
	v->a[76615] = anon_sym_GT_AMP_DASH;
	v->a[76616] = anon_sym_LT_LT;
	v->a[76617] = anon_sym_LT_LT_DASH;
	v->a[76618] = anon_sym_AMP;
	v->a[76619] = aux_sym_concatenation_token1;
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = anon_sym_SEMI;
	v->a[76621] = 7;
	v->a[76622] = actions(3);
	v->a[76623] = 1;
	v->a[76624] = sym_comment;
	v->a[76625] = actions(2648);
	v->a[76626] = 1;
	v->a[76627] = aux_sym_heredoc_redirect_token1;
	v->a[76628] = actions(2838);
	v->a[76629] = 1;
	v->a[76630] = sym_file_descriptor;
	v->a[76631] = actions(2835);
	v->a[76632] = 2;
	v->a[76633] = anon_sym_LT_AMP_DASH;
	v->a[76634] = anon_sym_GT_AMP_DASH;
	v->a[76635] = state(1409);
	v->a[76636] = 2;
	v->a[76637] = sym_file_redirect;
	v->a[76638] = aux_sym_redirected_statement_repeat2;
	v->a[76639] = actions(2832);
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = 8;
	v->a[76641] = anon_sym_LT;
	v->a[76642] = anon_sym_GT;
	v->a[76643] = anon_sym_GT_GT;
	v->a[76644] = anon_sym_AMP_GT;
	v->a[76645] = anon_sym_AMP_GT_GT;
	v->a[76646] = anon_sym_LT_AMP;
	v->a[76647] = anon_sym_GT_AMP;
	v->a[76648] = anon_sym_GT_PIPE;
	v->a[76649] = actions(2640);
	v->a[76650] = 9;
	v->a[76651] = anon_sym_esac;
	v->a[76652] = anon_sym_PIPE;
	v->a[76653] = anon_sym_SEMI_SEMI;
	v->a[76654] = anon_sym_AMP_AMP;
	v->a[76655] = anon_sym_PIPE_PIPE;
	v->a[76656] = anon_sym_LT_LT;
	v->a[76657] = anon_sym_LT_LT_DASH;
	v->a[76658] = anon_sym_AMP;
	v->a[76659] = anon_sym_SEMI;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = 3;
	v->a[76661] = actions(3);
	v->a[76662] = 1;
	v->a[76663] = sym_comment;
	v->a[76664] = actions(608);
	v->a[76665] = 3;
	v->a[76666] = sym_file_descriptor;
	v->a[76667] = ts_builtin_sym_end;
	v->a[76668] = aux_sym_heredoc_redirect_token1;
	v->a[76669] = actions(610);
	v->a[76670] = 20;
	v->a[76671] = anon_sym_PIPE;
	v->a[76672] = anon_sym_RPAREN;
	v->a[76673] = anon_sym_SEMI_SEMI;
	v->a[76674] = anon_sym_AMP_AMP;
	v->a[76675] = anon_sym_PIPE_PIPE;
	v->a[76676] = anon_sym_LT;
	v->a[76677] = anon_sym_GT;
	v->a[76678] = anon_sym_GT_GT;
	v->a[76679] = anon_sym_AMP_GT;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = anon_sym_AMP_GT_GT;
	v->a[76681] = anon_sym_LT_AMP;
	v->a[76682] = anon_sym_GT_AMP;
	v->a[76683] = anon_sym_GT_PIPE;
	v->a[76684] = anon_sym_LT_AMP_DASH;
	v->a[76685] = anon_sym_GT_AMP_DASH;
	v->a[76686] = anon_sym_LT_LT;
	v->a[76687] = anon_sym_LT_LT_DASH;
	v->a[76688] = anon_sym_AMP;
	v->a[76689] = anon_sym_BQUOTE;
	v->a[76690] = anon_sym_SEMI;
	v->a[76691] = 3;
	v->a[76692] = actions(3);
	v->a[76693] = 1;
	v->a[76694] = sym_comment;
	v->a[76695] = actions(1159);
	v->a[76696] = 3;
	v->a[76697] = sym_file_descriptor;
	v->a[76698] = sym__concat;
	v->a[76699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
