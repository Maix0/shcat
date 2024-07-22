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
	v->a[29000] = anon_sym_GT_PIPE;
	v->a[29001] = anon_sym_LT_GT;
	v->a[29002] = anon_sym_LT_LT;
	v->a[29003] = anon_sym_LT_LT_DASH;
	v->a[29004] = aux_sym_heredoc_redirect_token1;
	v->a[29005] = anon_sym_SEMI;
	v->a[29006] = 7;
	v->a[29007] = actions(3);
	v->a[29008] = 1;
	v->a[29009] = sym_comment;
	v->a[29010] = actions(794);
	v->a[29011] = 1;
	v->a[29012] = sym_variable_name;
	v->a[29013] = actions(1075);
	v->a[29014] = 1;
	v->a[29015] = sym_file_descriptor;
	v->a[29016] = state(1109);
	v->a[29017] = 2;
	v->a[29018] = sym_variable_assignment;
	v->a[29019] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = state(1034);
	v->a[29021] = 3;
	v->a[29022] = sym_file_redirect;
	v->a[29023] = sym_heredoc_redirect;
	v->a[29024] = aux_sym_redirected_statement_repeat1;
	v->a[29025] = actions(780);
	v->a[29026] = 9;
	v->a[29027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29028] = anon_sym_DOLLAR;
	v->a[29029] = anon_sym_DQUOTE;
	v->a[29030] = sym_raw_string;
	v->a[29031] = sym_number;
	v->a[29032] = anon_sym_DOLLAR_LBRACE;
	v->a[29033] = anon_sym_DOLLAR_LPAREN;
	v->a[29034] = anon_sym_BQUOTE;
	v->a[29035] = sym_word;
	v->a[29036] = actions(782);
	v->a[29037] = 16;
	v->a[29038] = anon_sym_PIPE;
	v->a[29039] = anon_sym_RPAREN;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = anon_sym_SEMI_SEMI;
	v->a[29041] = anon_sym_AMP_AMP;
	v->a[29042] = anon_sym_PIPE_PIPE;
	v->a[29043] = anon_sym_LT;
	v->a[29044] = anon_sym_GT;
	v->a[29045] = anon_sym_GT_GT;
	v->a[29046] = anon_sym_LT_AMP;
	v->a[29047] = anon_sym_GT_AMP;
	v->a[29048] = anon_sym_GT_PIPE;
	v->a[29049] = anon_sym_LT_GT;
	v->a[29050] = anon_sym_LT_LT;
	v->a[29051] = anon_sym_LT_LT_DASH;
	v->a[29052] = aux_sym_heredoc_redirect_token1;
	v->a[29053] = anon_sym_SEMI;
	v->a[29054] = 8;
	v->a[29055] = actions(3);
	v->a[29056] = 1;
	v->a[29057] = sym_comment;
	v->a[29058] = actions(782);
	v->a[29059] = 1;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = anon_sym_PIPE;
	v->a[29061] = actions(792);
	v->a[29062] = 1;
	v->a[29063] = sym_file_descriptor;
	v->a[29064] = actions(794);
	v->a[29065] = 1;
	v->a[29066] = sym_variable_name;
	v->a[29067] = state(1109);
	v->a[29068] = 2;
	v->a[29069] = sym_variable_assignment;
	v->a[29070] = aux_sym__variable_assignments_repeat1;
	v->a[29071] = state(1034);
	v->a[29072] = 3;
	v->a[29073] = sym_file_redirect;
	v->a[29074] = sym_heredoc_redirect;
	v->a[29075] = aux_sym_redirected_statement_repeat1;
	v->a[29076] = actions(1057);
	v->a[29077] = 8;
	v->a[29078] = anon_sym_RPAREN;
	v->a[29079] = anon_sym_SEMI_SEMI;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = anon_sym_AMP_AMP;
	v->a[29081] = anon_sym_PIPE_PIPE;
	v->a[29082] = anon_sym_LT_LT;
	v->a[29083] = anon_sym_LT_LT_DASH;
	v->a[29084] = aux_sym_heredoc_redirect_token1;
	v->a[29085] = anon_sym_SEMI;
	v->a[29086] = actions(780);
	v->a[29087] = 16;
	v->a[29088] = anon_sym_LT;
	v->a[29089] = anon_sym_GT;
	v->a[29090] = anon_sym_GT_GT;
	v->a[29091] = anon_sym_LT_AMP;
	v->a[29092] = anon_sym_GT_AMP;
	v->a[29093] = anon_sym_GT_PIPE;
	v->a[29094] = anon_sym_LT_GT;
	v->a[29095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29096] = anon_sym_DOLLAR;
	v->a[29097] = anon_sym_DQUOTE;
	v->a[29098] = sym_raw_string;
	v->a[29099] = sym_number;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
