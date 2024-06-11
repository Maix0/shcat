/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_286.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1430(t_small_parse_table_array *v)
{
	v->a[28600] = 14;
	v->a[28601] = actions(1078);
	v->a[28602] = 1;
	v->a[28603] = anon_sym_EQ;
	v->a[28604] = actions(1094);
	v->a[28605] = 1;
	v->a[28606] = sym_comment;
	v->a[28607] = actions(1108);
	v->a[28608] = 1;
	v->a[28609] = anon_sym_PIPE;
	v->a[28610] = actions(1110);
	v->a[28611] = 1;
	v->a[28612] = anon_sym_AMP_AMP;
	v->a[28613] = actions(1112);
	v->a[28614] = 1;
	v->a[28615] = anon_sym_CARET;
	v->a[28616] = actions(1114);
	v->a[28617] = 1;
	v->a[28618] = anon_sym_AMP;
	v->a[28619] = actions(1082);
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = 2;
	v->a[28621] = anon_sym_LT;
	v->a[28622] = anon_sym_GT;
	v->a[28623] = actions(1084);
	v->a[28624] = 2;
	v->a[28625] = anon_sym_GT_GT;
	v->a[28626] = anon_sym_LT_LT;
	v->a[28627] = actions(1086);
	v->a[28628] = 2;
	v->a[28629] = anon_sym_LT_EQ;
	v->a[28630] = anon_sym_GT_EQ;
	v->a[28631] = actions(1088);
	v->a[28632] = 2;
	v->a[28633] = anon_sym_PLUS;
	v->a[28634] = anon_sym_DASH;
	v->a[28635] = actions(1092);
	v->a[28636] = 2;
	v->a[28637] = anon_sym_PLUS_PLUS2;
	v->a[28638] = anon_sym_DASH_DASH2;
	v->a[28639] = actions(1116);
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = 2;
	v->a[28641] = anon_sym_EQ_EQ;
	v->a[28642] = anon_sym_BANG_EQ;
	v->a[28643] = actions(1090);
	v->a[28644] = 3;
	v->a[28645] = anon_sym_STAR;
	v->a[28646] = anon_sym_SLASH;
	v->a[28647] = anon_sym_PERCENT;
	v->a[28648] = actions(1080);
	v->a[28649] = 14;
	v->a[28650] = anon_sym_PIPE_PIPE;
	v->a[28651] = anon_sym_RPAREN_RPAREN;
	v->a[28652] = anon_sym_PLUS_EQ;
	v->a[28653] = anon_sym_DASH_EQ;
	v->a[28654] = anon_sym_STAR_EQ;
	v->a[28655] = anon_sym_SLASH_EQ;
	v->a[28656] = anon_sym_PERCENT_EQ;
	v->a[28657] = anon_sym_LT_LT_EQ;
	v->a[28658] = anon_sym_GT_GT_EQ;
	v->a[28659] = anon_sym_AMP_EQ;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = anon_sym_CARET_EQ;
	v->a[28661] = anon_sym_PIPE_EQ;
	v->a[28662] = anon_sym_QMARK;
	v->a[28663] = anon_sym_COLON;
	v->a[28664] = 6;
	v->a[28665] = actions(3);
	v->a[28666] = 1;
	v->a[28667] = sym_comment;
	v->a[28668] = actions(1118);
	v->a[28669] = 1;
	v->a[28670] = aux_sym_concatenation_token1;
	v->a[28671] = actions(1120);
	v->a[28672] = 1;
	v->a[28673] = sym__concat;
	v->a[28674] = state(404);
	v->a[28675] = 1;
	v->a[28676] = aux_sym_concatenation_repeat1;
	v->a[28677] = actions(972);
	v->a[28678] = 2;
	v->a[28679] = sym_file_descriptor;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = sym_variable_name;
	v->a[28681] = actions(974);
	v->a[28682] = 29;
	v->a[28683] = anon_sym_PIPE;
	v->a[28684] = anon_sym_RPAREN;
	v->a[28685] = anon_sym_SEMI_SEMI;
	v->a[28686] = anon_sym_AMP_AMP;
	v->a[28687] = anon_sym_PIPE_PIPE;
	v->a[28688] = anon_sym_LT;
	v->a[28689] = anon_sym_GT;
	v->a[28690] = anon_sym_GT_GT;
	v->a[28691] = anon_sym_AMP_GT;
	v->a[28692] = anon_sym_AMP_GT_GT;
	v->a[28693] = anon_sym_LT_AMP;
	v->a[28694] = anon_sym_GT_AMP;
	v->a[28695] = anon_sym_GT_PIPE;
	v->a[28696] = anon_sym_LT_AMP_DASH;
	v->a[28697] = anon_sym_GT_AMP_DASH;
	v->a[28698] = anon_sym_LT_LT;
	v->a[28699] = anon_sym_LT_LT_DASH;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
