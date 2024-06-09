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
	v->a[11300] = sym_file_descriptor;
	v->a[11301] = actions(260);
	v->a[11302] = 1;
	v->a[11303] = sym_variable_name;
	v->a[11304] = state(141);
	v->a[11305] = 1;
	v->a[11306] = aux_sym__statements_repeat1;
	v->a[11307] = state(175);
	v->a[11308] = 1;
	v->a[11309] = sym_command_name;
	v->a[11310] = state(278);
	v->a[11311] = 1;
	v->a[11312] = sym_variable_assignment;
	v->a[11313] = state(567);
	v->a[11314] = 1;
	v->a[11315] = aux_sym_command_repeat1;
	v->a[11316] = state(582);
	v->a[11317] = 1;
	v->a[11318] = sym_concatenation;
	v->a[11319] = state(697);
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = 1;
	v->a[11321] = sym_file_redirect;
	v->a[11322] = state(1100);
	v->a[11323] = 1;
	v->a[11324] = sym_pipeline;
	v->a[11325] = state(1196);
	v->a[11326] = 1;
	v->a[11327] = aux_sym_redirected_statement_repeat2;
	v->a[11328] = state(2037);
	v->a[11329] = 1;
	v->a[11330] = sym__statement_not_pipeline;
	v->a[11331] = state(2179);
	v->a[11332] = 1;
	v->a[11333] = sym__statements;
	v->a[11334] = actions(11);
	v->a[11335] = 2;
	v->a[11336] = anon_sym_while;
	v->a[11337] = anon_sym_until;
	v->a[11338] = actions(254);
	v->a[11339] = 2;
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = anon_sym_LT_AMP_DASH;
	v->a[11341] = anon_sym_GT_AMP_DASH;
	v->a[11342] = state(295);
	v->a[11343] = 6;
	v->a[11344] = sym_arithmetic_expansion;
	v->a[11345] = sym_string;
	v->a[11346] = sym_number;
	v->a[11347] = sym_simple_expansion;
	v->a[11348] = sym_expansion;
	v->a[11349] = sym_command_substitution;
	v->a[11350] = actions(252);
	v->a[11351] = 8;
	v->a[11352] = anon_sym_LT;
	v->a[11353] = anon_sym_GT;
	v->a[11354] = anon_sym_GT_GT;
	v->a[11355] = anon_sym_AMP_GT;
	v->a[11356] = anon_sym_AMP_GT_GT;
	v->a[11357] = anon_sym_LT_AMP;
	v->a[11358] = anon_sym_GT_AMP;
	v->a[11359] = anon_sym_GT_PIPE;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = state(1031);
	v->a[11361] = 12;
	v->a[11362] = sym_redirected_statement;
	v->a[11363] = sym_for_statement;
	v->a[11364] = sym_while_statement;
	v->a[11365] = sym_if_statement;
	v->a[11366] = sym_case_statement;
	v->a[11367] = sym_function_definition;
	v->a[11368] = sym_compound_statement;
	v->a[11369] = sym_subshell;
	v->a[11370] = sym_list;
	v->a[11371] = sym_negated_command;
	v->a[11372] = sym_command;
	v->a[11373] = sym_variable_assignments;
	v->a[11374] = 34;
	v->a[11375] = actions(3);
	v->a[11376] = 1;
	v->a[11377] = sym_comment;
	v->a[11378] = actions(9);
	v->a[11379] = 1;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = anon_sym_for;
	v->a[11381] = actions(13);
	v->a[11382] = 1;
	v->a[11383] = anon_sym_if;
	v->a[11384] = actions(15);
	v->a[11385] = 1;
	v->a[11386] = anon_sym_case;
	v->a[11387] = actions(17);
	v->a[11388] = 1;
	v->a[11389] = anon_sym_LPAREN;
	v->a[11390] = actions(19);
	v->a[11391] = 1;
	v->a[11392] = anon_sym_LBRACE;
	v->a[11393] = actions(63);
	v->a[11394] = 1;
	v->a[11395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11396] = actions(65);
	v->a[11397] = 1;
	v->a[11398] = anon_sym_DOLLAR;
	v->a[11399] = actions(67);
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
