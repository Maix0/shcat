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
	v->a[58000] = actions(3);
	v->a[58001] = 1;
	v->a[58002] = sym_comment;
	v->a[58003] = actions(988);
	v->a[58004] = 1;
	v->a[58005] = sym_file_descriptor;
	v->a[58006] = actions(1975);
	v->a[58007] = 1;
	v->a[58008] = aux_sym_concatenation_token1;
	v->a[58009] = actions(1978);
	v->a[58010] = 1;
	v->a[58011] = sym__concat;
	v->a[58012] = state(947);
	v->a[58013] = 1;
	v->a[58014] = aux_sym_concatenation_repeat1;
	v->a[58015] = actions(983);
	v->a[58016] = 22;
	v->a[58017] = anon_sym_AMP_AMP;
	v->a[58018] = anon_sym_PIPE_PIPE;
	v->a[58019] = anon_sym_LT;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = anon_sym_GT;
	v->a[58021] = anon_sym_GT_GT;
	v->a[58022] = anon_sym_AMP_GT;
	v->a[58023] = anon_sym_AMP_GT_GT;
	v->a[58024] = anon_sym_LT_AMP;
	v->a[58025] = anon_sym_GT_AMP;
	v->a[58026] = anon_sym_GT_PIPE;
	v->a[58027] = anon_sym_LT_AMP_DASH;
	v->a[58028] = anon_sym_GT_AMP_DASH;
	v->a[58029] = aux_sym_heredoc_redirect_token1;
	v->a[58030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58031] = anon_sym_DOLLAR;
	v->a[58032] = anon_sym_DQUOTE;
	v->a[58033] = sym_raw_string;
	v->a[58034] = sym_number;
	v->a[58035] = anon_sym_DOLLAR_LBRACE;
	v->a[58036] = anon_sym_DOLLAR_LPAREN;
	v->a[58037] = anon_sym_BQUOTE;
	v->a[58038] = sym_word;
	v->a[58039] = 6;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = actions(3);
	v->a[58041] = 1;
	v->a[58042] = sym_comment;
	v->a[58043] = actions(1981);
	v->a[58044] = 1;
	v->a[58045] = aux_sym_concatenation_token1;
	v->a[58046] = actions(1984);
	v->a[58047] = 1;
	v->a[58048] = sym__concat;
	v->a[58049] = state(948);
	v->a[58050] = 1;
	v->a[58051] = aux_sym_concatenation_repeat1;
	v->a[58052] = actions(988);
	v->a[58053] = 3;
	v->a[58054] = sym_file_descriptor;
	v->a[58055] = ts_builtin_sym_end;
	v->a[58056] = aux_sym_heredoc_redirect_token1;
	v->a[58057] = actions(983);
	v->a[58058] = 20;
	v->a[58059] = anon_sym_PIPE;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_RPAREN;
	v->a[58061] = anon_sym_SEMI_SEMI;
	v->a[58062] = anon_sym_AMP_AMP;
	v->a[58063] = anon_sym_PIPE_PIPE;
	v->a[58064] = anon_sym_LT;
	v->a[58065] = anon_sym_GT;
	v->a[58066] = anon_sym_GT_GT;
	v->a[58067] = anon_sym_AMP_GT;
	v->a[58068] = anon_sym_AMP_GT_GT;
	v->a[58069] = anon_sym_LT_AMP;
	v->a[58070] = anon_sym_GT_AMP;
	v->a[58071] = anon_sym_GT_PIPE;
	v->a[58072] = anon_sym_LT_AMP_DASH;
	v->a[58073] = anon_sym_GT_AMP_DASH;
	v->a[58074] = anon_sym_LT_LT;
	v->a[58075] = anon_sym_LT_LT_DASH;
	v->a[58076] = anon_sym_AMP;
	v->a[58077] = anon_sym_BQUOTE;
	v->a[58078] = anon_sym_SEMI;
	v->a[58079] = 3;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = actions(3);
	v->a[58081] = 1;
	v->a[58082] = sym_comment;
	v->a[58083] = actions(1128);
	v->a[58084] = 2;
	v->a[58085] = sym_file_descriptor;
	v->a[58086] = sym__bare_dollar;
	v->a[58087] = actions(1130);
	v->a[58088] = 24;
	v->a[58089] = anon_sym_PIPE;
	v->a[58090] = anon_sym_AMP_AMP;
	v->a[58091] = anon_sym_PIPE_PIPE;
	v->a[58092] = anon_sym_LT;
	v->a[58093] = anon_sym_GT;
	v->a[58094] = anon_sym_GT_GT;
	v->a[58095] = anon_sym_AMP_GT;
	v->a[58096] = anon_sym_AMP_GT_GT;
	v->a[58097] = anon_sym_LT_AMP;
	v->a[58098] = anon_sym_GT_AMP;
	v->a[58099] = anon_sym_GT_PIPE;
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
