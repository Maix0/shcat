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
	v->a[28000] = actions(1002);
	v->a[28001] = 20;
	v->a[28002] = anon_sym_esac;
	v->a[28003] = anon_sym_PIPE;
	v->a[28004] = anon_sym_SEMI_SEMI;
	v->a[28005] = anon_sym_AMP_AMP;
	v->a[28006] = anon_sym_PIPE_PIPE;
	v->a[28007] = anon_sym_LT;
	v->a[28008] = anon_sym_GT;
	v->a[28009] = anon_sym_GT_GT;
	v->a[28010] = anon_sym_AMP_GT;
	v->a[28011] = anon_sym_AMP_GT_GT;
	v->a[28012] = anon_sym_LT_AMP;
	v->a[28013] = anon_sym_GT_AMP;
	v->a[28014] = anon_sym_GT_PIPE;
	v->a[28015] = anon_sym_LT_AMP_DASH;
	v->a[28016] = anon_sym_GT_AMP_DASH;
	v->a[28017] = anon_sym_LT_LT;
	v->a[28018] = anon_sym_LT_LT_DASH;
	v->a[28019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = anon_sym_AMP;
	v->a[28021] = anon_sym_SEMI;
	v->a[28022] = 7;
	v->a[28023] = actions(3);
	v->a[28024] = 1;
	v->a[28025] = sym_comment;
	v->a[28026] = actions(1008);
	v->a[28027] = 1;
	v->a[28028] = sym_variable_name;
	v->a[28029] = actions(1081);
	v->a[28030] = 1;
	v->a[28031] = sym_file_descriptor;
	v->a[28032] = state(1030);
	v->a[28033] = 2;
	v->a[28034] = sym_variable_assignment;
	v->a[28035] = aux_sym_variable_assignments_repeat1;
	v->a[28036] = state(1050);
	v->a[28037] = 3;
	v->a[28038] = sym_file_redirect;
	v->a[28039] = sym_heredoc_redirect;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = aux_sym_redirected_statement_repeat1;
	v->a[28041] = actions(1000);
	v->a[28042] = 10;
	v->a[28043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28044] = anon_sym_DOLLAR;
	v->a[28045] = anon_sym_DQUOTE;
	v->a[28046] = sym_raw_string;
	v->a[28047] = aux_sym_number_token1;
	v->a[28048] = aux_sym_number_token2;
	v->a[28049] = anon_sym_DOLLAR_LBRACE;
	v->a[28050] = anon_sym_DOLLAR_LPAREN;
	v->a[28051] = anon_sym_BQUOTE;
	v->a[28052] = sym_word;
	v->a[28053] = actions(1002);
	v->a[28054] = 20;
	v->a[28055] = anon_sym_PIPE;
	v->a[28056] = anon_sym_RPAREN;
	v->a[28057] = anon_sym_SEMI_SEMI;
	v->a[28058] = anon_sym_AMP_AMP;
	v->a[28059] = anon_sym_PIPE_PIPE;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_LT;
	v->a[28061] = anon_sym_GT;
	v->a[28062] = anon_sym_GT_GT;
	v->a[28063] = anon_sym_AMP_GT;
	v->a[28064] = anon_sym_AMP_GT_GT;
	v->a[28065] = anon_sym_LT_AMP;
	v->a[28066] = anon_sym_GT_AMP;
	v->a[28067] = anon_sym_GT_PIPE;
	v->a[28068] = anon_sym_LT_AMP_DASH;
	v->a[28069] = anon_sym_GT_AMP_DASH;
	v->a[28070] = anon_sym_LT_LT;
	v->a[28071] = anon_sym_LT_LT_DASH;
	v->a[28072] = aux_sym_heredoc_redirect_token1;
	v->a[28073] = anon_sym_AMP;
	v->a[28074] = anon_sym_SEMI;
	v->a[28075] = 11;
	v->a[28076] = actions(3);
	v->a[28077] = 1;
	v->a[28078] = sym_comment;
	v->a[28079] = actions(1002);
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = 1;
	v->a[28081] = anon_sym_PIPE;
	v->a[28082] = actions(1006);
	v->a[28083] = 1;
	v->a[28084] = sym_file_descriptor;
	v->a[28085] = actions(1008);
	v->a[28086] = 1;
	v->a[28087] = sym_variable_name;
	v->a[28088] = actions(1073);
	v->a[28089] = 1;
	v->a[28090] = anon_sym_RPAREN;
	v->a[28091] = actions(1062);
	v->a[28092] = 2;
	v->a[28093] = anon_sym_LT_LT;
	v->a[28094] = anon_sym_LT_LT_DASH;
	v->a[28095] = actions(1079);
	v->a[28096] = 2;
	v->a[28097] = anon_sym_AMP_AMP;
	v->a[28098] = anon_sym_PIPE_PIPE;
	v->a[28099] = state(1030);
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
