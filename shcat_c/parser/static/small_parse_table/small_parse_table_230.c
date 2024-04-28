/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_230.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1150(t_small_parse_table_array *v)
{
	v->a[23000] = actions(3733);
	v->a[23001] = 1;
	v->a[23002] = sym__special_character;
	v->a[23003] = actions(3735);
	v->a[23004] = 1;
	v->a[23005] = anon_sym_DQUOTE;
	v->a[23006] = actions(3737);
	v->a[23007] = 1;
	v->a[23008] = aux_sym_number_token1;
	v->a[23009] = actions(3739);
	v->a[23010] = 1;
	v->a[23011] = aux_sym_number_token2;
	v->a[23012] = actions(3741);
	v->a[23013] = 1;
	v->a[23014] = anon_sym_DOLLAR_LBRACE;
	v->a[23015] = actions(3743);
	v->a[23016] = 1;
	v->a[23017] = anon_sym_DOLLAR_LPAREN;
	v->a[23018] = actions(3745);
	v->a[23019] = 1;
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = anon_sym_BQUOTE;
	v->a[23021] = actions(3747);
	v->a[23022] = 1;
	v->a[23023] = anon_sym_DOLLAR_BQUOTE;
	v->a[23024] = actions(3751);
	v->a[23025] = 1;
	v->a[23026] = sym_file_descriptor;
	v->a[23027] = actions(3753);
	v->a[23028] = 1;
	v->a[23029] = sym_test_operator;
	v->a[23030] = actions(3755);
	v->a[23031] = 1;
	v->a[23032] = sym__brace_start;
	v->a[23033] = actions(4062);
	v->a[23034] = 1;
	v->a[23035] = aux_sym_heredoc_redirect_token1;
	v->a[23036] = state(3608);
	v->a[23037] = 1;
	v->a[23038] = aux_sym__heredoc_command;
	v->a[23039] = state(5351);
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = 1;
	v->a[23041] = aux_sym__literal_repeat1;
	v->a[23042] = state(5456);
	v->a[23043] = 1;
	v->a[23044] = sym_concatenation;
	v->a[23045] = state(6870);
	v->a[23046] = 1;
	v->a[23047] = sym__heredoc_expression;
	v->a[23048] = state(6871);
	v->a[23049] = 1;
	v->a[23050] = sym__heredoc_pipeline;
	v->a[23051] = actions(3715);
	v->a[23052] = 2;
	v->a[23053] = anon_sym_LPAREN_LPAREN;
	v->a[23054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23055] = actions(3717);
	v->a[23056] = 2;
	v->a[23057] = anon_sym_PIPE_PIPE;
	v->a[23058] = anon_sym_AMP_AMP;
	v->a[23059] = actions(3719);
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = 2;
	v->a[23061] = anon_sym_PIPE;
	v->a[23062] = anon_sym_PIPE_AMP;
	v->a[23063] = actions(3723);
	v->a[23064] = 2;
	v->a[23065] = anon_sym_LT_AMP_DASH;
	v->a[23066] = anon_sym_GT_AMP_DASH;
	v->a[23067] = actions(3749);
	v->a[23068] = 2;
	v->a[23069] = anon_sym_LT_LPAREN;
	v->a[23070] = anon_sym_GT_LPAREN;
	v->a[23071] = actions(3713);
	v->a[23072] = 3;
	v->a[23073] = sym_raw_string;
	v->a[23074] = sym_ansi_c_string;
	v->a[23075] = sym_word;
	v->a[23076] = state(5540);
	v->a[23077] = 3;
	v->a[23078] = sym_file_redirect;
	v->a[23079] = sym_herestring_redirect;
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = aux_sym_redirected_statement_repeat2;
	v->a[23081] = actions(3721);
	v->a[23082] = 8;
	v->a[23083] = anon_sym_LT;
	v->a[23084] = anon_sym_GT;
	v->a[23085] = anon_sym_GT_GT;
	v->a[23086] = anon_sym_AMP_GT;
	v->a[23087] = anon_sym_AMP_GT_GT;
	v->a[23088] = anon_sym_LT_AMP;
	v->a[23089] = anon_sym_GT_AMP;
	v->a[23090] = anon_sym_GT_PIPE;
	v->a[23091] = state(5062);
	v->a[23092] = 9;
	v->a[23093] = sym_arithmetic_expansion;
	v->a[23094] = sym_brace_expression;
	v->a[23095] = sym_string;
	v->a[23096] = sym_translated_string;
	v->a[23097] = sym_number;
	v->a[23098] = sym_simple_expansion;
	v->a[23099] = sym_expansion;
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
