/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_92.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_460(t_small_parse_table_array *v)
{
	v->a[9200] = actions(2700);
	v->a[9201] = 1;
	v->a[9202] = anon_sym_BQUOTE;
	v->a[9203] = actions(2703);
	v->a[9204] = 1;
	v->a[9205] = anon_sym_DOLLAR_BQUOTE;
	v->a[9206] = actions(2709);
	v->a[9207] = 1;
	v->a[9208] = sym_test_operator;
	v->a[9209] = actions(2712);
	v->a[9210] = 1;
	v->a[9211] = sym__brace_start;
	v->a[9212] = state(1899);
	v->a[9213] = 1;
	v->a[9214] = aux_sym__literal_repeat1;
	v->a[9215] = actions(2216);
	v->a[9216] = 2;
	v->a[9217] = sym_file_descriptor;
	v->a[9218] = aux_sym_heredoc_redirect_token1;
	v->a[9219] = actions(2673);
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = 2;
	v->a[9221] = anon_sym_LPAREN_LPAREN;
	v->a[9222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9223] = actions(2706);
	v->a[9224] = 2;
	v->a[9225] = anon_sym_LT_LPAREN;
	v->a[9226] = anon_sym_GT_LPAREN;
	v->a[9227] = state(621);
	v->a[9228] = 2;
	v->a[9229] = sym_concatenation;
	v->a[9230] = aux_sym_for_statement_repeat1;
	v->a[9231] = actions(2670);
	v->a[9232] = 3;
	v->a[9233] = sym_raw_string;
	v->a[9234] = sym_ansi_c_string;
	v->a[9235] = sym_word;
	v->a[9236] = state(1394);
	v->a[9237] = 9;
	v->a[9238] = sym_arithmetic_expansion;
	v->a[9239] = sym_brace_expression;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = sym_string;
	v->a[9241] = sym_translated_string;
	v->a[9242] = sym_number;
	v->a[9243] = sym_simple_expansion;
	v->a[9244] = sym_expansion;
	v->a[9245] = sym_command_substitution;
	v->a[9246] = sym_process_substitution;
	v->a[9247] = actions(2214);
	v->a[9248] = 22;
	v->a[9249] = anon_sym_SEMI;
	v->a[9250] = anon_sym_PIPE_PIPE;
	v->a[9251] = anon_sym_AMP_AMP;
	v->a[9252] = anon_sym_PIPE;
	v->a[9253] = anon_sym_AMP;
	v->a[9254] = anon_sym_LT;
	v->a[9255] = anon_sym_GT;
	v->a[9256] = anon_sym_LT_LT;
	v->a[9257] = anon_sym_GT_GT;
	v->a[9258] = anon_sym_SEMI_SEMI;
	v->a[9259] = anon_sym_SEMI_AMP;
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = anon_sym_SEMI_SEMI_AMP;
	v->a[9261] = anon_sym_PIPE_AMP;
	v->a[9262] = anon_sym_AMP_GT;
	v->a[9263] = anon_sym_AMP_GT_GT;
	v->a[9264] = anon_sym_LT_AMP;
	v->a[9265] = anon_sym_GT_AMP;
	v->a[9266] = anon_sym_GT_PIPE;
	v->a[9267] = anon_sym_LT_AMP_DASH;
	v->a[9268] = anon_sym_GT_AMP_DASH;
	v->a[9269] = anon_sym_LT_LT_DASH;
	v->a[9270] = anon_sym_LT_LT_LT;
	v->a[9271] = 5;
	v->a[9272] = actions(71);
	v->a[9273] = 1;
	v->a[9274] = sym_comment;
	v->a[9275] = actions(2719);
	v->a[9276] = 2;
	v->a[9277] = anon_sym_esac;
	v->a[9278] = anon_sym_SEMI_SEMI;
	v->a[9279] = actions(2721);
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = 2;
	v->a[9281] = anon_sym_SEMI_AMP;
	v->a[9282] = anon_sym_SEMI_SEMI_AMP;
	v->a[9283] = actions(2717);
	v->a[9284] = 23;
	v->a[9285] = sym_file_descriptor;
	v->a[9286] = sym_variable_name;
	v->a[9287] = sym_test_operator;
	v->a[9288] = sym__brace_start;
	v->a[9289] = anon_sym_LPAREN_LPAREN;
	v->a[9290] = anon_sym_GT_GT;
	v->a[9291] = anon_sym_LBRACE;
	v->a[9292] = anon_sym_LBRACK_LBRACK;
	v->a[9293] = anon_sym_AMP_GT_GT;
	v->a[9294] = anon_sym_GT_PIPE;
	v->a[9295] = anon_sym_LT_AMP_DASH;
	v->a[9296] = anon_sym_GT_AMP_DASH;
	v->a[9297] = anon_sym_LT_LT_LT;
	v->a[9298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9299] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
