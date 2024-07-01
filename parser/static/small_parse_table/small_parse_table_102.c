/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_102.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_510(t_small_parse_table_array *v)
{
	v->a[10200] = 1;
	v->a[10201] = anon_sym_LBRACE;
	v->a[10202] = actions(55);
	v->a[10203] = 1;
	v->a[10204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10205] = actions(57);
	v->a[10206] = 1;
	v->a[10207] = anon_sym_DOLLAR;
	v->a[10208] = actions(59);
	v->a[10209] = 1;
	v->a[10210] = anon_sym_DQUOTE;
	v->a[10211] = actions(63);
	v->a[10212] = 1;
	v->a[10213] = anon_sym_DOLLAR_LBRACE;
	v->a[10214] = actions(65);
	v->a[10215] = 1;
	v->a[10216] = anon_sym_DOLLAR_LPAREN;
	v->a[10217] = actions(67);
	v->a[10218] = 1;
	v->a[10219] = anon_sym_BQUOTE;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = actions(211);
	v->a[10221] = 1;
	v->a[10222] = sym_word;
	v->a[10223] = actions(213);
	v->a[10224] = 1;
	v->a[10225] = anon_sym_BANG;
	v->a[10226] = actions(219);
	v->a[10227] = 1;
	v->a[10228] = sym_file_descriptor;
	v->a[10229] = actions(221);
	v->a[10230] = 1;
	v->a[10231] = sym_variable_name;
	v->a[10232] = state(125);
	v->a[10233] = 1;
	v->a[10234] = aux_sym__statements_repeat1;
	v->a[10235] = state(173);
	v->a[10236] = 1;
	v->a[10237] = sym_command_name;
	v->a[10238] = state(224);
	v->a[10239] = 1;
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = sym_variable_assignment;
	v->a[10241] = state(603);
	v->a[10242] = 1;
	v->a[10243] = sym_concatenation;
	v->a[10244] = state(673);
	v->a[10245] = 1;
	v->a[10246] = aux_sym_command_repeat1;
	v->a[10247] = state(694);
	v->a[10248] = 1;
	v->a[10249] = sym_file_redirect;
	v->a[10250] = state(1020);
	v->a[10251] = 1;
	v->a[10252] = sym_pipeline;
	v->a[10253] = state(1136);
	v->a[10254] = 1;
	v->a[10255] = aux_sym_redirected_statement_repeat2;
	v->a[10256] = state(1898);
	v->a[10257] = 1;
	v->a[10258] = sym__statement_not_pipeline;
	v->a[10259] = state(2035);
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = 1;
	v->a[10261] = sym__statements;
	v->a[10262] = actions(11);
	v->a[10263] = 2;
	v->a[10264] = anon_sym_while;
	v->a[10265] = anon_sym_until;
	v->a[10266] = actions(217);
	v->a[10267] = 2;
	v->a[10268] = sym_raw_string;
	v->a[10269] = sym_number;
	v->a[10270] = state(362);
	v->a[10271] = 5;
	v->a[10272] = sym_arithmetic_expansion;
	v->a[10273] = sym_string;
	v->a[10274] = sym_simple_expansion;
	v->a[10275] = sym_expansion;
	v->a[10276] = sym_command_substitution;
	v->a[10277] = actions(215);
	v->a[10278] = 7;
	v->a[10279] = anon_sym_LT;
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = anon_sym_GT;
	v->a[10281] = anon_sym_GT_GT;
	v->a[10282] = anon_sym_LT_AMP;
	v->a[10283] = anon_sym_GT_AMP;
	v->a[10284] = anon_sym_GT_PIPE;
	v->a[10285] = anon_sym_LT_GT;
	v->a[10286] = state(1003);
	v->a[10287] = 12;
	v->a[10288] = sym_redirected_statement;
	v->a[10289] = sym_for_statement;
	v->a[10290] = sym_while_statement;
	v->a[10291] = sym_if_statement;
	v->a[10292] = sym_case_statement;
	v->a[10293] = sym_function_definition;
	v->a[10294] = sym_compound_statement;
	v->a[10295] = sym_subshell;
	v->a[10296] = sym_list;
	v->a[10297] = sym_negated_command;
	v->a[10298] = sym_command;
	v->a[10299] = sym__variable_assignments;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
