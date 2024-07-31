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
	v->a[58000] = anon_sym_BQUOTE;
	v->a[58001] = state(859);
	v->a[58002] = 2;
	v->a[58003] = sym_concatenation;
	v->a[58004] = aux_sym_for_statement_repeat1;
	v->a[58005] = actions(1607);
	v->a[58006] = 3;
	v->a[58007] = sym_raw_string;
	v->a[58008] = sym_number;
	v->a[58009] = sym_word;
	v->a[58010] = state(1227);
	v->a[58011] = 5;
	v->a[58012] = sym_arithmetic_expansion;
	v->a[58013] = sym_string;
	v->a[58014] = sym_simple_expansion;
	v->a[58015] = sym_expansion;
	v->a[58016] = sym_command_substitution;
	v->a[58017] = 3;
	v->a[58018] = actions(3);
	v->a[58019] = 1;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = sym_comment;
	v->a[58021] = actions(1836);
	v->a[58022] = 1;
	v->a[58023] = aux_sym_heredoc_redirect_token1;
	v->a[58024] = actions(1838);
	v->a[58025] = 15;
	v->a[58026] = anon_sym_esac;
	v->a[58027] = anon_sym_PIPE;
	v->a[58028] = anon_sym_SEMI_SEMI;
	v->a[58029] = anon_sym_AMP_AMP;
	v->a[58030] = anon_sym_PIPE_PIPE;
	v->a[58031] = anon_sym_LT;
	v->a[58032] = anon_sym_GT;
	v->a[58033] = anon_sym_GT_GT;
	v->a[58034] = anon_sym_LT_AMP;
	v->a[58035] = anon_sym_GT_AMP;
	v->a[58036] = anon_sym_GT_PIPE;
	v->a[58037] = anon_sym_LT_GT;
	v->a[58038] = anon_sym_LT_LT;
	v->a[58039] = anon_sym_LT_LT_DASH;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = anon_sym_SEMI;
	v->a[58041] = 3;
	v->a[58042] = actions(3);
	v->a[58043] = 1;
	v->a[58044] = sym_comment;
	v->a[58045] = actions(1783);
	v->a[58046] = 1;
	v->a[58047] = aux_sym_heredoc_redirect_token1;
	v->a[58048] = actions(1785);
	v->a[58049] = 15;
	v->a[58050] = anon_sym_esac;
	v->a[58051] = anon_sym_PIPE;
	v->a[58052] = anon_sym_SEMI_SEMI;
	v->a[58053] = anon_sym_AMP_AMP;
	v->a[58054] = anon_sym_PIPE_PIPE;
	v->a[58055] = anon_sym_LT;
	v->a[58056] = anon_sym_GT;
	v->a[58057] = anon_sym_GT_GT;
	v->a[58058] = anon_sym_LT_AMP;
	v->a[58059] = anon_sym_GT_AMP;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_GT_PIPE;
	v->a[58061] = anon_sym_LT_GT;
	v->a[58062] = anon_sym_LT_LT;
	v->a[58063] = anon_sym_LT_LT_DASH;
	v->a[58064] = anon_sym_SEMI;
	v->a[58065] = 6;
	v->a[58066] = actions(3);
	v->a[58067] = 1;
	v->a[58068] = sym_comment;
	v->a[58069] = actions(1690);
	v->a[58070] = 1;
	v->a[58071] = aux_sym_heredoc_redirect_token1;
	v->a[58072] = actions(850);
	v->a[58073] = 2;
	v->a[58074] = anon_sym_LT_LT;
	v->a[58075] = anon_sym_LT_LT_DASH;
	v->a[58076] = actions(1688);
	v->a[58077] = 3;
	v->a[58078] = anon_sym_PIPE;
	v->a[58079] = anon_sym_AMP_AMP;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = anon_sym_PIPE_PIPE;
	v->a[58081] = state(1192);
	v->a[58082] = 3;
	v->a[58083] = sym_file_redirect;
	v->a[58084] = sym_heredoc_redirect;
	v->a[58085] = aux_sym_redirected_statement_repeat1;
	v->a[58086] = actions(2307);
	v->a[58087] = 7;
	v->a[58088] = anon_sym_LT;
	v->a[58089] = anon_sym_GT;
	v->a[58090] = anon_sym_GT_GT;
	v->a[58091] = anon_sym_LT_AMP;
	v->a[58092] = anon_sym_GT_AMP;
	v->a[58093] = anon_sym_GT_PIPE;
	v->a[58094] = anon_sym_LT_GT;
	v->a[58095] = 10;
	v->a[58096] = actions(3);
	v->a[58097] = 1;
	v->a[58098] = sym_comment;
	v->a[58099] = actions(872);
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
