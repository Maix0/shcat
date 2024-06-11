/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_390.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1950(t_small_parse_table_array *v)
{
	v->a[39000] = anon_sym_AMP;
	v->a[39001] = actions(1126);
	v->a[39002] = 1;
	v->a[39003] = anon_sym_PIPE_PIPE;
	v->a[39004] = actions(1128);
	v->a[39005] = 1;
	v->a[39006] = anon_sym_QMARK;
	v->a[39007] = actions(1155);
	v->a[39008] = 1;
	v->a[39009] = anon_sym_EQ;
	v->a[39010] = actions(1455);
	v->a[39011] = 1;
	v->a[39012] = anon_sym_RPAREN_RPAREN;
	v->a[39013] = actions(1082);
	v->a[39014] = 2;
	v->a[39015] = anon_sym_LT;
	v->a[39016] = anon_sym_GT;
	v->a[39017] = actions(1084);
	v->a[39018] = 2;
	v->a[39019] = anon_sym_GT_GT;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_LT_LT;
	v->a[39021] = actions(1086);
	v->a[39022] = 2;
	v->a[39023] = anon_sym_LT_EQ;
	v->a[39024] = anon_sym_GT_EQ;
	v->a[39025] = actions(1088);
	v->a[39026] = 2;
	v->a[39027] = anon_sym_PLUS;
	v->a[39028] = anon_sym_DASH;
	v->a[39029] = actions(1092);
	v->a[39030] = 2;
	v->a[39031] = anon_sym_PLUS_PLUS2;
	v->a[39032] = anon_sym_DASH_DASH2;
	v->a[39033] = actions(1116);
	v->a[39034] = 2;
	v->a[39035] = anon_sym_EQ_EQ;
	v->a[39036] = anon_sym_BANG_EQ;
	v->a[39037] = actions(1090);
	v->a[39038] = 3;
	v->a[39039] = anon_sym_STAR;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = anon_sym_SLASH;
	v->a[39041] = anon_sym_PERCENT;
	v->a[39042] = actions(1288);
	v->a[39043] = 10;
	v->a[39044] = anon_sym_PLUS_EQ;
	v->a[39045] = anon_sym_DASH_EQ;
	v->a[39046] = anon_sym_STAR_EQ;
	v->a[39047] = anon_sym_SLASH_EQ;
	v->a[39048] = anon_sym_PERCENT_EQ;
	v->a[39049] = anon_sym_LT_LT_EQ;
	v->a[39050] = anon_sym_GT_GT_EQ;
	v->a[39051] = anon_sym_AMP_EQ;
	v->a[39052] = anon_sym_CARET_EQ;
	v->a[39053] = anon_sym_PIPE_EQ;
	v->a[39054] = 3;
	v->a[39055] = actions(3);
	v->a[39056] = 1;
	v->a[39057] = sym_comment;
	v->a[39058] = actions(1177);
	v->a[39059] = 3;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = sym_file_descriptor;
	v->a[39061] = sym__concat;
	v->a[39062] = sym__bare_dollar;
	v->a[39063] = actions(1179);
	v->a[39064] = 30;
	v->a[39065] = anon_sym_PIPE;
	v->a[39066] = anon_sym_RPAREN;
	v->a[39067] = anon_sym_SEMI_SEMI;
	v->a[39068] = anon_sym_AMP_AMP;
	v->a[39069] = anon_sym_PIPE_PIPE;
	v->a[39070] = anon_sym_LT;
	v->a[39071] = anon_sym_GT;
	v->a[39072] = anon_sym_GT_GT;
	v->a[39073] = anon_sym_AMP_GT;
	v->a[39074] = anon_sym_AMP_GT_GT;
	v->a[39075] = anon_sym_LT_AMP;
	v->a[39076] = anon_sym_GT_AMP;
	v->a[39077] = anon_sym_GT_PIPE;
	v->a[39078] = anon_sym_LT_AMP_DASH;
	v->a[39079] = anon_sym_GT_AMP_DASH;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = anon_sym_LT_LT;
	v->a[39081] = anon_sym_LT_LT_DASH;
	v->a[39082] = aux_sym_heredoc_redirect_token1;
	v->a[39083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39084] = anon_sym_AMP;
	v->a[39085] = aux_sym_concatenation_token1;
	v->a[39086] = anon_sym_DOLLAR;
	v->a[39087] = anon_sym_DQUOTE;
	v->a[39088] = sym_raw_string;
	v->a[39089] = sym_number;
	v->a[39090] = anon_sym_DOLLAR_LBRACE;
	v->a[39091] = anon_sym_DOLLAR_LPAREN;
	v->a[39092] = anon_sym_BQUOTE;
	v->a[39093] = sym_word;
	v->a[39094] = anon_sym_SEMI;
	v->a[39095] = 17;
	v->a[39096] = actions(1094);
	v->a[39097] = 1;
	v->a[39098] = sym_comment;
	v->a[39099] = actions(1108);
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
