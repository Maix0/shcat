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
	v->a[21400] = anon_sym_LT_GT;
	v->a[21401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21402] = anon_sym_DOLLAR;
	v->a[21403] = anon_sym_DQUOTE;
	v->a[21404] = sym_raw_string;
	v->a[21405] = sym_number;
	v->a[21406] = anon_sym_DOLLAR_LBRACE;
	v->a[21407] = anon_sym_DOLLAR_LPAREN;
	v->a[21408] = anon_sym_BQUOTE;
	v->a[21409] = sym_word;
	v->a[21410] = 3;
	v->a[21411] = actions(680);
	v->a[21412] = 1;
	v->a[21413] = sym_comment;
	v->a[21414] = actions(707);
	v->a[21415] = 13;
	v->a[21416] = anon_sym_PIPE;
	v->a[21417] = anon_sym_EQ;
	v->a[21418] = anon_sym_LT;
	v->a[21419] = anon_sym_GT;
	small_parse_table_1071(v);
}

void	small_parse_table_1071(t_small_parse_table_array *v)
{
	v->a[21420] = anon_sym_GT_GT;
	v->a[21421] = anon_sym_LT_LT;
	v->a[21422] = anon_sym_CARET;
	v->a[21423] = anon_sym_AMP;
	v->a[21424] = anon_sym_PLUS;
	v->a[21425] = anon_sym_DASH;
	v->a[21426] = anon_sym_STAR;
	v->a[21427] = anon_sym_SLASH;
	v->a[21428] = anon_sym_PERCENT;
	v->a[21429] = actions(709);
	v->a[21430] = 21;
	v->a[21431] = anon_sym_AMP_AMP;
	v->a[21432] = anon_sym_PIPE_PIPE;
	v->a[21433] = anon_sym_RPAREN_RPAREN;
	v->a[21434] = anon_sym_PLUS_EQ;
	v->a[21435] = anon_sym_DASH_EQ;
	v->a[21436] = anon_sym_STAR_EQ;
	v->a[21437] = anon_sym_SLASH_EQ;
	v->a[21438] = anon_sym_PERCENT_EQ;
	v->a[21439] = anon_sym_LT_LT_EQ;
	small_parse_table_1072(v);
}

void	small_parse_table_1072(t_small_parse_table_array *v)
{
	v->a[21440] = anon_sym_GT_GT_EQ;
	v->a[21441] = anon_sym_AMP_EQ;
	v->a[21442] = anon_sym_CARET_EQ;
	v->a[21443] = anon_sym_PIPE_EQ;
	v->a[21444] = anon_sym_EQ_EQ;
	v->a[21445] = anon_sym_BANG_EQ;
	v->a[21446] = anon_sym_LT_EQ;
	v->a[21447] = anon_sym_GT_EQ;
	v->a[21448] = anon_sym_QMARK;
	v->a[21449] = anon_sym_COLON;
	v->a[21450] = anon_sym_PLUS_PLUS2;
	v->a[21451] = anon_sym_DASH_DASH2;
	v->a[21452] = 12;
	v->a[21453] = actions(3);
	v->a[21454] = 1;
	v->a[21455] = sym_comment;
	v->a[21456] = actions(692);
	v->a[21457] = 1;
	v->a[21458] = anon_sym_PIPE;
	v->a[21459] = actions(702);
	small_parse_table_1073(v);
}

void	small_parse_table_1073(t_small_parse_table_array *v)
{
	v->a[21460] = 1;
	v->a[21461] = sym_file_descriptor;
	v->a[21462] = actions(704);
	v->a[21463] = 1;
	v->a[21464] = sym_variable_name;
	v->a[21465] = actions(724);
	v->a[21466] = 1;
	v->a[21467] = anon_sym_RPAREN;
	v->a[21468] = state(695);
	v->a[21469] = 1;
	v->a[21470] = sym_terminator;
	v->a[21471] = actions(698);
	v->a[21472] = 2;
	v->a[21473] = anon_sym_AMP_AMP;
	v->a[21474] = anon_sym_PIPE_PIPE;
	v->a[21475] = actions(700);
	v->a[21476] = 2;
	v->a[21477] = anon_sym_LT_LT;
	v->a[21478] = anon_sym_LT_LT_DASH;
	v->a[21479] = state(1078);
	small_parse_table_1074(v);
}

void	small_parse_table_1074(t_small_parse_table_array *v)
{
	v->a[21480] = 2;
	v->a[21481] = sym_variable_assignment;
	v->a[21482] = aux_sym__variable_assignments_repeat1;
	v->a[21483] = state(1031);
	v->a[21484] = 3;
	v->a[21485] = sym_file_redirect;
	v->a[21486] = sym_heredoc_redirect;
	v->a[21487] = aux_sym_redirected_statement_repeat1;
	v->a[21488] = actions(696);
	v->a[21489] = 4;
	v->a[21490] = anon_sym_SEMI_SEMI;
	v->a[21491] = aux_sym_heredoc_redirect_token1;
	v->a[21492] = anon_sym_AMP;
	v->a[21493] = anon_sym_SEMI;
	v->a[21494] = actions(690);
	v->a[21495] = 16;
	v->a[21496] = anon_sym_LT;
	v->a[21497] = anon_sym_GT;
	v->a[21498] = anon_sym_GT_GT;
	v->a[21499] = anon_sym_LT_AMP;
	small_parse_table_1075(v);
}

/* EOF small_parse_table_214.c */
