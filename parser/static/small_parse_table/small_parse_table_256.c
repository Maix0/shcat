/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = actions(714);
	v->a[25601] = 1;
	v->a[25602] = anon_sym_PIPE_PIPE;
	v->a[25603] = actions(716);
	v->a[25604] = 1;
	v->a[25605] = anon_sym_QMARK;
	v->a[25606] = actions(718);
	v->a[25607] = 1;
	v->a[25608] = anon_sym_EQ;
	v->a[25609] = actions(980);
	v->a[25610] = 1;
	v->a[25611] = anon_sym_RPAREN_RPAREN;
	v->a[25612] = actions(684);
	v->a[25613] = 2;
	v->a[25614] = anon_sym_GT_GT;
	v->a[25615] = anon_sym_LT_LT;
	v->a[25616] = actions(686);
	v->a[25617] = 2;
	v->a[25618] = anon_sym_PLUS;
	v->a[25619] = anon_sym_DASH;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = actions(690);
	v->a[25621] = 2;
	v->a[25622] = anon_sym_PLUS_PLUS2;
	v->a[25623] = anon_sym_DASH_DASH2;
	v->a[25624] = actions(700);
	v->a[25625] = 2;
	v->a[25626] = anon_sym_LT;
	v->a[25627] = anon_sym_GT;
	v->a[25628] = actions(706);
	v->a[25629] = 2;
	v->a[25630] = anon_sym_EQ_EQ;
	v->a[25631] = anon_sym_BANG_EQ;
	v->a[25632] = actions(708);
	v->a[25633] = 2;
	v->a[25634] = anon_sym_LT_EQ;
	v->a[25635] = anon_sym_GT_EQ;
	v->a[25636] = actions(688);
	v->a[25637] = 3;
	v->a[25638] = anon_sym_STAR;
	v->a[25639] = anon_sym_SLASH;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = anon_sym_PERCENT;
	v->a[25641] = actions(953);
	v->a[25642] = 10;
	v->a[25643] = anon_sym_PLUS_EQ;
	v->a[25644] = anon_sym_DASH_EQ;
	v->a[25645] = anon_sym_STAR_EQ;
	v->a[25646] = anon_sym_SLASH_EQ;
	v->a[25647] = anon_sym_PERCENT_EQ;
	v->a[25648] = anon_sym_LT_LT_EQ;
	v->a[25649] = anon_sym_GT_GT_EQ;
	v->a[25650] = anon_sym_AMP_EQ;
	v->a[25651] = anon_sym_CARET_EQ;
	v->a[25652] = anon_sym_PIPE_EQ;
	v->a[25653] = 3;
	v->a[25654] = actions(664);
	v->a[25655] = 1;
	v->a[25656] = sym_comment;
	v->a[25657] = actions(764);
	v->a[25658] = 13;
	v->a[25659] = anon_sym_PIPE;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = anon_sym_EQ;
	v->a[25661] = anon_sym_LT;
	v->a[25662] = anon_sym_GT;
	v->a[25663] = anon_sym_GT_GT;
	v->a[25664] = anon_sym_LT_LT;
	v->a[25665] = anon_sym_CARET;
	v->a[25666] = anon_sym_AMP;
	v->a[25667] = anon_sym_PLUS;
	v->a[25668] = anon_sym_DASH;
	v->a[25669] = anon_sym_STAR;
	v->a[25670] = anon_sym_SLASH;
	v->a[25671] = anon_sym_PERCENT;
	v->a[25672] = actions(766);
	v->a[25673] = 20;
	v->a[25674] = anon_sym_RPAREN;
	v->a[25675] = anon_sym_AMP_AMP;
	v->a[25676] = anon_sym_PIPE_PIPE;
	v->a[25677] = anon_sym_PLUS_EQ;
	v->a[25678] = anon_sym_DASH_EQ;
	v->a[25679] = anon_sym_STAR_EQ;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_SLASH_EQ;
	v->a[25681] = anon_sym_PERCENT_EQ;
	v->a[25682] = anon_sym_LT_LT_EQ;
	v->a[25683] = anon_sym_GT_GT_EQ;
	v->a[25684] = anon_sym_AMP_EQ;
	v->a[25685] = anon_sym_CARET_EQ;
	v->a[25686] = anon_sym_PIPE_EQ;
	v->a[25687] = anon_sym_EQ_EQ;
	v->a[25688] = anon_sym_BANG_EQ;
	v->a[25689] = anon_sym_LT_EQ;
	v->a[25690] = anon_sym_GT_EQ;
	v->a[25691] = anon_sym_QMARK;
	v->a[25692] = anon_sym_PLUS_PLUS2;
	v->a[25693] = anon_sym_DASH_DASH2;
	v->a[25694] = 3;
	v->a[25695] = actions(664);
	v->a[25696] = 1;
	v->a[25697] = sym_comment;
	v->a[25698] = actions(660);
	v->a[25699] = 13;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
