/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_113.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_565(t_small_parse_table_array *v)
{
	v->a[11300] = 1;
	v->a[11301] = sym_file_redirect;
	v->a[11302] = state(555);
	v->a[11303] = 1;
	v->a[11304] = sym_concatenation;
	v->a[11305] = state(1059);
	v->a[11306] = 1;
	v->a[11307] = sym_pipeline;
	v->a[11308] = state(1126);
	v->a[11309] = 1;
	v->a[11310] = aux_sym_redirected_statement_repeat2;
	v->a[11311] = state(1561);
	v->a[11312] = 1;
	v->a[11313] = sym__statement_not_pipeline;
	v->a[11314] = actions(11);
	v->a[11315] = 2;
	v->a[11316] = anon_sym_while;
	v->a[11317] = anon_sym_until;
	v->a[11318] = actions(59);
	v->a[11319] = 2;
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = sym_raw_string;
	v->a[11321] = sym_number;
	v->a[11322] = actions(51);
	v->a[11323] = 3;
	v->a[11324] = anon_sym_LT;
	v->a[11325] = anon_sym_GT;
	v->a[11326] = anon_sym_GT_GT;
	v->a[11327] = state(401);
	v->a[11328] = 5;
	v->a[11329] = sym_arithmetic_expansion;
	v->a[11330] = sym_string;
	v->a[11331] = sym_simple_expansion;
	v->a[11332] = sym_expansion;
	v->a[11333] = sym_command_substitution;
	v->a[11334] = state(949);
	v->a[11335] = 12;
	v->a[11336] = sym_redirected_statement;
	v->a[11337] = sym_for_statement;
	v->a[11338] = sym_while_statement;
	v->a[11339] = sym_if_statement;
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = sym_case_statement;
	v->a[11341] = sym_function_definition;
	v->a[11342] = sym_compound_statement;
	v->a[11343] = sym_subshell;
	v->a[11344] = sym_list;
	v->a[11345] = sym_negated_command;
	v->a[11346] = sym_command;
	v->a[11347] = sym__variable_assignments;
	v->a[11348] = 30;
	v->a[11349] = actions(3);
	v->a[11350] = 1;
	v->a[11351] = sym_comment;
	v->a[11352] = actions(123);
	v->a[11353] = 1;
	v->a[11354] = sym_word;
	v->a[11355] = actions(126);
	v->a[11356] = 1;
	v->a[11357] = anon_sym_for;
	v->a[11358] = actions(132);
	v->a[11359] = 1;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = anon_sym_if;
	v->a[11361] = actions(135);
	v->a[11362] = 1;
	v->a[11363] = anon_sym_do;
	v->a[11364] = actions(137);
	v->a[11365] = 1;
	v->a[11366] = anon_sym_case;
	v->a[11367] = actions(140);
	v->a[11368] = 1;
	v->a[11369] = anon_sym_LPAREN;
	v->a[11370] = actions(143);
	v->a[11371] = 1;
	v->a[11372] = anon_sym_LBRACE;
	v->a[11373] = actions(146);
	v->a[11374] = 1;
	v->a[11375] = anon_sym_BANG;
	v->a[11376] = actions(152);
	v->a[11377] = 1;
	v->a[11378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11379] = actions(155);
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = 1;
	v->a[11381] = anon_sym_DOLLAR;
	v->a[11382] = actions(158);
	v->a[11383] = 1;
	v->a[11384] = anon_sym_DQUOTE;
	v->a[11385] = actions(164);
	v->a[11386] = 1;
	v->a[11387] = anon_sym_DOLLAR_LBRACE;
	v->a[11388] = actions(167);
	v->a[11389] = 1;
	v->a[11390] = anon_sym_DOLLAR_LPAREN;
	v->a[11391] = actions(170);
	v->a[11392] = 1;
	v->a[11393] = anon_sym_BQUOTE;
	v->a[11394] = actions(173);
	v->a[11395] = 1;
	v->a[11396] = sym_variable_name;
	v->a[11397] = state(103);
	v->a[11398] = 1;
	v->a[11399] = aux_sym__terminated_statement;
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
