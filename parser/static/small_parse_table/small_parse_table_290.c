/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_290.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1450(t_small_parse_table_array *v)
{
	v->a[29000] = aux_sym_redirected_statement_repeat1;
	v->a[29001] = actions(734);
	v->a[29002] = 9;
	v->a[29003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29004] = anon_sym_DOLLAR;
	v->a[29005] = anon_sym_DQUOTE;
	v->a[29006] = sym_raw_string;
	v->a[29007] = sym_number;
	v->a[29008] = anon_sym_DOLLAR_LBRACE;
	v->a[29009] = anon_sym_DOLLAR_LPAREN;
	v->a[29010] = anon_sym_BQUOTE;
	v->a[29011] = sym_word;
	v->a[29012] = actions(736);
	v->a[29013] = 16;
	v->a[29014] = anon_sym_PIPE;
	v->a[29015] = anon_sym_SEMI_SEMI;
	v->a[29016] = anon_sym_AMP_AMP;
	v->a[29017] = anon_sym_PIPE_PIPE;
	v->a[29018] = anon_sym_LT;
	v->a[29019] = anon_sym_GT;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = anon_sym_GT_GT;
	v->a[29021] = anon_sym_LT_AMP;
	v->a[29022] = anon_sym_GT_AMP;
	v->a[29023] = anon_sym_GT_PIPE;
	v->a[29024] = anon_sym_LT_GT;
	v->a[29025] = anon_sym_LT_LT;
	v->a[29026] = anon_sym_LT_LT_DASH;
	v->a[29027] = aux_sym_heredoc_redirect_token1;
	v->a[29028] = anon_sym_AMP;
	v->a[29029] = anon_sym_SEMI;
	v->a[29030] = 8;
	v->a[29031] = actions(3);
	v->a[29032] = 1;
	v->a[29033] = sym_comment;
	v->a[29034] = actions(736);
	v->a[29035] = 1;
	v->a[29036] = anon_sym_PIPE;
	v->a[29037] = actions(746);
	v->a[29038] = 1;
	v->a[29039] = sym_file_descriptor;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = actions(957);
	v->a[29041] = 1;
	v->a[29042] = sym_variable_name;
	v->a[29043] = state(1134);
	v->a[29044] = 2;
	v->a[29045] = sym_variable_assignment;
	v->a[29046] = aux_sym__variable_assignments_repeat1;
	v->a[29047] = state(1194);
	v->a[29048] = 3;
	v->a[29049] = sym_file_redirect;
	v->a[29050] = sym_heredoc_redirect;
	v->a[29051] = aux_sym_redirected_statement_repeat1;
	v->a[29052] = actions(960);
	v->a[29053] = 8;
	v->a[29054] = anon_sym_SEMI_SEMI;
	v->a[29055] = anon_sym_AMP_AMP;
	v->a[29056] = anon_sym_PIPE_PIPE;
	v->a[29057] = anon_sym_LT_LT;
	v->a[29058] = anon_sym_LT_LT_DASH;
	v->a[29059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = anon_sym_AMP;
	v->a[29061] = anon_sym_SEMI;
	v->a[29062] = actions(734);
	v->a[29063] = 16;
	v->a[29064] = anon_sym_LT;
	v->a[29065] = anon_sym_GT;
	v->a[29066] = anon_sym_GT_GT;
	v->a[29067] = anon_sym_LT_AMP;
	v->a[29068] = anon_sym_GT_AMP;
	v->a[29069] = anon_sym_GT_PIPE;
	v->a[29070] = anon_sym_LT_GT;
	v->a[29071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29072] = anon_sym_DOLLAR;
	v->a[29073] = anon_sym_DQUOTE;
	v->a[29074] = sym_raw_string;
	v->a[29075] = sym_number;
	v->a[29076] = anon_sym_DOLLAR_LBRACE;
	v->a[29077] = anon_sym_DOLLAR_LPAREN;
	v->a[29078] = anon_sym_BQUOTE;
	v->a[29079] = sym_word;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = 19;
	v->a[29081] = actions(3);
	v->a[29082] = 1;
	v->a[29083] = sym_comment;
	v->a[29084] = actions(1066);
	v->a[29085] = 1;
	v->a[29086] = anon_sym_PIPE;
	v->a[29087] = actions(1074);
	v->a[29088] = 1;
	v->a[29089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29090] = actions(1076);
	v->a[29091] = 1;
	v->a[29092] = anon_sym_DOLLAR;
	v->a[29093] = actions(1078);
	v->a[29094] = 1;
	v->a[29095] = anon_sym_DQUOTE;
	v->a[29096] = actions(1080);
	v->a[29097] = 1;
	v->a[29098] = anon_sym_DOLLAR_LBRACE;
	v->a[29099] = actions(1082);
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
