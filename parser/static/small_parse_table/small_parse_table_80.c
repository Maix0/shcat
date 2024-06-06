/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_80.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_400(t_small_parse_table_array *v)
{
	v->a[8000] = aux_sym_heredoc_redirect_token1;
	v->a[8001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8002] = anon_sym_AMP;
	v->a[8003] = sym__special_character;
	v->a[8004] = anon_sym_DQUOTE;
	v->a[8005] = sym_raw_string;
	v->a[8006] = aux_sym_number_token1;
	v->a[8007] = aux_sym_number_token2;
	v->a[8008] = anon_sym_DOLLAR_LBRACE;
	v->a[8009] = anon_sym_DOLLAR_LPAREN;
	v->a[8010] = anon_sym_BQUOTE;
	v->a[8011] = anon_sym_DOLLAR_BQUOTE;
	v->a[8012] = sym_word;
	v->a[8013] = anon_sym_SEMI;
	v->a[8014] = 6;
	v->a[8015] = actions(3);
	v->a[8016] = 1;
	v->a[8017] = sym_comment;
	v->a[8018] = actions(1424);
	v->a[8019] = 1;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = sym_variable_name;
	v->a[8021] = actions(1422);
	v->a[8022] = 2;
	v->a[8023] = aux_sym__simple_variable_name_token1;
	v->a[8024] = aux_sym__multiline_variable_name_token1;
	v->a[8025] = actions(816);
	v->a[8026] = 4;
	v->a[8027] = sym_file_descriptor;
	v->a[8028] = sym_test_operator;
	v->a[8029] = sym__bare_dollar;
	v->a[8030] = sym__brace_start;
	v->a[8031] = actions(1420);
	v->a[8032] = 9;
	v->a[8033] = anon_sym_BANG;
	v->a[8034] = anon_sym_DASH;
	v->a[8035] = anon_sym_STAR;
	v->a[8036] = anon_sym_QMARK;
	v->a[8037] = anon_sym_DOLLAR;
	v->a[8038] = anon_sym_POUND;
	v->a[8039] = anon_sym_AT;
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = anon_sym_0;
	v->a[8041] = anon_sym__;
	v->a[8042] = actions(810);
	v->a[8043] = 31;
	v->a[8044] = anon_sym_PIPE;
	v->a[8045] = anon_sym_SEMI_SEMI;
	v->a[8046] = anon_sym_PIPE_AMP;
	v->a[8047] = anon_sym_AMP_AMP;
	v->a[8048] = anon_sym_PIPE_PIPE;
	v->a[8049] = anon_sym_LT;
	v->a[8050] = anon_sym_GT;
	v->a[8051] = anon_sym_GT_GT;
	v->a[8052] = anon_sym_AMP_GT;
	v->a[8053] = anon_sym_AMP_GT_GT;
	v->a[8054] = anon_sym_LT_AMP;
	v->a[8055] = anon_sym_GT_AMP;
	v->a[8056] = anon_sym_GT_PIPE;
	v->a[8057] = anon_sym_LT_AMP_DASH;
	v->a[8058] = anon_sym_GT_AMP_DASH;
	v->a[8059] = anon_sym_LT_LT;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = anon_sym_LT_LT_DASH;
	v->a[8061] = aux_sym_heredoc_redirect_token1;
	v->a[8062] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8063] = anon_sym_AMP;
	v->a[8064] = sym__special_character;
	v->a[8065] = anon_sym_DQUOTE;
	v->a[8066] = sym_raw_string;
	v->a[8067] = aux_sym_number_token1;
	v->a[8068] = aux_sym_number_token2;
	v->a[8069] = anon_sym_DOLLAR_LBRACE;
	v->a[8070] = anon_sym_DOLLAR_LPAREN;
	v->a[8071] = anon_sym_BQUOTE;
	v->a[8072] = anon_sym_DOLLAR_BQUOTE;
	v->a[8073] = sym_word;
	v->a[8074] = anon_sym_SEMI;
	v->a[8075] = 6;
	v->a[8076] = actions(3);
	v->a[8077] = 1;
	v->a[8078] = sym_comment;
	v->a[8079] = actions(1855);
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = 1;
	v->a[8081] = sym_variable_name;
	v->a[8082] = actions(1853);
	v->a[8083] = 2;
	v->a[8084] = aux_sym__simple_variable_name_token1;
	v->a[8085] = aux_sym__multiline_variable_name_token1;
	v->a[8086] = actions(816);
	v->a[8087] = 3;
	v->a[8088] = sym_file_descriptor;
	v->a[8089] = sym_test_operator;
	v->a[8090] = sym__brace_start;
	v->a[8091] = actions(1851);
	v->a[8092] = 9;
	v->a[8093] = anon_sym_BANG;
	v->a[8094] = anon_sym_DASH;
	v->a[8095] = anon_sym_STAR;
	v->a[8096] = anon_sym_QMARK;
	v->a[8097] = anon_sym_DOLLAR;
	v->a[8098] = anon_sym_POUND;
	v->a[8099] = anon_sym_AT;
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
