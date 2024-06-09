/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_443.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2215(t_small_parse_table_array *v)
{
	v->a[44300] = anon_sym_CARET;
	v->a[44301] = anon_sym_AMP;
	v->a[44302] = anon_sym_PLUS;
	v->a[44303] = anon_sym_DASH;
	v->a[44304] = anon_sym_STAR;
	v->a[44305] = anon_sym_SLASH;
	v->a[44306] = anon_sym_PERCENT;
	v->a[44307] = actions(1251);
	v->a[44308] = 20;
	v->a[44309] = anon_sym_RPAREN;
	v->a[44310] = anon_sym_AMP_AMP;
	v->a[44311] = anon_sym_PIPE_PIPE;
	v->a[44312] = anon_sym_PLUS_EQ;
	v->a[44313] = anon_sym_DASH_EQ;
	v->a[44314] = anon_sym_STAR_EQ;
	v->a[44315] = anon_sym_SLASH_EQ;
	v->a[44316] = anon_sym_PERCENT_EQ;
	v->a[44317] = anon_sym_LT_LT_EQ;
	v->a[44318] = anon_sym_GT_GT_EQ;
	v->a[44319] = anon_sym_AMP_EQ;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = anon_sym_CARET_EQ;
	v->a[44321] = anon_sym_PIPE_EQ;
	v->a[44322] = anon_sym_EQ_EQ;
	v->a[44323] = anon_sym_BANG_EQ;
	v->a[44324] = anon_sym_LT_EQ;
	v->a[44325] = anon_sym_GT_EQ;
	v->a[44326] = anon_sym_QMARK;
	v->a[44327] = anon_sym_PLUS_PLUS2;
	v->a[44328] = anon_sym_DASH_DASH2;
	v->a[44329] = 6;
	v->a[44330] = actions(3);
	v->a[44331] = 1;
	v->a[44332] = sym_comment;
	v->a[44333] = actions(413);
	v->a[44334] = 1;
	v->a[44335] = sym_file_descriptor;
	v->a[44336] = actions(1650);
	v->a[44337] = 1;
	v->a[44338] = sym_variable_name;
	v->a[44339] = actions(1648);
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = 2;
	v->a[44341] = aux_sym__simple_variable_name_token1;
	v->a[44342] = aux_sym__multiline_variable_name_token1;
	v->a[44343] = actions(1646);
	v->a[44344] = 9;
	v->a[44345] = anon_sym_BANG;
	v->a[44346] = anon_sym_DASH;
	v->a[44347] = anon_sym_STAR;
	v->a[44348] = anon_sym_QMARK;
	v->a[44349] = anon_sym_DOLLAR;
	v->a[44350] = anon_sym_POUND;
	v->a[44351] = anon_sym_AT;
	v->a[44352] = anon_sym_0;
	v->a[44353] = anon_sym__;
	v->a[44354] = actions(407);
	v->a[44355] = 20;
	v->a[44356] = anon_sym_PIPE;
	v->a[44357] = anon_sym_SEMI_SEMI;
	v->a[44358] = anon_sym_AMP_AMP;
	v->a[44359] = anon_sym_PIPE_PIPE;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = anon_sym_LT;
	v->a[44361] = anon_sym_GT;
	v->a[44362] = anon_sym_GT_GT;
	v->a[44363] = anon_sym_AMP_GT;
	v->a[44364] = anon_sym_AMP_GT_GT;
	v->a[44365] = anon_sym_LT_AMP;
	v->a[44366] = anon_sym_GT_AMP;
	v->a[44367] = anon_sym_GT_PIPE;
	v->a[44368] = anon_sym_LT_AMP_DASH;
	v->a[44369] = anon_sym_GT_AMP_DASH;
	v->a[44370] = anon_sym_LT_LT;
	v->a[44371] = anon_sym_LT_LT_DASH;
	v->a[44372] = aux_sym_heredoc_redirect_token1;
	v->a[44373] = anon_sym_AMP;
	v->a[44374] = anon_sym_BQUOTE;
	v->a[44375] = anon_sym_SEMI;
	v->a[44376] = 11;
	v->a[44377] = actions(1404);
	v->a[44378] = 1;
	v->a[44379] = sym_comment;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = actions(1574);
	v->a[44381] = 1;
	v->a[44382] = anon_sym_AMP;
	v->a[44383] = actions(1545);
	v->a[44384] = 2;
	v->a[44385] = anon_sym_PLUS_PLUS2;
	v->a[44386] = anon_sym_DASH_DASH2;
	v->a[44387] = actions(1568);
	v->a[44388] = 2;
	v->a[44389] = anon_sym_LT;
	v->a[44390] = anon_sym_GT;
	v->a[44391] = actions(1570);
	v->a[44392] = 2;
	v->a[44393] = anon_sym_GT_GT;
	v->a[44394] = anon_sym_LT_LT;
	v->a[44395] = actions(1576);
	v->a[44396] = 2;
	v->a[44397] = anon_sym_EQ_EQ;
	v->a[44398] = anon_sym_BANG_EQ;
	v->a[44399] = actions(1578);
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
