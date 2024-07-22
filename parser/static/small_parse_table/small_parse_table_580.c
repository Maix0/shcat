/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_580.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2900(t_small_parse_table_array *v)
{
	v->a[58000] = 3;
	v->a[58001] = sym_file_redirect;
	v->a[58002] = sym_heredoc_redirect;
	v->a[58003] = aux_sym_redirected_statement_repeat1;
	v->a[58004] = actions(1057);
	v->a[58005] = 15;
	v->a[58006] = anon_sym_PIPE;
	v->a[58007] = anon_sym_RPAREN;
	v->a[58008] = anon_sym_SEMI_SEMI;
	v->a[58009] = anon_sym_AMP_AMP;
	v->a[58010] = anon_sym_PIPE_PIPE;
	v->a[58011] = anon_sym_LT;
	v->a[58012] = anon_sym_GT;
	v->a[58013] = anon_sym_GT_GT;
	v->a[58014] = anon_sym_LT_AMP;
	v->a[58015] = anon_sym_GT_AMP;
	v->a[58016] = anon_sym_GT_PIPE;
	v->a[58017] = anon_sym_LT_GT;
	v->a[58018] = anon_sym_LT_LT;
	v->a[58019] = anon_sym_LT_LT_DASH;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = anon_sym_SEMI;
	v->a[58021] = 11;
	v->a[58022] = actions(3);
	v->a[58023] = 1;
	v->a[58024] = sym_comment;
	v->a[58025] = actions(782);
	v->a[58026] = 1;
	v->a[58027] = anon_sym_PIPE;
	v->a[58028] = actions(784);
	v->a[58029] = 1;
	v->a[58030] = anon_sym_SEMI_SEMI;
	v->a[58031] = actions(786);
	v->a[58032] = 1;
	v->a[58033] = anon_sym_SEMI;
	v->a[58034] = actions(1888);
	v->a[58035] = 1;
	v->a[58036] = aux_sym_heredoc_redirect_token1;
	v->a[58037] = actions(1945);
	v->a[58038] = 1;
	v->a[58039] = sym_file_descriptor;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = state(566);
	v->a[58041] = 1;
	v->a[58042] = sym_terminator;
	v->a[58043] = actions(790);
	v->a[58044] = 2;
	v->a[58045] = anon_sym_LT_LT;
	v->a[58046] = anon_sym_LT_LT_DASH;
	v->a[58047] = actions(1028);
	v->a[58048] = 2;
	v->a[58049] = anon_sym_AMP_AMP;
	v->a[58050] = anon_sym_PIPE_PIPE;
	v->a[58051] = state(1194);
	v->a[58052] = 3;
	v->a[58053] = sym_file_redirect;
	v->a[58054] = sym_heredoc_redirect;
	v->a[58055] = aux_sym_redirected_statement_repeat1;
	v->a[58056] = actions(1941);
	v->a[58057] = 7;
	v->a[58058] = anon_sym_LT;
	v->a[58059] = anon_sym_GT;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_GT_GT;
	v->a[58061] = anon_sym_LT_AMP;
	v->a[58062] = anon_sym_GT_AMP;
	v->a[58063] = anon_sym_GT_PIPE;
	v->a[58064] = anon_sym_LT_GT;
	v->a[58065] = 7;
	v->a[58066] = actions(3);
	v->a[58067] = 1;
	v->a[58068] = sym_comment;
	v->a[58069] = actions(1968);
	v->a[58070] = 1;
	v->a[58071] = aux_sym_heredoc_redirect_token1;
	v->a[58072] = actions(1970);
	v->a[58073] = 1;
	v->a[58074] = sym_file_descriptor;
	v->a[58075] = actions(1965);
	v->a[58076] = 2;
	v->a[58077] = anon_sym_LT_LT;
	v->a[58078] = anon_sym_LT_LT_DASH;
	v->a[58079] = state(1041);
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = 3;
	v->a[58081] = sym_file_redirect;
	v->a[58082] = sym_heredoc_redirect;
	v->a[58083] = aux_sym_redirected_statement_repeat1;
	v->a[58084] = actions(1960);
	v->a[58085] = 6;
	v->a[58086] = anon_sym_PIPE;
	v->a[58087] = anon_sym_RPAREN;
	v->a[58088] = anon_sym_SEMI_SEMI;
	v->a[58089] = anon_sym_AMP_AMP;
	v->a[58090] = anon_sym_PIPE_PIPE;
	v->a[58091] = anon_sym_SEMI;
	v->a[58092] = actions(1962);
	v->a[58093] = 7;
	v->a[58094] = anon_sym_LT;
	v->a[58095] = anon_sym_GT;
	v->a[58096] = anon_sym_GT_GT;
	v->a[58097] = anon_sym_LT_AMP;
	v->a[58098] = anon_sym_GT_AMP;
	v->a[58099] = anon_sym_GT_PIPE;
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
