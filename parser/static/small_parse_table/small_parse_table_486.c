/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_486.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2430(t_small_parse_table_array *v)
{
	v->a[48600] = anon_sym_AMP_GT;
	v->a[48601] = anon_sym_AMP_GT_GT;
	v->a[48602] = anon_sym_LT_AMP;
	v->a[48603] = anon_sym_GT_AMP;
	v->a[48604] = anon_sym_GT_PIPE;
	v->a[48605] = anon_sym_LT_AMP_DASH;
	v->a[48606] = anon_sym_GT_AMP_DASH;
	v->a[48607] = anon_sym_LT_LT;
	v->a[48608] = anon_sym_LT_LT_DASH;
	v->a[48609] = aux_sym_heredoc_redirect_token1;
	v->a[48610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48611] = anon_sym_DOLLAR;
	v->a[48612] = anon_sym_DQUOTE;
	v->a[48613] = sym_raw_string;
	v->a[48614] = sym_number;
	v->a[48615] = anon_sym_DOLLAR_LBRACE;
	v->a[48616] = anon_sym_DOLLAR_LPAREN;
	v->a[48617] = anon_sym_BQUOTE;
	v->a[48618] = sym_word;
	v->a[48619] = 6;
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = actions(3);
	v->a[48621] = 1;
	v->a[48622] = sym_comment;
	v->a[48623] = actions(385);
	v->a[48624] = 1;
	v->a[48625] = sym_file_descriptor;
	v->a[48626] = actions(1660);
	v->a[48627] = 1;
	v->a[48628] = sym_variable_name;
	v->a[48629] = actions(1658);
	v->a[48630] = 2;
	v->a[48631] = aux_sym__simple_variable_name_token1;
	v->a[48632] = aux_sym__multiline_variable_name_token1;
	v->a[48633] = actions(1656);
	v->a[48634] = 9;
	v->a[48635] = anon_sym_BANG;
	v->a[48636] = anon_sym_DASH;
	v->a[48637] = anon_sym_STAR;
	v->a[48638] = anon_sym_QMARK;
	v->a[48639] = anon_sym_DOLLAR;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = anon_sym_POUND;
	v->a[48641] = anon_sym_AT;
	v->a[48642] = anon_sym_0;
	v->a[48643] = anon_sym__;
	v->a[48644] = actions(379);
	v->a[48645] = 18;
	v->a[48646] = anon_sym_LT;
	v->a[48647] = anon_sym_GT;
	v->a[48648] = anon_sym_GT_GT;
	v->a[48649] = anon_sym_AMP_GT;
	v->a[48650] = anon_sym_AMP_GT_GT;
	v->a[48651] = anon_sym_LT_AMP;
	v->a[48652] = anon_sym_GT_AMP;
	v->a[48653] = anon_sym_GT_PIPE;
	v->a[48654] = anon_sym_LT_AMP_DASH;
	v->a[48655] = anon_sym_GT_AMP_DASH;
	v->a[48656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48657] = anon_sym_DQUOTE;
	v->a[48658] = sym_raw_string;
	v->a[48659] = sym_number;
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = anon_sym_DOLLAR_LBRACE;
	v->a[48661] = anon_sym_DOLLAR_LPAREN;
	v->a[48662] = anon_sym_BQUOTE;
	v->a[48663] = sym_word;
	v->a[48664] = 7;
	v->a[48665] = actions(3);
	v->a[48666] = 1;
	v->a[48667] = sym_comment;
	v->a[48668] = actions(1536);
	v->a[48669] = 1;
	v->a[48670] = sym_file_descriptor;
	v->a[48671] = actions(1539);
	v->a[48672] = 1;
	v->a[48673] = sym_variable_name;
	v->a[48674] = actions(1662);
	v->a[48675] = 1;
	v->a[48676] = anon_sym_RPAREN;
	v->a[48677] = actions(1526);
	v->a[48678] = 9;
	v->a[48679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = anon_sym_DOLLAR;
	v->a[48681] = anon_sym_DQUOTE;
	v->a[48682] = sym_raw_string;
	v->a[48683] = sym_number;
	v->a[48684] = anon_sym_DOLLAR_LBRACE;
	v->a[48685] = anon_sym_DOLLAR_LPAREN;
	v->a[48686] = anon_sym_BQUOTE;
	v->a[48687] = sym_word;
	v->a[48688] = actions(1528);
	v->a[48689] = 9;
	v->a[48690] = anon_sym_PIPE;
	v->a[48691] = anon_sym_SEMI_SEMI;
	v->a[48692] = anon_sym_AMP_AMP;
	v->a[48693] = anon_sym_PIPE_PIPE;
	v->a[48694] = anon_sym_LT_LT;
	v->a[48695] = anon_sym_LT_LT_DASH;
	v->a[48696] = aux_sym_heredoc_redirect_token1;
	v->a[48697] = anon_sym_AMP;
	v->a[48698] = anon_sym_SEMI;
	v->a[48699] = actions(1533);
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
