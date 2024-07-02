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
	v->a[58000] = sym_comment;
	v->a[58001] = actions(1092);
	v->a[58002] = 4;
	v->a[58003] = sym_file_descriptor;
	v->a[58004] = sym__concat;
	v->a[58005] = sym_variable_name;
	v->a[58006] = aux_sym_heredoc_redirect_token1;
	v->a[58007] = actions(1094);
	v->a[58008] = 17;
	v->a[58009] = anon_sym_esac;
	v->a[58010] = anon_sym_PIPE;
	v->a[58011] = anon_sym_SEMI_SEMI;
	v->a[58012] = anon_sym_AMP_AMP;
	v->a[58013] = anon_sym_PIPE_PIPE;
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
	v->a[58021] = anon_sym_LT_LT;
	v->a[58022] = anon_sym_LT_LT_DASH;
	v->a[58023] = anon_sym_AMP;
	v->a[58024] = aux_sym_concatenation_token1;
	v->a[58025] = anon_sym_SEMI;
	v->a[58026] = 7;
	v->a[58027] = actions(3);
	v->a[58028] = 1;
	v->a[58029] = sym_comment;
	v->a[58030] = actions(1859);
	v->a[58031] = 1;
	v->a[58032] = sym_file_descriptor;
	v->a[58033] = actions(1976);
	v->a[58034] = 1;
	v->a[58035] = aux_sym_heredoc_redirect_token1;
	v->a[58036] = actions(700);
	v->a[58037] = 2;
	v->a[58038] = anon_sym_LT_LT;
	v->a[58039] = anon_sym_LT_LT_DASH;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = state(1027);
	v->a[58041] = 3;
	v->a[58042] = sym_file_redirect;
	v->a[58043] = sym_heredoc_redirect;
	v->a[58044] = aux_sym_redirected_statement_repeat1;
	v->a[58045] = actions(1855);
	v->a[58046] = 7;
	v->a[58047] = anon_sym_LT;
	v->a[58048] = anon_sym_GT;
	v->a[58049] = anon_sym_GT_GT;
	v->a[58050] = anon_sym_LT_AMP;
	v->a[58051] = anon_sym_GT_AMP;
	v->a[58052] = anon_sym_GT_PIPE;
	v->a[58053] = anon_sym_LT_GT;
	v->a[58054] = actions(1974);
	v->a[58055] = 7;
	v->a[58056] = anon_sym_PIPE;
	v->a[58057] = anon_sym_RPAREN;
	v->a[58058] = anon_sym_SEMI_SEMI;
	v->a[58059] = anon_sym_AMP_AMP;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_PIPE_PIPE;
	v->a[58061] = anon_sym_AMP;
	v->a[58062] = anon_sym_SEMI;
	v->a[58063] = 10;
	v->a[58064] = actions(3);
	v->a[58065] = 1;
	v->a[58066] = sym_comment;
	v->a[58067] = actions(1900);
	v->a[58068] = 1;
	v->a[58069] = aux_sym_heredoc_redirect_token1;
	v->a[58070] = actions(1902);
	v->a[58071] = 1;
	v->a[58072] = sym_file_descriptor;
	v->a[58073] = state(647);
	v->a[58074] = 1;
	v->a[58075] = sym_terminator;
	v->a[58076] = actions(724);
	v->a[58077] = 2;
	v->a[58078] = anon_sym_esac;
	v->a[58079] = anon_sym_SEMI_SEMI;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = actions(759);
	v->a[58081] = 2;
	v->a[58082] = anon_sym_AMP_AMP;
	v->a[58083] = anon_sym_PIPE_PIPE;
	v->a[58084] = actions(761);
	v->a[58085] = 2;
	v->a[58086] = anon_sym_LT_LT;
	v->a[58087] = anon_sym_LT_LT_DASH;
	v->a[58088] = actions(763);
	v->a[58089] = 2;
	v->a[58090] = anon_sym_AMP;
	v->a[58091] = anon_sym_SEMI;
	v->a[58092] = state(1059);
	v->a[58093] = 3;
	v->a[58094] = sym_file_redirect;
	v->a[58095] = sym_heredoc_redirect;
	v->a[58096] = aux_sym_redirected_statement_repeat1;
	v->a[58097] = actions(1898);
	v->a[58098] = 7;
	v->a[58099] = anon_sym_LT;
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
