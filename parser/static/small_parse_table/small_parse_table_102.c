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
	v->a[10200] = anon_sym_LT;
	v->a[10201] = anon_sym_GT;
	v->a[10202] = anon_sym_GT_GT;
	v->a[10203] = anon_sym_AMP_GT;
	v->a[10204] = anon_sym_AMP_GT_GT;
	v->a[10205] = anon_sym_LT_AMP;
	v->a[10206] = anon_sym_GT_AMP;
	v->a[10207] = anon_sym_GT_PIPE;
	v->a[10208] = state(1031);
	v->a[10209] = 12;
	v->a[10210] = sym_redirected_statement;
	v->a[10211] = sym_for_statement;
	v->a[10212] = sym_while_statement;
	v->a[10213] = sym_if_statement;
	v->a[10214] = sym_case_statement;
	v->a[10215] = sym_function_definition;
	v->a[10216] = sym_compound_statement;
	v->a[10217] = sym_subshell;
	v->a[10218] = sym_list;
	v->a[10219] = sym_negated_command;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = sym_command;
	v->a[10221] = sym_variable_assignments;
	v->a[10222] = 34;
	v->a[10223] = actions(3);
	v->a[10224] = 1;
	v->a[10225] = sym_comment;
	v->a[10226] = actions(9);
	v->a[10227] = 1;
	v->a[10228] = anon_sym_for;
	v->a[10229] = actions(13);
	v->a[10230] = 1;
	v->a[10231] = anon_sym_if;
	v->a[10232] = actions(15);
	v->a[10233] = 1;
	v->a[10234] = anon_sym_case;
	v->a[10235] = actions(17);
	v->a[10236] = 1;
	v->a[10237] = anon_sym_LPAREN;
	v->a[10238] = actions(19);
	v->a[10239] = 1;
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = anon_sym_LBRACE;
	v->a[10241] = actions(63);
	v->a[10242] = 1;
	v->a[10243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10244] = actions(65);
	v->a[10245] = 1;
	v->a[10246] = anon_sym_DOLLAR;
	v->a[10247] = actions(67);
	v->a[10248] = 1;
	v->a[10249] = anon_sym_DQUOTE;
	v->a[10250] = actions(71);
	v->a[10251] = 1;
	v->a[10252] = aux_sym_number_token1;
	v->a[10253] = actions(73);
	v->a[10254] = 1;
	v->a[10255] = aux_sym_number_token2;
	v->a[10256] = actions(75);
	v->a[10257] = 1;
	v->a[10258] = anon_sym_DOLLAR_LBRACE;
	v->a[10259] = actions(77);
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = 1;
	v->a[10261] = anon_sym_DOLLAR_LPAREN;
	v->a[10262] = actions(79);
	v->a[10263] = 1;
	v->a[10264] = anon_sym_BQUOTE;
	v->a[10265] = actions(248);
	v->a[10266] = 1;
	v->a[10267] = sym_word;
	v->a[10268] = actions(250);
	v->a[10269] = 1;
	v->a[10270] = anon_sym_BANG;
	v->a[10271] = actions(256);
	v->a[10272] = 1;
	v->a[10273] = sym_raw_string;
	v->a[10274] = actions(258);
	v->a[10275] = 1;
	v->a[10276] = sym_file_descriptor;
	v->a[10277] = actions(260);
	v->a[10278] = 1;
	v->a[10279] = sym_variable_name;
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = state(141);
	v->a[10281] = 1;
	v->a[10282] = aux_sym__statements_repeat1;
	v->a[10283] = state(175);
	v->a[10284] = 1;
	v->a[10285] = sym_command_name;
	v->a[10286] = state(278);
	v->a[10287] = 1;
	v->a[10288] = sym_variable_assignment;
	v->a[10289] = state(567);
	v->a[10290] = 1;
	v->a[10291] = aux_sym_command_repeat1;
	v->a[10292] = state(582);
	v->a[10293] = 1;
	v->a[10294] = sym_concatenation;
	v->a[10295] = state(705);
	v->a[10296] = 1;
	v->a[10297] = sym_file_redirect;
	v->a[10298] = state(1100);
	v->a[10299] = 1;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
