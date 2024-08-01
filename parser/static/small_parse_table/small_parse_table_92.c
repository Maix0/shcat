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
	v->a[9200] = state(186);
	v->a[9201] = 1;
	v->a[9202] = sym_variable_assignment;
	v->a[9203] = state(298);
	v->a[9204] = 1;
	v->a[9205] = aux_sym_command_repeat1;
	v->a[9206] = state(521);
	v->a[9207] = 1;
	v->a[9208] = sym_file_redirect;
	v->a[9209] = state(555);
	v->a[9210] = 1;
	v->a[9211] = sym_concatenation;
	v->a[9212] = state(937);
	v->a[9213] = 1;
	v->a[9214] = sym_pipeline;
	v->a[9215] = state(1019);
	v->a[9216] = 1;
	v->a[9217] = aux_sym_redirected_statement_repeat2;
	v->a[9218] = state(1557);
	v->a[9219] = 1;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = sym__statement_not_pipeline;
	v->a[9221] = state(1580);
	v->a[9222] = 1;
	v->a[9223] = sym__statements;
	v->a[9224] = actions(11);
	v->a[9225] = 2;
	v->a[9226] = anon_sym_while;
	v->a[9227] = anon_sym_until;
	v->a[9228] = actions(214);
	v->a[9229] = 2;
	v->a[9230] = sym_raw_string;
	v->a[9231] = sym_number;
	v->a[9232] = actions(212);
	v->a[9233] = 3;
	v->a[9234] = anon_sym_LT;
	v->a[9235] = anon_sym_GT;
	v->a[9236] = anon_sym_GT_GT;
	v->a[9237] = state(277);
	v->a[9238] = 5;
	v->a[9239] = sym_arithmetic_expansion;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = sym_string;
	v->a[9241] = sym_simple_expansion;
	v->a[9242] = sym_expansion;
	v->a[9243] = sym_command_substitution;
	v->a[9244] = state(877);
	v->a[9245] = 12;
	v->a[9246] = sym_redirected_statement;
	v->a[9247] = sym_for_statement;
	v->a[9248] = sym_while_statement;
	v->a[9249] = sym_if_statement;
	v->a[9250] = sym_case_statement;
	v->a[9251] = sym_function_definition;
	v->a[9252] = sym_compound_statement;
	v->a[9253] = sym_subshell;
	v->a[9254] = sym_list;
	v->a[9255] = sym_negated_command;
	v->a[9256] = sym_command;
	v->a[9257] = sym__variable_assignments;
	v->a[9258] = 30;
	v->a[9259] = actions(3);
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = 1;
	v->a[9261] = sym_comment;
	v->a[9262] = actions(9);
	v->a[9263] = 1;
	v->a[9264] = anon_sym_for;
	v->a[9265] = actions(13);
	v->a[9266] = 1;
	v->a[9267] = anon_sym_if;
	v->a[9268] = actions(15);
	v->a[9269] = 1;
	v->a[9270] = anon_sym_case;
	v->a[9271] = actions(17);
	v->a[9272] = 1;
	v->a[9273] = anon_sym_LPAREN;
	v->a[9274] = actions(19);
	v->a[9275] = 1;
	v->a[9276] = anon_sym_LBRACE;
	v->a[9277] = actions(53);
	v->a[9278] = 1;
	v->a[9279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = actions(55);
	v->a[9281] = 1;
	v->a[9282] = anon_sym_DOLLAR;
	v->a[9283] = actions(57);
	v->a[9284] = 1;
	v->a[9285] = anon_sym_DQUOTE;
	v->a[9286] = actions(61);
	v->a[9287] = 1;
	v->a[9288] = anon_sym_DOLLAR_LBRACE;
	v->a[9289] = actions(63);
	v->a[9290] = 1;
	v->a[9291] = anon_sym_DOLLAR_LPAREN;
	v->a[9292] = actions(65);
	v->a[9293] = 1;
	v->a[9294] = anon_sym_BQUOTE;
	v->a[9295] = actions(208);
	v->a[9296] = 1;
	v->a[9297] = sym_word;
	v->a[9298] = actions(210);
	v->a[9299] = 1;
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
