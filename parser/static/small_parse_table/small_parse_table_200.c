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
	v->a[20000] = sym_word;
	v->a[20001] = state(442);
	v->a[20002] = 5;
	v->a[20003] = sym_arithmetic_expansion;
	v->a[20004] = sym_string;
	v->a[20005] = sym_simple_expansion;
	v->a[20006] = sym_expansion;
	v->a[20007] = sym_command_substitution;
	v->a[20008] = actions(556);
	v->a[20009] = 17;
	v->a[20010] = anon_sym_esac;
	v->a[20011] = anon_sym_PIPE;
	v->a[20012] = anon_sym_SEMI_SEMI;
	v->a[20013] = anon_sym_AMP_AMP;
	v->a[20014] = anon_sym_PIPE_PIPE;
	v->a[20015] = anon_sym_LT;
	v->a[20016] = anon_sym_GT;
	v->a[20017] = anon_sym_GT_GT;
	v->a[20018] = anon_sym_LT_AMP;
	v->a[20019] = anon_sym_GT_AMP;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = anon_sym_GT_PIPE;
	v->a[20021] = anon_sym_LT_GT;
	v->a[20022] = anon_sym_LT_LT;
	v->a[20023] = anon_sym_LT_LT_DASH;
	v->a[20024] = aux_sym_heredoc_redirect_token1;
	v->a[20025] = anon_sym_AMP;
	v->a[20026] = anon_sym_SEMI;
	v->a[20027] = 6;
	v->a[20028] = actions(3);
	v->a[20029] = 1;
	v->a[20030] = sym_comment;
	v->a[20031] = actions(399);
	v->a[20032] = 1;
	v->a[20033] = sym_variable_name;
	v->a[20034] = actions(367);
	v->a[20035] = 2;
	v->a[20036] = sym_file_descriptor;
	v->a[20037] = sym__bare_dollar;
	v->a[20038] = actions(397);
	v->a[20039] = 2;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = aux_sym__simple_variable_name_token1;
	v->a[20041] = aux_sym__multiline_variable_name_token1;
	v->a[20042] = actions(395);
	v->a[20043] = 9;
	v->a[20044] = anon_sym_BANG;
	v->a[20045] = anon_sym_DASH;
	v->a[20046] = anon_sym_STAR;
	v->a[20047] = anon_sym_QMARK;
	v->a[20048] = anon_sym_DOLLAR;
	v->a[20049] = anon_sym_POUND;
	v->a[20050] = anon_sym_AT;
	v->a[20051] = anon_sym_0;
	v->a[20052] = anon_sym__;
	v->a[20053] = actions(361);
	v->a[20054] = 21;
	v->a[20055] = anon_sym_PIPE;
	v->a[20056] = anon_sym_AMP_AMP;
	v->a[20057] = anon_sym_PIPE_PIPE;
	v->a[20058] = anon_sym_LT;
	v->a[20059] = anon_sym_GT;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_GT_GT;
	v->a[20061] = anon_sym_LT_AMP;
	v->a[20062] = anon_sym_GT_AMP;
	v->a[20063] = anon_sym_GT_PIPE;
	v->a[20064] = anon_sym_LT_GT;
	v->a[20065] = anon_sym_LT_LT;
	v->a[20066] = anon_sym_LT_LT_DASH;
	v->a[20067] = aux_sym_heredoc_redirect_token1;
	v->a[20068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20069] = anon_sym_DQUOTE;
	v->a[20070] = sym_raw_string;
	v->a[20071] = sym_number;
	v->a[20072] = anon_sym_DOLLAR_LBRACE;
	v->a[20073] = anon_sym_DOLLAR_LPAREN;
	v->a[20074] = anon_sym_BQUOTE;
	v->a[20075] = sym_word;
	v->a[20076] = 14;
	v->a[20077] = actions(3);
	v->a[20078] = 1;
	v->a[20079] = sym_comment;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = actions(443);
	v->a[20081] = 1;
	v->a[20082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20083] = actions(445);
	v->a[20084] = 1;
	v->a[20085] = anon_sym_DOLLAR;
	v->a[20086] = actions(447);
	v->a[20087] = 1;
	v->a[20088] = anon_sym_DQUOTE;
	v->a[20089] = actions(449);
	v->a[20090] = 1;
	v->a[20091] = anon_sym_DOLLAR_LBRACE;
	v->a[20092] = actions(451);
	v->a[20093] = 1;
	v->a[20094] = anon_sym_DOLLAR_LPAREN;
	v->a[20095] = actions(453);
	v->a[20096] = 1;
	v->a[20097] = anon_sym_BQUOTE;
	v->a[20098] = actions(455);
	v->a[20099] = 1;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
