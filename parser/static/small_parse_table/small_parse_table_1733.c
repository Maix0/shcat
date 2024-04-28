/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1733.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8665(t_small_parse_table_array *v)
{
	v->a[173300] = anon_sym_CARET;
	v->a[173301] = actions(7581);
	v->a[173302] = 1;
	v->a[173303] = anon_sym_AMP;
	v->a[173304] = actions(7595);
	v->a[173305] = 1;
	v->a[173306] = anon_sym_STAR_STAR;
	v->a[173307] = actions(7597);
	v->a[173308] = 1;
	v->a[173309] = anon_sym_EQ_TILDE;
	v->a[173310] = actions(7599);
	v->a[173311] = 1;
	v->a[173312] = anon_sym_QMARK;
	v->a[173313] = actions(7569);
	v->a[173314] = 2;
	v->a[173315] = anon_sym_PLUS_PLUS;
	v->a[173316] = anon_sym_DASH_DASH;
	v->a[173317] = actions(7583);
	v->a[173318] = 2;
	v->a[173319] = anon_sym_EQ_EQ;
	small_parse_table_8666(v);
}

void	small_parse_table_8666(t_small_parse_table_array *v)
{
	v->a[173320] = anon_sym_BANG_EQ;
	v->a[173321] = actions(7585);
	v->a[173322] = 2;
	v->a[173323] = anon_sym_LT;
	v->a[173324] = anon_sym_GT;
	v->a[173325] = actions(7587);
	v->a[173326] = 2;
	v->a[173327] = anon_sym_LT_EQ;
	v->a[173328] = anon_sym_GT_EQ;
	v->a[173329] = actions(7589);
	v->a[173330] = 2;
	v->a[173331] = anon_sym_LT_LT;
	v->a[173332] = anon_sym_GT_GT;
	v->a[173333] = actions(7591);
	v->a[173334] = 2;
	v->a[173335] = anon_sym_PLUS;
	v->a[173336] = anon_sym_DASH;
	v->a[173337] = actions(7593);
	v->a[173338] = 3;
	v->a[173339] = anon_sym_STAR;
	small_parse_table_8667(v);
}

void	small_parse_table_8667(t_small_parse_table_array *v)
{
	v->a[173340] = anon_sym_SLASH;
	v->a[173341] = anon_sym_PERCENT;
	v->a[173342] = actions(7571);
	v->a[173343] = 11;
	v->a[173344] = anon_sym_PLUS_EQ;
	v->a[173345] = anon_sym_DASH_EQ;
	v->a[173346] = anon_sym_STAR_EQ;
	v->a[173347] = anon_sym_SLASH_EQ;
	v->a[173348] = anon_sym_PERCENT_EQ;
	v->a[173349] = anon_sym_STAR_STAR_EQ;
	v->a[173350] = anon_sym_LT_LT_EQ;
	v->a[173351] = anon_sym_GT_GT_EQ;
	v->a[173352] = anon_sym_AMP_EQ;
	v->a[173353] = anon_sym_CARET_EQ;
	v->a[173354] = anon_sym_PIPE_EQ;
	v->a[173355] = 8;
	v->a[173356] = actions(3);
	v->a[173357] = 1;
	v->a[173358] = sym_comment;
	v->a[173359] = actions(4084);
	small_parse_table_8668(v);
}

void	small_parse_table_8668(t_small_parse_table_array *v)
{
	v->a[173360] = 1;
	v->a[173361] = anon_sym_DQUOTE;
	v->a[173362] = actions(7613);
	v->a[173363] = 1;
	v->a[173364] = sym_variable_name;
	v->a[173365] = state(4606);
	v->a[173366] = 1;
	v->a[173367] = sym_string;
	v->a[173368] = actions(1241);
	v->a[173369] = 2;
	v->a[173370] = sym_file_descriptor;
	v->a[173371] = ts_builtin_sym_end;
	v->a[173372] = actions(7611);
	v->a[173373] = 2;
	v->a[173374] = aux_sym__simple_variable_name_token1;
	v->a[173375] = aux_sym__multiline_variable_name_token1;
	v->a[173376] = actions(7609);
	v->a[173377] = 9;
	v->a[173378] = anon_sym_DASH;
	v->a[173379] = anon_sym_STAR;
	small_parse_table_8669(v);
}

void	small_parse_table_8669(t_small_parse_table_array *v)
{
	v->a[173380] = anon_sym_BANG;
	v->a[173381] = anon_sym_QMARK;
	v->a[173382] = anon_sym_DOLLAR;
	v->a[173383] = anon_sym_POUND;
	v->a[173384] = anon_sym_AT2;
	v->a[173385] = anon_sym_0;
	v->a[173386] = anon_sym__;
	v->a[173387] = actions(1239);
	v->a[173388] = 20;
	v->a[173389] = anon_sym_SEMI;
	v->a[173390] = anon_sym_PIPE_PIPE;
	v->a[173391] = anon_sym_AMP_AMP;
	v->a[173392] = anon_sym_PIPE;
	v->a[173393] = anon_sym_AMP;
	v->a[173394] = anon_sym_LT;
	v->a[173395] = anon_sym_GT;
	v->a[173396] = anon_sym_LT_LT;
	v->a[173397] = anon_sym_GT_GT;
	v->a[173398] = anon_sym_SEMI_SEMI;
	v->a[173399] = anon_sym_PIPE_AMP;
	small_parse_table_8670(v);
}

/* EOF small_parse_table_1733.c */
