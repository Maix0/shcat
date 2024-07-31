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
	v->a[8200] = anon_sym_LT_AMP;
	v->a[8201] = anon_sym_GT_AMP;
	v->a[8202] = anon_sym_GT_PIPE;
	v->a[8203] = anon_sym_LT_GT;
	v->a[8204] = state(849);
	v->a[8205] = 12;
	v->a[8206] = sym_redirected_statement;
	v->a[8207] = sym_for_statement;
	v->a[8208] = sym_while_statement;
	v->a[8209] = sym_if_statement;
	v->a[8210] = sym_case_statement;
	v->a[8211] = sym_function_definition;
	v->a[8212] = sym_compound_statement;
	v->a[8213] = sym_subshell;
	v->a[8214] = sym_list;
	v->a[8215] = sym_negated_command;
	v->a[8216] = sym_command;
	v->a[8217] = sym__variable_assignments;
	v->a[8218] = 30;
	v->a[8219] = actions(3);
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = 1;
	v->a[8221] = sym_comment;
	v->a[8222] = actions(9);
	v->a[8223] = 1;
	v->a[8224] = anon_sym_for;
	v->a[8225] = actions(13);
	v->a[8226] = 1;
	v->a[8227] = anon_sym_if;
	v->a[8228] = actions(15);
	v->a[8229] = 1;
	v->a[8230] = anon_sym_case;
	v->a[8231] = actions(17);
	v->a[8232] = 1;
	v->a[8233] = anon_sym_LPAREN;
	v->a[8234] = actions(19);
	v->a[8235] = 1;
	v->a[8236] = anon_sym_LBRACE;
	v->a[8237] = actions(53);
	v->a[8238] = 1;
	v->a[8239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = actions(55);
	v->a[8241] = 1;
	v->a[8242] = anon_sym_DOLLAR;
	v->a[8243] = actions(57);
	v->a[8244] = 1;
	v->a[8245] = anon_sym_DQUOTE;
	v->a[8246] = actions(61);
	v->a[8247] = 1;
	v->a[8248] = anon_sym_DOLLAR_LBRACE;
	v->a[8249] = actions(63);
	v->a[8250] = 1;
	v->a[8251] = anon_sym_DOLLAR_LPAREN;
	v->a[8252] = actions(65);
	v->a[8253] = 1;
	v->a[8254] = anon_sym_BQUOTE;
	v->a[8255] = actions(206);
	v->a[8256] = 1;
	v->a[8257] = sym_word;
	v->a[8258] = actions(208);
	v->a[8259] = 1;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = anon_sym_BANG;
	v->a[8261] = actions(214);
	v->a[8262] = 1;
	v->a[8263] = sym_variable_name;
	v->a[8264] = state(106);
	v->a[8265] = 1;
	v->a[8266] = aux_sym__statements_repeat1;
	v->a[8267] = state(227);
	v->a[8268] = 1;
	v->a[8269] = sym_command_name;
	v->a[8270] = state(277);
	v->a[8271] = 1;
	v->a[8272] = sym_variable_assignment;
	v->a[8273] = state(506);
	v->a[8274] = 1;
	v->a[8275] = aux_sym_command_repeat1;
	v->a[8276] = state(560);
	v->a[8277] = 1;
	v->a[8278] = sym_file_redirect;
	v->a[8279] = state(602);
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = 1;
	v->a[8281] = sym_concatenation;
	v->a[8282] = state(911);
	v->a[8283] = 1;
	v->a[8284] = sym_pipeline;
	v->a[8285] = state(1001);
	v->a[8286] = 1;
	v->a[8287] = aux_sym_redirected_statement_repeat2;
	v->a[8288] = state(1606);
	v->a[8289] = 1;
	v->a[8290] = sym__statement_not_pipeline;
	v->a[8291] = state(1642);
	v->a[8292] = 1;
	v->a[8293] = sym__statements;
	v->a[8294] = actions(11);
	v->a[8295] = 2;
	v->a[8296] = anon_sym_while;
	v->a[8297] = anon_sym_until;
	v->a[8298] = actions(212);
	v->a[8299] = 2;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
