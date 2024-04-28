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
	v->a[90000] = anon_sym_DOLLAR_BQUOTE;
	v->a[90001] = anon_sym_LT_LPAREN;
	v->a[90002] = anon_sym_GT_LPAREN;
	v->a[90003] = aux_sym__simple_variable_name_token1;
	v->a[90004] = sym_word;
	v->a[90005] = 3;
	v->a[90006] = actions(3);
	v->a[90007] = 1;
	v->a[90008] = sym_comment;
	v->a[90009] = actions(1350);
	v->a[90010] = 5;
	v->a[90011] = sym_file_descriptor;
	v->a[90012] = sym__concat;
	v->a[90013] = sym_test_operator;
	v->a[90014] = sym__brace_start;
	v->a[90015] = aux_sym_heredoc_redirect_token1;
	v->a[90016] = actions(1348);
	v->a[90017] = 39;
	v->a[90018] = anon_sym_LPAREN_LPAREN;
	v->a[90019] = anon_sym_SEMI;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = anon_sym_PIPE_PIPE;
	v->a[90021] = anon_sym_AMP_AMP;
	v->a[90022] = anon_sym_PIPE;
	v->a[90023] = anon_sym_AMP;
	v->a[90024] = anon_sym_LT;
	v->a[90025] = anon_sym_GT;
	v->a[90026] = anon_sym_LT_LT;
	v->a[90027] = anon_sym_GT_GT;
	v->a[90028] = anon_sym_RPAREN;
	v->a[90029] = anon_sym_SEMI_SEMI;
	v->a[90030] = anon_sym_PIPE_AMP;
	v->a[90031] = anon_sym_AMP_GT;
	v->a[90032] = anon_sym_AMP_GT_GT;
	v->a[90033] = anon_sym_LT_AMP;
	v->a[90034] = anon_sym_GT_AMP;
	v->a[90035] = anon_sym_GT_PIPE;
	v->a[90036] = anon_sym_LT_AMP_DASH;
	v->a[90037] = anon_sym_GT_AMP_DASH;
	v->a[90038] = anon_sym_LT_LT_DASH;
	v->a[90039] = anon_sym_LT_LT_LT;
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90041] = anon_sym_DOLLAR_LBRACK;
	v->a[90042] = aux_sym_concatenation_token1;
	v->a[90043] = anon_sym_DOLLAR;
	v->a[90044] = sym__special_character;
	v->a[90045] = anon_sym_DQUOTE;
	v->a[90046] = sym_raw_string;
	v->a[90047] = sym_ansi_c_string;
	v->a[90048] = aux_sym_number_token1;
	v->a[90049] = aux_sym_number_token2;
	v->a[90050] = anon_sym_DOLLAR_LBRACE;
	v->a[90051] = anon_sym_DOLLAR_LPAREN;
	v->a[90052] = anon_sym_BQUOTE;
	v->a[90053] = anon_sym_DOLLAR_BQUOTE;
	v->a[90054] = anon_sym_LT_LPAREN;
	v->a[90055] = anon_sym_GT_LPAREN;
	v->a[90056] = sym_word;
	v->a[90057] = 3;
	v->a[90058] = actions(3);
	v->a[90059] = 1;
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = sym_comment;
	v->a[90061] = actions(1346);
	v->a[90062] = 6;
	v->a[90063] = sym_file_descriptor;
	v->a[90064] = sym__concat;
	v->a[90065] = sym_test_operator;
	v->a[90066] = sym__brace_start;
	v->a[90067] = ts_builtin_sym_end;
	v->a[90068] = aux_sym_heredoc_redirect_token1;
	v->a[90069] = actions(1344);
	v->a[90070] = 38;
	v->a[90071] = anon_sym_LPAREN_LPAREN;
	v->a[90072] = anon_sym_SEMI;
	v->a[90073] = anon_sym_PIPE_PIPE;
	v->a[90074] = anon_sym_AMP_AMP;
	v->a[90075] = anon_sym_PIPE;
	v->a[90076] = anon_sym_AMP;
	v->a[90077] = anon_sym_LT;
	v->a[90078] = anon_sym_GT;
	v->a[90079] = anon_sym_LT_LT;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = anon_sym_GT_GT;
	v->a[90081] = anon_sym_SEMI_SEMI;
	v->a[90082] = anon_sym_PIPE_AMP;
	v->a[90083] = anon_sym_AMP_GT;
	v->a[90084] = anon_sym_AMP_GT_GT;
	v->a[90085] = anon_sym_LT_AMP;
	v->a[90086] = anon_sym_GT_AMP;
	v->a[90087] = anon_sym_GT_PIPE;
	v->a[90088] = anon_sym_LT_AMP_DASH;
	v->a[90089] = anon_sym_GT_AMP_DASH;
	v->a[90090] = anon_sym_LT_LT_DASH;
	v->a[90091] = anon_sym_LT_LT_LT;
	v->a[90092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90093] = anon_sym_DOLLAR_LBRACK;
	v->a[90094] = aux_sym_concatenation_token1;
	v->a[90095] = anon_sym_DOLLAR;
	v->a[90096] = sym__special_character;
	v->a[90097] = anon_sym_DQUOTE;
	v->a[90098] = sym_raw_string;
	v->a[90099] = sym_ansi_c_string;
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
