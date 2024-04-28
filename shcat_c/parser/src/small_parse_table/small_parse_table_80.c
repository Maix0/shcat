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
	v->a[8000] = actions(2214);
	v->a[8001] = 22;
	v->a[8002] = anon_sym_SEMI;
	v->a[8003] = anon_sym_PIPE_PIPE;
	v->a[8004] = anon_sym_AMP_AMP;
	v->a[8005] = anon_sym_PIPE;
	v->a[8006] = anon_sym_AMP;
	v->a[8007] = anon_sym_LT;
	v->a[8008] = anon_sym_GT;
	v->a[8009] = anon_sym_LT_LT;
	v->a[8010] = anon_sym_GT_GT;
	v->a[8011] = anon_sym_SEMI_SEMI;
	v->a[8012] = anon_sym_SEMI_AMP;
	v->a[8013] = anon_sym_SEMI_SEMI_AMP;
	v->a[8014] = anon_sym_PIPE_AMP;
	v->a[8015] = anon_sym_AMP_GT;
	v->a[8016] = anon_sym_AMP_GT_GT;
	v->a[8017] = anon_sym_LT_AMP;
	v->a[8018] = anon_sym_GT_AMP;
	v->a[8019] = anon_sym_GT_PIPE;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = anon_sym_LT_AMP_DASH;
	v->a[8021] = anon_sym_GT_AMP_DASH;
	v->a[8022] = anon_sym_LT_LT_DASH;
	v->a[8023] = anon_sym_LT_LT_LT;
	v->a[8024] = 24;
	v->a[8025] = actions(3);
	v->a[8026] = 1;
	v->a[8027] = sym_comment;
	v->a[8028] = actions(2261);
	v->a[8029] = 1;
	v->a[8030] = anon_sym_DOLLAR_LBRACK;
	v->a[8031] = actions(2263);
	v->a[8032] = 1;
	v->a[8033] = anon_sym_DOLLAR;
	v->a[8034] = actions(2267);
	v->a[8035] = 1;
	v->a[8036] = anon_sym_DQUOTE;
	v->a[8037] = actions(2269);
	v->a[8038] = 1;
	v->a[8039] = aux_sym_number_token1;
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = actions(2271);
	v->a[8041] = 1;
	v->a[8042] = aux_sym_number_token2;
	v->a[8043] = actions(2273);
	v->a[8044] = 1;
	v->a[8045] = anon_sym_DOLLAR_LBRACE;
	v->a[8046] = actions(2275);
	v->a[8047] = 1;
	v->a[8048] = anon_sym_DOLLAR_LPAREN;
	v->a[8049] = actions(2277);
	v->a[8050] = 1;
	v->a[8051] = anon_sym_BQUOTE;
	v->a[8052] = actions(2279);
	v->a[8053] = 1;
	v->a[8054] = anon_sym_DOLLAR_BQUOTE;
	v->a[8055] = actions(2289);
	v->a[8056] = 1;
	v->a[8057] = sym__brace_start;
	v->a[8058] = actions(2361);
	v->a[8059] = 1;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = sym__special_character;
	v->a[8061] = actions(2365);
	v->a[8062] = 1;
	v->a[8063] = sym_variable_name;
	v->a[8064] = actions(2367);
	v->a[8065] = 1;
	v->a[8066] = sym_test_operator;
	v->a[8067] = actions(2414);
	v->a[8068] = 1;
	v->a[8069] = aux_sym__simple_variable_name_token1;
	v->a[8070] = state(1743);
	v->a[8071] = 1;
	v->a[8072] = aux_sym__literal_repeat1;
	v->a[8073] = state(6773);
	v->a[8074] = 1;
	v->a[8075] = sym_subscript;
	v->a[8076] = actions(1799);
	v->a[8077] = 2;
	v->a[8078] = sym_file_descriptor;
	v->a[8079] = aux_sym_heredoc_redirect_token1;
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = actions(2259);
	v->a[8081] = 2;
	v->a[8082] = anon_sym_LPAREN_LPAREN;
	v->a[8083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8084] = actions(2281);
	v->a[8085] = 2;
	v->a[8086] = anon_sym_LT_LPAREN;
	v->a[8087] = anon_sym_GT_LPAREN;
	v->a[8088] = actions(2359);
	v->a[8089] = 3;
	v->a[8090] = sym_raw_string;
	v->a[8091] = sym_ansi_c_string;
	v->a[8092] = sym_word;
	v->a[8093] = state(612);
	v->a[8094] = 3;
	v->a[8095] = sym_variable_assignment;
	v->a[8096] = sym_concatenation;
	v->a[8097] = aux_sym_declaration_command_repeat1;
	v->a[8098] = state(1602);
	v->a[8099] = 9;
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
