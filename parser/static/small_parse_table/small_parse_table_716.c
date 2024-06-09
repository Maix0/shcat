/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_716.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3580(t_small_parse_table_array *v)
{
	v->a[71600] = anon_sym_AMP_GT;
	v->a[71601] = anon_sym_AMP_GT_GT;
	v->a[71602] = anon_sym_LT_AMP;
	v->a[71603] = anon_sym_GT_AMP;
	v->a[71604] = anon_sym_GT_PIPE;
	v->a[71605] = 3;
	v->a[71606] = actions(3);
	v->a[71607] = 1;
	v->a[71608] = sym_comment;
	v->a[71609] = actions(555);
	v->a[71610] = 2;
	v->a[71611] = sym_file_descriptor;
	v->a[71612] = sym_variable_name;
	v->a[71613] = actions(553);
	v->a[71614] = 20;
	v->a[71615] = anon_sym_LT;
	v->a[71616] = anon_sym_GT;
	v->a[71617] = anon_sym_GT_GT;
	v->a[71618] = anon_sym_AMP_GT;
	v->a[71619] = anon_sym_AMP_GT_GT;
	small_parse_table_3581(v);
}

void	small_parse_table_3581(t_small_parse_table_array *v)
{
	v->a[71620] = anon_sym_LT_AMP;
	v->a[71621] = anon_sym_GT_AMP;
	v->a[71622] = anon_sym_GT_PIPE;
	v->a[71623] = anon_sym_LT_AMP_DASH;
	v->a[71624] = anon_sym_GT_AMP_DASH;
	v->a[71625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71626] = anon_sym_DOLLAR;
	v->a[71627] = anon_sym_DQUOTE;
	v->a[71628] = sym_raw_string;
	v->a[71629] = aux_sym_number_token1;
	v->a[71630] = aux_sym_number_token2;
	v->a[71631] = anon_sym_DOLLAR_LBRACE;
	v->a[71632] = anon_sym_DOLLAR_LPAREN;
	v->a[71633] = anon_sym_BQUOTE;
	v->a[71634] = sym_word;
	v->a[71635] = 5;
	v->a[71636] = actions(3);
	v->a[71637] = 1;
	v->a[71638] = sym_comment;
	v->a[71639] = actions(2694);
	small_parse_table_3582(v);
}

void	small_parse_table_3582(t_small_parse_table_array *v)
{
	v->a[71640] = 1;
	v->a[71641] = anon_sym_PIPE;
	v->a[71642] = state(1235);
	v->a[71643] = 1;
	v->a[71644] = aux_sym_pipeline_repeat1;
	v->a[71645] = actions(2247);
	v->a[71646] = 2;
	v->a[71647] = sym_file_descriptor;
	v->a[71648] = aux_sym_heredoc_redirect_token1;
	v->a[71649] = actions(2252);
	v->a[71650] = 18;
	v->a[71651] = anon_sym_SEMI_SEMI;
	v->a[71652] = anon_sym_AMP_AMP;
	v->a[71653] = anon_sym_PIPE_PIPE;
	v->a[71654] = anon_sym_LT;
	v->a[71655] = anon_sym_GT;
	v->a[71656] = anon_sym_GT_GT;
	v->a[71657] = anon_sym_AMP_GT;
	v->a[71658] = anon_sym_AMP_GT_GT;
	v->a[71659] = anon_sym_LT_AMP;
	small_parse_table_3583(v);
}

void	small_parse_table_3583(t_small_parse_table_array *v)
{
	v->a[71660] = anon_sym_GT_AMP;
	v->a[71661] = anon_sym_GT_PIPE;
	v->a[71662] = anon_sym_LT_AMP_DASH;
	v->a[71663] = anon_sym_GT_AMP_DASH;
	v->a[71664] = anon_sym_LT_LT;
	v->a[71665] = anon_sym_LT_LT_DASH;
	v->a[71666] = anon_sym_AMP;
	v->a[71667] = anon_sym_BQUOTE;
	v->a[71668] = anon_sym_SEMI;
	v->a[71669] = 7;
	v->a[71670] = actions(3);
	v->a[71671] = 1;
	v->a[71672] = sym_comment;
	v->a[71673] = actions(2414);
	v->a[71674] = 1;
	v->a[71675] = aux_sym_heredoc_redirect_token1;
	v->a[71676] = actions(2703);
	v->a[71677] = 1;
	v->a[71678] = sym_file_descriptor;
	v->a[71679] = actions(2700);
	small_parse_table_3584(v);
}

void	small_parse_table_3584(t_small_parse_table_array *v)
{
	v->a[71680] = 2;
	v->a[71681] = anon_sym_LT_AMP_DASH;
	v->a[71682] = anon_sym_GT_AMP_DASH;
	v->a[71683] = state(1236);
	v->a[71684] = 2;
	v->a[71685] = sym_file_redirect;
	v->a[71686] = aux_sym_redirected_statement_repeat2;
	v->a[71687] = actions(2406);
	v->a[71688] = 8;
	v->a[71689] = anon_sym_PIPE;
	v->a[71690] = anon_sym_SEMI_SEMI;
	v->a[71691] = anon_sym_AMP_AMP;
	v->a[71692] = anon_sym_PIPE_PIPE;
	v->a[71693] = anon_sym_LT_LT;
	v->a[71694] = anon_sym_LT_LT_DASH;
	v->a[71695] = anon_sym_AMP;
	v->a[71696] = anon_sym_SEMI;
	v->a[71697] = actions(2697);
	v->a[71698] = 8;
	v->a[71699] = anon_sym_LT;
	small_parse_table_3585(v);
}

/* EOF small_parse_table_716.c */
