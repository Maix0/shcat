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
	v->a[8200] = anon_sym_BANG;
	v->a[8201] = actions(216);
	v->a[8202] = 1;
	v->a[8203] = sym_variable_name;
	v->a[8204] = state(112);
	v->a[8205] = 1;
	v->a[8206] = aux_sym__statements_repeat1;
	v->a[8207] = state(158);
	v->a[8208] = 1;
	v->a[8209] = sym_command_name;
	v->a[8210] = state(186);
	v->a[8211] = 1;
	v->a[8212] = sym_variable_assignment;
	v->a[8213] = state(298);
	v->a[8214] = 1;
	v->a[8215] = aux_sym_command_repeat1;
	v->a[8216] = state(536);
	v->a[8217] = 1;
	v->a[8218] = sym_file_redirect;
	v->a[8219] = state(555);
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = 1;
	v->a[8221] = sym_concatenation;
	v->a[8222] = state(937);
	v->a[8223] = 1;
	v->a[8224] = sym_pipeline;
	v->a[8225] = state(1019);
	v->a[8226] = 1;
	v->a[8227] = aux_sym_redirected_statement_repeat2;
	v->a[8228] = state(1557);
	v->a[8229] = 1;
	v->a[8230] = sym__statement_not_pipeline;
	v->a[8231] = state(1727);
	v->a[8232] = 1;
	v->a[8233] = sym__statements;
	v->a[8234] = actions(11);
	v->a[8235] = 2;
	v->a[8236] = anon_sym_while;
	v->a[8237] = anon_sym_until;
	v->a[8238] = actions(214);
	v->a[8239] = 2;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = sym_raw_string;
	v->a[8241] = sym_number;
	v->a[8242] = actions(212);
	v->a[8243] = 3;
	v->a[8244] = anon_sym_LT;
	v->a[8245] = anon_sym_GT;
	v->a[8246] = anon_sym_GT_GT;
	v->a[8247] = state(277);
	v->a[8248] = 5;
	v->a[8249] = sym_arithmetic_expansion;
	v->a[8250] = sym_string;
	v->a[8251] = sym_simple_expansion;
	v->a[8252] = sym_expansion;
	v->a[8253] = sym_command_substitution;
	v->a[8254] = state(877);
	v->a[8255] = 12;
	v->a[8256] = sym_redirected_statement;
	v->a[8257] = sym_for_statement;
	v->a[8258] = sym_while_statement;
	v->a[8259] = sym_if_statement;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = sym_case_statement;
	v->a[8261] = sym_function_definition;
	v->a[8262] = sym_compound_statement;
	v->a[8263] = sym_subshell;
	v->a[8264] = sym_list;
	v->a[8265] = sym_negated_command;
	v->a[8266] = sym_command;
	v->a[8267] = sym__variable_assignments;
	v->a[8268] = 30;
	v->a[8269] = actions(3);
	v->a[8270] = 1;
	v->a[8271] = sym_comment;
	v->a[8272] = actions(9);
	v->a[8273] = 1;
	v->a[8274] = anon_sym_for;
	v->a[8275] = actions(13);
	v->a[8276] = 1;
	v->a[8277] = anon_sym_if;
	v->a[8278] = actions(15);
	v->a[8279] = 1;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = anon_sym_case;
	v->a[8281] = actions(17);
	v->a[8282] = 1;
	v->a[8283] = anon_sym_LPAREN;
	v->a[8284] = actions(19);
	v->a[8285] = 1;
	v->a[8286] = anon_sym_LBRACE;
	v->a[8287] = actions(53);
	v->a[8288] = 1;
	v->a[8289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8290] = actions(55);
	v->a[8291] = 1;
	v->a[8292] = anon_sym_DOLLAR;
	v->a[8293] = actions(57);
	v->a[8294] = 1;
	v->a[8295] = anon_sym_DQUOTE;
	v->a[8296] = actions(61);
	v->a[8297] = 1;
	v->a[8298] = anon_sym_DOLLAR_LBRACE;
	v->a[8299] = actions(63);
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
