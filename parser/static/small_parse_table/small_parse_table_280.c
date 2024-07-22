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
	v->a[28001] = actions(1061);
	v->a[28002] = 1;
	v->a[28003] = sym_variable_name;
	v->a[28004] = state(767);
	v->a[28005] = 1;
	v->a[28006] = sym_terminator;
	v->a[28007] = actions(790);
	v->a[28008] = 2;
	v->a[28009] = anon_sym_LT_LT;
	v->a[28010] = anon_sym_LT_LT_DASH;
	v->a[28011] = actions(1059);
	v->a[28012] = 2;
	v->a[28013] = anon_sym_AMP_AMP;
	v->a[28014] = anon_sym_PIPE_PIPE;
	v->a[28015] = state(1115);
	v->a[28016] = 2;
	v->a[28017] = sym_variable_assignment;
	v->a[28018] = aux_sym__variable_assignments_repeat1;
	v->a[28019] = actions(786);
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = 3;
	v->a[28021] = anon_sym_SEMI_SEMI;
	v->a[28022] = aux_sym_heredoc_redirect_token1;
	v->a[28023] = anon_sym_SEMI;
	v->a[28024] = state(1062);
	v->a[28025] = 3;
	v->a[28026] = sym_file_redirect;
	v->a[28027] = sym_heredoc_redirect;
	v->a[28028] = aux_sym_redirected_statement_repeat1;
	v->a[28029] = actions(780);
	v->a[28030] = 15;
	v->a[28031] = anon_sym_LT;
	v->a[28032] = anon_sym_GT;
	v->a[28033] = anon_sym_GT_GT;
	v->a[28034] = anon_sym_LT_AMP;
	v->a[28035] = anon_sym_GT_AMP;
	v->a[28036] = anon_sym_GT_PIPE;
	v->a[28037] = anon_sym_LT_GT;
	v->a[28038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28039] = anon_sym_DOLLAR;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = anon_sym_DQUOTE;
	v->a[28041] = sym_raw_string;
	v->a[28042] = sym_number;
	v->a[28043] = anon_sym_DOLLAR_LBRACE;
	v->a[28044] = anon_sym_DOLLAR_LPAREN;
	v->a[28045] = sym_word;
	v->a[28046] = 12;
	v->a[28047] = actions(3);
	v->a[28048] = 1;
	v->a[28049] = sym_comment;
	v->a[28050] = actions(648);
	v->a[28051] = 1;
	v->a[28052] = sym_file_descriptor;
	v->a[28053] = actions(864);
	v->a[28054] = 1;
	v->a[28055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28056] = actions(867);
	v->a[28057] = 1;
	v->a[28058] = anon_sym_DOLLAR;
	v->a[28059] = actions(870);
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = 1;
	v->a[28061] = anon_sym_DQUOTE;
	v->a[28062] = actions(873);
	v->a[28063] = 1;
	v->a[28064] = anon_sym_DOLLAR_LBRACE;
	v->a[28065] = actions(876);
	v->a[28066] = 1;
	v->a[28067] = anon_sym_DOLLAR_LPAREN;
	v->a[28068] = actions(879);
	v->a[28069] = 1;
	v->a[28070] = anon_sym_BQUOTE;
	v->a[28071] = state(332);
	v->a[28072] = 2;
	v->a[28073] = sym_concatenation;
	v->a[28074] = aux_sym_for_statement_repeat1;
	v->a[28075] = actions(1064);
	v->a[28076] = 3;
	v->a[28077] = sym_raw_string;
	v->a[28078] = sym_number;
	v->a[28079] = sym_word;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = state(623);
	v->a[28081] = 5;
	v->a[28082] = sym_arithmetic_expansion;
	v->a[28083] = sym_string;
	v->a[28084] = sym_simple_expansion;
	v->a[28085] = sym_expansion;
	v->a[28086] = sym_command_substitution;
	v->a[28087] = actions(628);
	v->a[28088] = 15;
	v->a[28089] = anon_sym_PIPE;
	v->a[28090] = anon_sym_SEMI_SEMI;
	v->a[28091] = anon_sym_AMP_AMP;
	v->a[28092] = anon_sym_PIPE_PIPE;
	v->a[28093] = anon_sym_LT;
	v->a[28094] = anon_sym_GT;
	v->a[28095] = anon_sym_GT_GT;
	v->a[28096] = anon_sym_LT_AMP;
	v->a[28097] = anon_sym_GT_AMP;
	v->a[28098] = anon_sym_GT_PIPE;
	v->a[28099] = anon_sym_LT_GT;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
