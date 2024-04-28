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
	v->a[28000] = anon_sym_DOLLAR_LBRACE;
	v->a[28001] = anon_sym_DOLLAR_LPAREN;
	v->a[28002] = anon_sym_BQUOTE;
	v->a[28003] = anon_sym_DOLLAR_BQUOTE;
	v->a[28004] = anon_sym_LT_LPAREN;
	v->a[28005] = anon_sym_GT_LPAREN;
	v->a[28006] = sym_word;
	v->a[28007] = 6;
	v->a[28008] = actions(3);
	v->a[28009] = 1;
	v->a[28010] = sym_comment;
	v->a[28011] = state(1740);
	v->a[28012] = 1;
	v->a[28013] = aux_sym__literal_repeat1;
	v->a[28014] = state(1957);
	v->a[28015] = 1;
	v->a[28016] = sym_concatenation;
	v->a[28017] = actions(2500);
	v->a[28018] = 5;
	v->a[28019] = sym_file_descriptor;
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = sym_variable_name;
	v->a[28021] = sym_test_operator;
	v->a[28022] = sym__brace_start;
	v->a[28023] = aux_sym_heredoc_redirect_token1;
	v->a[28024] = state(2291);
	v->a[28025] = 9;
	v->a[28026] = sym_arithmetic_expansion;
	v->a[28027] = sym_brace_expression;
	v->a[28028] = sym_string;
	v->a[28029] = sym_translated_string;
	v->a[28030] = sym_number;
	v->a[28031] = sym_simple_expansion;
	v->a[28032] = sym_expansion;
	v->a[28033] = sym_command_substitution;
	v->a[28034] = sym_process_substitution;
	v->a[28035] = actions(2498);
	v->a[28036] = 34;
	v->a[28037] = anon_sym_LPAREN_LPAREN;
	v->a[28038] = anon_sym_PIPE_PIPE;
	v->a[28039] = anon_sym_AMP_AMP;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = anon_sym_PIPE;
	v->a[28041] = anon_sym_LT;
	v->a[28042] = anon_sym_GT;
	v->a[28043] = anon_sym_LT_LT;
	v->a[28044] = anon_sym_GT_GT;
	v->a[28045] = anon_sym_PIPE_AMP;
	v->a[28046] = anon_sym_AMP_GT;
	v->a[28047] = anon_sym_AMP_GT_GT;
	v->a[28048] = anon_sym_LT_AMP;
	v->a[28049] = anon_sym_GT_AMP;
	v->a[28050] = anon_sym_GT_PIPE;
	v->a[28051] = anon_sym_LT_AMP_DASH;
	v->a[28052] = anon_sym_GT_AMP_DASH;
	v->a[28053] = anon_sym_LT_LT_DASH;
	v->a[28054] = anon_sym_LT_LT_LT;
	v->a[28055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28056] = anon_sym_DOLLAR_LBRACK;
	v->a[28057] = anon_sym_DOLLAR;
	v->a[28058] = sym__special_character;
	v->a[28059] = anon_sym_DQUOTE;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = sym_raw_string;
	v->a[28061] = sym_ansi_c_string;
	v->a[28062] = aux_sym_number_token1;
	v->a[28063] = aux_sym_number_token2;
	v->a[28064] = anon_sym_DOLLAR_LBRACE;
	v->a[28065] = anon_sym_DOLLAR_LPAREN;
	v->a[28066] = anon_sym_BQUOTE;
	v->a[28067] = anon_sym_DOLLAR_BQUOTE;
	v->a[28068] = anon_sym_LT_LPAREN;
	v->a[28069] = anon_sym_GT_LPAREN;
	v->a[28070] = sym_word;
	v->a[28071] = 6;
	v->a[28072] = actions(3);
	v->a[28073] = 1;
	v->a[28074] = sym_comment;
	v->a[28075] = actions(4374);
	v->a[28076] = 1;
	v->a[28077] = aux_sym_concatenation_token1;
	v->a[28078] = actions(4376);
	v->a[28079] = 1;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = sym__concat;
	v->a[28081] = state(891);
	v->a[28082] = 1;
	v->a[28083] = aux_sym_concatenation_repeat1;
	v->a[28084] = actions(1263);
	v->a[28085] = 5;
	v->a[28086] = sym_file_descriptor;
	v->a[28087] = sym_test_operator;
	v->a[28088] = sym__bare_dollar;
	v->a[28089] = sym__brace_start;
	v->a[28090] = aux_sym_heredoc_redirect_token1;
	v->a[28091] = actions(1261);
	v->a[28092] = 42;
	v->a[28093] = anon_sym_LPAREN_LPAREN;
	v->a[28094] = anon_sym_SEMI;
	v->a[28095] = anon_sym_PIPE_PIPE;
	v->a[28096] = anon_sym_AMP_AMP;
	v->a[28097] = anon_sym_PIPE;
	v->a[28098] = anon_sym_AMP;
	v->a[28099] = anon_sym_EQ_EQ;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
