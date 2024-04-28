/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_412.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2060(t_small_parse_table_array *v)
{
	v->a[41200] = sym_comment;
	v->a[41201] = actions(1241);
	v->a[41202] = 1;
	v->a[41203] = sym_test_operator;
	v->a[41204] = actions(5086);
	v->a[41205] = 1;
	v->a[41206] = anon_sym_DQUOTE;
	v->a[41207] = actions(5090);
	v->a[41208] = 1;
	v->a[41209] = sym_variable_name;
	v->a[41210] = state(2442);
	v->a[41211] = 1;
	v->a[41212] = sym_string;
	v->a[41213] = actions(5088);
	v->a[41214] = 2;
	v->a[41215] = aux_sym__simple_variable_name_token1;
	v->a[41216] = aux_sym__multiline_variable_name_token1;
	v->a[41217] = actions(5084);
	v->a[41218] = 9;
	v->a[41219] = anon_sym_DASH;
	small_parse_table_2061(v);
}

void	small_parse_table_2061(t_small_parse_table_array *v)
{
	v->a[41220] = anon_sym_STAR;
	v->a[41221] = anon_sym_BANG;
	v->a[41222] = anon_sym_QMARK;
	v->a[41223] = anon_sym_DOLLAR;
	v->a[41224] = anon_sym_POUND;
	v->a[41225] = anon_sym_AT2;
	v->a[41226] = anon_sym_0;
	v->a[41227] = anon_sym__;
	v->a[41228] = actions(1239);
	v->a[41229] = 33;
	v->a[41230] = anon_sym_EQ;
	v->a[41231] = anon_sym_PLUS_PLUS;
	v->a[41232] = anon_sym_DASH_DASH;
	v->a[41233] = anon_sym_PLUS_EQ;
	v->a[41234] = anon_sym_DASH_EQ;
	v->a[41235] = anon_sym_STAR_EQ;
	v->a[41236] = anon_sym_SLASH_EQ;
	v->a[41237] = anon_sym_PERCENT_EQ;
	v->a[41238] = anon_sym_STAR_STAR_EQ;
	v->a[41239] = anon_sym_LT_LT_EQ;
	small_parse_table_2062(v);
}

void	small_parse_table_2062(t_small_parse_table_array *v)
{
	v->a[41240] = anon_sym_GT_GT_EQ;
	v->a[41241] = anon_sym_AMP_EQ;
	v->a[41242] = anon_sym_CARET_EQ;
	v->a[41243] = anon_sym_PIPE_EQ;
	v->a[41244] = anon_sym_PIPE_PIPE;
	v->a[41245] = anon_sym_AMP_AMP;
	v->a[41246] = anon_sym_PIPE;
	v->a[41247] = anon_sym_CARET;
	v->a[41248] = anon_sym_AMP;
	v->a[41249] = anon_sym_EQ_EQ;
	v->a[41250] = anon_sym_BANG_EQ;
	v->a[41251] = anon_sym_LT;
	v->a[41252] = anon_sym_GT;
	v->a[41253] = anon_sym_LT_EQ;
	v->a[41254] = anon_sym_GT_EQ;
	v->a[41255] = anon_sym_LT_LT;
	v->a[41256] = anon_sym_GT_GT;
	v->a[41257] = anon_sym_PLUS;
	v->a[41258] = anon_sym_SLASH;
	v->a[41259] = anon_sym_PERCENT;
	small_parse_table_2063(v);
}

void	small_parse_table_2063(t_small_parse_table_array *v)
{
	v->a[41260] = anon_sym_STAR_STAR;
	v->a[41261] = anon_sym_EQ_TILDE;
	v->a[41262] = anon_sym_COLON;
	v->a[41263] = 5;
	v->a[41264] = actions(3);
	v->a[41265] = 1;
	v->a[41266] = sym_comment;
	v->a[41267] = actions(5092);
	v->a[41268] = 1;
	v->a[41269] = sym__special_character;
	v->a[41270] = state(1097);
	v->a[41271] = 1;
	v->a[41272] = aux_sym__literal_repeat1;
	v->a[41273] = actions(278);
	v->a[41274] = 5;
	v->a[41275] = sym_file_descriptor;
	v->a[41276] = sym_test_operator;
	v->a[41277] = sym__bare_dollar;
	v->a[41278] = sym__brace_start;
	v->a[41279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2064(v);
}

void	small_parse_table_2064(t_small_parse_table_array *v)
{
	v->a[41280] = actions(241);
	v->a[41281] = 41;
	v->a[41282] = anon_sym_LPAREN_LPAREN;
	v->a[41283] = anon_sym_SEMI;
	v->a[41284] = anon_sym_PIPE_PIPE;
	v->a[41285] = anon_sym_AMP_AMP;
	v->a[41286] = anon_sym_PIPE;
	v->a[41287] = anon_sym_AMP;
	v->a[41288] = anon_sym_EQ_EQ;
	v->a[41289] = anon_sym_LT;
	v->a[41290] = anon_sym_GT;
	v->a[41291] = anon_sym_LT_LT;
	v->a[41292] = anon_sym_GT_GT;
	v->a[41293] = anon_sym_LPAREN;
	v->a[41294] = anon_sym_SEMI_SEMI;
	v->a[41295] = anon_sym_SEMI_AMP;
	v->a[41296] = anon_sym_SEMI_SEMI_AMP;
	v->a[41297] = anon_sym_PIPE_AMP;
	v->a[41298] = anon_sym_EQ_TILDE;
	v->a[41299] = anon_sym_AMP_GT;
	small_parse_table_2065(v);
}

/* EOF small_parse_table_412.c */
