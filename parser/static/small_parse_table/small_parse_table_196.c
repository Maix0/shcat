/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = anon_sym_PIPE;
	v->a[19601] = actions(411);
	v->a[19602] = 1;
	v->a[19603] = anon_sym_AMP_AMP;
	v->a[19604] = actions(413);
	v->a[19605] = 1;
	v->a[19606] = anon_sym_PIPE_PIPE;
	v->a[19607] = actions(423);
	v->a[19608] = 1;
	v->a[19609] = anon_sym_CARET;
	v->a[19610] = actions(425);
	v->a[19611] = 1;
	v->a[19612] = anon_sym_AMP;
	v->a[19613] = actions(479);
	v->a[19614] = 1;
	v->a[19615] = anon_sym_QMARK;
	v->a[19616] = actions(485);
	v->a[19617] = 1;
	v->a[19618] = anon_sym_EQ;
	v->a[19619] = actions(638);
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = 1;
	v->a[19621] = anon_sym_RPAREN_RPAREN;
	v->a[19622] = actions(405);
	v->a[19623] = 2;
	v->a[19624] = anon_sym_PLUS_PLUS2;
	v->a[19625] = anon_sym_DASH_DASH2;
	v->a[19626] = actions(417);
	v->a[19627] = 2;
	v->a[19628] = anon_sym_LT;
	v->a[19629] = anon_sym_GT;
	v->a[19630] = actions(419);
	v->a[19631] = 2;
	v->a[19632] = anon_sym_GT_GT;
	v->a[19633] = anon_sym_LT_LT;
	v->a[19634] = actions(427);
	v->a[19635] = 2;
	v->a[19636] = anon_sym_EQ_EQ;
	v->a[19637] = anon_sym_BANG_EQ;
	v->a[19638] = actions(429);
	v->a[19639] = 2;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = anon_sym_LT_EQ;
	v->a[19641] = anon_sym_GT_EQ;
	v->a[19642] = actions(431);
	v->a[19643] = 2;
	v->a[19644] = anon_sym_PLUS;
	v->a[19645] = anon_sym_DASH;
	v->a[19646] = actions(433);
	v->a[19647] = 3;
	v->a[19648] = anon_sym_STAR;
	v->a[19649] = anon_sym_SLASH;
	v->a[19650] = anon_sym_PERCENT;
	v->a[19651] = actions(493);
	v->a[19652] = 10;
	v->a[19653] = anon_sym_PLUS_EQ;
	v->a[19654] = anon_sym_DASH_EQ;
	v->a[19655] = anon_sym_STAR_EQ;
	v->a[19656] = anon_sym_SLASH_EQ;
	v->a[19657] = anon_sym_PERCENT_EQ;
	v->a[19658] = anon_sym_LT_LT_EQ;
	v->a[19659] = anon_sym_GT_GT_EQ;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = anon_sym_AMP_EQ;
	v->a[19661] = anon_sym_CARET_EQ;
	v->a[19662] = anon_sym_PIPE_EQ;
	v->a[19663] = 5;
	v->a[19664] = actions(407);
	v->a[19665] = 1;
	v->a[19666] = sym_comment;
	v->a[19667] = actions(597);
	v->a[19668] = 2;
	v->a[19669] = anon_sym_PLUS_PLUS2;
	v->a[19670] = anon_sym_DASH_DASH2;
	v->a[19671] = actions(593);
	v->a[19672] = 3;
	v->a[19673] = anon_sym_STAR;
	v->a[19674] = anon_sym_SLASH;
	v->a[19675] = anon_sym_PERCENT;
	v->a[19676] = actions(459);
	v->a[19677] = 10;
	v->a[19678] = anon_sym_PIPE;
	v->a[19679] = anon_sym_EQ;
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = anon_sym_LT;
	v->a[19681] = anon_sym_GT;
	v->a[19682] = anon_sym_GT_GT;
	v->a[19683] = anon_sym_LT_LT;
	v->a[19684] = anon_sym_CARET;
	v->a[19685] = anon_sym_AMP;
	v->a[19686] = anon_sym_PLUS;
	v->a[19687] = anon_sym_DASH;
	v->a[19688] = actions(461);
	v->a[19689] = 18;
	v->a[19690] = anon_sym_RPAREN;
	v->a[19691] = anon_sym_AMP_AMP;
	v->a[19692] = anon_sym_PIPE_PIPE;
	v->a[19693] = anon_sym_PLUS_EQ;
	v->a[19694] = anon_sym_DASH_EQ;
	v->a[19695] = anon_sym_STAR_EQ;
	v->a[19696] = anon_sym_SLASH_EQ;
	v->a[19697] = anon_sym_PERCENT_EQ;
	v->a[19698] = anon_sym_LT_LT_EQ;
	v->a[19699] = anon_sym_GT_GT_EQ;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
