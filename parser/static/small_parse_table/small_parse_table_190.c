/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_190.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_950(t_small_parse_table_array *v)
{
	v->a[19000] = aux_sym_redirected_statement_repeat2;
	v->a[19001] = actions(3721);
	v->a[19002] = 8;
	v->a[19003] = anon_sym_LT;
	v->a[19004] = anon_sym_GT;
	v->a[19005] = anon_sym_GT_GT;
	v->a[19006] = anon_sym_AMP_GT;
	v->a[19007] = anon_sym_AMP_GT_GT;
	v->a[19008] = anon_sym_LT_AMP;
	v->a[19009] = anon_sym_GT_AMP;
	v->a[19010] = anon_sym_GT_PIPE;
	v->a[19011] = state(5062);
	v->a[19012] = 9;
	v->a[19013] = sym_arithmetic_expansion;
	v->a[19014] = sym_brace_expression;
	v->a[19015] = sym_string;
	v->a[19016] = sym_translated_string;
	v->a[19017] = sym_number;
	v->a[19018] = sym_simple_expansion;
	v->a[19019] = sym_expansion;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = sym_command_substitution;
	v->a[19021] = sym_process_substitution;
	v->a[19022] = 30;
	v->a[19023] = actions(3);
	v->a[19024] = 1;
	v->a[19025] = sym_comment;
	v->a[19026] = actions(3727);
	v->a[19027] = 1;
	v->a[19028] = anon_sym_LT_LT_LT;
	v->a[19029] = actions(3729);
	v->a[19030] = 1;
	v->a[19031] = anon_sym_DOLLAR_LBRACK;
	v->a[19032] = actions(3731);
	v->a[19033] = 1;
	v->a[19034] = anon_sym_DOLLAR;
	v->a[19035] = actions(3733);
	v->a[19036] = 1;
	v->a[19037] = sym__special_character;
	v->a[19038] = actions(3735);
	v->a[19039] = 1;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = anon_sym_DQUOTE;
	v->a[19041] = actions(3737);
	v->a[19042] = 1;
	v->a[19043] = aux_sym_number_token1;
	v->a[19044] = actions(3739);
	v->a[19045] = 1;
	v->a[19046] = aux_sym_number_token2;
	v->a[19047] = actions(3741);
	v->a[19048] = 1;
	v->a[19049] = anon_sym_DOLLAR_LBRACE;
	v->a[19050] = actions(3743);
	v->a[19051] = 1;
	v->a[19052] = anon_sym_DOLLAR_LPAREN;
	v->a[19053] = actions(3745);
	v->a[19054] = 1;
	v->a[19055] = anon_sym_BQUOTE;
	v->a[19056] = actions(3747);
	v->a[19057] = 1;
	v->a[19058] = anon_sym_DOLLAR_BQUOTE;
	v->a[19059] = actions(3751);
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = 1;
	v->a[19061] = sym_file_descriptor;
	v->a[19062] = actions(3753);
	v->a[19063] = 1;
	v->a[19064] = sym_test_operator;
	v->a[19065] = actions(3755);
	v->a[19066] = 1;
	v->a[19067] = sym__brace_start;
	v->a[19068] = actions(3757);
	v->a[19069] = 1;
	v->a[19070] = aux_sym_heredoc_redirect_token1;
	v->a[19071] = state(3605);
	v->a[19072] = 1;
	v->a[19073] = aux_sym__heredoc_command;
	v->a[19074] = state(5351);
	v->a[19075] = 1;
	v->a[19076] = aux_sym__literal_repeat1;
	v->a[19077] = state(5456);
	v->a[19078] = 1;
	v->a[19079] = sym_concatenation;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = state(7041);
	v->a[19081] = 1;
	v->a[19082] = sym__heredoc_expression;
	v->a[19083] = state(7042);
	v->a[19084] = 1;
	v->a[19085] = sym__heredoc_pipeline;
	v->a[19086] = actions(3715);
	v->a[19087] = 2;
	v->a[19088] = anon_sym_LPAREN_LPAREN;
	v->a[19089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19090] = actions(3717);
	v->a[19091] = 2;
	v->a[19092] = anon_sym_PIPE_PIPE;
	v->a[19093] = anon_sym_AMP_AMP;
	v->a[19094] = actions(3719);
	v->a[19095] = 2;
	v->a[19096] = anon_sym_PIPE;
	v->a[19097] = anon_sym_PIPE_AMP;
	v->a[19098] = actions(3723);
	v->a[19099] = 2;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
