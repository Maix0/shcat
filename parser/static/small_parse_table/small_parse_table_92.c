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
	v->a[9201] = sym_comment;
	v->a[9202] = actions(9);
	v->a[9203] = 1;
	v->a[9204] = anon_sym_for;
	v->a[9205] = actions(13);
	v->a[9206] = 1;
	v->a[9207] = anon_sym_if;
	v->a[9208] = actions(15);
	v->a[9209] = 1;
	v->a[9210] = anon_sym_case;
	v->a[9211] = actions(17);
	v->a[9212] = 1;
	v->a[9213] = anon_sym_LPAREN;
	v->a[9214] = actions(19);
	v->a[9215] = 1;
	v->a[9216] = anon_sym_LBRACE;
	v->a[9217] = actions(49);
	v->a[9218] = 1;
	v->a[9219] = sym_word;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = actions(57);
	v->a[9221] = 1;
	v->a[9222] = anon_sym_BANG;
	v->a[9223] = actions(63);
	v->a[9224] = 1;
	v->a[9225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9226] = actions(65);
	v->a[9227] = 1;
	v->a[9228] = anon_sym_DOLLAR;
	v->a[9229] = actions(67);
	v->a[9230] = 1;
	v->a[9231] = anon_sym_DQUOTE;
	v->a[9232] = actions(69);
	v->a[9233] = 1;
	v->a[9234] = sym_raw_string;
	v->a[9235] = actions(71);
	v->a[9236] = 1;
	v->a[9237] = aux_sym_number_token1;
	v->a[9238] = actions(73);
	v->a[9239] = 1;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = aux_sym_number_token2;
	v->a[9241] = actions(75);
	v->a[9242] = 1;
	v->a[9243] = anon_sym_DOLLAR_LBRACE;
	v->a[9244] = actions(77);
	v->a[9245] = 1;
	v->a[9246] = anon_sym_DOLLAR_LPAREN;
	v->a[9247] = actions(79);
	v->a[9248] = 1;
	v->a[9249] = anon_sym_BQUOTE;
	v->a[9250] = actions(81);
	v->a[9251] = 1;
	v->a[9252] = sym_file_descriptor;
	v->a[9253] = actions(83);
	v->a[9254] = 1;
	v->a[9255] = sym_variable_name;
	v->a[9256] = actions(270);
	v->a[9257] = 1;
	v->a[9258] = anon_sym_then;
	v->a[9259] = state(37);
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = 1;
	v->a[9261] = aux_sym__terminated_statement;
	v->a[9262] = state(190);
	v->a[9263] = 1;
	v->a[9264] = sym_command_name;
	v->a[9265] = state(303);
	v->a[9266] = 1;
	v->a[9267] = sym_variable_assignment;
	v->a[9268] = state(582);
	v->a[9269] = 1;
	v->a[9270] = sym_concatenation;
	v->a[9271] = state(587);
	v->a[9272] = 1;
	v->a[9273] = aux_sym_command_repeat1;
	v->a[9274] = state(718);
	v->a[9275] = 1;
	v->a[9276] = sym_file_redirect;
	v->a[9277] = state(1213);
	v->a[9278] = 1;
	v->a[9279] = aux_sym_redirected_statement_repeat2;
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = state(1225);
	v->a[9281] = 1;
	v->a[9282] = sym_pipeline;
	v->a[9283] = state(2035);
	v->a[9284] = 1;
	v->a[9285] = sym__statement_not_pipeline;
	v->a[9286] = actions(11);
	v->a[9287] = 2;
	v->a[9288] = anon_sym_while;
	v->a[9289] = anon_sym_until;
	v->a[9290] = actions(61);
	v->a[9291] = 2;
	v->a[9292] = anon_sym_LT_AMP_DASH;
	v->a[9293] = anon_sym_GT_AMP_DASH;
	v->a[9294] = state(397);
	v->a[9295] = 6;
	v->a[9296] = sym_arithmetic_expansion;
	v->a[9297] = sym_string;
	v->a[9298] = sym_number;
	v->a[9299] = sym_simple_expansion;
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
