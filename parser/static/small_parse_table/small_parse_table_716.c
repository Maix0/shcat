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
	v->a[71600] = actions(2802);
	v->a[71601] = 2;
	v->a[71602] = anon_sym_AMP_AMP;
	v->a[71603] = anon_sym_PIPE_PIPE;
	v->a[71604] = state(1359);
	v->a[71605] = 3;
	v->a[71606] = sym_file_redirect;
	v->a[71607] = sym_heredoc_redirect;
	v->a[71608] = aux_sym_redirected_statement_repeat1;
	v->a[71609] = actions(2804);
	v->a[71610] = 5;
	v->a[71611] = anon_sym_GT_GT;
	v->a[71612] = anon_sym_LT_AMP;
	v->a[71613] = anon_sym_GT_AMP;
	v->a[71614] = anon_sym_GT_PIPE;
	v->a[71615] = anon_sym_LT_GT;
	v->a[71616] = 3;
	v->a[71617] = actions(3);
	v->a[71618] = 1;
	v->a[71619] = sym_comment;
	small_parse_table_3581(v);
}

void	small_parse_table_3581(t_small_parse_table_array *v)
{
	v->a[71620] = actions(802);
	v->a[71621] = 1;
	v->a[71622] = sym__concat;
	v->a[71623] = actions(800);
	v->a[71624] = 14;
	v->a[71625] = anon_sym_SEMI_SEMI;
	v->a[71626] = aux_sym_heredoc_redirect_token1;
	v->a[71627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71628] = anon_sym_AMP;
	v->a[71629] = aux_sym_concatenation_token1;
	v->a[71630] = anon_sym_DOLLAR;
	v->a[71631] = anon_sym_DQUOTE;
	v->a[71632] = sym_raw_string;
	v->a[71633] = sym_number;
	v->a[71634] = anon_sym_DOLLAR_LBRACE;
	v->a[71635] = anon_sym_DOLLAR_LPAREN;
	v->a[71636] = anon_sym_BQUOTE;
	v->a[71637] = sym_word;
	v->a[71638] = anon_sym_SEMI;
	v->a[71639] = 3;
	small_parse_table_3582(v);
}

void	small_parse_table_3582(t_small_parse_table_array *v)
{
	v->a[71640] = actions(3);
	v->a[71641] = 1;
	v->a[71642] = sym_comment;
	v->a[71643] = actions(908);
	v->a[71644] = 1;
	v->a[71645] = sym__concat;
	v->a[71646] = actions(906);
	v->a[71647] = 14;
	v->a[71648] = anon_sym_SEMI_SEMI;
	v->a[71649] = aux_sym_heredoc_redirect_token1;
	v->a[71650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71651] = anon_sym_AMP;
	v->a[71652] = aux_sym_concatenation_token1;
	v->a[71653] = anon_sym_DOLLAR;
	v->a[71654] = anon_sym_DQUOTE;
	v->a[71655] = sym_raw_string;
	v->a[71656] = sym_number;
	v->a[71657] = anon_sym_DOLLAR_LBRACE;
	v->a[71658] = anon_sym_DOLLAR_LPAREN;
	v->a[71659] = anon_sym_BQUOTE;
	small_parse_table_3583(v);
}

void	small_parse_table_3583(t_small_parse_table_array *v)
{
	v->a[71660] = sym_word;
	v->a[71661] = anon_sym_SEMI;
	v->a[71662] = 6;
	v->a[71663] = actions(3);
	v->a[71664] = 1;
	v->a[71665] = sym_comment;
	v->a[71666] = actions(2796);
	v->a[71667] = 1;
	v->a[71668] = anon_sym_PERCENT;
	v->a[71669] = actions(2806);
	v->a[71670] = 1;
	v->a[71671] = anon_sym_RBRACE;
	v->a[71672] = state(2104);
	v->a[71673] = 2;
	v->a[71674] = sym_expansion_expression;
	v->a[71675] = sym_expansion_regex;
	v->a[71676] = actions(2798);
	v->a[71677] = 3;
	v->a[71678] = sym__immediate_double_hash;
	v->a[71679] = anon_sym_POUND;
	small_parse_table_3584(v);
}

void	small_parse_table_3584(t_small_parse_table_array *v)
{
	v->a[71680] = anon_sym_PERCENT_PERCENT;
	v->a[71681] = actions(2800);
	v->a[71682] = 8;
	v->a[71683] = anon_sym_COLON_DASH;
	v->a[71684] = anon_sym_DASH3;
	v->a[71685] = anon_sym_COLON_EQ;
	v->a[71686] = anon_sym_EQ2;
	v->a[71687] = anon_sym_COLON_QMARK;
	v->a[71688] = anon_sym_QMARK2;
	v->a[71689] = anon_sym_COLON_PLUS;
	v->a[71690] = anon_sym_PLUS3;
	v->a[71691] = 8;
	v->a[71692] = actions(664);
	v->a[71693] = 1;
	v->a[71694] = sym_comment;
	v->a[71695] = actions(757);
	v->a[71696] = 1;
	v->a[71697] = anon_sym_LT_LT;
	v->a[71698] = actions(1853);
	v->a[71699] = 1;
	small_parse_table_3585(v);
}

/* EOF small_parse_table_716.c */
