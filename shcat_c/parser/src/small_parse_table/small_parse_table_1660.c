/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1660.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8300(t_small_parse_table_array *v)
{
	v->a[166000] = anon_sym_LT_AMP;
	v->a[166001] = anon_sym_GT_AMP;
	v->a[166002] = anon_sym_GT_PIPE;
	v->a[166003] = anon_sym_LT_AMP_DASH;
	v->a[166004] = anon_sym_GT_AMP_DASH;
	v->a[166005] = anon_sym_LT_LT_LT;
	v->a[166006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[166007] = anon_sym_DOLLAR_LBRACK;
	v->a[166008] = anon_sym_DOLLAR;
	v->a[166009] = sym__special_character;
	v->a[166010] = anon_sym_DQUOTE;
	v->a[166011] = sym_raw_string;
	v->a[166012] = sym_ansi_c_string;
	v->a[166013] = aux_sym_number_token1;
	v->a[166014] = aux_sym_number_token2;
	v->a[166015] = anon_sym_DOLLAR_LBRACE;
	v->a[166016] = anon_sym_DOLLAR_LPAREN;
	v->a[166017] = anon_sym_BQUOTE;
	v->a[166018] = anon_sym_DOLLAR_BQUOTE;
	v->a[166019] = anon_sym_LT_LPAREN;
	small_parse_table_8301(v);
}

void	small_parse_table_8301(t_small_parse_table_array *v)
{
	v->a[166020] = anon_sym_GT_LPAREN;
	v->a[166021] = sym_word;
	v->a[166022] = 3;
	v->a[166023] = actions(3);
	v->a[166024] = 1;
	v->a[166025] = sym_comment;
	v->a[166026] = actions(7491);
	v->a[166027] = 1;
	v->a[166028] = aux_sym_heredoc_redirect_token1;
	v->a[166029] = actions(7489);
	v->a[166030] = 36;
	v->a[166031] = anon_sym_SEMI;
	v->a[166032] = anon_sym_COMMA;
	v->a[166033] = anon_sym_PLUS_PLUS;
	v->a[166034] = anon_sym_DASH_DASH;
	v->a[166035] = anon_sym_PLUS_EQ;
	v->a[166036] = anon_sym_DASH_EQ;
	v->a[166037] = anon_sym_STAR_EQ;
	v->a[166038] = anon_sym_SLASH_EQ;
	v->a[166039] = anon_sym_PERCENT_EQ;
	small_parse_table_8302(v);
}

void	small_parse_table_8302(t_small_parse_table_array *v)
{
	v->a[166040] = anon_sym_STAR_STAR_EQ;
	v->a[166041] = anon_sym_LT_LT_EQ;
	v->a[166042] = anon_sym_GT_GT_EQ;
	v->a[166043] = anon_sym_AMP_EQ;
	v->a[166044] = anon_sym_CARET_EQ;
	v->a[166045] = anon_sym_PIPE_EQ;
	v->a[166046] = anon_sym_PIPE_PIPE;
	v->a[166047] = anon_sym_DASHo;
	v->a[166048] = anon_sym_AMP_AMP;
	v->a[166049] = anon_sym_DASHa;
	v->a[166050] = anon_sym_PIPE;
	v->a[166051] = anon_sym_CARET;
	v->a[166052] = anon_sym_AMP;
	v->a[166053] = anon_sym_EQ_EQ;
	v->a[166054] = anon_sym_BANG_EQ;
	v->a[166055] = anon_sym_LT;
	v->a[166056] = anon_sym_GT;
	v->a[166057] = anon_sym_LT_EQ;
	v->a[166058] = anon_sym_GT_EQ;
	v->a[166059] = anon_sym_LT_LT;
	small_parse_table_8303(v);
}

void	small_parse_table_8303(t_small_parse_table_array *v)
{
	v->a[166060] = anon_sym_GT_GT;
	v->a[166061] = anon_sym_PLUS;
	v->a[166062] = anon_sym_DASH;
	v->a[166063] = anon_sym_STAR;
	v->a[166064] = anon_sym_SLASH;
	v->a[166065] = anon_sym_PERCENT;
	v->a[166066] = anon_sym_STAR_STAR;
	v->a[166067] = 16;
	v->a[166068] = actions(3);
	v->a[166069] = 1;
	v->a[166070] = sym_comment;
	v->a[166071] = actions(7256);
	v->a[166072] = 1;
	v->a[166073] = anon_sym_PIPE;
	v->a[166074] = actions(7258);
	v->a[166075] = 1;
	v->a[166076] = anon_sym_CARET;
	v->a[166077] = actions(7260);
	v->a[166078] = 1;
	v->a[166079] = anon_sym_AMP;
	small_parse_table_8304(v);
}

void	small_parse_table_8304(t_small_parse_table_array *v)
{
	v->a[166080] = actions(7272);
	v->a[166081] = 1;
	v->a[166082] = anon_sym_STAR_STAR;
	v->a[166083] = actions(7511);
	v->a[166084] = 1;
	v->a[166085] = aux_sym_heredoc_redirect_token1;
	v->a[166086] = actions(7250);
	v->a[166087] = 2;
	v->a[166088] = anon_sym_PLUS_PLUS;
	v->a[166089] = anon_sym_DASH_DASH;
	v->a[166090] = actions(7252);
	v->a[166091] = 2;
	v->a[166092] = anon_sym_PIPE_PIPE;
	v->a[166093] = anon_sym_DASHo;
	v->a[166094] = actions(7254);
	v->a[166095] = 2;
	v->a[166096] = anon_sym_AMP_AMP;
	v->a[166097] = anon_sym_DASHa;
	v->a[166098] = actions(7262);
	v->a[166099] = 2;
	small_parse_table_8305(v);
}

/* EOF small_parse_table_1660.c */
