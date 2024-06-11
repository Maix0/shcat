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
	v->a[71600] = aux_sym_concatenation_repeat1;
	v->a[71601] = actions(608);
	v->a[71602] = 2;
	v->a[71603] = sym_file_descriptor;
	v->a[71604] = aux_sym_heredoc_redirect_token1;
	v->a[71605] = actions(610);
	v->a[71606] = 19;
	v->a[71607] = anon_sym_PIPE;
	v->a[71608] = anon_sym_RPAREN;
	v->a[71609] = anon_sym_SEMI_SEMI;
	v->a[71610] = anon_sym_AMP_AMP;
	v->a[71611] = anon_sym_PIPE_PIPE;
	v->a[71612] = anon_sym_LT;
	v->a[71613] = anon_sym_GT;
	v->a[71614] = anon_sym_GT_GT;
	v->a[71615] = anon_sym_AMP_GT;
	v->a[71616] = anon_sym_AMP_GT_GT;
	v->a[71617] = anon_sym_LT_AMP;
	v->a[71618] = anon_sym_GT_AMP;
	v->a[71619] = anon_sym_GT_PIPE;
	small_parse_table_3581(v);
}

void	small_parse_table_3581(t_small_parse_table_array *v)
{
	v->a[71620] = anon_sym_LT_AMP_DASH;
	v->a[71621] = anon_sym_GT_AMP_DASH;
	v->a[71622] = anon_sym_LT_LT;
	v->a[71623] = anon_sym_LT_LT_DASH;
	v->a[71624] = anon_sym_AMP;
	v->a[71625] = anon_sym_SEMI;
	v->a[71626] = 4;
	v->a[71627] = actions(3);
	v->a[71628] = 1;
	v->a[71629] = sym_comment;
	v->a[71630] = actions(803);
	v->a[71631] = 2;
	v->a[71632] = sym_file_descriptor;
	v->a[71633] = aux_sym_heredoc_redirect_token1;
	v->a[71634] = state(1214);
	v->a[71635] = 3;
	v->a[71636] = sym_file_redirect;
	v->a[71637] = sym_heredoc_redirect;
	v->a[71638] = aux_sym_redirected_statement_repeat1;
	v->a[71639] = actions(809);
	small_parse_table_3582(v);
}

void	small_parse_table_3582(t_small_parse_table_array *v)
{
	v->a[71640] = 19;
	v->a[71641] = anon_sym_esac;
	v->a[71642] = anon_sym_PIPE;
	v->a[71643] = anon_sym_SEMI_SEMI;
	v->a[71644] = anon_sym_AMP_AMP;
	v->a[71645] = anon_sym_PIPE_PIPE;
	v->a[71646] = anon_sym_LT;
	v->a[71647] = anon_sym_GT;
	v->a[71648] = anon_sym_GT_GT;
	v->a[71649] = anon_sym_AMP_GT;
	v->a[71650] = anon_sym_AMP_GT_GT;
	v->a[71651] = anon_sym_LT_AMP;
	v->a[71652] = anon_sym_GT_AMP;
	v->a[71653] = anon_sym_GT_PIPE;
	v->a[71654] = anon_sym_LT_AMP_DASH;
	v->a[71655] = anon_sym_GT_AMP_DASH;
	v->a[71656] = anon_sym_LT_LT;
	v->a[71657] = anon_sym_LT_LT_DASH;
	v->a[71658] = anon_sym_AMP;
	v->a[71659] = anon_sym_SEMI;
	small_parse_table_3583(v);
}

void	small_parse_table_3583(t_small_parse_table_array *v)
{
	v->a[71660] = 5;
	v->a[71661] = actions(3);
	v->a[71662] = 1;
	v->a[71663] = sym_comment;
	v->a[71664] = actions(2524);
	v->a[71665] = 1;
	v->a[71666] = sym_variable_name;
	v->a[71667] = actions(2522);
	v->a[71668] = 2;
	v->a[71669] = aux_sym__simple_variable_name_token1;
	v->a[71670] = aux_sym__multiline_variable_name_token1;
	v->a[71671] = actions(2520);
	v->a[71672] = 9;
	v->a[71673] = anon_sym_BANG;
	v->a[71674] = anon_sym_DASH;
	v->a[71675] = anon_sym_STAR;
	v->a[71676] = anon_sym_QMARK;
	v->a[71677] = anon_sym_DOLLAR;
	v->a[71678] = anon_sym_POUND;
	v->a[71679] = anon_sym_AT;
	small_parse_table_3584(v);
}

void	small_parse_table_3584(t_small_parse_table_array *v)
{
	v->a[71680] = anon_sym_0;
	v->a[71681] = anon_sym__;
	v->a[71682] = actions(381);
	v->a[71683] = 12;
	v->a[71684] = anon_sym_SEMI_SEMI;
	v->a[71685] = aux_sym_heredoc_redirect_token1;
	v->a[71686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71687] = anon_sym_AMP;
	v->a[71688] = anon_sym_DQUOTE;
	v->a[71689] = sym_raw_string;
	v->a[71690] = sym_number;
	v->a[71691] = anon_sym_DOLLAR_LBRACE;
	v->a[71692] = anon_sym_DOLLAR_LPAREN;
	v->a[71693] = anon_sym_BQUOTE;
	v->a[71694] = sym_word;
	v->a[71695] = anon_sym_SEMI;
	v->a[71696] = 8;
	v->a[71697] = actions(3);
	v->a[71698] = 1;
	v->a[71699] = sym_comment;
	small_parse_table_3585(v);
}

/* EOF small_parse_table_716.c */
