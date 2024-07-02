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
	v->a[9200] = state(1158);
	v->a[9201] = 1;
	v->a[9202] = aux_sym_redirected_statement_repeat2;
	v->a[9203] = state(1906);
	v->a[9204] = 1;
	v->a[9205] = sym__statement_not_pipeline;
	v->a[9206] = state(1962);
	v->a[9207] = 1;
	v->a[9208] = sym__statements;
	v->a[9209] = actions(11);
	v->a[9210] = 2;
	v->a[9211] = anon_sym_while;
	v->a[9212] = anon_sym_until;
	v->a[9213] = actions(217);
	v->a[9214] = 2;
	v->a[9215] = sym_raw_string;
	v->a[9216] = sym_number;
	v->a[9217] = state(347);
	v->a[9218] = 5;
	v->a[9219] = sym_arithmetic_expansion;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = sym_string;
	v->a[9221] = sym_simple_expansion;
	v->a[9222] = sym_expansion;
	v->a[9223] = sym_command_substitution;
	v->a[9224] = actions(215);
	v->a[9225] = 7;
	v->a[9226] = anon_sym_LT;
	v->a[9227] = anon_sym_GT;
	v->a[9228] = anon_sym_GT_GT;
	v->a[9229] = anon_sym_LT_AMP;
	v->a[9230] = anon_sym_GT_AMP;
	v->a[9231] = anon_sym_GT_PIPE;
	v->a[9232] = anon_sym_LT_GT;
	v->a[9233] = state(958);
	v->a[9234] = 12;
	v->a[9235] = sym_redirected_statement;
	v->a[9236] = sym_for_statement;
	v->a[9237] = sym_while_statement;
	v->a[9238] = sym_if_statement;
	v->a[9239] = sym_case_statement;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = sym_function_definition;
	v->a[9241] = sym_compound_statement;
	v->a[9242] = sym_subshell;
	v->a[9243] = sym_list;
	v->a[9244] = sym_negated_command;
	v->a[9245] = sym_command;
	v->a[9246] = sym__variable_assignments;
	v->a[9247] = 31;
	v->a[9248] = actions(3);
	v->a[9249] = 1;
	v->a[9250] = sym_comment;
	v->a[9251] = actions(9);
	v->a[9252] = 1;
	v->a[9253] = anon_sym_for;
	v->a[9254] = actions(13);
	v->a[9255] = 1;
	v->a[9256] = anon_sym_if;
	v->a[9257] = actions(15);
	v->a[9258] = 1;
	v->a[9259] = anon_sym_case;
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = actions(17);
	v->a[9261] = 1;
	v->a[9262] = anon_sym_LPAREN;
	v->a[9263] = actions(19);
	v->a[9264] = 1;
	v->a[9265] = anon_sym_LBRACE;
	v->a[9266] = actions(55);
	v->a[9267] = 1;
	v->a[9268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9269] = actions(57);
	v->a[9270] = 1;
	v->a[9271] = anon_sym_DOLLAR;
	v->a[9272] = actions(59);
	v->a[9273] = 1;
	v->a[9274] = anon_sym_DQUOTE;
	v->a[9275] = actions(63);
	v->a[9276] = 1;
	v->a[9277] = anon_sym_DOLLAR_LBRACE;
	v->a[9278] = actions(65);
	v->a[9279] = 1;
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = anon_sym_DOLLAR_LPAREN;
	v->a[9281] = actions(67);
	v->a[9282] = 1;
	v->a[9283] = anon_sym_BQUOTE;
	v->a[9284] = actions(69);
	v->a[9285] = 1;
	v->a[9286] = sym_file_descriptor;
	v->a[9287] = actions(71);
	v->a[9288] = 1;
	v->a[9289] = sym_variable_name;
	v->a[9290] = actions(223);
	v->a[9291] = 1;
	v->a[9292] = sym_word;
	v->a[9293] = actions(225);
	v->a[9294] = 1;
	v->a[9295] = anon_sym_BANG;
	v->a[9296] = state(131);
	v->a[9297] = 1;
	v->a[9298] = aux_sym__statements_repeat1;
	v->a[9299] = state(183);
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
