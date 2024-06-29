/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_406.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2030(t_small_parse_table_array *v)
{
	v->a[40600] = anon_sym_GT_AMP;
	v->a[40601] = anon_sym_GT_PIPE;
	v->a[40602] = anon_sym_LT_AMP_DASH;
	v->a[40603] = anon_sym_GT_AMP_DASH;
	v->a[40604] = anon_sym_LT_LT;
	v->a[40605] = anon_sym_LT_LT_DASH;
	v->a[40606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40607] = anon_sym_DOLLAR;
	v->a[40608] = anon_sym_DQUOTE;
	v->a[40609] = sym_raw_string;
	v->a[40610] = sym_number;
	v->a[40611] = anon_sym_DOLLAR_LBRACE;
	v->a[40612] = anon_sym_DOLLAR_LPAREN;
	v->a[40613] = anon_sym_BQUOTE;
	v->a[40614] = sym_word;
	v->a[40615] = 17;
	v->a[40616] = actions(1074);
	v->a[40617] = 1;
	v->a[40618] = sym_comment;
	v->a[40619] = actions(1136);
	small_parse_table_2031(v);
}

void	small_parse_table_2031(t_small_parse_table_array *v)
{
	v->a[40620] = 1;
	v->a[40621] = anon_sym_PIPE;
	v->a[40622] = actions(1138);
	v->a[40623] = 1;
	v->a[40624] = anon_sym_AMP_AMP;
	v->a[40625] = actions(1140);
	v->a[40626] = 1;
	v->a[40627] = anon_sym_PIPE_PIPE;
	v->a[40628] = actions(1150);
	v->a[40629] = 1;
	v->a[40630] = anon_sym_CARET;
	v->a[40631] = actions(1152);
	v->a[40632] = 1;
	v->a[40633] = anon_sym_AMP;
	v->a[40634] = actions(1239);
	v->a[40635] = 1;
	v->a[40636] = anon_sym_EQ;
	v->a[40637] = actions(1241);
	v->a[40638] = 1;
	v->a[40639] = anon_sym_QMARK;
	small_parse_table_2032(v);
}

void	small_parse_table_2032(t_small_parse_table_array *v)
{
	v->a[40640] = actions(1430);
	v->a[40641] = 1;
	v->a[40642] = anon_sym_RPAREN_RPAREN;
	v->a[40643] = actions(1144);
	v->a[40644] = 2;
	v->a[40645] = anon_sym_LT;
	v->a[40646] = anon_sym_GT;
	v->a[40647] = actions(1146);
	v->a[40648] = 2;
	v->a[40649] = anon_sym_GT_GT;
	v->a[40650] = anon_sym_LT_LT;
	v->a[40651] = actions(1154);
	v->a[40652] = 2;
	v->a[40653] = anon_sym_EQ_EQ;
	v->a[40654] = anon_sym_BANG_EQ;
	v->a[40655] = actions(1156);
	v->a[40656] = 2;
	v->a[40657] = anon_sym_LT_EQ;
	v->a[40658] = anon_sym_GT_EQ;
	v->a[40659] = actions(1158);
	small_parse_table_2033(v);
}

void	small_parse_table_2033(t_small_parse_table_array *v)
{
	v->a[40660] = 2;
	v->a[40661] = anon_sym_PLUS;
	v->a[40662] = anon_sym_DASH;
	v->a[40663] = actions(1162);
	v->a[40664] = 2;
	v->a[40665] = anon_sym_PLUS_PLUS2;
	v->a[40666] = anon_sym_DASH_DASH2;
	v->a[40667] = actions(1160);
	v->a[40668] = 3;
	v->a[40669] = anon_sym_STAR;
	v->a[40670] = anon_sym_SLASH;
	v->a[40671] = anon_sym_PERCENT;
	v->a[40672] = actions(1252);
	v->a[40673] = 10;
	v->a[40674] = anon_sym_PLUS_EQ;
	v->a[40675] = anon_sym_DASH_EQ;
	v->a[40676] = anon_sym_STAR_EQ;
	v->a[40677] = anon_sym_SLASH_EQ;
	v->a[40678] = anon_sym_PERCENT_EQ;
	v->a[40679] = anon_sym_LT_LT_EQ;
	small_parse_table_2034(v);
}

void	small_parse_table_2034(t_small_parse_table_array *v)
{
	v->a[40680] = anon_sym_GT_GT_EQ;
	v->a[40681] = anon_sym_AMP_EQ;
	v->a[40682] = anon_sym_CARET_EQ;
	v->a[40683] = anon_sym_PIPE_EQ;
	v->a[40684] = 3;
	v->a[40685] = actions(3);
	v->a[40686] = 1;
	v->a[40687] = sym_comment;
	v->a[40688] = actions(1056);
	v->a[40689] = 3;
	v->a[40690] = sym_file_descriptor;
	v->a[40691] = sym__concat;
	v->a[40692] = sym__bare_dollar;
	v->a[40693] = actions(1058);
	v->a[40694] = 30;
	v->a[40695] = anon_sym_PIPE;
	v->a[40696] = anon_sym_RPAREN;
	v->a[40697] = anon_sym_SEMI_SEMI;
	v->a[40698] = anon_sym_AMP_AMP;
	v->a[40699] = anon_sym_PIPE_PIPE;
	small_parse_table_2035(v);
}

/* EOF small_parse_table_406.c */
