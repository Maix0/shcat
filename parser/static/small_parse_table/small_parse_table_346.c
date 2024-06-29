/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_346.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1730(t_small_parse_table_array *v)
{
	v->a[34600] = actions(1136);
	v->a[34601] = 1;
	v->a[34602] = anon_sym_PIPE;
	v->a[34603] = actions(1138);
	v->a[34604] = 1;
	v->a[34605] = anon_sym_AMP_AMP;
	v->a[34606] = actions(1140);
	v->a[34607] = 1;
	v->a[34608] = anon_sym_PIPE_PIPE;
	v->a[34609] = actions(1150);
	v->a[34610] = 1;
	v->a[34611] = anon_sym_CARET;
	v->a[34612] = actions(1152);
	v->a[34613] = 1;
	v->a[34614] = anon_sym_AMP;
	v->a[34615] = actions(1239);
	v->a[34616] = 1;
	v->a[34617] = anon_sym_EQ;
	v->a[34618] = actions(1241);
	v->a[34619] = 1;
	small_parse_table_1731(v);
}

void	small_parse_table_1731(t_small_parse_table_array *v)
{
	v->a[34620] = anon_sym_QMARK;
	v->a[34621] = actions(1272);
	v->a[34622] = 1;
	v->a[34623] = anon_sym_RPAREN_RPAREN;
	v->a[34624] = actions(1144);
	v->a[34625] = 2;
	v->a[34626] = anon_sym_LT;
	v->a[34627] = anon_sym_GT;
	v->a[34628] = actions(1146);
	v->a[34629] = 2;
	v->a[34630] = anon_sym_GT_GT;
	v->a[34631] = anon_sym_LT_LT;
	v->a[34632] = actions(1154);
	v->a[34633] = 2;
	v->a[34634] = anon_sym_EQ_EQ;
	v->a[34635] = anon_sym_BANG_EQ;
	v->a[34636] = actions(1156);
	v->a[34637] = 2;
	v->a[34638] = anon_sym_LT_EQ;
	v->a[34639] = anon_sym_GT_EQ;
	small_parse_table_1732(v);
}

void	small_parse_table_1732(t_small_parse_table_array *v)
{
	v->a[34640] = actions(1158);
	v->a[34641] = 2;
	v->a[34642] = anon_sym_PLUS;
	v->a[34643] = anon_sym_DASH;
	v->a[34644] = actions(1162);
	v->a[34645] = 2;
	v->a[34646] = anon_sym_PLUS_PLUS2;
	v->a[34647] = anon_sym_DASH_DASH2;
	v->a[34648] = actions(1160);
	v->a[34649] = 3;
	v->a[34650] = anon_sym_STAR;
	v->a[34651] = anon_sym_SLASH;
	v->a[34652] = anon_sym_PERCENT;
	v->a[34653] = actions(1252);
	v->a[34654] = 10;
	v->a[34655] = anon_sym_PLUS_EQ;
	v->a[34656] = anon_sym_DASH_EQ;
	v->a[34657] = anon_sym_STAR_EQ;
	v->a[34658] = anon_sym_SLASH_EQ;
	v->a[34659] = anon_sym_PERCENT_EQ;
	small_parse_table_1733(v);
}

void	small_parse_table_1733(t_small_parse_table_array *v)
{
	v->a[34660] = anon_sym_LT_LT_EQ;
	v->a[34661] = anon_sym_GT_GT_EQ;
	v->a[34662] = anon_sym_AMP_EQ;
	v->a[34663] = anon_sym_CARET_EQ;
	v->a[34664] = anon_sym_PIPE_EQ;
	v->a[34665] = 3;
	v->a[34666] = actions(3);
	v->a[34667] = 1;
	v->a[34668] = sym_comment;
	v->a[34669] = actions(1276);
	v->a[34670] = 2;
	v->a[34671] = sym_file_descriptor;
	v->a[34672] = sym_variable_name;
	v->a[34673] = actions(1274);
	v->a[34674] = 31;
	v->a[34675] = anon_sym_for;
	v->a[34676] = anon_sym_while;
	v->a[34677] = anon_sym_until;
	v->a[34678] = anon_sym_done;
	v->a[34679] = anon_sym_if;
	small_parse_table_1734(v);
}

void	small_parse_table_1734(t_small_parse_table_array *v)
{
	v->a[34680] = anon_sym_then;
	v->a[34681] = anon_sym_case;
	v->a[34682] = anon_sym_LPAREN;
	v->a[34683] = anon_sym_RPAREN;
	v->a[34684] = anon_sym_SEMI_SEMI;
	v->a[34685] = anon_sym_LBRACE;
	v->a[34686] = anon_sym_BANG;
	v->a[34687] = anon_sym_LT;
	v->a[34688] = anon_sym_GT;
	v->a[34689] = anon_sym_GT_GT;
	v->a[34690] = anon_sym_AMP_GT;
	v->a[34691] = anon_sym_AMP_GT_GT;
	v->a[34692] = anon_sym_LT_AMP;
	v->a[34693] = anon_sym_GT_AMP;
	v->a[34694] = anon_sym_GT_PIPE;
	v->a[34695] = anon_sym_LT_AMP_DASH;
	v->a[34696] = anon_sym_GT_AMP_DASH;
	v->a[34697] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34698] = anon_sym_DOLLAR;
	v->a[34699] = anon_sym_DQUOTE;
	small_parse_table_1735(v);
}

/* EOF small_parse_table_346.c */
