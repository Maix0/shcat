/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_200.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1000(t_small_parse_table_array *v)
{
	v->a[20000] = anon_sym_LT_AMP_DASH;
	v->a[20001] = anon_sym_GT_AMP_DASH;
	v->a[20002] = anon_sym_LT_LT;
	v->a[20003] = anon_sym_LT_LT_DASH;
	v->a[20004] = aux_sym_heredoc_redirect_token1;
	v->a[20005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20006] = anon_sym_AMP;
	v->a[20007] = anon_sym_DQUOTE;
	v->a[20008] = sym_raw_string;
	v->a[20009] = sym_number;
	v->a[20010] = anon_sym_DOLLAR_LBRACE;
	v->a[20011] = anon_sym_DOLLAR_LPAREN;
	v->a[20012] = anon_sym_BQUOTE;
	v->a[20013] = sym_word;
	v->a[20014] = anon_sym_SEMI;
	v->a[20015] = 6;
	v->a[20016] = actions(3);
	v->a[20017] = 1;
	v->a[20018] = sym_comment;
	v->a[20019] = actions(399);
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = 1;
	v->a[20021] = sym_variable_name;
	v->a[20022] = actions(385);
	v->a[20023] = 2;
	v->a[20024] = sym_file_descriptor;
	v->a[20025] = sym__bare_dollar;
	v->a[20026] = actions(397);
	v->a[20027] = 2;
	v->a[20028] = aux_sym__simple_variable_name_token1;
	v->a[20029] = aux_sym__multiline_variable_name_token1;
	v->a[20030] = actions(395);
	v->a[20031] = 9;
	v->a[20032] = anon_sym_BANG;
	v->a[20033] = anon_sym_DASH;
	v->a[20034] = anon_sym_STAR;
	v->a[20035] = anon_sym_QMARK;
	v->a[20036] = anon_sym_DOLLAR;
	v->a[20037] = anon_sym_POUND;
	v->a[20038] = anon_sym_AT;
	v->a[20039] = anon_sym_0;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = anon_sym__;
	v->a[20041] = actions(379);
	v->a[20042] = 29;
	v->a[20043] = anon_sym_LPAREN;
	v->a[20044] = anon_sym_PIPE;
	v->a[20045] = anon_sym_RPAREN;
	v->a[20046] = anon_sym_SEMI_SEMI;
	v->a[20047] = anon_sym_AMP_AMP;
	v->a[20048] = anon_sym_PIPE_PIPE;
	v->a[20049] = anon_sym_LT;
	v->a[20050] = anon_sym_GT;
	v->a[20051] = anon_sym_GT_GT;
	v->a[20052] = anon_sym_AMP_GT;
	v->a[20053] = anon_sym_AMP_GT_GT;
	v->a[20054] = anon_sym_LT_AMP;
	v->a[20055] = anon_sym_GT_AMP;
	v->a[20056] = anon_sym_GT_PIPE;
	v->a[20057] = anon_sym_LT_AMP_DASH;
	v->a[20058] = anon_sym_GT_AMP_DASH;
	v->a[20059] = anon_sym_LT_LT;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_LT_LT_DASH;
	v->a[20061] = aux_sym_heredoc_redirect_token1;
	v->a[20062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20063] = anon_sym_AMP;
	v->a[20064] = anon_sym_DQUOTE;
	v->a[20065] = sym_raw_string;
	v->a[20066] = sym_number;
	v->a[20067] = anon_sym_DOLLAR_LBRACE;
	v->a[20068] = anon_sym_DOLLAR_LPAREN;
	v->a[20069] = anon_sym_BQUOTE;
	v->a[20070] = sym_word;
	v->a[20071] = anon_sym_SEMI;
	v->a[20072] = 6;
	v->a[20073] = actions(3);
	v->a[20074] = 1;
	v->a[20075] = sym_comment;
	v->a[20076] = actions(399);
	v->a[20077] = 1;
	v->a[20078] = sym_variable_name;
	v->a[20079] = actions(385);
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = 2;
	v->a[20081] = sym_file_descriptor;
	v->a[20082] = sym__bare_dollar;
	v->a[20083] = actions(397);
	v->a[20084] = 2;
	v->a[20085] = aux_sym__simple_variable_name_token1;
	v->a[20086] = aux_sym__multiline_variable_name_token1;
	v->a[20087] = actions(395);
	v->a[20088] = 9;
	v->a[20089] = anon_sym_BANG;
	v->a[20090] = anon_sym_DASH;
	v->a[20091] = anon_sym_STAR;
	v->a[20092] = anon_sym_QMARK;
	v->a[20093] = anon_sym_DOLLAR;
	v->a[20094] = anon_sym_POUND;
	v->a[20095] = anon_sym_AT;
	v->a[20096] = anon_sym_0;
	v->a[20097] = anon_sym__;
	v->a[20098] = actions(379);
	v->a[20099] = 28;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
