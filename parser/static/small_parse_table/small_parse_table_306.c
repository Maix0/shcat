/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_306.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1530(t_small_parse_table_array *v)
{
	v->a[30600] = anon_sym_LT_LT_DASH;
	v->a[30601] = aux_sym_heredoc_redirect_token1;
	v->a[30602] = anon_sym_AMP;
	v->a[30603] = anon_sym_BQUOTE;
	v->a[30604] = anon_sym_SEMI;
	v->a[30605] = 17;
	v->a[30606] = actions(842);
	v->a[30607] = 1;
	v->a[30608] = anon_sym_PIPE;
	v->a[30609] = actions(844);
	v->a[30610] = 1;
	v->a[30611] = anon_sym_AMP_AMP;
	v->a[30612] = actions(846);
	v->a[30613] = 1;
	v->a[30614] = anon_sym_PIPE_PIPE;
	v->a[30615] = actions(856);
	v->a[30616] = 1;
	v->a[30617] = anon_sym_CARET;
	v->a[30618] = actions(858);
	v->a[30619] = 1;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = anon_sym_AMP;
	v->a[30621] = actions(870);
	v->a[30622] = 1;
	v->a[30623] = sym_comment;
	v->a[30624] = actions(1021);
	v->a[30625] = 1;
	v->a[30626] = anon_sym_EQ;
	v->a[30627] = actions(1023);
	v->a[30628] = 1;
	v->a[30629] = anon_sym_QMARK;
	v->a[30630] = actions(1160);
	v->a[30631] = 1;
	v->a[30632] = anon_sym_RPAREN_RPAREN;
	v->a[30633] = actions(850);
	v->a[30634] = 2;
	v->a[30635] = anon_sym_LT;
	v->a[30636] = anon_sym_GT;
	v->a[30637] = actions(852);
	v->a[30638] = 2;
	v->a[30639] = anon_sym_GT_GT;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = anon_sym_LT_LT;
	v->a[30641] = actions(860);
	v->a[30642] = 2;
	v->a[30643] = anon_sym_EQ_EQ;
	v->a[30644] = anon_sym_BANG_EQ;
	v->a[30645] = actions(862);
	v->a[30646] = 2;
	v->a[30647] = anon_sym_LT_EQ;
	v->a[30648] = anon_sym_GT_EQ;
	v->a[30649] = actions(864);
	v->a[30650] = 2;
	v->a[30651] = anon_sym_PLUS;
	v->a[30652] = anon_sym_DASH;
	v->a[30653] = actions(868);
	v->a[30654] = 2;
	v->a[30655] = anon_sym_PLUS_PLUS2;
	v->a[30656] = anon_sym_DASH_DASH2;
	v->a[30657] = actions(866);
	v->a[30658] = 3;
	v->a[30659] = anon_sym_STAR;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = anon_sym_SLASH;
	v->a[30661] = anon_sym_PERCENT;
	v->a[30662] = actions(1079);
	v->a[30663] = 10;
	v->a[30664] = anon_sym_PLUS_EQ;
	v->a[30665] = anon_sym_DASH_EQ;
	v->a[30666] = anon_sym_STAR_EQ;
	v->a[30667] = anon_sym_SLASH_EQ;
	v->a[30668] = anon_sym_PERCENT_EQ;
	v->a[30669] = anon_sym_LT_LT_EQ;
	v->a[30670] = anon_sym_GT_GT_EQ;
	v->a[30671] = anon_sym_AMP_EQ;
	v->a[30672] = anon_sym_CARET_EQ;
	v->a[30673] = anon_sym_PIPE_EQ;
	v->a[30674] = 11;
	v->a[30675] = actions(3);
	v->a[30676] = 1;
	v->a[30677] = sym_comment;
	v->a[30678] = actions(713);
	v->a[30679] = 1;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = sym_file_descriptor;
	v->a[30681] = actions(910);
	v->a[30682] = 1;
	v->a[30683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30684] = actions(912);
	v->a[30685] = 1;
	v->a[30686] = anon_sym_DOLLAR;
	v->a[30687] = actions(914);
	v->a[30688] = 1;
	v->a[30689] = anon_sym_DQUOTE;
	v->a[30690] = actions(916);
	v->a[30691] = 1;
	v->a[30692] = anon_sym_DOLLAR_LBRACE;
	v->a[30693] = actions(918);
	v->a[30694] = 1;
	v->a[30695] = anon_sym_DOLLAR_LPAREN;
	v->a[30696] = state(1259);
	v->a[30697] = 1;
	v->a[30698] = sym_concatenation;
	v->a[30699] = actions(1162);
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
