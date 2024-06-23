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
	v->a[10200] = 2;
	v->a[10201] = anon_sym_while;
	v->a[10202] = anon_sym_until;
	v->a[10203] = actions(57);
	v->a[10204] = 2;
	v->a[10205] = anon_sym_LT_AMP_DASH;
	v->a[10206] = anon_sym_GT_AMP_DASH;
	v->a[10207] = actions(65);
	v->a[10208] = 2;
	v->a[10209] = sym_raw_string;
	v->a[10210] = sym_number;
	v->a[10211] = state(394);
	v->a[10212] = 5;
	v->a[10213] = sym_arithmetic_expansion;
	v->a[10214] = sym_string;
	v->a[10215] = sym_simple_expansion;
	v->a[10216] = sym_expansion;
	v->a[10217] = sym_command_substitution;
	v->a[10218] = actions(55);
	v->a[10219] = 8;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = anon_sym_LT;
	v->a[10221] = anon_sym_GT;
	v->a[10222] = anon_sym_GT_GT;
	v->a[10223] = anon_sym_AMP_GT;
	v->a[10224] = anon_sym_AMP_GT_GT;
	v->a[10225] = anon_sym_LT_AMP;
	v->a[10226] = anon_sym_GT_AMP;
	v->a[10227] = anon_sym_GT_PIPE;
	v->a[10228] = state(1211);
	v->a[10229] = 12;
	v->a[10230] = sym_redirected_statement;
	v->a[10231] = sym_for_statement;
	v->a[10232] = sym_while_statement;
	v->a[10233] = sym_if_statement;
	v->a[10234] = sym_case_statement;
	v->a[10235] = sym_function_definition;
	v->a[10236] = sym_compound_statement;
	v->a[10237] = sym_subshell;
	v->a[10238] = sym_list;
	v->a[10239] = sym_negated_command;
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = sym_command;
	v->a[10241] = sym__variable_assignments;
	v->a[10242] = 32;
	v->a[10243] = actions(3);
	v->a[10244] = 1;
	v->a[10245] = sym_comment;
	v->a[10246] = actions(9);
	v->a[10247] = 1;
	v->a[10248] = anon_sym_for;
	v->a[10249] = actions(13);
	v->a[10250] = 1;
	v->a[10251] = anon_sym_if;
	v->a[10252] = actions(15);
	v->a[10253] = 1;
	v->a[10254] = anon_sym_case;
	v->a[10255] = actions(17);
	v->a[10256] = 1;
	v->a[10257] = anon_sym_LPAREN;
	v->a[10258] = actions(19);
	v->a[10259] = 1;
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = anon_sym_LBRACE;
	v->a[10261] = actions(59);
	v->a[10262] = 1;
	v->a[10263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10264] = actions(61);
	v->a[10265] = 1;
	v->a[10266] = anon_sym_DOLLAR;
	v->a[10267] = actions(63);
	v->a[10268] = 1;
	v->a[10269] = anon_sym_DQUOTE;
	v->a[10270] = actions(67);
	v->a[10271] = 1;
	v->a[10272] = anon_sym_DOLLAR_LBRACE;
	v->a[10273] = actions(69);
	v->a[10274] = 1;
	v->a[10275] = anon_sym_DOLLAR_LPAREN;
	v->a[10276] = actions(71);
	v->a[10277] = 1;
	v->a[10278] = anon_sym_BQUOTE;
	v->a[10279] = actions(220);
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = 1;
	v->a[10281] = sym_word;
	v->a[10282] = actions(222);
	v->a[10283] = 1;
	v->a[10284] = anon_sym_BANG;
	v->a[10285] = actions(230);
	v->a[10286] = 1;
	v->a[10287] = sym_file_descriptor;
	v->a[10288] = actions(232);
	v->a[10289] = 1;
	v->a[10290] = sym_variable_name;
	v->a[10291] = state(126);
	v->a[10292] = 1;
	v->a[10293] = aux_sym__statements_repeat1;
	v->a[10294] = state(184);
	v->a[10295] = 1;
	v->a[10296] = sym_command_name;
	v->a[10297] = state(268);
	v->a[10298] = 1;
	v->a[10299] = sym_variable_assignment;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
