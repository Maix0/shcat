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
	v->a[8500] = aux_sym_number_token1;
	v->a[8501] = actions(2582);
	v->a[8502] = 1;
	v->a[8503] = aux_sym_number_token2;
	v->a[8504] = actions(2584);
	v->a[8505] = 1;
	v->a[8506] = anon_sym_DOLLAR_LBRACE;
	v->a[8507] = actions(2586);
	v->a[8508] = 1;
	v->a[8509] = anon_sym_DOLLAR_LPAREN;
	v->a[8510] = actions(2588);
	v->a[8511] = 1;
	v->a[8512] = anon_sym_BQUOTE;
	v->a[8513] = actions(2590);
	v->a[8514] = 1;
	v->a[8515] = anon_sym_DOLLAR_BQUOTE;
	v->a[8516] = actions(2594);
	v->a[8517] = 1;
	v->a[8518] = sym_test_operator;
	v->a[8519] = actions(2596);
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = 1;
	v->a[8521] = sym__brace_start;
	v->a[8522] = state(1899);
	v->a[8523] = 1;
	v->a[8524] = aux_sym__literal_repeat1;
	v->a[8525] = actions(2074);
	v->a[8526] = 2;
	v->a[8527] = sym_file_descriptor;
	v->a[8528] = aux_sym_heredoc_redirect_token1;
	v->a[8529] = actions(2570);
	v->a[8530] = 2;
	v->a[8531] = anon_sym_LPAREN_LPAREN;
	v->a[8532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8533] = actions(2592);
	v->a[8534] = 2;
	v->a[8535] = anon_sym_LT_LPAREN;
	v->a[8536] = anon_sym_GT_LPAREN;
	v->a[8537] = state(621);
	v->a[8538] = 2;
	v->a[8539] = sym_concatenation;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = aux_sym_for_statement_repeat1;
	v->a[8541] = actions(2568);
	v->a[8542] = 3;
	v->a[8543] = sym_raw_string;
	v->a[8544] = sym_ansi_c_string;
	v->a[8545] = sym_word;
	v->a[8546] = state(1394);
	v->a[8547] = 9;
	v->a[8548] = sym_arithmetic_expansion;
	v->a[8549] = sym_brace_expression;
	v->a[8550] = sym_string;
	v->a[8551] = sym_translated_string;
	v->a[8552] = sym_number;
	v->a[8553] = sym_simple_expansion;
	v->a[8554] = sym_expansion;
	v->a[8555] = sym_command_substitution;
	v->a[8556] = sym_process_substitution;
	v->a[8557] = actions(2072);
	v->a[8558] = 22;
	v->a[8559] = anon_sym_SEMI;
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = anon_sym_PIPE_PIPE;
	v->a[8561] = anon_sym_AMP_AMP;
	v->a[8562] = anon_sym_PIPE;
	v->a[8563] = anon_sym_AMP;
	v->a[8564] = anon_sym_LT;
	v->a[8565] = anon_sym_GT;
	v->a[8566] = anon_sym_LT_LT;
	v->a[8567] = anon_sym_GT_GT;
	v->a[8568] = anon_sym_SEMI_SEMI;
	v->a[8569] = anon_sym_SEMI_AMP;
	v->a[8570] = anon_sym_SEMI_SEMI_AMP;
	v->a[8571] = anon_sym_PIPE_AMP;
	v->a[8572] = anon_sym_AMP_GT;
	v->a[8573] = anon_sym_AMP_GT_GT;
	v->a[8574] = anon_sym_LT_AMP;
	v->a[8575] = anon_sym_GT_AMP;
	v->a[8576] = anon_sym_GT_PIPE;
	v->a[8577] = anon_sym_LT_AMP_DASH;
	v->a[8578] = anon_sym_GT_AMP_DASH;
	v->a[8579] = anon_sym_LT_LT_DASH;
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = anon_sym_LT_LT_LT;
	v->a[8581] = 21;
	v->a[8582] = actions(3);
	v->a[8583] = 1;
	v->a[8584] = sym_comment;
	v->a[8585] = actions(2602);
	v->a[8586] = 1;
	v->a[8587] = anon_sym_DOLLAR_LBRACK;
	v->a[8588] = actions(2604);
	v->a[8589] = 1;
	v->a[8590] = anon_sym_DOLLAR;
	v->a[8591] = actions(2606);
	v->a[8592] = 1;
	v->a[8593] = sym__special_character;
	v->a[8594] = actions(2608);
	v->a[8595] = 1;
	v->a[8596] = anon_sym_DQUOTE;
	v->a[8597] = actions(2610);
	v->a[8598] = 1;
	v->a[8599] = aux_sym_number_token1;
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
