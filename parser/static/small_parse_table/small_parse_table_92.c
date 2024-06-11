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
	v->a[9200] = 1;
	v->a[9201] = sym_variable_assignment;
	v->a[9202] = state(647);
	v->a[9203] = 1;
	v->a[9204] = sym_concatenation;
	v->a[9205] = state(746);
	v->a[9206] = 1;
	v->a[9207] = aux_sym_command_repeat1;
	v->a[9208] = state(905);
	v->a[9209] = 1;
	v->a[9210] = sym_file_redirect;
	v->a[9211] = state(1422);
	v->a[9212] = 1;
	v->a[9213] = sym_pipeline;
	v->a[9214] = state(1429);
	v->a[9215] = 1;
	v->a[9216] = aux_sym_redirected_statement_repeat2;
	v->a[9217] = state(2271);
	v->a[9218] = 1;
	v->a[9219] = sym__statement_not_pipeline;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = state(2382);
	v->a[9221] = 1;
	v->a[9222] = sym__statements;
	v->a[9223] = actions(11);
	v->a[9224] = 2;
	v->a[9225] = anon_sym_while;
	v->a[9226] = anon_sym_until;
	v->a[9227] = actions(57);
	v->a[9228] = 2;
	v->a[9229] = anon_sym_LT_AMP_DASH;
	v->a[9230] = anon_sym_GT_AMP_DASH;
	v->a[9231] = actions(65);
	v->a[9232] = 2;
	v->a[9233] = sym_raw_string;
	v->a[9234] = sym_number;
	v->a[9235] = state(394);
	v->a[9236] = 5;
	v->a[9237] = sym_arithmetic_expansion;
	v->a[9238] = sym_string;
	v->a[9239] = sym_simple_expansion;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = sym_expansion;
	v->a[9241] = sym_command_substitution;
	v->a[9242] = actions(55);
	v->a[9243] = 8;
	v->a[9244] = anon_sym_LT;
	v->a[9245] = anon_sym_GT;
	v->a[9246] = anon_sym_GT_GT;
	v->a[9247] = anon_sym_AMP_GT;
	v->a[9248] = anon_sym_AMP_GT_GT;
	v->a[9249] = anon_sym_LT_AMP;
	v->a[9250] = anon_sym_GT_AMP;
	v->a[9251] = anon_sym_GT_PIPE;
	v->a[9252] = state(1211);
	v->a[9253] = 12;
	v->a[9254] = sym_redirected_statement;
	v->a[9255] = sym_for_statement;
	v->a[9256] = sym_while_statement;
	v->a[9257] = sym_if_statement;
	v->a[9258] = sym_case_statement;
	v->a[9259] = sym_function_definition;
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = sym_compound_statement;
	v->a[9261] = sym_subshell;
	v->a[9262] = sym_list;
	v->a[9263] = sym_negated_command;
	v->a[9264] = sym_command;
	v->a[9265] = sym_variable_assignments;
	v->a[9266] = 32;
	v->a[9267] = actions(3);
	v->a[9268] = 1;
	v->a[9269] = sym_comment;
	v->a[9270] = actions(9);
	v->a[9271] = 1;
	v->a[9272] = anon_sym_for;
	v->a[9273] = actions(13);
	v->a[9274] = 1;
	v->a[9275] = anon_sym_if;
	v->a[9276] = actions(15);
	v->a[9277] = 1;
	v->a[9278] = anon_sym_case;
	v->a[9279] = actions(17);
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = 1;
	v->a[9281] = anon_sym_LPAREN;
	v->a[9282] = actions(19);
	v->a[9283] = 1;
	v->a[9284] = anon_sym_LBRACE;
	v->a[9285] = actions(59);
	v->a[9286] = 1;
	v->a[9287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9288] = actions(61);
	v->a[9289] = 1;
	v->a[9290] = anon_sym_DOLLAR;
	v->a[9291] = actions(63);
	v->a[9292] = 1;
	v->a[9293] = anon_sym_DQUOTE;
	v->a[9294] = actions(67);
	v->a[9295] = 1;
	v->a[9296] = anon_sym_DOLLAR_LBRACE;
	v->a[9297] = actions(69);
	v->a[9298] = 1;
	v->a[9299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
