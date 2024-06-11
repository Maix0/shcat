/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_900.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4500(t_small_parse_table_array *v)
{
	v->a[90000] = anon_sym_GT_AMP;
	v->a[90001] = anon_sym_GT_PIPE;
	v->a[90002] = anon_sym_LT_AMP_DASH;
	v->a[90003] = anon_sym_GT_AMP_DASH;
	v->a[90004] = aux_sym_concatenation_token1;
	v->a[90005] = 3;
	v->a[90006] = actions(1094);
	v->a[90007] = 1;
	v->a[90008] = sym_comment;
	v->a[90009] = actions(2677);
	v->a[90010] = 7;
	v->a[90011] = anon_sym_PIPE;
	v->a[90012] = anon_sym_LT;
	v->a[90013] = anon_sym_GT;
	v->a[90014] = anon_sym_AMP_GT;
	v->a[90015] = anon_sym_LT_AMP;
	v->a[90016] = anon_sym_GT_AMP;
	v->a[90017] = anon_sym_LT_LT;
	v->a[90018] = actions(2675);
	v->a[90019] = 9;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = sym_file_descriptor;
	v->a[90021] = anon_sym_AMP_AMP;
	v->a[90022] = anon_sym_PIPE_PIPE;
	v->a[90023] = anon_sym_GT_GT;
	v->a[90024] = anon_sym_AMP_GT_GT;
	v->a[90025] = anon_sym_GT_PIPE;
	v->a[90026] = anon_sym_LT_AMP_DASH;
	v->a[90027] = anon_sym_GT_AMP_DASH;
	v->a[90028] = anon_sym_LT_LT_DASH;
	v->a[90029] = 10;
	v->a[90030] = actions(3);
	v->a[90031] = 1;
	v->a[90032] = sym_comment;
	v->a[90033] = actions(3266);
	v->a[90034] = 1;
	v->a[90035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90036] = actions(3268);
	v->a[90037] = 1;
	v->a[90038] = anon_sym_DOLLAR;
	v->a[90039] = actions(3270);
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = 1;
	v->a[90041] = anon_sym_DQUOTE;
	v->a[90042] = actions(3272);
	v->a[90043] = 1;
	v->a[90044] = anon_sym_DOLLAR_LBRACE;
	v->a[90045] = actions(3274);
	v->a[90046] = 1;
	v->a[90047] = anon_sym_DOLLAR_LPAREN;
	v->a[90048] = actions(3276);
	v->a[90049] = 1;
	v->a[90050] = anon_sym_BQUOTE;
	v->a[90051] = state(208);
	v->a[90052] = 2;
	v->a[90053] = sym_concatenation;
	v->a[90054] = aux_sym_for_statement_repeat1;
	v->a[90055] = actions(3606);
	v->a[90056] = 3;
	v->a[90057] = sym_raw_string;
	v->a[90058] = sym_number;
	v->a[90059] = sym_word;
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = state(364);
	v->a[90061] = 5;
	v->a[90062] = sym_arithmetic_expansion;
	v->a[90063] = sym_string;
	v->a[90064] = sym_simple_expansion;
	v->a[90065] = sym_expansion;
	v->a[90066] = sym_command_substitution;
	v->a[90067] = 3;
	v->a[90068] = actions(3);
	v->a[90069] = 1;
	v->a[90070] = sym_comment;
	v->a[90071] = actions(1205);
	v->a[90072] = 3;
	v->a[90073] = sym_file_descriptor;
	v->a[90074] = sym__concat;
	v->a[90075] = aux_sym_heredoc_redirect_token1;
	v->a[90076] = actions(1203);
	v->a[90077] = 13;
	v->a[90078] = anon_sym_AMP_AMP;
	v->a[90079] = anon_sym_PIPE_PIPE;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = anon_sym_LT;
	v->a[90081] = anon_sym_GT;
	v->a[90082] = anon_sym_GT_GT;
	v->a[90083] = anon_sym_AMP_GT;
	v->a[90084] = anon_sym_AMP_GT_GT;
	v->a[90085] = anon_sym_LT_AMP;
	v->a[90086] = anon_sym_GT_AMP;
	v->a[90087] = anon_sym_GT_PIPE;
	v->a[90088] = anon_sym_LT_AMP_DASH;
	v->a[90089] = anon_sym_GT_AMP_DASH;
	v->a[90090] = aux_sym_concatenation_token1;
	v->a[90091] = 3;
	v->a[90092] = actions(3);
	v->a[90093] = 1;
	v->a[90094] = sym_comment;
	v->a[90095] = actions(1163);
	v->a[90096] = 3;
	v->a[90097] = sym_file_descriptor;
	v->a[90098] = sym__concat;
	v->a[90099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
