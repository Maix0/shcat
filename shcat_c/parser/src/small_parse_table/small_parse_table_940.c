/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_940.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4700(t_small_parse_table_array *v)
{
	v->a[94000] = sym_raw_string;
	v->a[94001] = sym_ansi_c_string;
	v->a[94002] = actions(1165);
	v->a[94003] = 2;
	v->a[94004] = anon_sym_LT_LPAREN;
	v->a[94005] = anon_sym_GT_LPAREN;
	v->a[94006] = state(2594);
	v->a[94007] = 6;
	v->a[94008] = sym_binary_expression;
	v->a[94009] = sym_ternary_expression;
	v->a[94010] = sym_unary_expression;
	v->a[94011] = sym_postfix_expression;
	v->a[94012] = sym_parenthesized_expression;
	v->a[94013] = sym_concatenation;
	v->a[94014] = state(2573);
	v->a[94015] = 9;
	v->a[94016] = sym_arithmetic_expansion;
	v->a[94017] = sym_brace_expression;
	v->a[94018] = sym_string;
	v->a[94019] = sym_translated_string;
	small_parse_table_4701(v);
}

void	small_parse_table_4701(t_small_parse_table_array *v)
{
	v->a[94020] = sym_number;
	v->a[94021] = sym_simple_expansion;
	v->a[94022] = sym_expansion;
	v->a[94023] = sym_command_substitution;
	v->a[94024] = sym_process_substitution;
	v->a[94025] = 3;
	v->a[94026] = actions(3);
	v->a[94027] = 1;
	v->a[94028] = sym_comment;
	v->a[94029] = actions(1298);
	v->a[94030] = 6;
	v->a[94031] = sym_file_descriptor;
	v->a[94032] = sym__concat;
	v->a[94033] = sym_test_operator;
	v->a[94034] = sym__brace_start;
	v->a[94035] = ts_builtin_sym_end;
	v->a[94036] = aux_sym_heredoc_redirect_token1;
	v->a[94037] = actions(1296);
	v->a[94038] = 38;
	v->a[94039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4702(v);
}

void	small_parse_table_4702(t_small_parse_table_array *v)
{
	v->a[94040] = anon_sym_SEMI;
	v->a[94041] = anon_sym_PIPE_PIPE;
	v->a[94042] = anon_sym_AMP_AMP;
	v->a[94043] = anon_sym_PIPE;
	v->a[94044] = anon_sym_AMP;
	v->a[94045] = anon_sym_LT;
	v->a[94046] = anon_sym_GT;
	v->a[94047] = anon_sym_LT_LT;
	v->a[94048] = anon_sym_GT_GT;
	v->a[94049] = anon_sym_SEMI_SEMI;
	v->a[94050] = anon_sym_PIPE_AMP;
	v->a[94051] = anon_sym_AMP_GT;
	v->a[94052] = anon_sym_AMP_GT_GT;
	v->a[94053] = anon_sym_LT_AMP;
	v->a[94054] = anon_sym_GT_AMP;
	v->a[94055] = anon_sym_GT_PIPE;
	v->a[94056] = anon_sym_LT_AMP_DASH;
	v->a[94057] = anon_sym_GT_AMP_DASH;
	v->a[94058] = anon_sym_LT_LT_DASH;
	v->a[94059] = anon_sym_LT_LT_LT;
	small_parse_table_4703(v);
}

void	small_parse_table_4703(t_small_parse_table_array *v)
{
	v->a[94060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94061] = anon_sym_DOLLAR_LBRACK;
	v->a[94062] = aux_sym_concatenation_token1;
	v->a[94063] = anon_sym_DOLLAR;
	v->a[94064] = sym__special_character;
	v->a[94065] = anon_sym_DQUOTE;
	v->a[94066] = sym_raw_string;
	v->a[94067] = sym_ansi_c_string;
	v->a[94068] = aux_sym_number_token1;
	v->a[94069] = aux_sym_number_token2;
	v->a[94070] = anon_sym_DOLLAR_LBRACE;
	v->a[94071] = anon_sym_DOLLAR_LPAREN;
	v->a[94072] = anon_sym_BQUOTE;
	v->a[94073] = anon_sym_DOLLAR_BQUOTE;
	v->a[94074] = anon_sym_LT_LPAREN;
	v->a[94075] = anon_sym_GT_LPAREN;
	v->a[94076] = sym_word;
	v->a[94077] = 5;
	v->a[94078] = actions(3);
	v->a[94079] = 1;
	small_parse_table_4704(v);
}

void	small_parse_table_4704(t_small_parse_table_array *v)
{
	v->a[94080] = sym_comment;
	v->a[94081] = actions(6004);
	v->a[94082] = 1;
	v->a[94083] = sym__special_character;
	v->a[94084] = state(1873);
	v->a[94085] = 1;
	v->a[94086] = aux_sym__literal_repeat1;
	v->a[94087] = actions(5069);
	v->a[94088] = 6;
	v->a[94089] = sym_file_descriptor;
	v->a[94090] = sym_variable_name;
	v->a[94091] = sym_test_operator;
	v->a[94092] = sym__brace_start;
	v->a[94093] = ts_builtin_sym_end;
	v->a[94094] = aux_sym_heredoc_redirect_token1;
	v->a[94095] = actions(5067);
	v->a[94096] = 36;
	v->a[94097] = anon_sym_LPAREN_LPAREN;
	v->a[94098] = anon_sym_SEMI;
	v->a[94099] = anon_sym_PIPE_PIPE;
	small_parse_table_4705(v);
}

/* EOF small_parse_table_940.c */
