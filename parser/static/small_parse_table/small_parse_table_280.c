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
	v->a[28000] = actions(3);
	v->a[28001] = 1;
	v->a[28002] = sym_comment;
	v->a[28003] = actions(736);
	v->a[28004] = 1;
	v->a[28005] = anon_sym_PIPE;
	v->a[28006] = actions(746);
	v->a[28007] = 1;
	v->a[28008] = sym_file_descriptor;
	v->a[28009] = actions(748);
	v->a[28010] = 1;
	v->a[28011] = sym_variable_name;
	v->a[28012] = state(1045);
	v->a[28013] = 2;
	v->a[28014] = sym_variable_assignment;
	v->a[28015] = aux_sym__variable_assignments_repeat1;
	v->a[28016] = state(1080);
	v->a[28017] = 3;
	v->a[28018] = sym_file_redirect;
	v->a[28019] = sym_heredoc_redirect;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = aux_sym_redirected_statement_repeat1;
	v->a[28021] = actions(960);
	v->a[28022] = 9;
	v->a[28023] = anon_sym_RPAREN;
	v->a[28024] = anon_sym_SEMI_SEMI;
	v->a[28025] = anon_sym_AMP_AMP;
	v->a[28026] = anon_sym_PIPE_PIPE;
	v->a[28027] = anon_sym_LT_LT;
	v->a[28028] = anon_sym_LT_LT_DASH;
	v->a[28029] = aux_sym_heredoc_redirect_token1;
	v->a[28030] = anon_sym_AMP;
	v->a[28031] = anon_sym_SEMI;
	v->a[28032] = actions(734);
	v->a[28033] = 16;
	v->a[28034] = anon_sym_LT;
	v->a[28035] = anon_sym_GT;
	v->a[28036] = anon_sym_GT_GT;
	v->a[28037] = anon_sym_LT_AMP;
	v->a[28038] = anon_sym_GT_AMP;
	v->a[28039] = anon_sym_GT_PIPE;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = anon_sym_LT_GT;
	v->a[28041] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28042] = anon_sym_DOLLAR;
	v->a[28043] = anon_sym_DQUOTE;
	v->a[28044] = sym_raw_string;
	v->a[28045] = sym_number;
	v->a[28046] = anon_sym_DOLLAR_LBRACE;
	v->a[28047] = anon_sym_DOLLAR_LPAREN;
	v->a[28048] = anon_sym_BQUOTE;
	v->a[28049] = sym_word;
	v->a[28050] = 7;
	v->a[28051] = actions(664);
	v->a[28052] = 1;
	v->a[28053] = sym_comment;
	v->a[28054] = actions(924);
	v->a[28055] = 2;
	v->a[28056] = anon_sym_GT_GT;
	v->a[28057] = anon_sym_LT_LT;
	v->a[28058] = actions(936);
	v->a[28059] = 2;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_PLUS;
	v->a[28061] = anon_sym_DASH;
	v->a[28062] = actions(942);
	v->a[28063] = 2;
	v->a[28064] = anon_sym_PLUS_PLUS2;
	v->a[28065] = anon_sym_DASH_DASH2;
	v->a[28066] = actions(938);
	v->a[28067] = 3;
	v->a[28068] = anon_sym_STAR;
	v->a[28069] = anon_sym_SLASH;
	v->a[28070] = anon_sym_PERCENT;
	v->a[28071] = actions(680);
	v->a[28072] = 6;
	v->a[28073] = anon_sym_PIPE;
	v->a[28074] = anon_sym_EQ;
	v->a[28075] = anon_sym_LT;
	v->a[28076] = anon_sym_GT;
	v->a[28077] = anon_sym_CARET;
	v->a[28078] = anon_sym_AMP;
	v->a[28079] = actions(682);
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = 18;
	v->a[28081] = anon_sym_RPAREN;
	v->a[28082] = anon_sym_AMP_AMP;
	v->a[28083] = anon_sym_PIPE_PIPE;
	v->a[28084] = anon_sym_PLUS_EQ;
	v->a[28085] = anon_sym_DASH_EQ;
	v->a[28086] = anon_sym_STAR_EQ;
	v->a[28087] = anon_sym_SLASH_EQ;
	v->a[28088] = anon_sym_PERCENT_EQ;
	v->a[28089] = anon_sym_LT_LT_EQ;
	v->a[28090] = anon_sym_GT_GT_EQ;
	v->a[28091] = anon_sym_AMP_EQ;
	v->a[28092] = anon_sym_CARET_EQ;
	v->a[28093] = anon_sym_PIPE_EQ;
	v->a[28094] = anon_sym_EQ_EQ;
	v->a[28095] = anon_sym_BANG_EQ;
	v->a[28096] = anon_sym_LT_EQ;
	v->a[28097] = anon_sym_GT_EQ;
	v->a[28098] = anon_sym_QMARK;
	v->a[28099] = 7;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
