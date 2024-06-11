/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_342.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1710(t_small_parse_table_array *v)
{
	v->a[34200] = anon_sym_PERCENT_EQ;
	v->a[34201] = anon_sym_LT_LT_EQ;
	v->a[34202] = anon_sym_GT_GT_EQ;
	v->a[34203] = anon_sym_AMP_EQ;
	v->a[34204] = anon_sym_CARET_EQ;
	v->a[34205] = anon_sym_PIPE_EQ;
	v->a[34206] = 3;
	v->a[34207] = actions(3);
	v->a[34208] = 1;
	v->a[34209] = sym_comment;
	v->a[34210] = actions(1124);
	v->a[34211] = 3;
	v->a[34212] = sym_file_descriptor;
	v->a[34213] = sym__concat;
	v->a[34214] = sym_variable_name;
	v->a[34215] = actions(1122);
	v->a[34216] = 30;
	v->a[34217] = anon_sym_PIPE;
	v->a[34218] = anon_sym_RPAREN;
	v->a[34219] = anon_sym_SEMI_SEMI;
	small_parse_table_1711(v);
}

void	small_parse_table_1711(t_small_parse_table_array *v)
{
	v->a[34220] = anon_sym_AMP_AMP;
	v->a[34221] = anon_sym_PIPE_PIPE;
	v->a[34222] = anon_sym_LT;
	v->a[34223] = anon_sym_GT;
	v->a[34224] = anon_sym_GT_GT;
	v->a[34225] = anon_sym_AMP_GT;
	v->a[34226] = anon_sym_AMP_GT_GT;
	v->a[34227] = anon_sym_LT_AMP;
	v->a[34228] = anon_sym_GT_AMP;
	v->a[34229] = anon_sym_GT_PIPE;
	v->a[34230] = anon_sym_LT_AMP_DASH;
	v->a[34231] = anon_sym_GT_AMP_DASH;
	v->a[34232] = anon_sym_LT_LT;
	v->a[34233] = anon_sym_LT_LT_DASH;
	v->a[34234] = aux_sym_heredoc_redirect_token1;
	v->a[34235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34236] = anon_sym_AMP;
	v->a[34237] = aux_sym_concatenation_token1;
	v->a[34238] = anon_sym_DOLLAR;
	v->a[34239] = anon_sym_DQUOTE;
	small_parse_table_1712(v);
}

void	small_parse_table_1712(t_small_parse_table_array *v)
{
	v->a[34240] = sym_raw_string;
	v->a[34241] = sym_number;
	v->a[34242] = anon_sym_DOLLAR_LBRACE;
	v->a[34243] = anon_sym_DOLLAR_LPAREN;
	v->a[34244] = anon_sym_BQUOTE;
	v->a[34245] = sym_word;
	v->a[34246] = anon_sym_SEMI;
	v->a[34247] = 17;
	v->a[34248] = actions(1094);
	v->a[34249] = 1;
	v->a[34250] = sym_comment;
	v->a[34251] = actions(1108);
	v->a[34252] = 1;
	v->a[34253] = anon_sym_PIPE;
	v->a[34254] = actions(1110);
	v->a[34255] = 1;
	v->a[34256] = anon_sym_AMP_AMP;
	v->a[34257] = actions(1112);
	v->a[34258] = 1;
	v->a[34259] = anon_sym_CARET;
	small_parse_table_1713(v);
}

void	small_parse_table_1713(t_small_parse_table_array *v)
{
	v->a[34260] = actions(1114);
	v->a[34261] = 1;
	v->a[34262] = anon_sym_AMP;
	v->a[34263] = actions(1126);
	v->a[34264] = 1;
	v->a[34265] = anon_sym_PIPE_PIPE;
	v->a[34266] = actions(1128);
	v->a[34267] = 1;
	v->a[34268] = anon_sym_QMARK;
	v->a[34269] = actions(1155);
	v->a[34270] = 1;
	v->a[34271] = anon_sym_EQ;
	v->a[34272] = actions(1292);
	v->a[34273] = 1;
	v->a[34274] = anon_sym_RPAREN_RPAREN;
	v->a[34275] = actions(1082);
	v->a[34276] = 2;
	v->a[34277] = anon_sym_LT;
	v->a[34278] = anon_sym_GT;
	v->a[34279] = actions(1084);
	small_parse_table_1714(v);
}

void	small_parse_table_1714(t_small_parse_table_array *v)
{
	v->a[34280] = 2;
	v->a[34281] = anon_sym_GT_GT;
	v->a[34282] = anon_sym_LT_LT;
	v->a[34283] = actions(1086);
	v->a[34284] = 2;
	v->a[34285] = anon_sym_LT_EQ;
	v->a[34286] = anon_sym_GT_EQ;
	v->a[34287] = actions(1088);
	v->a[34288] = 2;
	v->a[34289] = anon_sym_PLUS;
	v->a[34290] = anon_sym_DASH;
	v->a[34291] = actions(1092);
	v->a[34292] = 2;
	v->a[34293] = anon_sym_PLUS_PLUS2;
	v->a[34294] = anon_sym_DASH_DASH2;
	v->a[34295] = actions(1116);
	v->a[34296] = 2;
	v->a[34297] = anon_sym_EQ_EQ;
	v->a[34298] = anon_sym_BANG_EQ;
	v->a[34299] = actions(1090);
	small_parse_table_1715(v);
}

/* EOF small_parse_table_342.c */
