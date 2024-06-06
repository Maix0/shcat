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
	v->a[76600] = anon_sym_GT_GT;
	v->a[76601] = anon_sym_LT_LT;
	v->a[76602] = actions(4486);
	v->a[76603] = 2;
	v->a[76604] = anon_sym_EQ_EQ;
	v->a[76605] = anon_sym_BANG_EQ;
	v->a[76606] = actions(4488);
	v->a[76607] = 2;
	v->a[76608] = anon_sym_LT_EQ;
	v->a[76609] = anon_sym_GT_EQ;
	v->a[76610] = actions(4490);
	v->a[76611] = 2;
	v->a[76612] = anon_sym_PLUS;
	v->a[76613] = anon_sym_DASH;
	v->a[76614] = actions(4494);
	v->a[76615] = 2;
	v->a[76616] = anon_sym_PLUS_PLUS2;
	v->a[76617] = anon_sym_DASH_DASH2;
	v->a[76618] = actions(4492);
	v->a[76619] = 3;
	small_parse_table_3831(v);
}

void	small_parse_table_3831(t_small_parse_table_array *v)
{
	v->a[76620] = anon_sym_STAR;
	v->a[76621] = anon_sym_SLASH;
	v->a[76622] = anon_sym_PERCENT;
	v->a[76623] = actions(4237);
	v->a[76624] = 11;
	v->a[76625] = anon_sym_RPAREN;
	v->a[76626] = anon_sym_PLUS_EQ;
	v->a[76627] = anon_sym_DASH_EQ;
	v->a[76628] = anon_sym_STAR_EQ;
	v->a[76629] = anon_sym_SLASH_EQ;
	v->a[76630] = anon_sym_PERCENT_EQ;
	v->a[76631] = anon_sym_LT_LT_EQ;
	v->a[76632] = anon_sym_GT_GT_EQ;
	v->a[76633] = anon_sym_AMP_EQ;
	v->a[76634] = anon_sym_CARET_EQ;
	v->a[76635] = anon_sym_PIPE_EQ;
	v->a[76636] = 6;
	v->a[76637] = actions(3);
	v->a[76638] = 1;
	v->a[76639] = sym_comment;
	small_parse_table_3832(v);
}

void	small_parse_table_3832(t_small_parse_table_array *v)
{
	v->a[76640] = actions(816);
	v->a[76641] = 1;
	v->a[76642] = sym_file_descriptor;
	v->a[76643] = actions(4324);
	v->a[76644] = 1;
	v->a[76645] = sym_variable_name;
	v->a[76646] = actions(4322);
	v->a[76647] = 2;
	v->a[76648] = aux_sym__simple_variable_name_token1;
	v->a[76649] = aux_sym__multiline_variable_name_token1;
	v->a[76650] = actions(4320);
	v->a[76651] = 9;
	v->a[76652] = anon_sym_BANG;
	v->a[76653] = anon_sym_DASH;
	v->a[76654] = anon_sym_STAR;
	v->a[76655] = anon_sym_QMARK;
	v->a[76656] = anon_sym_DOLLAR;
	v->a[76657] = anon_sym_POUND;
	v->a[76658] = anon_sym_AT;
	v->a[76659] = anon_sym_0;
	small_parse_table_3833(v);
}

void	small_parse_table_3833(t_small_parse_table_array *v)
{
	v->a[76660] = anon_sym__;
	v->a[76661] = actions(810);
	v->a[76662] = 20;
	v->a[76663] = anon_sym_PIPE;
	v->a[76664] = anon_sym_SEMI_SEMI;
	v->a[76665] = anon_sym_PIPE_AMP;
	v->a[76666] = anon_sym_AMP_AMP;
	v->a[76667] = anon_sym_PIPE_PIPE;
	v->a[76668] = anon_sym_LT;
	v->a[76669] = anon_sym_GT;
	v->a[76670] = anon_sym_GT_GT;
	v->a[76671] = anon_sym_AMP_GT;
	v->a[76672] = anon_sym_AMP_GT_GT;
	v->a[76673] = anon_sym_LT_AMP;
	v->a[76674] = anon_sym_GT_AMP;
	v->a[76675] = anon_sym_GT_PIPE;
	v->a[76676] = anon_sym_LT_AMP_DASH;
	v->a[76677] = anon_sym_GT_AMP_DASH;
	v->a[76678] = anon_sym_LT_LT;
	v->a[76679] = anon_sym_LT_LT_DASH;
	small_parse_table_3834(v);
}

void	small_parse_table_3834(t_small_parse_table_array *v)
{
	v->a[76680] = aux_sym_heredoc_redirect_token1;
	v->a[76681] = anon_sym_AMP;
	v->a[76682] = anon_sym_SEMI;
	v->a[76683] = 7;
	v->a[76684] = actions(57);
	v->a[76685] = 1;
	v->a[76686] = sym_comment;
	v->a[76687] = actions(4480);
	v->a[76688] = 2;
	v->a[76689] = anon_sym_GT_GT;
	v->a[76690] = anon_sym_LT_LT;
	v->a[76691] = actions(4490);
	v->a[76692] = 2;
	v->a[76693] = anon_sym_PLUS;
	v->a[76694] = anon_sym_DASH;
	v->a[76695] = actions(4494);
	v->a[76696] = 2;
	v->a[76697] = anon_sym_PLUS_PLUS2;
	v->a[76698] = anon_sym_DASH_DASH2;
	v->a[76699] = actions(4492);
	small_parse_table_3835(v);
}

/* EOF small_parse_table_766.c */
