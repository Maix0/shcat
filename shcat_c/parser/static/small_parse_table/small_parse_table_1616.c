/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1616.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8080(t_small_parse_table_array *v)
{
	v->a[161600] = anon_sym_LT_LT_EQ;
	v->a[161601] = anon_sym_GT_GT_EQ;
	v->a[161602] = anon_sym_AMP_EQ;
	v->a[161603] = anon_sym_CARET_EQ;
	v->a[161604] = anon_sym_PIPE_EQ;
	v->a[161605] = anon_sym_PIPE_PIPE;
	v->a[161606] = anon_sym_DASHo;
	v->a[161607] = anon_sym_AMP_AMP;
	v->a[161608] = anon_sym_DASHa;
	v->a[161609] = anon_sym_PIPE;
	v->a[161610] = anon_sym_CARET;
	v->a[161611] = anon_sym_AMP;
	v->a[161612] = anon_sym_EQ_EQ;
	v->a[161613] = anon_sym_BANG_EQ;
	v->a[161614] = anon_sym_LT;
	v->a[161615] = anon_sym_GT;
	v->a[161616] = anon_sym_LT_EQ;
	v->a[161617] = anon_sym_GT_EQ;
	v->a[161618] = anon_sym_LT_LT;
	v->a[161619] = anon_sym_GT_GT;
	small_parse_table_8081(v);
}

void	small_parse_table_8081(t_small_parse_table_array *v)
{
	v->a[161620] = anon_sym_PLUS;
	v->a[161621] = anon_sym_DASH;
	v->a[161622] = anon_sym_STAR;
	v->a[161623] = anon_sym_SLASH;
	v->a[161624] = anon_sym_PERCENT;
	v->a[161625] = anon_sym_STAR_STAR;
	v->a[161626] = 9;
	v->a[161627] = actions(71);
	v->a[161628] = 1;
	v->a[161629] = sym_comment;
	v->a[161630] = actions(7220);
	v->a[161631] = 1;
	v->a[161632] = anon_sym_STAR_STAR;
	v->a[161633] = actions(7222);
	v->a[161634] = 1;
	v->a[161635] = sym_test_operator;
	v->a[161636] = actions(6793);
	v->a[161637] = 2;
	v->a[161638] = anon_sym_PLUS_PLUS;
	v->a[161639] = anon_sym_DASH_DASH;
	small_parse_table_8082(v);
}

void	small_parse_table_8082(t_small_parse_table_array *v)
{
	v->a[161640] = actions(7214);
	v->a[161641] = 2;
	v->a[161642] = anon_sym_LT_LT;
	v->a[161643] = anon_sym_GT_GT;
	v->a[161644] = actions(7216);
	v->a[161645] = 2;
	v->a[161646] = anon_sym_PLUS;
	v->a[161647] = anon_sym_DASH;
	v->a[161648] = actions(7218);
	v->a[161649] = 3;
	v->a[161650] = anon_sym_STAR;
	v->a[161651] = anon_sym_SLASH;
	v->a[161652] = anon_sym_PERCENT;
	v->a[161653] = actions(6807);
	v->a[161654] = 6;
	v->a[161655] = anon_sym_EQ;
	v->a[161656] = anon_sym_PIPE;
	v->a[161657] = anon_sym_CARET;
	v->a[161658] = anon_sym_AMP;
	v->a[161659] = anon_sym_LT;
	small_parse_table_8083(v);
}

void	small_parse_table_8083(t_small_parse_table_array *v)
{
	v->a[161660] = anon_sym_GT;
	v->a[161661] = actions(6805);
	v->a[161662] = 20;
	v->a[161663] = anon_sym_RPAREN_RPAREN;
	v->a[161664] = anon_sym_PLUS_EQ;
	v->a[161665] = anon_sym_DASH_EQ;
	v->a[161666] = anon_sym_STAR_EQ;
	v->a[161667] = anon_sym_SLASH_EQ;
	v->a[161668] = anon_sym_PERCENT_EQ;
	v->a[161669] = anon_sym_STAR_STAR_EQ;
	v->a[161670] = anon_sym_LT_LT_EQ;
	v->a[161671] = anon_sym_GT_GT_EQ;
	v->a[161672] = anon_sym_AMP_EQ;
	v->a[161673] = anon_sym_CARET_EQ;
	v->a[161674] = anon_sym_PIPE_EQ;
	v->a[161675] = anon_sym_PIPE_PIPE;
	v->a[161676] = anon_sym_AMP_AMP;
	v->a[161677] = anon_sym_EQ_EQ;
	v->a[161678] = anon_sym_BANG_EQ;
	v->a[161679] = anon_sym_LT_EQ;
	small_parse_table_8084(v);
}

void	small_parse_table_8084(t_small_parse_table_array *v)
{
	v->a[161680] = anon_sym_GT_EQ;
	v->a[161681] = anon_sym_EQ_TILDE;
	v->a[161682] = anon_sym_QMARK;
	v->a[161683] = 8;
	v->a[161684] = actions(3);
	v->a[161685] = 1;
	v->a[161686] = sym_comment;
	v->a[161687] = actions(1241);
	v->a[161688] = 1;
	v->a[161689] = sym_file_descriptor;
	v->a[161690] = actions(3791);
	v->a[161691] = 1;
	v->a[161692] = anon_sym_DQUOTE;
	v->a[161693] = actions(7444);
	v->a[161694] = 1;
	v->a[161695] = sym_variable_name;
	v->a[161696] = state(4389);
	v->a[161697] = 1;
	v->a[161698] = sym_string;
	v->a[161699] = actions(7442);
	small_parse_table_8085(v);
}

/* EOF small_parse_table_1616.c */
