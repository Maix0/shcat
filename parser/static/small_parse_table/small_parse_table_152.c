/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_152.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_760(t_small_parse_table_array *v)
{
	v->a[15200] = state(1071);
	v->a[15201] = 12;
	v->a[15202] = sym_redirected_statement;
	v->a[15203] = sym_for_statement;
	v->a[15204] = sym_while_statement;
	v->a[15205] = sym_if_statement;
	v->a[15206] = sym_case_statement;
	v->a[15207] = sym_function_definition;
	v->a[15208] = sym_compound_statement;
	v->a[15209] = sym_subshell;
	v->a[15210] = sym_list;
	v->a[15211] = sym_negated_command;
	v->a[15212] = sym_command;
	v->a[15213] = sym_variable_assignments;
	v->a[15214] = 34;
	v->a[15215] = actions(3);
	v->a[15216] = 1;
	v->a[15217] = sym_comment;
	v->a[15218] = actions(9);
	v->a[15219] = 1;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = anon_sym_for;
	v->a[15221] = actions(13);
	v->a[15222] = 1;
	v->a[15223] = anon_sym_if;
	v->a[15224] = actions(15);
	v->a[15225] = 1;
	v->a[15226] = anon_sym_case;
	v->a[15227] = actions(17);
	v->a[15228] = 1;
	v->a[15229] = anon_sym_LPAREN;
	v->a[15230] = actions(19);
	v->a[15231] = 1;
	v->a[15232] = anon_sym_LBRACE;
	v->a[15233] = actions(63);
	v->a[15234] = 1;
	v->a[15235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15236] = actions(65);
	v->a[15237] = 1;
	v->a[15238] = anon_sym_DOLLAR;
	v->a[15239] = actions(67);
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = 1;
	v->a[15241] = anon_sym_DQUOTE;
	v->a[15242] = actions(71);
	v->a[15243] = 1;
	v->a[15244] = aux_sym_number_token1;
	v->a[15245] = actions(73);
	v->a[15246] = 1;
	v->a[15247] = aux_sym_number_token2;
	v->a[15248] = actions(75);
	v->a[15249] = 1;
	v->a[15250] = anon_sym_DOLLAR_LBRACE;
	v->a[15251] = actions(77);
	v->a[15252] = 1;
	v->a[15253] = anon_sym_DOLLAR_LPAREN;
	v->a[15254] = actions(79);
	v->a[15255] = 1;
	v->a[15256] = anon_sym_BQUOTE;
	v->a[15257] = actions(248);
	v->a[15258] = 1;
	v->a[15259] = sym_word;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = actions(250);
	v->a[15261] = 1;
	v->a[15262] = anon_sym_BANG;
	v->a[15263] = actions(256);
	v->a[15264] = 1;
	v->a[15265] = sym_raw_string;
	v->a[15266] = actions(258);
	v->a[15267] = 1;
	v->a[15268] = sym_file_descriptor;
	v->a[15269] = actions(260);
	v->a[15270] = 1;
	v->a[15271] = sym_variable_name;
	v->a[15272] = state(141);
	v->a[15273] = 1;
	v->a[15274] = aux_sym__statements_repeat1;
	v->a[15275] = state(175);
	v->a[15276] = 1;
	v->a[15277] = sym_command_name;
	v->a[15278] = state(278);
	v->a[15279] = 1;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = sym_variable_assignment;
	v->a[15281] = state(567);
	v->a[15282] = 1;
	v->a[15283] = aux_sym_command_repeat1;
	v->a[15284] = state(582);
	v->a[15285] = 1;
	v->a[15286] = sym_concatenation;
	v->a[15287] = state(718);
	v->a[15288] = 1;
	v->a[15289] = sym_file_redirect;
	v->a[15290] = state(1100);
	v->a[15291] = 1;
	v->a[15292] = sym_pipeline;
	v->a[15293] = state(1196);
	v->a[15294] = 1;
	v->a[15295] = aux_sym_redirected_statement_repeat2;
	v->a[15296] = state(2037);
	v->a[15297] = 1;
	v->a[15298] = sym__statement_not_pipeline;
	v->a[15299] = state(2246);
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
