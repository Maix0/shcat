/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_82.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_410(t_small_parse_table_array *v)
{
	v->a[8200] = 1;
	v->a[8201] = anon_sym_DOLLAR_LPAREN;
	v->a[8202] = actions(71);
	v->a[8203] = 1;
	v->a[8204] = anon_sym_BQUOTE;
	v->a[8205] = actions(73);
	v->a[8206] = 1;
	v->a[8207] = sym_file_descriptor;
	v->a[8208] = actions(75);
	v->a[8209] = 1;
	v->a[8210] = sym_variable_name;
	v->a[8211] = actions(236);
	v->a[8212] = 1;
	v->a[8213] = sym_word;
	v->a[8214] = actions(238);
	v->a[8215] = 1;
	v->a[8216] = anon_sym_BANG;
	v->a[8217] = state(140);
	v->a[8218] = 1;
	v->a[8219] = aux_sym__statements_repeat1;
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = state(189);
	v->a[8221] = 1;
	v->a[8222] = sym_command_name;
	v->a[8223] = state(286);
	v->a[8224] = 1;
	v->a[8225] = sym_variable_assignment;
	v->a[8226] = state(647);
	v->a[8227] = 1;
	v->a[8228] = sym_concatenation;
	v->a[8229] = state(746);
	v->a[8230] = 1;
	v->a[8231] = aux_sym_command_repeat1;
	v->a[8232] = state(905);
	v->a[8233] = 1;
	v->a[8234] = sym_file_redirect;
	v->a[8235] = state(1422);
	v->a[8236] = 1;
	v->a[8237] = sym_pipeline;
	v->a[8238] = state(1429);
	v->a[8239] = 1;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = aux_sym_redirected_statement_repeat2;
	v->a[8241] = state(2271);
	v->a[8242] = 1;
	v->a[8243] = sym__statement_not_pipeline;
	v->a[8244] = state(2325);
	v->a[8245] = 1;
	v->a[8246] = sym__statements;
	v->a[8247] = actions(11);
	v->a[8248] = 2;
	v->a[8249] = anon_sym_while;
	v->a[8250] = anon_sym_until;
	v->a[8251] = actions(57);
	v->a[8252] = 2;
	v->a[8253] = anon_sym_LT_AMP_DASH;
	v->a[8254] = anon_sym_GT_AMP_DASH;
	v->a[8255] = actions(65);
	v->a[8256] = 2;
	v->a[8257] = sym_raw_string;
	v->a[8258] = sym_number;
	v->a[8259] = state(394);
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = 5;
	v->a[8261] = sym_arithmetic_expansion;
	v->a[8262] = sym_string;
	v->a[8263] = sym_simple_expansion;
	v->a[8264] = sym_expansion;
	v->a[8265] = sym_command_substitution;
	v->a[8266] = actions(55);
	v->a[8267] = 8;
	v->a[8268] = anon_sym_LT;
	v->a[8269] = anon_sym_GT;
	v->a[8270] = anon_sym_GT_GT;
	v->a[8271] = anon_sym_AMP_GT;
	v->a[8272] = anon_sym_AMP_GT_GT;
	v->a[8273] = anon_sym_LT_AMP;
	v->a[8274] = anon_sym_GT_AMP;
	v->a[8275] = anon_sym_GT_PIPE;
	v->a[8276] = state(1211);
	v->a[8277] = 12;
	v->a[8278] = sym_redirected_statement;
	v->a[8279] = sym_for_statement;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = sym_while_statement;
	v->a[8281] = sym_if_statement;
	v->a[8282] = sym_case_statement;
	v->a[8283] = sym_function_definition;
	v->a[8284] = sym_compound_statement;
	v->a[8285] = sym_subshell;
	v->a[8286] = sym_list;
	v->a[8287] = sym_negated_command;
	v->a[8288] = sym_command;
	v->a[8289] = sym__variable_assignments;
	v->a[8290] = 32;
	v->a[8291] = actions(3);
	v->a[8292] = 1;
	v->a[8293] = sym_comment;
	v->a[8294] = actions(9);
	v->a[8295] = 1;
	v->a[8296] = anon_sym_for;
	v->a[8297] = actions(13);
	v->a[8298] = 1;
	v->a[8299] = anon_sym_if;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
