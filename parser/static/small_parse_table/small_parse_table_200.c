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
	v->a[20000] = anon_sym_PIPE;
	v->a[20001] = anon_sym_EQ;
	v->a[20002] = anon_sym_CARET;
	v->a[20003] = anon_sym_AMP;
	v->a[20004] = actions(461);
	v->a[20005] = 14;
	v->a[20006] = anon_sym_RPAREN;
	v->a[20007] = anon_sym_AMP_AMP;
	v->a[20008] = anon_sym_PIPE_PIPE;
	v->a[20009] = anon_sym_PLUS_EQ;
	v->a[20010] = anon_sym_DASH_EQ;
	v->a[20011] = anon_sym_STAR_EQ;
	v->a[20012] = anon_sym_SLASH_EQ;
	v->a[20013] = anon_sym_PERCENT_EQ;
	v->a[20014] = anon_sym_LT_LT_EQ;
	v->a[20015] = anon_sym_GT_GT_EQ;
	v->a[20016] = anon_sym_AMP_EQ;
	v->a[20017] = anon_sym_CARET_EQ;
	v->a[20018] = anon_sym_PIPE_EQ;
	v->a[20019] = anon_sym_QMARK;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = 12;
	v->a[20021] = actions(3);
	v->a[20022] = 1;
	v->a[20023] = sym_comment;
	v->a[20024] = actions(613);
	v->a[20025] = 1;
	v->a[20026] = sym_variable_name;
	v->a[20027] = actions(666);
	v->a[20028] = 1;
	v->a[20029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20030] = actions(669);
	v->a[20031] = 1;
	v->a[20032] = anon_sym_DOLLAR;
	v->a[20033] = actions(672);
	v->a[20034] = 1;
	v->a[20035] = anon_sym_DQUOTE;
	v->a[20036] = actions(675);
	v->a[20037] = 1;
	v->a[20038] = anon_sym_DOLLAR_LBRACE;
	v->a[20039] = actions(678);
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = 1;
	v->a[20041] = anon_sym_DOLLAR_LPAREN;
	v->a[20042] = actions(681);
	v->a[20043] = 1;
	v->a[20044] = anon_sym_BQUOTE;
	v->a[20045] = state(218);
	v->a[20046] = 2;
	v->a[20047] = sym_concatenation;
	v->a[20048] = aux_sym_for_statement_repeat1;
	v->a[20049] = actions(663);
	v->a[20050] = 3;
	v->a[20051] = sym_raw_string;
	v->a[20052] = sym_number;
	v->a[20053] = sym_word;
	v->a[20054] = state(361);
	v->a[20055] = 5;
	v->a[20056] = sym_arithmetic_expansion;
	v->a[20057] = sym_string;
	v->a[20058] = sym_simple_expansion;
	v->a[20059] = sym_expansion;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = sym_command_substitution;
	v->a[20061] = actions(618);
	v->a[20062] = 16;
	v->a[20063] = anon_sym_esac;
	v->a[20064] = anon_sym_PIPE;
	v->a[20065] = anon_sym_SEMI_SEMI;
	v->a[20066] = anon_sym_AMP_AMP;
	v->a[20067] = anon_sym_PIPE_PIPE;
	v->a[20068] = anon_sym_LT;
	v->a[20069] = anon_sym_GT;
	v->a[20070] = anon_sym_GT_GT;
	v->a[20071] = anon_sym_LT_AMP;
	v->a[20072] = anon_sym_GT_AMP;
	v->a[20073] = anon_sym_GT_PIPE;
	v->a[20074] = anon_sym_LT_GT;
	v->a[20075] = anon_sym_LT_LT;
	v->a[20076] = anon_sym_LT_LT_DASH;
	v->a[20077] = aux_sym_heredoc_redirect_token1;
	v->a[20078] = anon_sym_SEMI;
	v->a[20079] = 3;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = actions(407);
	v->a[20081] = 1;
	v->a[20082] = sym_comment;
	v->a[20083] = actions(467);
	v->a[20084] = 13;
	v->a[20085] = anon_sym_PIPE;
	v->a[20086] = anon_sym_EQ;
	v->a[20087] = anon_sym_LT;
	v->a[20088] = anon_sym_GT;
	v->a[20089] = anon_sym_GT_GT;
	v->a[20090] = anon_sym_LT_LT;
	v->a[20091] = anon_sym_CARET;
	v->a[20092] = anon_sym_AMP;
	v->a[20093] = anon_sym_PLUS;
	v->a[20094] = anon_sym_DASH;
	v->a[20095] = anon_sym_STAR;
	v->a[20096] = anon_sym_SLASH;
	v->a[20097] = anon_sym_PERCENT;
	v->a[20098] = actions(469);
	v->a[20099] = 20;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
