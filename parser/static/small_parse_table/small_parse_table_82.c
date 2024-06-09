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
	v->a[8201] = anon_sym_BANG;
	v->a[8202] = actions(183);
	v->a[8203] = 1;
	v->a[8204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8205] = actions(186);
	v->a[8206] = 1;
	v->a[8207] = anon_sym_DOLLAR;
	v->a[8208] = actions(189);
	v->a[8209] = 1;
	v->a[8210] = anon_sym_DQUOTE;
	v->a[8211] = actions(192);
	v->a[8212] = 1;
	v->a[8213] = sym_raw_string;
	v->a[8214] = actions(195);
	v->a[8215] = 1;
	v->a[8216] = aux_sym_number_token1;
	v->a[8217] = actions(198);
	v->a[8218] = 1;
	v->a[8219] = aux_sym_number_token2;
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = actions(201);
	v->a[8221] = 1;
	v->a[8222] = anon_sym_DOLLAR_LBRACE;
	v->a[8223] = actions(204);
	v->a[8224] = 1;
	v->a[8225] = anon_sym_DOLLAR_LPAREN;
	v->a[8226] = actions(207);
	v->a[8227] = 1;
	v->a[8228] = anon_sym_BQUOTE;
	v->a[8229] = actions(210);
	v->a[8230] = 1;
	v->a[8231] = sym_file_descriptor;
	v->a[8232] = actions(213);
	v->a[8233] = 1;
	v->a[8234] = sym_variable_name;
	v->a[8235] = state(64);
	v->a[8236] = 1;
	v->a[8237] = aux_sym__terminated_statement;
	v->a[8238] = state(190);
	v->a[8239] = 1;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = sym_command_name;
	v->a[8241] = state(285);
	v->a[8242] = 1;
	v->a[8243] = sym_variable_assignment;
	v->a[8244] = state(582);
	v->a[8245] = 1;
	v->a[8246] = sym_concatenation;
	v->a[8247] = state(587);
	v->a[8248] = 1;
	v->a[8249] = aux_sym_command_repeat1;
	v->a[8250] = state(718);
	v->a[8251] = 1;
	v->a[8252] = sym_file_redirect;
	v->a[8253] = state(1213);
	v->a[8254] = 1;
	v->a[8255] = aux_sym_redirected_statement_repeat2;
	v->a[8256] = state(1217);
	v->a[8257] = 1;
	v->a[8258] = sym_pipeline;
	v->a[8259] = state(2035);
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = 1;
	v->a[8261] = sym__statement_not_pipeline;
	v->a[8262] = actions(157);
	v->a[8263] = 2;
	v->a[8264] = anon_sym_while;
	v->a[8265] = anon_sym_until;
	v->a[8266] = actions(180);
	v->a[8267] = 2;
	v->a[8268] = anon_sym_LT_AMP_DASH;
	v->a[8269] = anon_sym_GT_AMP_DASH;
	v->a[8270] = state(397);
	v->a[8271] = 6;
	v->a[8272] = sym_arithmetic_expansion;
	v->a[8273] = sym_string;
	v->a[8274] = sym_number;
	v->a[8275] = sym_simple_expansion;
	v->a[8276] = sym_expansion;
	v->a[8277] = sym_command_substitution;
	v->a[8278] = actions(177);
	v->a[8279] = 8;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = anon_sym_LT;
	v->a[8281] = anon_sym_GT;
	v->a[8282] = anon_sym_GT_GT;
	v->a[8283] = anon_sym_AMP_GT;
	v->a[8284] = anon_sym_AMP_GT_GT;
	v->a[8285] = anon_sym_LT_AMP;
	v->a[8286] = anon_sym_GT_AMP;
	v->a[8287] = anon_sym_GT_PIPE;
	v->a[8288] = state(1121);
	v->a[8289] = 12;
	v->a[8290] = sym_redirected_statement;
	v->a[8291] = sym_for_statement;
	v->a[8292] = sym_while_statement;
	v->a[8293] = sym_if_statement;
	v->a[8294] = sym_case_statement;
	v->a[8295] = sym_function_definition;
	v->a[8296] = sym_compound_statement;
	v->a[8297] = sym_subshell;
	v->a[8298] = sym_list;
	v->a[8299] = sym_negated_command;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
