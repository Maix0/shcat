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
	v->a[11300] = state(774);
	v->a[11301] = 1;
	v->a[11302] = sym_file_redirect;
	v->a[11303] = state(1089);
	v->a[11304] = 1;
	v->a[11305] = sym_pipeline;
	v->a[11306] = state(1149);
	v->a[11307] = 1;
	v->a[11308] = aux_sym_redirected_statement_repeat2;
	v->a[11309] = state(1922);
	v->a[11310] = 1;
	v->a[11311] = sym__statement_not_pipeline;
	v->a[11312] = state(2022);
	v->a[11313] = 1;
	v->a[11314] = sym__statements;
	v->a[11315] = actions(11);
	v->a[11316] = 2;
	v->a[11317] = anon_sym_while;
	v->a[11318] = anon_sym_until;
	v->a[11319] = actions(61);
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = 2;
	v->a[11321] = sym_raw_string;
	v->a[11322] = sym_number;
	v->a[11323] = state(455);
	v->a[11324] = 5;
	v->a[11325] = sym_arithmetic_expansion;
	v->a[11326] = sym_string;
	v->a[11327] = sym_simple_expansion;
	v->a[11328] = sym_expansion;
	v->a[11329] = sym_command_substitution;
	v->a[11330] = actions(53);
	v->a[11331] = 7;
	v->a[11332] = anon_sym_LT;
	v->a[11333] = anon_sym_GT;
	v->a[11334] = anon_sym_GT_GT;
	v->a[11335] = anon_sym_LT_AMP;
	v->a[11336] = anon_sym_GT_AMP;
	v->a[11337] = anon_sym_GT_PIPE;
	v->a[11338] = anon_sym_LT_GT;
	v->a[11339] = state(965);
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = 12;
	v->a[11341] = sym_redirected_statement;
	v->a[11342] = sym_for_statement;
	v->a[11343] = sym_while_statement;
	v->a[11344] = sym_if_statement;
	v->a[11345] = sym_case_statement;
	v->a[11346] = sym_function_definition;
	v->a[11347] = sym_compound_statement;
	v->a[11348] = sym_subshell;
	v->a[11349] = sym_list;
	v->a[11350] = sym_negated_command;
	v->a[11351] = sym_command;
	v->a[11352] = sym__variable_assignments;
	v->a[11353] = 31;
	v->a[11354] = actions(3);
	v->a[11355] = 1;
	v->a[11356] = sym_comment;
	v->a[11357] = actions(9);
	v->a[11358] = 1;
	v->a[11359] = anon_sym_for;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = actions(13);
	v->a[11361] = 1;
	v->a[11362] = anon_sym_if;
	v->a[11363] = actions(15);
	v->a[11364] = 1;
	v->a[11365] = anon_sym_case;
	v->a[11366] = actions(17);
	v->a[11367] = 1;
	v->a[11368] = anon_sym_LPAREN;
	v->a[11369] = actions(19);
	v->a[11370] = 1;
	v->a[11371] = anon_sym_LBRACE;
	v->a[11372] = actions(55);
	v->a[11373] = 1;
	v->a[11374] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11375] = actions(57);
	v->a[11376] = 1;
	v->a[11377] = anon_sym_DOLLAR;
	v->a[11378] = actions(59);
	v->a[11379] = 1;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = anon_sym_DQUOTE;
	v->a[11381] = actions(63);
	v->a[11382] = 1;
	v->a[11383] = anon_sym_DOLLAR_LBRACE;
	v->a[11384] = actions(65);
	v->a[11385] = 1;
	v->a[11386] = anon_sym_DOLLAR_LPAREN;
	v->a[11387] = actions(67);
	v->a[11388] = 1;
	v->a[11389] = anon_sym_BQUOTE;
	v->a[11390] = actions(211);
	v->a[11391] = 1;
	v->a[11392] = sym_word;
	v->a[11393] = actions(213);
	v->a[11394] = 1;
	v->a[11395] = anon_sym_BANG;
	v->a[11396] = actions(219);
	v->a[11397] = 1;
	v->a[11398] = sym_file_descriptor;
	v->a[11399] = actions(221);
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
