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
	v->a[8200] = sym_variable_name;
	v->a[8201] = actions(240);
	v->a[8202] = 1;
	v->a[8203] = sym_word;
	v->a[8204] = actions(242);
	v->a[8205] = 1;
	v->a[8206] = anon_sym_BANG;
	v->a[8207] = state(136);
	v->a[8208] = 1;
	v->a[8209] = aux_sym__statements_repeat1;
	v->a[8210] = state(188);
	v->a[8211] = 1;
	v->a[8212] = sym_command_name;
	v->a[8213] = state(297);
	v->a[8214] = 1;
	v->a[8215] = sym_variable_assignment;
	v->a[8216] = state(650);
	v->a[8217] = 1;
	v->a[8218] = sym_concatenation;
	v->a[8219] = state(749);
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = 1;
	v->a[8221] = aux_sym_command_repeat1;
	v->a[8222] = state(795);
	v->a[8223] = 1;
	v->a[8224] = sym_file_redirect;
	v->a[8225] = state(1154);
	v->a[8226] = 1;
	v->a[8227] = sym_pipeline;
	v->a[8228] = state(1240);
	v->a[8229] = 1;
	v->a[8230] = aux_sym_redirected_statement_repeat2;
	v->a[8231] = state(2119);
	v->a[8232] = 1;
	v->a[8233] = sym__statement_not_pipeline;
	v->a[8234] = state(2196);
	v->a[8235] = 1;
	v->a[8236] = sym__statements;
	v->a[8237] = actions(11);
	v->a[8238] = 2;
	v->a[8239] = anon_sym_while;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = anon_sym_until;
	v->a[8241] = actions(57);
	v->a[8242] = 2;
	v->a[8243] = anon_sym_LT_AMP_DASH;
	v->a[8244] = anon_sym_GT_AMP_DASH;
	v->a[8245] = actions(65);
	v->a[8246] = 2;
	v->a[8247] = sym_raw_string;
	v->a[8248] = sym_number;
	v->a[8249] = state(443);
	v->a[8250] = 5;
	v->a[8251] = sym_arithmetic_expansion;
	v->a[8252] = sym_string;
	v->a[8253] = sym_simple_expansion;
	v->a[8254] = sym_expansion;
	v->a[8255] = sym_command_substitution;
	v->a[8256] = actions(55);
	v->a[8257] = 6;
	v->a[8258] = anon_sym_LT;
	v->a[8259] = anon_sym_GT;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = anon_sym_GT_GT;
	v->a[8261] = anon_sym_LT_AMP;
	v->a[8262] = anon_sym_GT_AMP;
	v->a[8263] = anon_sym_GT_PIPE;
	v->a[8264] = state(1030);
	v->a[8265] = 12;
	v->a[8266] = sym_redirected_statement;
	v->a[8267] = sym_for_statement;
	v->a[8268] = sym_while_statement;
	v->a[8269] = sym_if_statement;
	v->a[8270] = sym_case_statement;
	v->a[8271] = sym_function_definition;
	v->a[8272] = sym_compound_statement;
	v->a[8273] = sym_subshell;
	v->a[8274] = sym_list;
	v->a[8275] = sym_negated_command;
	v->a[8276] = sym_command;
	v->a[8277] = sym__variable_assignments;
	v->a[8278] = 32;
	v->a[8279] = actions(3);
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = 1;
	v->a[8281] = sym_comment;
	v->a[8282] = actions(9);
	v->a[8283] = 1;
	v->a[8284] = anon_sym_for;
	v->a[8285] = actions(13);
	v->a[8286] = 1;
	v->a[8287] = anon_sym_if;
	v->a[8288] = actions(15);
	v->a[8289] = 1;
	v->a[8290] = anon_sym_case;
	v->a[8291] = actions(17);
	v->a[8292] = 1;
	v->a[8293] = anon_sym_LPAREN;
	v->a[8294] = actions(19);
	v->a[8295] = 1;
	v->a[8296] = anon_sym_LBRACE;
	v->a[8297] = actions(59);
	v->a[8298] = 1;
	v->a[8299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
