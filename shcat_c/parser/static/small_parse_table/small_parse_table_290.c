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
	v->a[29000] = anon_sym_LT;
	v->a[29001] = anon_sym_GT;
	v->a[29002] = anon_sym_LT_LT;
	v->a[29003] = anon_sym_GT_GT;
	v->a[29004] = anon_sym_LPAREN;
	v->a[29005] = anon_sym_esac;
	v->a[29006] = anon_sym_SEMI_SEMI;
	v->a[29007] = anon_sym_SEMI_AMP;
	v->a[29008] = anon_sym_SEMI_SEMI_AMP;
	v->a[29009] = anon_sym_PIPE_AMP;
	v->a[29010] = anon_sym_EQ_TILDE;
	v->a[29011] = anon_sym_AMP_GT;
	v->a[29012] = anon_sym_AMP_GT_GT;
	v->a[29013] = anon_sym_LT_AMP;
	v->a[29014] = anon_sym_GT_AMP;
	v->a[29015] = anon_sym_GT_PIPE;
	v->a[29016] = anon_sym_LT_AMP_DASH;
	v->a[29017] = anon_sym_GT_AMP_DASH;
	v->a[29018] = anon_sym_LT_LT_DASH;
	v->a[29019] = anon_sym_LT_LT_LT;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29021] = anon_sym_DOLLAR_LBRACK;
	v->a[29022] = aux_sym_concatenation_token1;
	v->a[29023] = anon_sym_DOLLAR;
	v->a[29024] = sym__special_character;
	v->a[29025] = anon_sym_DQUOTE;
	v->a[29026] = sym_raw_string;
	v->a[29027] = sym_ansi_c_string;
	v->a[29028] = aux_sym_number_token1;
	v->a[29029] = aux_sym_number_token2;
	v->a[29030] = anon_sym_DOLLAR_LBRACE;
	v->a[29031] = anon_sym_DOLLAR_LPAREN;
	v->a[29032] = anon_sym_BQUOTE;
	v->a[29033] = anon_sym_DOLLAR_BQUOTE;
	v->a[29034] = anon_sym_LT_LPAREN;
	v->a[29035] = anon_sym_GT_LPAREN;
	v->a[29036] = sym_word;
	v->a[29037] = 13;
	v->a[29038] = actions(3);
	v->a[29039] = 1;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = sym_comment;
	v->a[29041] = actions(4386);
	v->a[29042] = 1;
	v->a[29043] = sym_variable_name;
	v->a[29044] = actions(4411);
	v->a[29045] = 1;
	v->a[29046] = aux_sym_heredoc_redirect_token1;
	v->a[29047] = state(6772);
	v->a[29048] = 1;
	v->a[29049] = sym_subscript;
	v->a[29050] = actions(4253);
	v->a[29051] = 2;
	v->a[29052] = anon_sym_PIPE;
	v->a[29053] = anon_sym_PIPE_AMP;
	v->a[29054] = actions(4380);
	v->a[29055] = 2;
	v->a[29056] = anon_sym_PIPE_PIPE;
	v->a[29057] = anon_sym_AMP_AMP;
	v->a[29058] = actions(4382);
	v->a[29059] = 2;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = anon_sym_LT_LT;
	v->a[29061] = anon_sym_LT_LT_DASH;
	v->a[29062] = actions(4409);
	v->a[29063] = 2;
	v->a[29064] = anon_sym_SEMI;
	v->a[29065] = anon_sym_AMP;
	v->a[29066] = state(4358);
	v->a[29067] = 2;
	v->a[29068] = sym_variable_assignment;
	v->a[29069] = aux_sym_variable_assignments_repeat1;
	v->a[29070] = actions(4257);
	v->a[29071] = 3;
	v->a[29072] = anon_sym_SEMI_SEMI;
	v->a[29073] = anon_sym_SEMI_AMP;
	v->a[29074] = anon_sym_SEMI_SEMI_AMP;
	v->a[29075] = actions(4261);
	v->a[29076] = 3;
	v->a[29077] = sym_file_descriptor;
	v->a[29078] = sym_test_operator;
	v->a[29079] = sym__brace_start;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = state(4455);
	v->a[29081] = 3;
	v->a[29082] = sym_file_redirect;
	v->a[29083] = sym_heredoc_redirect;
	v->a[29084] = aux_sym_redirected_statement_repeat1;
	v->a[29085] = actions(4247);
	v->a[29086] = 28;
	v->a[29087] = anon_sym_LPAREN_LPAREN;
	v->a[29088] = anon_sym_LT;
	v->a[29089] = anon_sym_GT;
	v->a[29090] = anon_sym_GT_GT;
	v->a[29091] = anon_sym_AMP_GT;
	v->a[29092] = anon_sym_AMP_GT_GT;
	v->a[29093] = anon_sym_LT_AMP;
	v->a[29094] = anon_sym_GT_AMP;
	v->a[29095] = anon_sym_GT_PIPE;
	v->a[29096] = anon_sym_LT_AMP_DASH;
	v->a[29097] = anon_sym_GT_AMP_DASH;
	v->a[29098] = anon_sym_LT_LT_LT;
	v->a[29099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
