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
	v->a[58000] = anon_sym_AMP_AMP;
	v->a[58001] = anon_sym_PIPE_PIPE;
	v->a[58002] = actions(1013);
	v->a[58003] = 3;
	v->a[58004] = anon_sym_SEMI_SEMI;
	v->a[58005] = anon_sym_AMP;
	v->a[58006] = anon_sym_SEMI;
	v->a[58007] = state(1194);
	v->a[58008] = 3;
	v->a[58009] = sym_file_redirect;
	v->a[58010] = sym_heredoc_redirect;
	v->a[58011] = aux_sym_redirected_statement_repeat1;
	v->a[58012] = actions(1887);
	v->a[58013] = 7;
	v->a[58014] = anon_sym_LT;
	v->a[58015] = anon_sym_GT;
	v->a[58016] = anon_sym_GT_GT;
	v->a[58017] = anon_sym_LT_AMP;
	v->a[58018] = anon_sym_GT_AMP;
	v->a[58019] = anon_sym_GT_PIPE;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = anon_sym_LT_GT;
	v->a[58021] = 11;
	v->a[58022] = actions(3);
	v->a[58023] = 1;
	v->a[58024] = sym_comment;
	v->a[58025] = actions(736);
	v->a[58026] = 1;
	v->a[58027] = anon_sym_PIPE;
	v->a[58028] = actions(842);
	v->a[58029] = 1;
	v->a[58030] = anon_sym_SEMI_SEMI;
	v->a[58031] = actions(1865);
	v->a[58032] = 1;
	v->a[58033] = aux_sym_heredoc_redirect_token1;
	v->a[58034] = actions(1889);
	v->a[58035] = 1;
	v->a[58036] = sym_file_descriptor;
	v->a[58037] = state(668);
	v->a[58038] = 1;
	v->a[58039] = sym_terminator;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = actions(740);
	v->a[58041] = 2;
	v->a[58042] = anon_sym_AMP;
	v->a[58043] = anon_sym_SEMI;
	v->a[58044] = actions(744);
	v->a[58045] = 2;
	v->a[58046] = anon_sym_LT_LT;
	v->a[58047] = anon_sym_LT_LT_DASH;
	v->a[58048] = actions(955);
	v->a[58049] = 2;
	v->a[58050] = anon_sym_AMP_AMP;
	v->a[58051] = anon_sym_PIPE_PIPE;
	v->a[58052] = state(1194);
	v->a[58053] = 3;
	v->a[58054] = sym_file_redirect;
	v->a[58055] = sym_heredoc_redirect;
	v->a[58056] = aux_sym_redirected_statement_repeat1;
	v->a[58057] = actions(1887);
	v->a[58058] = 7;
	v->a[58059] = anon_sym_LT;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_GT;
	v->a[58061] = anon_sym_GT_GT;
	v->a[58062] = anon_sym_LT_AMP;
	v->a[58063] = anon_sym_GT_AMP;
	v->a[58064] = anon_sym_GT_PIPE;
	v->a[58065] = anon_sym_LT_GT;
	v->a[58066] = 3;
	v->a[58067] = actions(3);
	v->a[58068] = 1;
	v->a[58069] = sym_comment;
	v->a[58070] = actions(1201);
	v->a[58071] = 4;
	v->a[58072] = sym_file_descriptor;
	v->a[58073] = sym__concat;
	v->a[58074] = sym_variable_name;
	v->a[58075] = aux_sym_heredoc_redirect_token1;
	v->a[58076] = actions(1199);
	v->a[58077] = 17;
	v->a[58078] = anon_sym_esac;
	v->a[58079] = anon_sym_PIPE;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = anon_sym_SEMI_SEMI;
	v->a[58081] = anon_sym_AMP_AMP;
	v->a[58082] = anon_sym_PIPE_PIPE;
	v->a[58083] = anon_sym_LT;
	v->a[58084] = anon_sym_GT;
	v->a[58085] = anon_sym_GT_GT;
	v->a[58086] = anon_sym_LT_AMP;
	v->a[58087] = anon_sym_GT_AMP;
	v->a[58088] = anon_sym_GT_PIPE;
	v->a[58089] = anon_sym_LT_GT;
	v->a[58090] = anon_sym_LT_LT;
	v->a[58091] = anon_sym_LT_LT_DASH;
	v->a[58092] = anon_sym_AMP;
	v->a[58093] = aux_sym_concatenation_token1;
	v->a[58094] = anon_sym_SEMI;
	v->a[58095] = 3;
	v->a[58096] = actions(3);
	v->a[58097] = 1;
	v->a[58098] = sym_comment;
	v->a[58099] = actions(1178);
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
