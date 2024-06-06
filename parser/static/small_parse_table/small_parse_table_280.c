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
	v->a[28000] = anon_sym_AMP_GT_GT;
	v->a[28001] = anon_sym_LT_AMP;
	v->a[28002] = anon_sym_GT_AMP;
	v->a[28003] = anon_sym_GT_PIPE;
	v->a[28004] = anon_sym_LT_AMP_DASH;
	v->a[28005] = anon_sym_GT_AMP_DASH;
	v->a[28006] = anon_sym_LT_LT;
	v->a[28007] = anon_sym_LT_LT_DASH;
	v->a[28008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28009] = anon_sym_AMP;
	v->a[28010] = aux_sym_concatenation_token1;
	v->a[28011] = anon_sym_DOLLAR;
	v->a[28012] = sym__special_character;
	v->a[28013] = anon_sym_DQUOTE;
	v->a[28014] = sym_raw_string;
	v->a[28015] = aux_sym_number_token1;
	v->a[28016] = aux_sym_number_token2;
	v->a[28017] = anon_sym_DOLLAR_LBRACE;
	v->a[28018] = anon_sym_DOLLAR_LPAREN;
	v->a[28019] = anon_sym_BQUOTE;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = anon_sym_DOLLAR_BQUOTE;
	v->a[28021] = aux_sym__simple_variable_name_token1;
	v->a[28022] = sym_word;
	v->a[28023] = anon_sym_SEMI;
	v->a[28024] = 6;
	v->a[28025] = actions(3);
	v->a[28026] = 1;
	v->a[28027] = sym_comment;
	v->a[28028] = actions(3304);
	v->a[28029] = 1;
	v->a[28030] = aux_sym_concatenation_token1;
	v->a[28031] = actions(3307);
	v->a[28032] = 1;
	v->a[28033] = sym__concat;
	v->a[28034] = state(666);
	v->a[28035] = 1;
	v->a[28036] = aux_sym_concatenation_repeat1;
	v->a[28037] = actions(2654);
	v->a[28038] = 5;
	v->a[28039] = sym_file_descriptor;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = sym_test_operator;
	v->a[28041] = sym__bare_dollar;
	v->a[28042] = sym__brace_start;
	v->a[28043] = aux_sym_heredoc_redirect_token1;
	v->a[28044] = actions(2652);
	v->a[28045] = 33;
	v->a[28046] = anon_sym_LPAREN;
	v->a[28047] = anon_sym_PIPE;
	v->a[28048] = anon_sym_RPAREN;
	v->a[28049] = anon_sym_SEMI_SEMI;
	v->a[28050] = anon_sym_PIPE_AMP;
	v->a[28051] = anon_sym_AMP_AMP;
	v->a[28052] = anon_sym_PIPE_PIPE;
	v->a[28053] = anon_sym_LT;
	v->a[28054] = anon_sym_GT;
	v->a[28055] = anon_sym_GT_GT;
	v->a[28056] = anon_sym_AMP_GT;
	v->a[28057] = anon_sym_AMP_GT_GT;
	v->a[28058] = anon_sym_LT_AMP;
	v->a[28059] = anon_sym_GT_AMP;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_GT_PIPE;
	v->a[28061] = anon_sym_LT_AMP_DASH;
	v->a[28062] = anon_sym_GT_AMP_DASH;
	v->a[28063] = anon_sym_LT_LT;
	v->a[28064] = anon_sym_LT_LT_DASH;
	v->a[28065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28066] = anon_sym_AMP;
	v->a[28067] = anon_sym_DOLLAR;
	v->a[28068] = sym__special_character;
	v->a[28069] = anon_sym_DQUOTE;
	v->a[28070] = sym_raw_string;
	v->a[28071] = aux_sym_number_token1;
	v->a[28072] = aux_sym_number_token2;
	v->a[28073] = anon_sym_DOLLAR_LBRACE;
	v->a[28074] = anon_sym_DOLLAR_LPAREN;
	v->a[28075] = anon_sym_BQUOTE;
	v->a[28076] = anon_sym_DOLLAR_BQUOTE;
	v->a[28077] = sym_word;
	v->a[28078] = anon_sym_SEMI;
	v->a[28079] = 6;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = actions(3);
	v->a[28081] = 1;
	v->a[28082] = sym_comment;
	v->a[28083] = actions(3175);
	v->a[28084] = 1;
	v->a[28085] = aux_sym_concatenation_token1;
	v->a[28086] = actions(3310);
	v->a[28087] = 1;
	v->a[28088] = sym__concat;
	v->a[28089] = state(621);
	v->a[28090] = 1;
	v->a[28091] = aux_sym_concatenation_repeat1;
	v->a[28092] = actions(2690);
	v->a[28093] = 4;
	v->a[28094] = sym_file_descriptor;
	v->a[28095] = sym_test_operator;
	v->a[28096] = sym__brace_start;
	v->a[28097] = aux_sym_heredoc_redirect_token1;
	v->a[28098] = actions(2688);
	v->a[28099] = 34;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
