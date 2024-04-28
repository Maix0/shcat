/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_820.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4100(t_small_parse_table_array *v)
{
	v->a[82000] = sym_word;
	v->a[82001] = 3;
	v->a[82002] = actions(3);
	v->a[82003] = 1;
	v->a[82004] = sym_comment;
	v->a[82005] = actions(1263);
	v->a[82006] = 6;
	v->a[82007] = sym_file_descriptor;
	v->a[82008] = sym_test_operator;
	v->a[82009] = sym__bare_dollar;
	v->a[82010] = sym__brace_start;
	v->a[82011] = ts_builtin_sym_end;
	v->a[82012] = aux_sym_heredoc_redirect_token1;
	v->a[82013] = actions(1261);
	v->a[82014] = 39;
	v->a[82015] = anon_sym_LPAREN_LPAREN;
	v->a[82016] = anon_sym_SEMI;
	v->a[82017] = anon_sym_PIPE_PIPE;
	v->a[82018] = anon_sym_AMP_AMP;
	v->a[82019] = anon_sym_PIPE;
	small_parse_table_4101(v);
}

void	small_parse_table_4101(t_small_parse_table_array *v)
{
	v->a[82020] = anon_sym_AMP;
	v->a[82021] = anon_sym_EQ_EQ;
	v->a[82022] = anon_sym_LT;
	v->a[82023] = anon_sym_GT;
	v->a[82024] = anon_sym_LT_LT;
	v->a[82025] = anon_sym_GT_GT;
	v->a[82026] = anon_sym_SEMI_SEMI;
	v->a[82027] = anon_sym_PIPE_AMP;
	v->a[82028] = anon_sym_EQ_TILDE;
	v->a[82029] = anon_sym_AMP_GT;
	v->a[82030] = anon_sym_AMP_GT_GT;
	v->a[82031] = anon_sym_LT_AMP;
	v->a[82032] = anon_sym_GT_AMP;
	v->a[82033] = anon_sym_GT_PIPE;
	v->a[82034] = anon_sym_LT_AMP_DASH;
	v->a[82035] = anon_sym_GT_AMP_DASH;
	v->a[82036] = anon_sym_LT_LT_DASH;
	v->a[82037] = anon_sym_LT_LT_LT;
	v->a[82038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82039] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4102(v);
}

void	small_parse_table_4102(t_small_parse_table_array *v)
{
	v->a[82040] = anon_sym_DOLLAR;
	v->a[82041] = sym__special_character;
	v->a[82042] = anon_sym_DQUOTE;
	v->a[82043] = sym_raw_string;
	v->a[82044] = sym_ansi_c_string;
	v->a[82045] = aux_sym_number_token1;
	v->a[82046] = aux_sym_number_token2;
	v->a[82047] = anon_sym_DOLLAR_LBRACE;
	v->a[82048] = anon_sym_DOLLAR_LPAREN;
	v->a[82049] = anon_sym_BQUOTE;
	v->a[82050] = anon_sym_DOLLAR_BQUOTE;
	v->a[82051] = anon_sym_LT_LPAREN;
	v->a[82052] = anon_sym_GT_LPAREN;
	v->a[82053] = sym_word;
	v->a[82054] = 6;
	v->a[82055] = actions(3);
	v->a[82056] = 1;
	v->a[82057] = sym_comment;
	v->a[82058] = actions(5758);
	v->a[82059] = 1;
	small_parse_table_4103(v);
}

void	small_parse_table_4103(t_small_parse_table_array *v)
{
	v->a[82060] = aux_sym_concatenation_token1;
	v->a[82061] = actions(5760);
	v->a[82062] = 1;
	v->a[82063] = sym__concat;
	v->a[82064] = state(1640);
	v->a[82065] = 1;
	v->a[82066] = aux_sym_concatenation_repeat1;
	v->a[82067] = actions(1263);
	v->a[82068] = 4;
	v->a[82069] = sym_file_descriptor;
	v->a[82070] = sym_test_operator;
	v->a[82071] = sym__brace_start;
	v->a[82072] = aux_sym_heredoc_redirect_token1;
	v->a[82073] = actions(1261);
	v->a[82074] = 38;
	v->a[82075] = anon_sym_LPAREN_LPAREN;
	v->a[82076] = anon_sym_SEMI;
	v->a[82077] = anon_sym_PIPE_PIPE;
	v->a[82078] = anon_sym_AMP_AMP;
	v->a[82079] = anon_sym_PIPE;
	small_parse_table_4104(v);
}

void	small_parse_table_4104(t_small_parse_table_array *v)
{
	v->a[82080] = anon_sym_AMP;
	v->a[82081] = anon_sym_LT;
	v->a[82082] = anon_sym_GT;
	v->a[82083] = anon_sym_LT_LT;
	v->a[82084] = anon_sym_GT_GT;
	v->a[82085] = anon_sym_SEMI_SEMI;
	v->a[82086] = anon_sym_SEMI_AMP;
	v->a[82087] = anon_sym_SEMI_SEMI_AMP;
	v->a[82088] = anon_sym_PIPE_AMP;
	v->a[82089] = anon_sym_AMP_GT;
	v->a[82090] = anon_sym_AMP_GT_GT;
	v->a[82091] = anon_sym_LT_AMP;
	v->a[82092] = anon_sym_GT_AMP;
	v->a[82093] = anon_sym_GT_PIPE;
	v->a[82094] = anon_sym_LT_AMP_DASH;
	v->a[82095] = anon_sym_GT_AMP_DASH;
	v->a[82096] = anon_sym_LT_LT_DASH;
	v->a[82097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82098] = anon_sym_DOLLAR_LBRACK;
	v->a[82099] = anon_sym_DOLLAR;
	small_parse_table_4105(v);
}

/* EOF small_parse_table_820.c */
