/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_680.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3400(t_small_parse_table_array *v)
{
	v->a[68000] = 3;
	v->a[68001] = sym_file_redirect;
	v->a[68002] = sym_heredoc_redirect;
	v->a[68003] = aux_sym_redirected_statement_repeat1;
	v->a[68004] = actions(2013);
	v->a[68005] = 8;
	v->a[68006] = anon_sym_LT;
	v->a[68007] = anon_sym_GT;
	v->a[68008] = anon_sym_GT_GT;
	v->a[68009] = anon_sym_AMP_GT;
	v->a[68010] = anon_sym_AMP_GT_GT;
	v->a[68011] = anon_sym_LT_AMP;
	v->a[68012] = anon_sym_GT_AMP;
	v->a[68013] = anon_sym_GT_PIPE;
	v->a[68014] = 11;
	v->a[68015] = actions(3);
	v->a[68016] = 1;
	v->a[68017] = sym_comment;
	v->a[68018] = actions(809);
	v->a[68019] = 1;
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = anon_sym_BQUOTE;
	v->a[68021] = actions(2031);
	v->a[68022] = 1;
	v->a[68023] = aux_sym_heredoc_redirect_token1;
	v->a[68024] = actions(2033);
	v->a[68025] = 1;
	v->a[68026] = sym_file_descriptor;
	v->a[68027] = state(829);
	v->a[68028] = 1;
	v->a[68029] = sym_terminator;
	v->a[68030] = actions(804);
	v->a[68031] = 2;
	v->a[68032] = anon_sym_LT_LT;
	v->a[68033] = anon_sym_LT_LT_DASH;
	v->a[68034] = actions(842);
	v->a[68035] = 2;
	v->a[68036] = anon_sym_AMP_AMP;
	v->a[68037] = anon_sym_PIPE_PIPE;
	v->a[68038] = actions(2029);
	v->a[68039] = 2;
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = anon_sym_LT_AMP_DASH;
	v->a[68041] = anon_sym_GT_AMP_DASH;
	v->a[68042] = actions(800);
	v->a[68043] = 3;
	v->a[68044] = anon_sym_SEMI_SEMI;
	v->a[68045] = anon_sym_AMP;
	v->a[68046] = anon_sym_SEMI;
	v->a[68047] = state(1157);
	v->a[68048] = 3;
	v->a[68049] = sym_file_redirect;
	v->a[68050] = sym_heredoc_redirect;
	v->a[68051] = aux_sym_redirected_statement_repeat1;
	v->a[68052] = actions(2027);
	v->a[68053] = 8;
	v->a[68054] = anon_sym_LT;
	v->a[68055] = anon_sym_GT;
	v->a[68056] = anon_sym_GT_GT;
	v->a[68057] = anon_sym_AMP_GT;
	v->a[68058] = anon_sym_AMP_GT_GT;
	v->a[68059] = anon_sym_LT_AMP;
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = anon_sym_GT_AMP;
	v->a[68061] = anon_sym_GT_PIPE;
	v->a[68062] = 3;
	v->a[68063] = actions(3);
	v->a[68064] = 1;
	v->a[68065] = sym_comment;
	v->a[68066] = actions(988);
	v->a[68067] = 4;
	v->a[68068] = sym_file_descriptor;
	v->a[68069] = sym__concat;
	v->a[68070] = sym_variable_name;
	v->a[68071] = aux_sym_heredoc_redirect_token1;
	v->a[68072] = actions(983);
	v->a[68073] = 20;
	v->a[68074] = anon_sym_esac;
	v->a[68075] = anon_sym_PIPE;
	v->a[68076] = anon_sym_SEMI_SEMI;
	v->a[68077] = anon_sym_AMP_AMP;
	v->a[68078] = anon_sym_PIPE_PIPE;
	v->a[68079] = anon_sym_LT;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = anon_sym_GT;
	v->a[68081] = anon_sym_GT_GT;
	v->a[68082] = anon_sym_AMP_GT;
	v->a[68083] = anon_sym_AMP_GT_GT;
	v->a[68084] = anon_sym_LT_AMP;
	v->a[68085] = anon_sym_GT_AMP;
	v->a[68086] = anon_sym_GT_PIPE;
	v->a[68087] = anon_sym_LT_AMP_DASH;
	v->a[68088] = anon_sym_GT_AMP_DASH;
	v->a[68089] = anon_sym_LT_LT;
	v->a[68090] = anon_sym_LT_LT_DASH;
	v->a[68091] = anon_sym_AMP;
	v->a[68092] = aux_sym_concatenation_token1;
	v->a[68093] = anon_sym_SEMI;
	v->a[68094] = 8;
	v->a[68095] = actions(3);
	v->a[68096] = 1;
	v->a[68097] = sym_comment;
	v->a[68098] = actions(2079);
	v->a[68099] = 1;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
