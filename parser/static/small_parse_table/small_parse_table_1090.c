/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1090.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5450(t_small_parse_table_array *v)
{
	v->a[109000] = 3;
	v->a[109001] = anon_sym_SEMI_SEMI;
	v->a[109002] = anon_sym_AMP;
	v->a[109003] = anon_sym_SEMI;
	v->a[109004] = state(2295);
	v->a[109005] = 3;
	v->a[109006] = sym_file_redirect;
	v->a[109007] = sym_heredoc_redirect;
	v->a[109008] = aux_sym_redirected_statement_repeat1;
	v->a[109009] = actions(5966);
	v->a[109010] = 8;
	v->a[109011] = anon_sym_LT;
	v->a[109012] = anon_sym_GT;
	v->a[109013] = anon_sym_GT_GT;
	v->a[109014] = anon_sym_AMP_GT;
	v->a[109015] = anon_sym_AMP_GT_GT;
	v->a[109016] = anon_sym_LT_AMP;
	v->a[109017] = anon_sym_GT_AMP;
	v->a[109018] = anon_sym_GT_PIPE;
	v->a[109019] = 3;
	small_parse_table_5451(v);
}

void	small_parse_table_5451(t_small_parse_table_array *v)
{
	v->a[109020] = actions(3);
	v->a[109021] = 1;
	v->a[109022] = sym_comment;
	v->a[109023] = actions(6103);
	v->a[109024] = 3;
	v->a[109025] = sym_file_descriptor;
	v->a[109026] = ts_builtin_sym_end;
	v->a[109027] = aux_sym_heredoc_redirect_token1;
	v->a[109028] = actions(6101);
	v->a[109029] = 21;
	v->a[109030] = anon_sym_PIPE;
	v->a[109031] = anon_sym_RPAREN;
	v->a[109032] = anon_sym_SEMI_SEMI;
	v->a[109033] = anon_sym_PIPE_AMP;
	v->a[109034] = anon_sym_AMP_AMP;
	v->a[109035] = anon_sym_PIPE_PIPE;
	v->a[109036] = anon_sym_LT;
	v->a[109037] = anon_sym_GT;
	v->a[109038] = anon_sym_GT_GT;
	v->a[109039] = anon_sym_AMP_GT;
	small_parse_table_5452(v);
}

void	small_parse_table_5452(t_small_parse_table_array *v)
{
	v->a[109040] = anon_sym_AMP_GT_GT;
	v->a[109041] = anon_sym_LT_AMP;
	v->a[109042] = anon_sym_GT_AMP;
	v->a[109043] = anon_sym_GT_PIPE;
	v->a[109044] = anon_sym_LT_AMP_DASH;
	v->a[109045] = anon_sym_GT_AMP_DASH;
	v->a[109046] = anon_sym_LT_LT;
	v->a[109047] = anon_sym_LT_LT_DASH;
	v->a[109048] = anon_sym_AMP;
	v->a[109049] = anon_sym_BQUOTE;
	v->a[109050] = anon_sym_SEMI;
	v->a[109051] = 17;
	v->a[109052] = actions(57);
	v->a[109053] = 1;
	v->a[109054] = sym_comment;
	v->a[109055] = actions(2460);
	v->a[109056] = 1;
	v->a[109057] = anon_sym_DOLLAR;
	v->a[109058] = actions(2466);
	v->a[109059] = 1;
	small_parse_table_5453(v);
}

void	small_parse_table_5453(t_small_parse_table_array *v)
{
	v->a[109060] = aux_sym_number_token1;
	v->a[109061] = actions(2468);
	v->a[109062] = 1;
	v->a[109063] = aux_sym_number_token2;
	v->a[109064] = actions(2472);
	v->a[109065] = 1;
	v->a[109066] = anon_sym_DOLLAR_LPAREN;
	v->a[109067] = actions(2482);
	v->a[109068] = 1;
	v->a[109069] = sym__brace_start;
	v->a[109070] = actions(5066);
	v->a[109071] = 1;
	v->a[109072] = sym_word;
	v->a[109073] = actions(6051);
	v->a[109074] = 1;
	v->a[109075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109076] = actions(6053);
	v->a[109077] = 1;
	v->a[109078] = sym__special_character;
	v->a[109079] = actions(6055);
	small_parse_table_5454(v);
}

void	small_parse_table_5454(t_small_parse_table_array *v)
{
	v->a[109080] = 1;
	v->a[109081] = anon_sym_DQUOTE;
	v->a[109082] = actions(6057);
	v->a[109083] = 1;
	v->a[109084] = anon_sym_DOLLAR_LBRACE;
	v->a[109085] = actions(6059);
	v->a[109086] = 1;
	v->a[109087] = anon_sym_BQUOTE;
	v->a[109088] = actions(6061);
	v->a[109089] = 1;
	v->a[109090] = anon_sym_DOLLAR_BQUOTE;
	v->a[109091] = state(2666);
	v->a[109092] = 1;
	v->a[109093] = aux_sym__literal_repeat1;
	v->a[109094] = actions(5074);
	v->a[109095] = 2;
	v->a[109096] = sym_test_operator;
	v->a[109097] = sym_raw_string;
	v->a[109098] = state(1874);
	v->a[109099] = 2;
	small_parse_table_5455(v);
}

/* EOF small_parse_table_1090.c */
