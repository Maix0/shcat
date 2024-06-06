/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_620.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3100(t_small_parse_table_array *v)
{
	v->a[62000] = anon_sym_DOLLAR_BQUOTE;
	v->a[62001] = sym_word;
	v->a[62002] = 6;
	v->a[62003] = actions(57);
	v->a[62004] = 1;
	v->a[62005] = sym_comment;
	v->a[62006] = state(1920);
	v->a[62007] = 1;
	v->a[62008] = aux_sym__literal_repeat1;
	v->a[62009] = state(1368);
	v->a[62010] = 2;
	v->a[62011] = sym_concatenation;
	v->a[62012] = aux_sym_for_statement_repeat1;
	v->a[62013] = state(1800);
	v->a[62014] = 7;
	v->a[62015] = sym_arithmetic_expansion;
	v->a[62016] = sym_brace_expression;
	v->a[62017] = sym_string;
	v->a[62018] = sym_number;
	v->a[62019] = sym_simple_expansion;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = sym_expansion;
	v->a[62021] = sym_command_substitution;
	v->a[62022] = actions(1388);
	v->a[62023] = 10;
	v->a[62024] = anon_sym_LT;
	v->a[62025] = anon_sym_GT;
	v->a[62026] = anon_sym_AMP_GT;
	v->a[62027] = anon_sym_LT_AMP;
	v->a[62028] = anon_sym_GT_AMP;
	v->a[62029] = anon_sym_DOLLAR;
	v->a[62030] = aux_sym_number_token1;
	v->a[62031] = aux_sym_number_token2;
	v->a[62032] = anon_sym_DOLLAR_LPAREN;
	v->a[62033] = sym_word;
	v->a[62034] = actions(1390);
	v->a[62035] = 16;
	v->a[62036] = sym_file_descriptor;
	v->a[62037] = sym_variable_name;
	v->a[62038] = sym_test_operator;
	v->a[62039] = sym__brace_start;
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = anon_sym_GT_GT;
	v->a[62041] = anon_sym_AMP_GT_GT;
	v->a[62042] = anon_sym_GT_PIPE;
	v->a[62043] = anon_sym_LT_AMP_DASH;
	v->a[62044] = anon_sym_GT_AMP_DASH;
	v->a[62045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62046] = sym__special_character;
	v->a[62047] = anon_sym_DQUOTE;
	v->a[62048] = sym_raw_string;
	v->a[62049] = anon_sym_DOLLAR_LBRACE;
	v->a[62050] = anon_sym_BQUOTE;
	v->a[62051] = anon_sym_DOLLAR_BQUOTE;
	v->a[62052] = 6;
	v->a[62053] = actions(3);
	v->a[62054] = 1;
	v->a[62055] = sym_comment;
	v->a[62056] = actions(3423);
	v->a[62057] = 1;
	v->a[62058] = aux_sym_concatenation_token1;
	v->a[62059] = actions(3425);
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = 1;
	v->a[62061] = sym__concat;
	v->a[62062] = state(1344);
	v->a[62063] = 1;
	v->a[62064] = aux_sym_concatenation_repeat1;
	v->a[62065] = actions(1390);
	v->a[62066] = 5;
	v->a[62067] = sym_file_descriptor;
	v->a[62068] = sym_variable_name;
	v->a[62069] = sym_test_operator;
	v->a[62070] = sym__brace_start;
	v->a[62071] = aux_sym_heredoc_redirect_token1;
	v->a[62072] = actions(1388);
	v->a[62073] = 28;
	v->a[62074] = anon_sym_PIPE;
	v->a[62075] = anon_sym_PIPE_AMP;
	v->a[62076] = anon_sym_AMP_AMP;
	v->a[62077] = anon_sym_PIPE_PIPE;
	v->a[62078] = anon_sym_LT;
	v->a[62079] = anon_sym_GT;
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = anon_sym_GT_GT;
	v->a[62081] = anon_sym_AMP_GT;
	v->a[62082] = anon_sym_AMP_GT_GT;
	v->a[62083] = anon_sym_LT_AMP;
	v->a[62084] = anon_sym_GT_AMP;
	v->a[62085] = anon_sym_GT_PIPE;
	v->a[62086] = anon_sym_LT_AMP_DASH;
	v->a[62087] = anon_sym_GT_AMP_DASH;
	v->a[62088] = anon_sym_LT_LT;
	v->a[62089] = anon_sym_LT_LT_DASH;
	v->a[62090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62091] = anon_sym_DOLLAR;
	v->a[62092] = sym__special_character;
	v->a[62093] = anon_sym_DQUOTE;
	v->a[62094] = sym_raw_string;
	v->a[62095] = aux_sym_number_token1;
	v->a[62096] = aux_sym_number_token2;
	v->a[62097] = anon_sym_DOLLAR_LBRACE;
	v->a[62098] = anon_sym_DOLLAR_LPAREN;
	v->a[62099] = anon_sym_BQUOTE;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
