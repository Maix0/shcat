/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_214.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1070(t_small_parse_table_array *v)
{
	v->a[21400] = 2;
	v->a[21401] = anon_sym_GT_GT;
	v->a[21402] = anon_sym_LT_LT;
	v->a[21403] = actions(427);
	v->a[21404] = 2;
	v->a[21405] = anon_sym_EQ_EQ;
	v->a[21406] = anon_sym_BANG_EQ;
	v->a[21407] = actions(429);
	v->a[21408] = 2;
	v->a[21409] = anon_sym_LT_EQ;
	v->a[21410] = anon_sym_GT_EQ;
	v->a[21411] = actions(431);
	v->a[21412] = 2;
	v->a[21413] = anon_sym_PLUS;
	v->a[21414] = anon_sym_DASH;
	v->a[21415] = actions(433);
	v->a[21416] = 3;
	v->a[21417] = anon_sym_STAR;
	v->a[21418] = anon_sym_SLASH;
	v->a[21419] = anon_sym_PERCENT;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = actions(493);
	v->a[21421] = 10;
	v->a[21422] = anon_sym_PLUS_EQ;
	v->a[21423] = anon_sym_DASH_EQ;
	v->a[21424] = anon_sym_STAR_EQ;
	v->a[21425] = anon_sym_SLASH_EQ;
	v->a[21426] = anon_sym_PERCENT_EQ;
	v->a[21427] = anon_sym_LT_LT_EQ;
	v->a[21428] = anon_sym_GT_GT_EQ;
	v->a[21429] = anon_sym_AMP_EQ;
	v->a[21430] = anon_sym_CARET_EQ;
	v->a[21431] = anon_sym_PIPE_EQ;
	v->a[21432] = 6;
	v->a[21433] = actions(3);
	v->a[21434] = 1;
	v->a[21435] = sym_comment;
	v->a[21436] = actions(343);
	v->a[21437] = 1;
	v->a[21438] = sym__bare_dollar;
	v->a[21439] = actions(363);
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = 1;
	v->a[21441] = sym_variable_name;
	v->a[21442] = actions(361);
	v->a[21443] = 2;
	v->a[21444] = aux_sym__simple_variable_name_token1;
	v->a[21445] = aux_sym__multiline_variable_name_token1;
	v->a[21446] = actions(359);
	v->a[21447] = 8;
	v->a[21448] = anon_sym_BANG;
	v->a[21449] = anon_sym_DASH;
	v->a[21450] = anon_sym_STAR;
	v->a[21451] = anon_sym_QMARK;
	v->a[21452] = anon_sym_DOLLAR;
	v->a[21453] = anon_sym_POUND;
	v->a[21454] = anon_sym_AT;
	v->a[21455] = anon_sym_0;
	v->a[21456] = actions(345);
	v->a[21457] = 21;
	v->a[21458] = anon_sym_PIPE;
	v->a[21459] = anon_sym_AMP_AMP;
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = anon_sym_PIPE_PIPE;
	v->a[21461] = anon_sym_LT;
	v->a[21462] = anon_sym_GT;
	v->a[21463] = anon_sym_GT_GT;
	v->a[21464] = anon_sym_LT_AMP;
	v->a[21465] = anon_sym_GT_AMP;
	v->a[21466] = anon_sym_GT_PIPE;
	v->a[21467] = anon_sym_LT_GT;
	v->a[21468] = anon_sym_LT_LT;
	v->a[21469] = anon_sym_LT_LT_DASH;
	v->a[21470] = aux_sym_heredoc_redirect_token1;
	v->a[21471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21472] = anon_sym_DQUOTE;
	v->a[21473] = sym_raw_string;
	v->a[21474] = sym_number;
	v->a[21475] = anon_sym_DOLLAR_LBRACE;
	v->a[21476] = anon_sym_DOLLAR_LPAREN;
	v->a[21477] = anon_sym_BQUOTE;
	v->a[21478] = sym_word;
	v->a[21479] = 17;
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = actions(407);
	v->a[21481] = 1;
	v->a[21482] = sym_comment;
	v->a[21483] = actions(409);
	v->a[21484] = 1;
	v->a[21485] = anon_sym_PIPE;
	v->a[21486] = actions(411);
	v->a[21487] = 1;
	v->a[21488] = anon_sym_AMP_AMP;
	v->a[21489] = actions(413);
	v->a[21490] = 1;
	v->a[21491] = anon_sym_PIPE_PIPE;
	v->a[21492] = actions(423);
	v->a[21493] = 1;
	v->a[21494] = anon_sym_CARET;
	v->a[21495] = actions(425);
	v->a[21496] = 1;
	v->a[21497] = anon_sym_AMP;
	v->a[21498] = actions(479);
	v->a[21499] = 1;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
