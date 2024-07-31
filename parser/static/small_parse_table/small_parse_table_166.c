/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_166.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_830(t_small_parse_table_array *v)
{
	v->a[16600] = anon_sym_PIPE_PIPE;
	v->a[16601] = anon_sym_RPAREN_RPAREN;
	v->a[16602] = anon_sym_PLUS_EQ;
	v->a[16603] = anon_sym_DASH_EQ;
	v->a[16604] = anon_sym_STAR_EQ;
	v->a[16605] = anon_sym_SLASH_EQ;
	v->a[16606] = anon_sym_PERCENT_EQ;
	v->a[16607] = anon_sym_LT_LT_EQ;
	v->a[16608] = anon_sym_GT_GT_EQ;
	v->a[16609] = anon_sym_AMP_EQ;
	v->a[16610] = anon_sym_CARET_EQ;
	v->a[16611] = anon_sym_PIPE_EQ;
	v->a[16612] = anon_sym_EQ_EQ;
	v->a[16613] = anon_sym_BANG_EQ;
	v->a[16614] = anon_sym_LT_EQ;
	v->a[16615] = anon_sym_GT_EQ;
	v->a[16616] = anon_sym_QMARK;
	v->a[16617] = anon_sym_COLON;
	v->a[16618] = 5;
	v->a[16619] = actions(3);
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = 1;
	v->a[16621] = sym_comment;
	v->a[16622] = actions(399);
	v->a[16623] = 1;
	v->a[16624] = sym_variable_name;
	v->a[16625] = actions(397);
	v->a[16626] = 2;
	v->a[16627] = aux_sym__simple_variable_name_token1;
	v->a[16628] = aux_sym__multiline_variable_name_token1;
	v->a[16629] = actions(395);
	v->a[16630] = 8;
	v->a[16631] = anon_sym_BANG;
	v->a[16632] = anon_sym_DASH;
	v->a[16633] = anon_sym_STAR;
	v->a[16634] = anon_sym_QMARK;
	v->a[16635] = anon_sym_DOLLAR;
	v->a[16636] = anon_sym_POUND;
	v->a[16637] = anon_sym_AT;
	v->a[16638] = anon_sym_0;
	v->a[16639] = actions(345);
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = 23;
	v->a[16641] = anon_sym_PIPE;
	v->a[16642] = anon_sym_SEMI_SEMI;
	v->a[16643] = anon_sym_AMP_AMP;
	v->a[16644] = anon_sym_PIPE_PIPE;
	v->a[16645] = anon_sym_LT;
	v->a[16646] = anon_sym_GT;
	v->a[16647] = anon_sym_GT_GT;
	v->a[16648] = anon_sym_LT_AMP;
	v->a[16649] = anon_sym_GT_AMP;
	v->a[16650] = anon_sym_GT_PIPE;
	v->a[16651] = anon_sym_LT_GT;
	v->a[16652] = anon_sym_LT_LT;
	v->a[16653] = anon_sym_LT_LT_DASH;
	v->a[16654] = aux_sym_heredoc_redirect_token1;
	v->a[16655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16656] = anon_sym_DQUOTE;
	v->a[16657] = sym_raw_string;
	v->a[16658] = sym_number;
	v->a[16659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = anon_sym_DOLLAR_LPAREN;
	v->a[16661] = anon_sym_BQUOTE;
	v->a[16662] = sym_word;
	v->a[16663] = anon_sym_SEMI;
	v->a[16664] = 15;
	v->a[16665] = actions(407);
	v->a[16666] = 1;
	v->a[16667] = sym_comment;
	v->a[16668] = actions(409);
	v->a[16669] = 1;
	v->a[16670] = anon_sym_PIPE;
	v->a[16671] = actions(411);
	v->a[16672] = 1;
	v->a[16673] = anon_sym_AMP_AMP;
	v->a[16674] = actions(413);
	v->a[16675] = 1;
	v->a[16676] = anon_sym_PIPE_PIPE;
	v->a[16677] = actions(415);
	v->a[16678] = 1;
	v->a[16679] = anon_sym_EQ;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = actions(423);
	v->a[16681] = 1;
	v->a[16682] = anon_sym_CARET;
	v->a[16683] = actions(425);
	v->a[16684] = 1;
	v->a[16685] = anon_sym_AMP;
	v->a[16686] = actions(405);
	v->a[16687] = 2;
	v->a[16688] = anon_sym_PLUS_PLUS2;
	v->a[16689] = anon_sym_DASH_DASH2;
	v->a[16690] = actions(417);
	v->a[16691] = 2;
	v->a[16692] = anon_sym_LT;
	v->a[16693] = anon_sym_GT;
	v->a[16694] = actions(419);
	v->a[16695] = 2;
	v->a[16696] = anon_sym_GT_GT;
	v->a[16697] = anon_sym_LT_LT;
	v->a[16698] = actions(427);
	v->a[16699] = 2;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
