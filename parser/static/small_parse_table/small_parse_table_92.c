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
	v->a[9200] = anon_sym_until;
	v->a[9201] = actions(57);
	v->a[9202] = 2;
	v->a[9203] = anon_sym_LT_AMP_DASH;
	v->a[9204] = anon_sym_GT_AMP_DASH;
	v->a[9205] = actions(65);
	v->a[9206] = 2;
	v->a[9207] = sym_raw_string;
	v->a[9208] = sym_number;
	v->a[9209] = state(443);
	v->a[9210] = 5;
	v->a[9211] = sym_arithmetic_expansion;
	v->a[9212] = sym_string;
	v->a[9213] = sym_simple_expansion;
	v->a[9214] = sym_expansion;
	v->a[9215] = sym_command_substitution;
	v->a[9216] = actions(55);
	v->a[9217] = 6;
	v->a[9218] = anon_sym_LT;
	v->a[9219] = anon_sym_GT;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = anon_sym_GT_GT;
	v->a[9221] = anon_sym_LT_AMP;
	v->a[9222] = anon_sym_GT_AMP;
	v->a[9223] = anon_sym_GT_PIPE;
	v->a[9224] = state(1173);
	v->a[9225] = 12;
	v->a[9226] = sym_redirected_statement;
	v->a[9227] = sym_for_statement;
	v->a[9228] = sym_while_statement;
	v->a[9229] = sym_if_statement;
	v->a[9230] = sym_case_statement;
	v->a[9231] = sym_function_definition;
	v->a[9232] = sym_compound_statement;
	v->a[9233] = sym_subshell;
	v->a[9234] = sym_list;
	v->a[9235] = sym_negated_command;
	v->a[9236] = sym_command;
	v->a[9237] = sym__variable_assignments;
	v->a[9238] = 32;
	v->a[9239] = actions(3);
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = 1;
	v->a[9241] = sym_comment;
	v->a[9242] = actions(9);
	v->a[9243] = 1;
	v->a[9244] = anon_sym_for;
	v->a[9245] = actions(13);
	v->a[9246] = 1;
	v->a[9247] = anon_sym_if;
	v->a[9248] = actions(15);
	v->a[9249] = 1;
	v->a[9250] = anon_sym_case;
	v->a[9251] = actions(17);
	v->a[9252] = 1;
	v->a[9253] = anon_sym_LPAREN;
	v->a[9254] = actions(19);
	v->a[9255] = 1;
	v->a[9256] = anon_sym_LBRACE;
	v->a[9257] = actions(59);
	v->a[9258] = 1;
	v->a[9259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = actions(61);
	v->a[9261] = 1;
	v->a[9262] = anon_sym_DOLLAR;
	v->a[9263] = actions(63);
	v->a[9264] = 1;
	v->a[9265] = anon_sym_DQUOTE;
	v->a[9266] = actions(67);
	v->a[9267] = 1;
	v->a[9268] = anon_sym_DOLLAR_LBRACE;
	v->a[9269] = actions(69);
	v->a[9270] = 1;
	v->a[9271] = anon_sym_DOLLAR_LPAREN;
	v->a[9272] = actions(71);
	v->a[9273] = 1;
	v->a[9274] = anon_sym_BQUOTE;
	v->a[9275] = actions(220);
	v->a[9276] = 1;
	v->a[9277] = sym_word;
	v->a[9278] = actions(222);
	v->a[9279] = 1;
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = anon_sym_BANG;
	v->a[9281] = actions(230);
	v->a[9282] = 1;
	v->a[9283] = sym_file_descriptor;
	v->a[9284] = actions(232);
	v->a[9285] = 1;
	v->a[9286] = sym_variable_name;
	v->a[9287] = state(133);
	v->a[9288] = 1;
	v->a[9289] = aux_sym__statements_repeat1;
	v->a[9290] = state(180);
	v->a[9291] = 1;
	v->a[9292] = sym_command_name;
	v->a[9293] = state(231);
	v->a[9294] = 1;
	v->a[9295] = sym_variable_assignment;
	v->a[9296] = state(650);
	v->a[9297] = 1;
	v->a[9298] = sym_concatenation;
	v->a[9299] = state(710);
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
