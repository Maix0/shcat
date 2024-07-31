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
	v->a[11300] = actions(9);
	v->a[11301] = 1;
	v->a[11302] = anon_sym_for;
	v->a[11303] = actions(13);
	v->a[11304] = 1;
	v->a[11305] = anon_sym_if;
	v->a[11306] = actions(15);
	v->a[11307] = 1;
	v->a[11308] = anon_sym_case;
	v->a[11309] = actions(17);
	v->a[11310] = 1;
	v->a[11311] = anon_sym_LPAREN;
	v->a[11312] = actions(19);
	v->a[11313] = 1;
	v->a[11314] = anon_sym_LBRACE;
	v->a[11315] = actions(53);
	v->a[11316] = 1;
	v->a[11317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11318] = actions(55);
	v->a[11319] = 1;
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = anon_sym_DOLLAR;
	v->a[11321] = actions(57);
	v->a[11322] = 1;
	v->a[11323] = anon_sym_DQUOTE;
	v->a[11324] = actions(61);
	v->a[11325] = 1;
	v->a[11326] = anon_sym_DOLLAR_LBRACE;
	v->a[11327] = actions(63);
	v->a[11328] = 1;
	v->a[11329] = anon_sym_DOLLAR_LPAREN;
	v->a[11330] = actions(65);
	v->a[11331] = 1;
	v->a[11332] = anon_sym_BQUOTE;
	v->a[11333] = actions(67);
	v->a[11334] = 1;
	v->a[11335] = sym_variable_name;
	v->a[11336] = actions(202);
	v->a[11337] = 1;
	v->a[11338] = sym_word;
	v->a[11339] = actions(204);
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = 1;
	v->a[11341] = anon_sym_BANG;
	v->a[11342] = state(119);
	v->a[11343] = 1;
	v->a[11344] = aux_sym__statements_repeat1;
	v->a[11345] = state(272);
	v->a[11346] = 1;
	v->a[11347] = sym_command_name;
	v->a[11348] = state(283);
	v->a[11349] = 1;
	v->a[11350] = sym_variable_assignment;
	v->a[11351] = state(486);
	v->a[11352] = 1;
	v->a[11353] = aux_sym_command_repeat1;
	v->a[11354] = state(602);
	v->a[11355] = 1;
	v->a[11356] = sym_concatenation;
	v->a[11357] = state(636);
	v->a[11358] = 1;
	v->a[11359] = sym_file_redirect;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = state(951);
	v->a[11361] = 1;
	v->a[11362] = sym_pipeline;
	v->a[11363] = state(1006);
	v->a[11364] = 1;
	v->a[11365] = aux_sym_redirected_statement_repeat2;
	v->a[11366] = state(1605);
	v->a[11367] = 1;
	v->a[11368] = sym__statement_not_pipeline;
	v->a[11369] = state(1775);
	v->a[11370] = 1;
	v->a[11371] = sym__statements;
	v->a[11372] = actions(11);
	v->a[11373] = 2;
	v->a[11374] = anon_sym_while;
	v->a[11375] = anon_sym_until;
	v->a[11376] = actions(59);
	v->a[11377] = 2;
	v->a[11378] = sym_raw_string;
	v->a[11379] = sym_number;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = state(425);
	v->a[11381] = 5;
	v->a[11382] = sym_arithmetic_expansion;
	v->a[11383] = sym_string;
	v->a[11384] = sym_simple_expansion;
	v->a[11385] = sym_expansion;
	v->a[11386] = sym_command_substitution;
	v->a[11387] = actions(51);
	v->a[11388] = 7;
	v->a[11389] = anon_sym_LT;
	v->a[11390] = anon_sym_GT;
	v->a[11391] = anon_sym_GT_GT;
	v->a[11392] = anon_sym_LT_AMP;
	v->a[11393] = anon_sym_GT_AMP;
	v->a[11394] = anon_sym_GT_PIPE;
	v->a[11395] = anon_sym_LT_GT;
	v->a[11396] = state(849);
	v->a[11397] = 12;
	v->a[11398] = sym_redirected_statement;
	v->a[11399] = sym_for_statement;
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
