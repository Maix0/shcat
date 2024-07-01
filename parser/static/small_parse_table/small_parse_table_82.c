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
	v->a[8200] = anon_sym_for;
	v->a[8201] = actions(13);
	v->a[8202] = 1;
	v->a[8203] = anon_sym_if;
	v->a[8204] = actions(15);
	v->a[8205] = 1;
	v->a[8206] = anon_sym_case;
	v->a[8207] = actions(17);
	v->a[8208] = 1;
	v->a[8209] = anon_sym_LPAREN;
	v->a[8210] = actions(19);
	v->a[8211] = 1;
	v->a[8212] = anon_sym_LBRACE;
	v->a[8213] = actions(43);
	v->a[8214] = 1;
	v->a[8215] = sym_word;
	v->a[8216] = actions(51);
	v->a[8217] = 1;
	v->a[8218] = anon_sym_BANG;
	v->a[8219] = actions(55);
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = 1;
	v->a[8221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8222] = actions(57);
	v->a[8223] = 1;
	v->a[8224] = anon_sym_DOLLAR;
	v->a[8225] = actions(59);
	v->a[8226] = 1;
	v->a[8227] = anon_sym_DQUOTE;
	v->a[8228] = actions(63);
	v->a[8229] = 1;
	v->a[8230] = anon_sym_DOLLAR_LBRACE;
	v->a[8231] = actions(65);
	v->a[8232] = 1;
	v->a[8233] = anon_sym_DOLLAR_LPAREN;
	v->a[8234] = actions(67);
	v->a[8235] = 1;
	v->a[8236] = anon_sym_BQUOTE;
	v->a[8237] = actions(69);
	v->a[8238] = 1;
	v->a[8239] = sym_file_descriptor;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = actions(71);
	v->a[8241] = 1;
	v->a[8242] = sym_variable_name;
	v->a[8243] = actions(245);
	v->a[8244] = 1;
	v->a[8245] = anon_sym_then;
	v->a[8246] = state(36);
	v->a[8247] = 1;
	v->a[8248] = aux_sym__terminated_statement;
	v->a[8249] = state(183);
	v->a[8250] = 1;
	v->a[8251] = sym_command_name;
	v->a[8252] = state(341);
	v->a[8253] = 1;
	v->a[8254] = sym_variable_assignment;
	v->a[8255] = state(603);
	v->a[8256] = 1;
	v->a[8257] = sym_concatenation;
	v->a[8258] = state(639);
	v->a[8259] = 1;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = aux_sym_command_repeat1;
	v->a[8261] = state(644);
	v->a[8262] = 1;
	v->a[8263] = sym_file_redirect;
	v->a[8264] = state(1122);
	v->a[8265] = 1;
	v->a[8266] = sym_pipeline;
	v->a[8267] = state(1196);
	v->a[8268] = 1;
	v->a[8269] = aux_sym_redirected_statement_repeat2;
	v->a[8270] = state(1910);
	v->a[8271] = 1;
	v->a[8272] = sym__statement_not_pipeline;
	v->a[8273] = actions(11);
	v->a[8274] = 2;
	v->a[8275] = anon_sym_while;
	v->a[8276] = anon_sym_until;
	v->a[8277] = actions(61);
	v->a[8278] = 2;
	v->a[8279] = sym_raw_string;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = sym_number;
	v->a[8281] = state(436);
	v->a[8282] = 5;
	v->a[8283] = sym_arithmetic_expansion;
	v->a[8284] = sym_string;
	v->a[8285] = sym_simple_expansion;
	v->a[8286] = sym_expansion;
	v->a[8287] = sym_command_substitution;
	v->a[8288] = actions(53);
	v->a[8289] = 7;
	v->a[8290] = anon_sym_LT;
	v->a[8291] = anon_sym_GT;
	v->a[8292] = anon_sym_GT_GT;
	v->a[8293] = anon_sym_LT_AMP;
	v->a[8294] = anon_sym_GT_AMP;
	v->a[8295] = anon_sym_GT_PIPE;
	v->a[8296] = anon_sym_LT_GT;
	v->a[8297] = state(1021);
	v->a[8298] = 12;
	v->a[8299] = sym_redirected_statement;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
