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
	v->a[34600] = 30;
	v->a[34601] = anon_sym_esac;
	v->a[34602] = anon_sym_PIPE;
	v->a[34603] = anon_sym_SEMI_SEMI;
	v->a[34604] = anon_sym_AMP_AMP;
	v->a[34605] = anon_sym_PIPE_PIPE;
	v->a[34606] = anon_sym_LT;
	v->a[34607] = anon_sym_GT;
	v->a[34608] = anon_sym_GT_GT;
	v->a[34609] = anon_sym_AMP_GT;
	v->a[34610] = anon_sym_AMP_GT_GT;
	v->a[34611] = anon_sym_LT_AMP;
	v->a[34612] = anon_sym_GT_AMP;
	v->a[34613] = anon_sym_GT_PIPE;
	v->a[34614] = anon_sym_LT_AMP_DASH;
	v->a[34615] = anon_sym_GT_AMP_DASH;
	v->a[34616] = anon_sym_LT_LT;
	v->a[34617] = anon_sym_LT_LT_DASH;
	v->a[34618] = aux_sym_heredoc_redirect_token1;
	v->a[34619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1731(v);
}

void	small_parse_table_1731(t_small_parse_table_array *v)
{
	v->a[34620] = anon_sym_AMP;
	v->a[34621] = aux_sym_concatenation_token1;
	v->a[34622] = anon_sym_DOLLAR;
	v->a[34623] = anon_sym_DQUOTE;
	v->a[34624] = sym_raw_string;
	v->a[34625] = sym_number;
	v->a[34626] = anon_sym_DOLLAR_LBRACE;
	v->a[34627] = anon_sym_DOLLAR_LPAREN;
	v->a[34628] = anon_sym_BQUOTE;
	v->a[34629] = sym_word;
	v->a[34630] = anon_sym_SEMI;
	v->a[34631] = 17;
	v->a[34632] = actions(1094);
	v->a[34633] = 1;
	v->a[34634] = sym_comment;
	v->a[34635] = actions(1108);
	v->a[34636] = 1;
	v->a[34637] = anon_sym_PIPE;
	v->a[34638] = actions(1110);
	v->a[34639] = 1;
	small_parse_table_1732(v);
}

void	small_parse_table_1732(t_small_parse_table_array *v)
{
	v->a[34640] = anon_sym_AMP_AMP;
	v->a[34641] = actions(1112);
	v->a[34642] = 1;
	v->a[34643] = anon_sym_CARET;
	v->a[34644] = actions(1114);
	v->a[34645] = 1;
	v->a[34646] = anon_sym_AMP;
	v->a[34647] = actions(1126);
	v->a[34648] = 1;
	v->a[34649] = anon_sym_PIPE_PIPE;
	v->a[34650] = actions(1128);
	v->a[34651] = 1;
	v->a[34652] = anon_sym_QMARK;
	v->a[34653] = actions(1155);
	v->a[34654] = 1;
	v->a[34655] = anon_sym_EQ;
	v->a[34656] = actions(1296);
	v->a[34657] = 1;
	v->a[34658] = anon_sym_RPAREN_RPAREN;
	v->a[34659] = actions(1082);
	small_parse_table_1733(v);
}

void	small_parse_table_1733(t_small_parse_table_array *v)
{
	v->a[34660] = 2;
	v->a[34661] = anon_sym_LT;
	v->a[34662] = anon_sym_GT;
	v->a[34663] = actions(1084);
	v->a[34664] = 2;
	v->a[34665] = anon_sym_GT_GT;
	v->a[34666] = anon_sym_LT_LT;
	v->a[34667] = actions(1086);
	v->a[34668] = 2;
	v->a[34669] = anon_sym_LT_EQ;
	v->a[34670] = anon_sym_GT_EQ;
	v->a[34671] = actions(1088);
	v->a[34672] = 2;
	v->a[34673] = anon_sym_PLUS;
	v->a[34674] = anon_sym_DASH;
	v->a[34675] = actions(1092);
	v->a[34676] = 2;
	v->a[34677] = anon_sym_PLUS_PLUS2;
	v->a[34678] = anon_sym_DASH_DASH2;
	v->a[34679] = actions(1116);
	small_parse_table_1734(v);
}

void	small_parse_table_1734(t_small_parse_table_array *v)
{
	v->a[34680] = 2;
	v->a[34681] = anon_sym_EQ_EQ;
	v->a[34682] = anon_sym_BANG_EQ;
	v->a[34683] = actions(1090);
	v->a[34684] = 3;
	v->a[34685] = anon_sym_STAR;
	v->a[34686] = anon_sym_SLASH;
	v->a[34687] = anon_sym_PERCENT;
	v->a[34688] = actions(1288);
	v->a[34689] = 10;
	v->a[34690] = anon_sym_PLUS_EQ;
	v->a[34691] = anon_sym_DASH_EQ;
	v->a[34692] = anon_sym_STAR_EQ;
	v->a[34693] = anon_sym_SLASH_EQ;
	v->a[34694] = anon_sym_PERCENT_EQ;
	v->a[34695] = anon_sym_LT_LT_EQ;
	v->a[34696] = anon_sym_GT_GT_EQ;
	v->a[34697] = anon_sym_AMP_EQ;
	v->a[34698] = anon_sym_CARET_EQ;
	v->a[34699] = anon_sym_PIPE_EQ;
	small_parse_table_1735(v);
}

/* EOF small_parse_table_346.c */
