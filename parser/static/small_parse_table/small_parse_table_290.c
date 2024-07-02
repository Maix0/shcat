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
	v->a[29000] = actions(1053);
	v->a[29001] = 26;
	v->a[29002] = anon_sym_PIPE;
	v->a[29003] = anon_sym_RPAREN;
	v->a[29004] = anon_sym_SEMI_SEMI;
	v->a[29005] = anon_sym_AMP_AMP;
	v->a[29006] = anon_sym_PIPE_PIPE;
	v->a[29007] = anon_sym_LT;
	v->a[29008] = anon_sym_GT;
	v->a[29009] = anon_sym_GT_GT;
	v->a[29010] = anon_sym_LT_AMP;
	v->a[29011] = anon_sym_GT_AMP;
	v->a[29012] = anon_sym_GT_PIPE;
	v->a[29013] = anon_sym_LT_GT;
	v->a[29014] = anon_sym_LT_LT;
	v->a[29015] = anon_sym_LT_LT_DASH;
	v->a[29016] = aux_sym_heredoc_redirect_token1;
	v->a[29017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29018] = anon_sym_AMP;
	v->a[29019] = anon_sym_DOLLAR;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = anon_sym_DQUOTE;
	v->a[29021] = sym_raw_string;
	v->a[29022] = sym_number;
	v->a[29023] = anon_sym_DOLLAR_LBRACE;
	v->a[29024] = anon_sym_DOLLAR_LPAREN;
	v->a[29025] = anon_sym_BQUOTE;
	v->a[29026] = sym_word;
	v->a[29027] = anon_sym_SEMI;
	v->a[29028] = 6;
	v->a[29029] = actions(3);
	v->a[29030] = 1;
	v->a[29031] = sym_comment;
	v->a[29032] = actions(1096);
	v->a[29033] = 1;
	v->a[29034] = aux_sym_concatenation_token1;
	v->a[29035] = actions(1099);
	v->a[29036] = 1;
	v->a[29037] = sym__concat;
	v->a[29038] = state(350);
	v->a[29039] = 1;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = aux_sym_concatenation_repeat1;
	v->a[29041] = actions(1092);
	v->a[29042] = 3;
	v->a[29043] = sym_file_descriptor;
	v->a[29044] = sym__bare_dollar;
	v->a[29045] = ts_builtin_sym_end;
	v->a[29046] = actions(1094);
	v->a[29047] = 26;
	v->a[29048] = anon_sym_LPAREN;
	v->a[29049] = anon_sym_PIPE;
	v->a[29050] = anon_sym_SEMI_SEMI;
	v->a[29051] = anon_sym_AMP_AMP;
	v->a[29052] = anon_sym_PIPE_PIPE;
	v->a[29053] = anon_sym_LT;
	v->a[29054] = anon_sym_GT;
	v->a[29055] = anon_sym_GT_GT;
	v->a[29056] = anon_sym_LT_AMP;
	v->a[29057] = anon_sym_GT_AMP;
	v->a[29058] = anon_sym_GT_PIPE;
	v->a[29059] = anon_sym_LT_GT;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = anon_sym_LT_LT;
	v->a[29061] = anon_sym_LT_LT_DASH;
	v->a[29062] = aux_sym_heredoc_redirect_token1;
	v->a[29063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29064] = anon_sym_AMP;
	v->a[29065] = anon_sym_DOLLAR;
	v->a[29066] = anon_sym_DQUOTE;
	v->a[29067] = sym_raw_string;
	v->a[29068] = sym_number;
	v->a[29069] = anon_sym_DOLLAR_LBRACE;
	v->a[29070] = anon_sym_DOLLAR_LPAREN;
	v->a[29071] = anon_sym_BQUOTE;
	v->a[29072] = sym_word;
	v->a[29073] = anon_sym_SEMI;
	v->a[29074] = 8;
	v->a[29075] = actions(3);
	v->a[29076] = 1;
	v->a[29077] = sym_comment;
	v->a[29078] = actions(692);
	v->a[29079] = 1;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = anon_sym_PIPE;
	v->a[29081] = actions(702);
	v->a[29082] = 1;
	v->a[29083] = sym_file_descriptor;
	v->a[29084] = actions(916);
	v->a[29085] = 1;
	v->a[29086] = sym_variable_name;
	v->a[29087] = state(1181);
	v->a[29088] = 2;
	v->a[29089] = sym_variable_assignment;
	v->a[29090] = aux_sym__variable_assignments_repeat1;
	v->a[29091] = state(1134);
	v->a[29092] = 3;
	v->a[29093] = sym_file_redirect;
	v->a[29094] = sym_heredoc_redirect;
	v->a[29095] = aux_sym_redirected_statement_repeat1;
	v->a[29096] = actions(997);
	v->a[29097] = 8;
	v->a[29098] = anon_sym_SEMI_SEMI;
	v->a[29099] = anon_sym_AMP_AMP;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
