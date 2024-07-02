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
	v->a[71600] = anon_sym_LT_LT;
	v->a[71601] = actions(1871);
	v->a[71602] = 1;
	v->a[71603] = sym_file_descriptor;
	v->a[71604] = actions(2827);
	v->a[71605] = 1;
	v->a[71606] = anon_sym_LT_LT_DASH;
	v->a[71607] = actions(1869);
	v->a[71608] = 2;
	v->a[71609] = anon_sym_LT;
	v->a[71610] = anon_sym_GT;
	v->a[71611] = actions(2823);
	v->a[71612] = 2;
	v->a[71613] = anon_sym_AMP_AMP;
	v->a[71614] = anon_sym_PIPE_PIPE;
	v->a[71615] = state(1034);
	v->a[71616] = 3;
	v->a[71617] = sym_file_redirect;
	v->a[71618] = sym_heredoc_redirect;
	v->a[71619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3581(v);
}

void	small_parse_table_3581(t_small_parse_table_array *v)
{
	v->a[71620] = actions(2825);
	v->a[71621] = 5;
	v->a[71622] = anon_sym_GT_GT;
	v->a[71623] = anon_sym_LT_AMP;
	v->a[71624] = anon_sym_GT_AMP;
	v->a[71625] = anon_sym_GT_PIPE;
	v->a[71626] = anon_sym_LT_GT;
	v->a[71627] = 3;
	v->a[71628] = actions(3);
	v->a[71629] = 1;
	v->a[71630] = sym_comment;
	v->a[71631] = actions(709);
	v->a[71632] = 1;
	v->a[71633] = sym__concat;
	v->a[71634] = actions(707);
	v->a[71635] = 14;
	v->a[71636] = anon_sym_SEMI_SEMI;
	v->a[71637] = aux_sym_heredoc_redirect_token1;
	v->a[71638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71639] = anon_sym_AMP;
	small_parse_table_3582(v);
}

void	small_parse_table_3582(t_small_parse_table_array *v)
{
	v->a[71640] = aux_sym_concatenation_token1;
	v->a[71641] = anon_sym_DOLLAR;
	v->a[71642] = anon_sym_DQUOTE;
	v->a[71643] = sym_raw_string;
	v->a[71644] = sym_number;
	v->a[71645] = anon_sym_DOLLAR_LBRACE;
	v->a[71646] = anon_sym_DOLLAR_LPAREN;
	v->a[71647] = anon_sym_BQUOTE;
	v->a[71648] = sym_word;
	v->a[71649] = anon_sym_SEMI;
	v->a[71650] = 5;
	v->a[71651] = actions(3);
	v->a[71652] = 1;
	v->a[71653] = sym_comment;
	v->a[71654] = actions(2829);
	v->a[71655] = 1;
	v->a[71656] = anon_sym_PIPE;
	v->a[71657] = state(1453);
	v->a[71658] = 1;
	v->a[71659] = aux_sym_pipeline_repeat1;
	small_parse_table_3583(v);
}

void	small_parse_table_3583(t_small_parse_table_array *v)
{
	v->a[71660] = actions(2307);
	v->a[71661] = 2;
	v->a[71662] = sym_file_descriptor;
	v->a[71663] = aux_sym_heredoc_redirect_token1;
	v->a[71664] = actions(2305);
	v->a[71665] = 11;
	v->a[71666] = anon_sym_AMP_AMP;
	v->a[71667] = anon_sym_PIPE_PIPE;
	v->a[71668] = anon_sym_LT;
	v->a[71669] = anon_sym_GT;
	v->a[71670] = anon_sym_GT_GT;
	v->a[71671] = anon_sym_LT_AMP;
	v->a[71672] = anon_sym_GT_AMP;
	v->a[71673] = anon_sym_GT_PIPE;
	v->a[71674] = anon_sym_LT_GT;
	v->a[71675] = anon_sym_LT_LT;
	v->a[71676] = anon_sym_LT_LT_DASH;
	v->a[71677] = 3;
	v->a[71678] = actions(3);
	v->a[71679] = 1;
	small_parse_table_3584(v);
}

void	small_parse_table_3584(t_small_parse_table_array *v)
{
	v->a[71680] = sym_comment;
	v->a[71681] = actions(744);
	v->a[71682] = 1;
	v->a[71683] = sym__concat;
	v->a[71684] = actions(742);
	v->a[71685] = 14;
	v->a[71686] = anon_sym_SEMI_SEMI;
	v->a[71687] = aux_sym_heredoc_redirect_token1;
	v->a[71688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71689] = anon_sym_AMP;
	v->a[71690] = aux_sym_concatenation_token1;
	v->a[71691] = anon_sym_DOLLAR;
	v->a[71692] = anon_sym_DQUOTE;
	v->a[71693] = sym_raw_string;
	v->a[71694] = sym_number;
	v->a[71695] = anon_sym_DOLLAR_LBRACE;
	v->a[71696] = anon_sym_DOLLAR_LPAREN;
	v->a[71697] = anon_sym_BQUOTE;
	v->a[71698] = sym_word;
	v->a[71699] = anon_sym_SEMI;
	small_parse_table_3585(v);
}

/* EOF small_parse_table_716.c */
