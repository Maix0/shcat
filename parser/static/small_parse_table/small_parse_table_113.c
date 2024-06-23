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
	v->a[11300] = anon_sym_until;
	v->a[11301] = actions(226);
	v->a[11302] = 2;
	v->a[11303] = anon_sym_LT_AMP_DASH;
	v->a[11304] = anon_sym_GT_AMP_DASH;
	v->a[11305] = actions(228);
	v->a[11306] = 2;
	v->a[11307] = sym_raw_string;
	v->a[11308] = sym_number;
	v->a[11309] = state(294);
	v->a[11310] = 5;
	v->a[11311] = sym_arithmetic_expansion;
	v->a[11312] = sym_string;
	v->a[11313] = sym_simple_expansion;
	v->a[11314] = sym_expansion;
	v->a[11315] = sym_command_substitution;
	v->a[11316] = actions(224);
	v->a[11317] = 8;
	v->a[11318] = anon_sym_LT;
	v->a[11319] = anon_sym_GT;
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = anon_sym_GT_GT;
	v->a[11321] = anon_sym_AMP_GT;
	v->a[11322] = anon_sym_AMP_GT_GT;
	v->a[11323] = anon_sym_LT_AMP;
	v->a[11324] = anon_sym_GT_AMP;
	v->a[11325] = anon_sym_GT_PIPE;
	v->a[11326] = state(1188);
	v->a[11327] = 12;
	v->a[11328] = sym_redirected_statement;
	v->a[11329] = sym_for_statement;
	v->a[11330] = sym_while_statement;
	v->a[11331] = sym_if_statement;
	v->a[11332] = sym_case_statement;
	v->a[11333] = sym_function_definition;
	v->a[11334] = sym_compound_statement;
	v->a[11335] = sym_subshell;
	v->a[11336] = sym_list;
	v->a[11337] = sym_negated_command;
	v->a[11338] = sym_command;
	v->a[11339] = sym__variable_assignments;
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = 32;
	v->a[11341] = actions(3);
	v->a[11342] = 1;
	v->a[11343] = sym_comment;
	v->a[11344] = actions(9);
	v->a[11345] = 1;
	v->a[11346] = anon_sym_for;
	v->a[11347] = actions(13);
	v->a[11348] = 1;
	v->a[11349] = anon_sym_if;
	v->a[11350] = actions(15);
	v->a[11351] = 1;
	v->a[11352] = anon_sym_case;
	v->a[11353] = actions(17);
	v->a[11354] = 1;
	v->a[11355] = anon_sym_LPAREN;
	v->a[11356] = actions(19);
	v->a[11357] = 1;
	v->a[11358] = anon_sym_LBRACE;
	v->a[11359] = actions(59);
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = 1;
	v->a[11361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11362] = actions(61);
	v->a[11363] = 1;
	v->a[11364] = anon_sym_DOLLAR;
	v->a[11365] = actions(63);
	v->a[11366] = 1;
	v->a[11367] = anon_sym_DQUOTE;
	v->a[11368] = actions(67);
	v->a[11369] = 1;
	v->a[11370] = anon_sym_DOLLAR_LBRACE;
	v->a[11371] = actions(69);
	v->a[11372] = 1;
	v->a[11373] = anon_sym_DOLLAR_LPAREN;
	v->a[11374] = actions(71);
	v->a[11375] = 1;
	v->a[11376] = anon_sym_BQUOTE;
	v->a[11377] = actions(73);
	v->a[11378] = 1;
	v->a[11379] = sym_file_descriptor;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = actions(75);
	v->a[11381] = 1;
	v->a[11382] = sym_variable_name;
	v->a[11383] = actions(236);
	v->a[11384] = 1;
	v->a[11385] = sym_word;
	v->a[11386] = actions(238);
	v->a[11387] = 1;
	v->a[11388] = anon_sym_BANG;
	v->a[11389] = state(140);
	v->a[11390] = 1;
	v->a[11391] = aux_sym__statements_repeat1;
	v->a[11392] = state(189);
	v->a[11393] = 1;
	v->a[11394] = sym_command_name;
	v->a[11395] = state(286);
	v->a[11396] = 1;
	v->a[11397] = sym_variable_assignment;
	v->a[11398] = state(647);
	v->a[11399] = 1;
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
