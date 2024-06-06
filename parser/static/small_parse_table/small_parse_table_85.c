/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_85.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_425(t_small_parse_table_array *v)
{
	v->a[8500] = actions(3);
	v->a[8501] = 1;
	v->a[8502] = sym_comment;
	v->a[8503] = actions(1930);
	v->a[8504] = 1;
	v->a[8505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8506] = actions(1933);
	v->a[8507] = 1;
	v->a[8508] = anon_sym_DOLLAR;
	v->a[8509] = actions(1936);
	v->a[8510] = 1;
	v->a[8511] = sym__special_character;
	v->a[8512] = actions(1939);
	v->a[8513] = 1;
	v->a[8514] = anon_sym_DQUOTE;
	v->a[8515] = actions(1942);
	v->a[8516] = 1;
	v->a[8517] = aux_sym_number_token1;
	v->a[8518] = actions(1945);
	v->a[8519] = 1;
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = aux_sym_number_token2;
	v->a[8521] = actions(1948);
	v->a[8522] = 1;
	v->a[8523] = anon_sym_DOLLAR_LBRACE;
	v->a[8524] = actions(1951);
	v->a[8525] = 1;
	v->a[8526] = anon_sym_DOLLAR_LPAREN;
	v->a[8527] = actions(1954);
	v->a[8528] = 1;
	v->a[8529] = anon_sym_BQUOTE;
	v->a[8530] = actions(1957);
	v->a[8531] = 1;
	v->a[8532] = anon_sym_DOLLAR_BQUOTE;
	v->a[8533] = actions(1960);
	v->a[8534] = 1;
	v->a[8535] = aux_sym__simple_variable_name_token1;
	v->a[8536] = actions(1963);
	v->a[8537] = 1;
	v->a[8538] = sym_test_operator;
	v->a[8539] = actions(1966);
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = 1;
	v->a[8541] = sym__brace_start;
	v->a[8542] = state(1209);
	v->a[8543] = 1;
	v->a[8544] = aux_sym__literal_repeat1;
	v->a[8545] = actions(1927);
	v->a[8546] = 2;
	v->a[8547] = sym_raw_string;
	v->a[8548] = sym_word;
	v->a[8549] = state(367);
	v->a[8550] = 2;
	v->a[8551] = sym_concatenation;
	v->a[8552] = aux_sym_unset_command_repeat1;
	v->a[8553] = actions(966);
	v->a[8554] = 3;
	v->a[8555] = sym_file_descriptor;
	v->a[8556] = ts_builtin_sym_end;
	v->a[8557] = aux_sym_heredoc_redirect_token1;
	v->a[8558] = state(774);
	v->a[8559] = 7;
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = sym_arithmetic_expansion;
	v->a[8561] = sym_brace_expression;
	v->a[8562] = sym_string;
	v->a[8563] = sym_number;
	v->a[8564] = sym_simple_expansion;
	v->a[8565] = sym_expansion;
	v->a[8566] = sym_command_substitution;
	v->a[8567] = actions(964);
	v->a[8568] = 19;
	v->a[8569] = anon_sym_PIPE;
	v->a[8570] = anon_sym_SEMI_SEMI;
	v->a[8571] = anon_sym_PIPE_AMP;
	v->a[8572] = anon_sym_AMP_AMP;
	v->a[8573] = anon_sym_PIPE_PIPE;
	v->a[8574] = anon_sym_LT;
	v->a[8575] = anon_sym_GT;
	v->a[8576] = anon_sym_GT_GT;
	v->a[8577] = anon_sym_AMP_GT;
	v->a[8578] = anon_sym_AMP_GT_GT;
	v->a[8579] = anon_sym_LT_AMP;
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = anon_sym_GT_AMP;
	v->a[8581] = anon_sym_GT_PIPE;
	v->a[8582] = anon_sym_LT_AMP_DASH;
	v->a[8583] = anon_sym_GT_AMP_DASH;
	v->a[8584] = anon_sym_LT_LT;
	v->a[8585] = anon_sym_LT_LT_DASH;
	v->a[8586] = anon_sym_AMP;
	v->a[8587] = anon_sym_SEMI;
	v->a[8588] = 6;
	v->a[8589] = actions(3);
	v->a[8590] = 1;
	v->a[8591] = sym_comment;
	v->a[8592] = state(1237);
	v->a[8593] = 1;
	v->a[8594] = aux_sym__literal_repeat1;
	v->a[8595] = state(357);
	v->a[8596] = 2;
	v->a[8597] = sym_concatenation;
	v->a[8598] = aux_sym_for_statement_repeat1;
	v->a[8599] = actions(1390);
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
