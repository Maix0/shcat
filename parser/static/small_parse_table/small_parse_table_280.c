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
	v->a[28000] = anon_sym_AMP_GT;
	v->a[28001] = anon_sym_AMP_GT_GT;
	v->a[28002] = anon_sym_LT_AMP;
	v->a[28003] = anon_sym_GT_AMP;
	v->a[28004] = anon_sym_GT_PIPE;
	v->a[28005] = anon_sym_LT_AMP_DASH;
	v->a[28006] = anon_sym_GT_AMP_DASH;
	v->a[28007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28008] = anon_sym_DOLLAR;
	v->a[28009] = anon_sym_DQUOTE;
	v->a[28010] = sym_raw_string;
	v->a[28011] = sym_number;
	v->a[28012] = anon_sym_DOLLAR_LBRACE;
	v->a[28013] = anon_sym_DOLLAR_LPAREN;
	v->a[28014] = anon_sym_BQUOTE;
	v->a[28015] = sym_word;
	v->a[28016] = 14;
	v->a[28017] = actions(3);
	v->a[28018] = 1;
	v->a[28019] = sym_comment;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = actions(807);
	v->a[28021] = 1;
	v->a[28022] = anon_sym_PIPE;
	v->a[28023] = actions(811);
	v->a[28024] = 1;
	v->a[28025] = sym_file_descriptor;
	v->a[28026] = actions(840);
	v->a[28027] = 1;
	v->a[28028] = anon_sym_BQUOTE;
	v->a[28029] = actions(1034);
	v->a[28030] = 1;
	v->a[28031] = sym_variable_name;
	v->a[28032] = actions(1060);
	v->a[28033] = 1;
	v->a[28034] = anon_sym_SEMI_SEMI;
	v->a[28035] = actions(1062);
	v->a[28036] = 1;
	v->a[28037] = aux_sym_heredoc_redirect_token1;
	v->a[28038] = actions(1064);
	v->a[28039] = 1;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = anon_sym_AMP;
	v->a[28041] = actions(1066);
	v->a[28042] = 1;
	v->a[28043] = anon_sym_SEMI;
	v->a[28044] = actions(861);
	v->a[28045] = 2;
	v->a[28046] = anon_sym_LT_LT;
	v->a[28047] = anon_sym_LT_LT_DASH;
	v->a[28048] = actions(1032);
	v->a[28049] = 2;
	v->a[28050] = anon_sym_AMP_AMP;
	v->a[28051] = anon_sym_PIPE_PIPE;
	v->a[28052] = state(1199);
	v->a[28053] = 2;
	v->a[28054] = sym_variable_assignment;
	v->a[28055] = aux_sym__variable_assignments_repeat1;
	v->a[28056] = state(1297);
	v->a[28057] = 3;
	v->a[28058] = sym_file_redirect;
	v->a[28059] = sym_heredoc_redirect;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = aux_sym_redirected_statement_repeat1;
	v->a[28061] = actions(805);
	v->a[28062] = 18;
	v->a[28063] = anon_sym_LT;
	v->a[28064] = anon_sym_GT;
	v->a[28065] = anon_sym_GT_GT;
	v->a[28066] = anon_sym_AMP_GT;
	v->a[28067] = anon_sym_AMP_GT_GT;
	v->a[28068] = anon_sym_LT_AMP;
	v->a[28069] = anon_sym_GT_AMP;
	v->a[28070] = anon_sym_GT_PIPE;
	v->a[28071] = anon_sym_LT_AMP_DASH;
	v->a[28072] = anon_sym_GT_AMP_DASH;
	v->a[28073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28074] = anon_sym_DOLLAR;
	v->a[28075] = anon_sym_DQUOTE;
	v->a[28076] = sym_raw_string;
	v->a[28077] = sym_number;
	v->a[28078] = anon_sym_DOLLAR_LBRACE;
	v->a[28079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = sym_word;
	v->a[28081] = 6;
	v->a[28082] = actions(3);
	v->a[28083] = 1;
	v->a[28084] = sym_comment;
	v->a[28085] = actions(1068);
	v->a[28086] = 1;
	v->a[28087] = aux_sym_concatenation_token1;
	v->a[28088] = actions(1071);
	v->a[28089] = 1;
	v->a[28090] = sym__concat;
	v->a[28091] = state(302);
	v->a[28092] = 1;
	v->a[28093] = aux_sym_concatenation_repeat1;
	v->a[28094] = actions(1004);
	v->a[28095] = 2;
	v->a[28096] = sym_file_descriptor;
	v->a[28097] = sym__bare_dollar;
	v->a[28098] = actions(999);
	v->a[28099] = 30;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
