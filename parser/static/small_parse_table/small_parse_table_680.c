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
	v->a[68000] = anon_sym_SEMI;
	v->a[68001] = state(1160);
	v->a[68002] = 3;
	v->a[68003] = sym_file_redirect;
	v->a[68004] = sym_heredoc_redirect;
	v->a[68005] = aux_sym_redirected_statement_repeat1;
	v->a[68006] = actions(2454);
	v->a[68007] = 8;
	v->a[68008] = anon_sym_LT;
	v->a[68009] = anon_sym_GT;
	v->a[68010] = anon_sym_GT_GT;
	v->a[68011] = anon_sym_AMP_GT;
	v->a[68012] = anon_sym_AMP_GT_GT;
	v->a[68013] = anon_sym_LT_AMP;
	v->a[68014] = anon_sym_GT_AMP;
	v->a[68015] = anon_sym_GT_PIPE;
	v->a[68016] = 7;
	v->a[68017] = actions(3);
	v->a[68018] = 1;
	v->a[68019] = sym_comment;
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = actions(2478);
	v->a[68021] = 1;
	v->a[68022] = sym_file_descriptor;
	v->a[68023] = actions(2273);
	v->a[68024] = 2;
	v->a[68025] = anon_sym_LT_AMP_DASH;
	v->a[68026] = anon_sym_GT_AMP_DASH;
	v->a[68027] = actions(2468);
	v->a[68028] = 2;
	v->a[68029] = ts_builtin_sym_end;
	v->a[68030] = aux_sym_heredoc_redirect_token1;
	v->a[68031] = state(1198);
	v->a[68032] = 2;
	v->a[68033] = sym_file_redirect;
	v->a[68034] = aux_sym_redirected_statement_repeat2;
	v->a[68035] = actions(2271);
	v->a[68036] = 8;
	v->a[68037] = anon_sym_LT;
	v->a[68038] = anon_sym_GT;
	v->a[68039] = anon_sym_GT_GT;
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = anon_sym_AMP_GT;
	v->a[68041] = anon_sym_AMP_GT_GT;
	v->a[68042] = anon_sym_LT_AMP;
	v->a[68043] = anon_sym_GT_AMP;
	v->a[68044] = anon_sym_GT_PIPE;
	v->a[68045] = actions(2466);
	v->a[68046] = 8;
	v->a[68047] = anon_sym_PIPE;
	v->a[68048] = anon_sym_SEMI_SEMI;
	v->a[68049] = anon_sym_AMP_AMP;
	v->a[68050] = anon_sym_PIPE_PIPE;
	v->a[68051] = anon_sym_LT_LT;
	v->a[68052] = anon_sym_LT_LT_DASH;
	v->a[68053] = anon_sym_AMP;
	v->a[68054] = anon_sym_SEMI;
	v->a[68055] = 3;
	v->a[68056] = actions(3);
	v->a[68057] = 1;
	v->a[68058] = sym_comment;
	v->a[68059] = actions(2462);
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = 3;
	v->a[68061] = sym_file_descriptor;
	v->a[68062] = ts_builtin_sym_end;
	v->a[68063] = aux_sym_heredoc_redirect_token1;
	v->a[68064] = actions(2464);
	v->a[68065] = 20;
	v->a[68066] = anon_sym_PIPE;
	v->a[68067] = anon_sym_RPAREN;
	v->a[68068] = anon_sym_SEMI_SEMI;
	v->a[68069] = anon_sym_AMP_AMP;
	v->a[68070] = anon_sym_PIPE_PIPE;
	v->a[68071] = anon_sym_LT;
	v->a[68072] = anon_sym_GT;
	v->a[68073] = anon_sym_GT_GT;
	v->a[68074] = anon_sym_AMP_GT;
	v->a[68075] = anon_sym_AMP_GT_GT;
	v->a[68076] = anon_sym_LT_AMP;
	v->a[68077] = anon_sym_GT_AMP;
	v->a[68078] = anon_sym_GT_PIPE;
	v->a[68079] = anon_sym_LT_AMP_DASH;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = anon_sym_GT_AMP_DASH;
	v->a[68081] = anon_sym_LT_LT;
	v->a[68082] = anon_sym_LT_LT_DASH;
	v->a[68083] = anon_sym_AMP;
	v->a[68084] = anon_sym_BQUOTE;
	v->a[68085] = anon_sym_SEMI;
	v->a[68086] = 11;
	v->a[68087] = actions(3);
	v->a[68088] = 1;
	v->a[68089] = sym_comment;
	v->a[68090] = actions(1002);
	v->a[68091] = 1;
	v->a[68092] = anon_sym_PIPE;
	v->a[68093] = actions(1073);
	v->a[68094] = 1;
	v->a[68095] = anon_sym_SEMI_SEMI;
	v->a[68096] = actions(2288);
	v->a[68097] = 1;
	v->a[68098] = aux_sym_heredoc_redirect_token1;
	v->a[68099] = actions(2460);
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
