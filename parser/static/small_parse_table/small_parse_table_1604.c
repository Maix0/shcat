/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1604.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8020(t_small_parse_table_array *v)
{
	v->a[160400] = 36;
	v->a[160401] = anon_sym_SEMI;
	v->a[160402] = anon_sym_COMMA;
	v->a[160403] = anon_sym_PLUS_PLUS;
	v->a[160404] = anon_sym_DASH_DASH;
	v->a[160405] = anon_sym_PLUS_EQ;
	v->a[160406] = anon_sym_DASH_EQ;
	v->a[160407] = anon_sym_STAR_EQ;
	v->a[160408] = anon_sym_SLASH_EQ;
	v->a[160409] = anon_sym_PERCENT_EQ;
	v->a[160410] = anon_sym_STAR_STAR_EQ;
	v->a[160411] = anon_sym_LT_LT_EQ;
	v->a[160412] = anon_sym_GT_GT_EQ;
	v->a[160413] = anon_sym_AMP_EQ;
	v->a[160414] = anon_sym_CARET_EQ;
	v->a[160415] = anon_sym_PIPE_EQ;
	v->a[160416] = anon_sym_PIPE_PIPE;
	v->a[160417] = anon_sym_DASHo;
	v->a[160418] = anon_sym_AMP_AMP;
	v->a[160419] = anon_sym_DASHa;
	small_parse_table_8021(v);
}

void	small_parse_table_8021(t_small_parse_table_array *v)
{
	v->a[160420] = anon_sym_PIPE;
	v->a[160421] = anon_sym_CARET;
	v->a[160422] = anon_sym_AMP;
	v->a[160423] = anon_sym_EQ_EQ;
	v->a[160424] = anon_sym_BANG_EQ;
	v->a[160425] = anon_sym_LT;
	v->a[160426] = anon_sym_GT;
	v->a[160427] = anon_sym_LT_EQ;
	v->a[160428] = anon_sym_GT_EQ;
	v->a[160429] = anon_sym_LT_LT;
	v->a[160430] = anon_sym_GT_GT;
	v->a[160431] = anon_sym_PLUS;
	v->a[160432] = anon_sym_DASH;
	v->a[160433] = anon_sym_STAR;
	v->a[160434] = anon_sym_SLASH;
	v->a[160435] = anon_sym_PERCENT;
	v->a[160436] = anon_sym_STAR_STAR;
	v->a[160437] = 8;
	v->a[160438] = actions(3);
	v->a[160439] = 1;
	small_parse_table_8022(v);
}

void	small_parse_table_8022(t_small_parse_table_array *v)
{
	v->a[160440] = sym_comment;
	v->a[160441] = actions(1235);
	v->a[160442] = 1;
	v->a[160443] = sym_file_descriptor;
	v->a[160444] = actions(7358);
	v->a[160445] = 1;
	v->a[160446] = anon_sym_DQUOTE;
	v->a[160447] = actions(7362);
	v->a[160448] = 1;
	v->a[160449] = sym_variable_name;
	v->a[160450] = state(4457);
	v->a[160451] = 1;
	v->a[160452] = sym_string;
	v->a[160453] = actions(7360);
	v->a[160454] = 2;
	v->a[160455] = aux_sym__simple_variable_name_token1;
	v->a[160456] = aux_sym__multiline_variable_name_token1;
	v->a[160457] = actions(7356);
	v->a[160458] = 9;
	v->a[160459] = anon_sym_DASH;
	small_parse_table_8023(v);
}

void	small_parse_table_8023(t_small_parse_table_array *v)
{
	v->a[160460] = anon_sym_STAR;
	v->a[160461] = anon_sym_BANG;
	v->a[160462] = anon_sym_QMARK;
	v->a[160463] = anon_sym_DOLLAR;
	v->a[160464] = anon_sym_POUND;
	v->a[160465] = anon_sym_AT2;
	v->a[160466] = anon_sym_0;
	v->a[160467] = anon_sym__;
	v->a[160468] = actions(1227);
	v->a[160469] = 22;
	v->a[160470] = anon_sym_SEMI;
	v->a[160471] = anon_sym_PIPE_PIPE;
	v->a[160472] = anon_sym_AMP_AMP;
	v->a[160473] = anon_sym_PIPE;
	v->a[160474] = anon_sym_AMP;
	v->a[160475] = anon_sym_LT;
	v->a[160476] = anon_sym_GT;
	v->a[160477] = anon_sym_LT_LT;
	v->a[160478] = anon_sym_GT_GT;
	v->a[160479] = anon_sym_SEMI_SEMI;
	small_parse_table_8024(v);
}

void	small_parse_table_8024(t_small_parse_table_array *v)
{
	v->a[160480] = anon_sym_SEMI_AMP;
	v->a[160481] = anon_sym_SEMI_SEMI_AMP;
	v->a[160482] = anon_sym_PIPE_AMP;
	v->a[160483] = anon_sym_AMP_GT;
	v->a[160484] = anon_sym_AMP_GT_GT;
	v->a[160485] = anon_sym_LT_AMP;
	v->a[160486] = anon_sym_GT_AMP;
	v->a[160487] = anon_sym_GT_PIPE;
	v->a[160488] = anon_sym_LT_AMP_DASH;
	v->a[160489] = anon_sym_GT_AMP_DASH;
	v->a[160490] = anon_sym_LT_LT_DASH;
	v->a[160491] = aux_sym_heredoc_redirect_token1;
	v->a[160492] = 4;
	v->a[160493] = actions(71);
	v->a[160494] = 1;
	v->a[160495] = sym_comment;
	v->a[160496] = actions(7366);
	v->a[160497] = 1;
	v->a[160498] = sym__concat;
	v->a[160499] = actions(6829);
	small_parse_table_8025(v);
}

/* EOF small_parse_table_1604.c */
