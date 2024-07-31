/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_510.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2550(t_small_parse_table_array *v)
{
	v->a[51000] = anon_sym_AMP_AMP;
	v->a[51001] = anon_sym_PIPE_PIPE;
	v->a[51002] = anon_sym_LT;
	v->a[51003] = anon_sym_GT;
	v->a[51004] = anon_sym_GT_GT;
	v->a[51005] = anon_sym_LT_AMP;
	v->a[51006] = anon_sym_GT_AMP;
	v->a[51007] = anon_sym_GT_PIPE;
	v->a[51008] = anon_sym_LT_GT;
	v->a[51009] = anon_sym_LT_LT;
	v->a[51010] = anon_sym_LT_LT_DASH;
	v->a[51011] = anon_sym_SEMI;
	v->a[51012] = 5;
	v->a[51013] = actions(3);
	v->a[51014] = 1;
	v->a[51015] = sym_comment;
	v->a[51016] = actions(746);
	v->a[51017] = 1;
	v->a[51018] = anon_sym_PIPE;
	v->a[51019] = actions(942);
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = 1;
	v->a[51021] = aux_sym_heredoc_redirect_token1;
	v->a[51022] = state(970);
	v->a[51023] = 3;
	v->a[51024] = sym_file_redirect;
	v->a[51025] = sym_heredoc_redirect;
	v->a[51026] = aux_sym_redirected_statement_repeat1;
	v->a[51027] = actions(916);
	v->a[51028] = 14;
	v->a[51029] = anon_sym_SEMI_SEMI;
	v->a[51030] = anon_sym_AMP_AMP;
	v->a[51031] = anon_sym_PIPE_PIPE;
	v->a[51032] = anon_sym_LT;
	v->a[51033] = anon_sym_GT;
	v->a[51034] = anon_sym_GT_GT;
	v->a[51035] = anon_sym_LT_AMP;
	v->a[51036] = anon_sym_GT_AMP;
	v->a[51037] = anon_sym_GT_PIPE;
	v->a[51038] = anon_sym_LT_GT;
	v->a[51039] = anon_sym_LT_LT;
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = anon_sym_LT_LT_DASH;
	v->a[51041] = anon_sym_BQUOTE;
	v->a[51042] = anon_sym_SEMI;
	v->a[51043] = 3;
	v->a[51044] = actions(3);
	v->a[51045] = 1;
	v->a[51046] = sym_comment;
	v->a[51047] = actions(445);
	v->a[51048] = 3;
	v->a[51049] = sym__concat;
	v->a[51050] = sym_variable_name;
	v->a[51051] = aux_sym_heredoc_redirect_token1;
	v->a[51052] = actions(443);
	v->a[51053] = 16;
	v->a[51054] = anon_sym_esac;
	v->a[51055] = anon_sym_PIPE;
	v->a[51056] = anon_sym_SEMI_SEMI;
	v->a[51057] = anon_sym_AMP_AMP;
	v->a[51058] = anon_sym_PIPE_PIPE;
	v->a[51059] = anon_sym_LT;
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = anon_sym_GT;
	v->a[51061] = anon_sym_GT_GT;
	v->a[51062] = anon_sym_LT_AMP;
	v->a[51063] = anon_sym_GT_AMP;
	v->a[51064] = anon_sym_GT_PIPE;
	v->a[51065] = anon_sym_LT_GT;
	v->a[51066] = anon_sym_LT_LT;
	v->a[51067] = anon_sym_LT_LT_DASH;
	v->a[51068] = aux_sym_concatenation_token1;
	v->a[51069] = anon_sym_SEMI;
	v->a[51070] = 5;
	v->a[51071] = actions(3);
	v->a[51072] = 1;
	v->a[51073] = sym_comment;
	v->a[51074] = actions(1700);
	v->a[51075] = 1;
	v->a[51076] = aux_sym_heredoc_redirect_token1;
	v->a[51077] = actions(1744);
	v->a[51078] = 1;
	v->a[51079] = sym_variable_name;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = state(969);
	v->a[51081] = 2;
	v->a[51082] = sym_variable_assignment;
	v->a[51083] = aux_sym__variable_assignments_repeat1;
	v->a[51084] = actions(1702);
	v->a[51085] = 15;
	v->a[51086] = anon_sym_PIPE;
	v->a[51087] = anon_sym_RPAREN;
	v->a[51088] = anon_sym_SEMI_SEMI;
	v->a[51089] = anon_sym_AMP_AMP;
	v->a[51090] = anon_sym_PIPE_PIPE;
	v->a[51091] = anon_sym_LT;
	v->a[51092] = anon_sym_GT;
	v->a[51093] = anon_sym_GT_GT;
	v->a[51094] = anon_sym_LT_AMP;
	v->a[51095] = anon_sym_GT_AMP;
	v->a[51096] = anon_sym_GT_PIPE;
	v->a[51097] = anon_sym_LT_GT;
	v->a[51098] = anon_sym_LT_LT;
	v->a[51099] = anon_sym_LT_LT_DASH;
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
