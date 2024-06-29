/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_280.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1400(t_small_parse_table_array *v)
{
	v->a[28000] = sym_file_descriptor;
	v->a[28001] = sym__bare_dollar;
	v->a[28002] = ts_builtin_sym_end;
	v->a[28003] = actions(957);
	v->a[28004] = 29;
	v->a[28005] = anon_sym_LPAREN;
	v->a[28006] = anon_sym_PIPE;
	v->a[28007] = anon_sym_SEMI_SEMI;
	v->a[28008] = anon_sym_AMP_AMP;
	v->a[28009] = anon_sym_PIPE_PIPE;
	v->a[28010] = anon_sym_LT;
	v->a[28011] = anon_sym_GT;
	v->a[28012] = anon_sym_GT_GT;
	v->a[28013] = anon_sym_AMP_GT;
	v->a[28014] = anon_sym_AMP_GT_GT;
	v->a[28015] = anon_sym_LT_AMP;
	v->a[28016] = anon_sym_GT_AMP;
	v->a[28017] = anon_sym_GT_PIPE;
	v->a[28018] = anon_sym_LT_AMP_DASH;
	v->a[28019] = anon_sym_GT_AMP_DASH;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = anon_sym_LT_LT;
	v->a[28021] = anon_sym_LT_LT_DASH;
	v->a[28022] = aux_sym_heredoc_redirect_token1;
	v->a[28023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28024] = anon_sym_AMP;
	v->a[28025] = anon_sym_DOLLAR;
	v->a[28026] = anon_sym_DQUOTE;
	v->a[28027] = sym_raw_string;
	v->a[28028] = sym_number;
	v->a[28029] = anon_sym_DOLLAR_LBRACE;
	v->a[28030] = anon_sym_DOLLAR_LPAREN;
	v->a[28031] = anon_sym_BQUOTE;
	v->a[28032] = sym_word;
	v->a[28033] = anon_sym_SEMI;
	v->a[28034] = 7;
	v->a[28035] = actions(3);
	v->a[28036] = 1;
	v->a[28037] = sym_comment;
	v->a[28038] = actions(844);
	v->a[28039] = 1;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = sym_variable_name;
	v->a[28041] = actions(875);
	v->a[28042] = 1;
	v->a[28043] = sym_file_descriptor;
	v->a[28044] = state(1142);
	v->a[28045] = 2;
	v->a[28046] = sym_variable_assignment;
	v->a[28047] = aux_sym__variable_assignments_repeat1;
	v->a[28048] = state(1157);
	v->a[28049] = 3;
	v->a[28050] = sym_file_redirect;
	v->a[28051] = sym_heredoc_redirect;
	v->a[28052] = aux_sym_redirected_statement_repeat1;
	v->a[28053] = actions(762);
	v->a[28054] = 8;
	v->a[28055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28056] = anon_sym_DOLLAR;
	v->a[28057] = anon_sym_DQUOTE;
	v->a[28058] = sym_raw_string;
	v->a[28059] = sym_number;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_DOLLAR_LBRACE;
	v->a[28061] = anon_sym_DOLLAR_LPAREN;
	v->a[28062] = sym_word;
	v->a[28063] = actions(766);
	v->a[28064] = 20;
	v->a[28065] = anon_sym_PIPE;
	v->a[28066] = anon_sym_SEMI_SEMI;
	v->a[28067] = anon_sym_AMP_AMP;
	v->a[28068] = anon_sym_PIPE_PIPE;
	v->a[28069] = anon_sym_LT;
	v->a[28070] = anon_sym_GT;
	v->a[28071] = anon_sym_GT_GT;
	v->a[28072] = anon_sym_AMP_GT;
	v->a[28073] = anon_sym_AMP_GT_GT;
	v->a[28074] = anon_sym_LT_AMP;
	v->a[28075] = anon_sym_GT_AMP;
	v->a[28076] = anon_sym_GT_PIPE;
	v->a[28077] = anon_sym_LT_AMP_DASH;
	v->a[28078] = anon_sym_GT_AMP_DASH;
	v->a[28079] = anon_sym_LT_LT;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = anon_sym_LT_LT_DASH;
	v->a[28081] = aux_sym_heredoc_redirect_token1;
	v->a[28082] = anon_sym_AMP;
	v->a[28083] = anon_sym_BQUOTE;
	v->a[28084] = anon_sym_SEMI;
	v->a[28085] = 7;
	v->a[28086] = actions(3);
	v->a[28087] = 1;
	v->a[28088] = sym_comment;
	v->a[28089] = actions(959);
	v->a[28090] = 1;
	v->a[28091] = aux_sym_concatenation_token1;
	v->a[28092] = actions(1027);
	v->a[28093] = 1;
	v->a[28094] = sym__concat;
	v->a[28095] = actions(1031);
	v->a[28096] = 1;
	v->a[28097] = anon_sym_LPAREN;
	v->a[28098] = state(283);
	v->a[28099] = 1;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
