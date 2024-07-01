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
	v->a[58000] = sym_string;
	v->a[58001] = sym_simple_expansion;
	v->a[58002] = sym_expansion;
	v->a[58003] = sym_command_substitution;
	v->a[58004] = actions(711);
	v->a[58005] = 17;
	v->a[58006] = anon_sym_LT;
	v->a[58007] = anon_sym_GT;
	v->a[58008] = anon_sym_GT_GT;
	v->a[58009] = anon_sym_LT_AMP;
	v->a[58010] = anon_sym_GT_AMP;
	v->a[58011] = anon_sym_GT_PIPE;
	v->a[58012] = anon_sym_LT_AMP_DASH;
	v->a[58013] = anon_sym_GT_AMP_DASH;
	v->a[58014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58015] = anon_sym_DOLLAR;
	v->a[58016] = anon_sym_DQUOTE;
	v->a[58017] = sym_raw_string;
	v->a[58018] = sym_number;
	v->a[58019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = anon_sym_DOLLAR_LPAREN;
	v->a[58021] = anon_sym_BQUOTE;
	v->a[58022] = sym_word;
	v->a[58023] = 6;
	v->a[58024] = actions(3);
	v->a[58025] = 1;
	v->a[58026] = sym_comment;
	v->a[58027] = actions(1969);
	v->a[58028] = 1;
	v->a[58029] = aux_sym_concatenation_token1;
	v->a[58030] = actions(1972);
	v->a[58031] = 1;
	v->a[58032] = sym__concat;
	v->a[58033] = state(973);
	v->a[58034] = 1;
	v->a[58035] = aux_sym_concatenation_repeat1;
	v->a[58036] = actions(1194);
	v->a[58037] = 4;
	v->a[58038] = sym_file_descriptor;
	v->a[58039] = sym_variable_name;
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = ts_builtin_sym_end;
	v->a[58041] = aux_sym_heredoc_redirect_token1;
	v->a[58042] = actions(1189);
	v->a[58043] = 18;
	v->a[58044] = anon_sym_PIPE;
	v->a[58045] = anon_sym_RPAREN;
	v->a[58046] = anon_sym_SEMI_SEMI;
	v->a[58047] = anon_sym_AMP_AMP;
	v->a[58048] = anon_sym_PIPE_PIPE;
	v->a[58049] = anon_sym_LT;
	v->a[58050] = anon_sym_GT;
	v->a[58051] = anon_sym_GT_GT;
	v->a[58052] = anon_sym_LT_AMP;
	v->a[58053] = anon_sym_GT_AMP;
	v->a[58054] = anon_sym_GT_PIPE;
	v->a[58055] = anon_sym_LT_AMP_DASH;
	v->a[58056] = anon_sym_GT_AMP_DASH;
	v->a[58057] = anon_sym_LT_LT;
	v->a[58058] = anon_sym_LT_LT_DASH;
	v->a[58059] = anon_sym_AMP;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = anon_sym_BQUOTE;
	v->a[58061] = anon_sym_SEMI;
	v->a[58062] = 3;
	v->a[58063] = actions(3);
	v->a[58064] = 1;
	v->a[58065] = sym_comment;
	v->a[58066] = actions(1033);
	v->a[58067] = 2;
	v->a[58068] = sym_file_descriptor;
	v->a[58069] = sym__concat;
	v->a[58070] = actions(1031);
	v->a[58071] = 23;
	v->a[58072] = anon_sym_PIPE;
	v->a[58073] = anon_sym_AMP_AMP;
	v->a[58074] = anon_sym_PIPE_PIPE;
	v->a[58075] = anon_sym_LT;
	v->a[58076] = anon_sym_GT;
	v->a[58077] = anon_sym_GT_GT;
	v->a[58078] = anon_sym_LT_AMP;
	v->a[58079] = anon_sym_GT_AMP;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = anon_sym_GT_PIPE;
	v->a[58081] = anon_sym_LT_AMP_DASH;
	v->a[58082] = anon_sym_GT_AMP_DASH;
	v->a[58083] = anon_sym_LT_LT;
	v->a[58084] = anon_sym_LT_LT_DASH;
	v->a[58085] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58086] = aux_sym_concatenation_token1;
	v->a[58087] = anon_sym_DOLLAR;
	v->a[58088] = anon_sym_DQUOTE;
	v->a[58089] = sym_raw_string;
	v->a[58090] = sym_number;
	v->a[58091] = anon_sym_DOLLAR_LBRACE;
	v->a[58092] = anon_sym_DOLLAR_LPAREN;
	v->a[58093] = anon_sym_BQUOTE;
	v->a[58094] = sym_word;
	v->a[58095] = 3;
	v->a[58096] = actions(3);
	v->a[58097] = 1;
	v->a[58098] = sym_comment;
	v->a[58099] = actions(1095);
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
