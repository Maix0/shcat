/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_180.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_900(t_small_parse_table_array *v)
{
	v->a[18000] = anon_sym_SLASH;
	v->a[18001] = anon_sym_PERCENT;
	v->a[18002] = actions(461);
	v->a[18003] = 12;
	v->a[18004] = anon_sym_RPAREN_RPAREN;
	v->a[18005] = anon_sym_PLUS_EQ;
	v->a[18006] = anon_sym_DASH_EQ;
	v->a[18007] = anon_sym_STAR_EQ;
	v->a[18008] = anon_sym_SLASH_EQ;
	v->a[18009] = anon_sym_PERCENT_EQ;
	v->a[18010] = anon_sym_LT_LT_EQ;
	v->a[18011] = anon_sym_GT_GT_EQ;
	v->a[18012] = anon_sym_AMP_EQ;
	v->a[18013] = anon_sym_CARET_EQ;
	v->a[18014] = anon_sym_PIPE_EQ;
	v->a[18015] = anon_sym_COLON;
	v->a[18016] = 5;
	v->a[18017] = actions(3);
	v->a[18018] = 1;
	v->a[18019] = sym_comment;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = actions(489);
	v->a[18021] = 1;
	v->a[18022] = sym_variable_name;
	v->a[18023] = state(216);
	v->a[18024] = 2;
	v->a[18025] = sym_concatenation;
	v->a[18026] = aux_sym_for_statement_repeat1;
	v->a[18027] = state(360);
	v->a[18028] = 5;
	v->a[18029] = sym_arithmetic_expansion;
	v->a[18030] = sym_string;
	v->a[18031] = sym_simple_expansion;
	v->a[18032] = sym_expansion;
	v->a[18033] = sym_command_substitution;
	v->a[18034] = actions(487);
	v->a[18035] = 25;
	v->a[18036] = anon_sym_PIPE;
	v->a[18037] = anon_sym_RPAREN;
	v->a[18038] = anon_sym_SEMI_SEMI;
	v->a[18039] = anon_sym_AMP_AMP;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = anon_sym_PIPE_PIPE;
	v->a[18041] = anon_sym_LT;
	v->a[18042] = anon_sym_GT;
	v->a[18043] = anon_sym_GT_GT;
	v->a[18044] = anon_sym_LT_AMP;
	v->a[18045] = anon_sym_GT_AMP;
	v->a[18046] = anon_sym_GT_PIPE;
	v->a[18047] = anon_sym_LT_GT;
	v->a[18048] = anon_sym_LT_LT;
	v->a[18049] = anon_sym_LT_LT_DASH;
	v->a[18050] = aux_sym_heredoc_redirect_token1;
	v->a[18051] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18052] = anon_sym_DOLLAR;
	v->a[18053] = anon_sym_DQUOTE;
	v->a[18054] = sym_raw_string;
	v->a[18055] = sym_number;
	v->a[18056] = anon_sym_DOLLAR_LBRACE;
	v->a[18057] = anon_sym_DOLLAR_LPAREN;
	v->a[18058] = anon_sym_BQUOTE;
	v->a[18059] = sym_word;
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = anon_sym_SEMI;
	v->a[18061] = 3;
	v->a[18062] = actions(407);
	v->a[18063] = 1;
	v->a[18064] = sym_comment;
	v->a[18065] = actions(463);
	v->a[18066] = 13;
	v->a[18067] = anon_sym_PIPE;
	v->a[18068] = anon_sym_EQ;
	v->a[18069] = anon_sym_LT;
	v->a[18070] = anon_sym_GT;
	v->a[18071] = anon_sym_GT_GT;
	v->a[18072] = anon_sym_LT_LT;
	v->a[18073] = anon_sym_CARET;
	v->a[18074] = anon_sym_AMP;
	v->a[18075] = anon_sym_PLUS;
	v->a[18076] = anon_sym_DASH;
	v->a[18077] = anon_sym_STAR;
	v->a[18078] = anon_sym_SLASH;
	v->a[18079] = anon_sym_PERCENT;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = actions(465);
	v->a[18081] = 20;
	v->a[18082] = anon_sym_RPAREN;
	v->a[18083] = anon_sym_AMP_AMP;
	v->a[18084] = anon_sym_PIPE_PIPE;
	v->a[18085] = anon_sym_PLUS_EQ;
	v->a[18086] = anon_sym_DASH_EQ;
	v->a[18087] = anon_sym_STAR_EQ;
	v->a[18088] = anon_sym_SLASH_EQ;
	v->a[18089] = anon_sym_PERCENT_EQ;
	v->a[18090] = anon_sym_LT_LT_EQ;
	v->a[18091] = anon_sym_GT_GT_EQ;
	v->a[18092] = anon_sym_AMP_EQ;
	v->a[18093] = anon_sym_CARET_EQ;
	v->a[18094] = anon_sym_PIPE_EQ;
	v->a[18095] = anon_sym_EQ_EQ;
	v->a[18096] = anon_sym_BANG_EQ;
	v->a[18097] = anon_sym_LT_EQ;
	v->a[18098] = anon_sym_GT_EQ;
	v->a[18099] = anon_sym_QMARK;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
