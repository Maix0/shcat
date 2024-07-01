/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_123.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_615(t_small_parse_table_array *v)
{
	v->a[12300] = 1;
	v->a[12301] = anon_sym_case;
	v->a[12302] = actions(17);
	v->a[12303] = 1;
	v->a[12304] = anon_sym_LPAREN;
	v->a[12305] = actions(19);
	v->a[12306] = 1;
	v->a[12307] = anon_sym_LBRACE;
	v->a[12308] = actions(43);
	v->a[12309] = 1;
	v->a[12310] = sym_word;
	v->a[12311] = actions(51);
	v->a[12312] = 1;
	v->a[12313] = anon_sym_BANG;
	v->a[12314] = actions(55);
	v->a[12315] = 1;
	v->a[12316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12317] = actions(57);
	v->a[12318] = 1;
	v->a[12319] = anon_sym_DOLLAR;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = actions(59);
	v->a[12321] = 1;
	v->a[12322] = anon_sym_DQUOTE;
	v->a[12323] = actions(63);
	v->a[12324] = 1;
	v->a[12325] = anon_sym_DOLLAR_LBRACE;
	v->a[12326] = actions(65);
	v->a[12327] = 1;
	v->a[12328] = anon_sym_DOLLAR_LPAREN;
	v->a[12329] = actions(67);
	v->a[12330] = 1;
	v->a[12331] = anon_sym_BQUOTE;
	v->a[12332] = actions(69);
	v->a[12333] = 1;
	v->a[12334] = sym_file_descriptor;
	v->a[12335] = actions(71);
	v->a[12336] = 1;
	v->a[12337] = sym_variable_name;
	v->a[12338] = actions(251);
	v->a[12339] = 1;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = anon_sym_done;
	v->a[12341] = state(43);
	v->a[12342] = 1;
	v->a[12343] = aux_sym__terminated_statement;
	v->a[12344] = state(183);
	v->a[12345] = 1;
	v->a[12346] = sym_command_name;
	v->a[12347] = state(341);
	v->a[12348] = 1;
	v->a[12349] = sym_variable_assignment;
	v->a[12350] = state(603);
	v->a[12351] = 1;
	v->a[12352] = sym_concatenation;
	v->a[12353] = state(639);
	v->a[12354] = 1;
	v->a[12355] = aux_sym_command_repeat1;
	v->a[12356] = state(644);
	v->a[12357] = 1;
	v->a[12358] = sym_file_redirect;
	v->a[12359] = state(1122);
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = 1;
	v->a[12361] = sym_pipeline;
	v->a[12362] = state(1196);
	v->a[12363] = 1;
	v->a[12364] = aux_sym_redirected_statement_repeat2;
	v->a[12365] = state(1910);
	v->a[12366] = 1;
	v->a[12367] = sym__statement_not_pipeline;
	v->a[12368] = actions(11);
	v->a[12369] = 2;
	v->a[12370] = anon_sym_while;
	v->a[12371] = anon_sym_until;
	v->a[12372] = actions(61);
	v->a[12373] = 2;
	v->a[12374] = sym_raw_string;
	v->a[12375] = sym_number;
	v->a[12376] = state(436);
	v->a[12377] = 5;
	v->a[12378] = sym_arithmetic_expansion;
	v->a[12379] = sym_string;
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = sym_simple_expansion;
	v->a[12381] = sym_expansion;
	v->a[12382] = sym_command_substitution;
	v->a[12383] = actions(53);
	v->a[12384] = 7;
	v->a[12385] = anon_sym_LT;
	v->a[12386] = anon_sym_GT;
	v->a[12387] = anon_sym_GT_GT;
	v->a[12388] = anon_sym_LT_AMP;
	v->a[12389] = anon_sym_GT_AMP;
	v->a[12390] = anon_sym_GT_PIPE;
	v->a[12391] = anon_sym_LT_GT;
	v->a[12392] = state(1021);
	v->a[12393] = 12;
	v->a[12394] = sym_redirected_statement;
	v->a[12395] = sym_for_statement;
	v->a[12396] = sym_while_statement;
	v->a[12397] = sym_if_statement;
	v->a[12398] = sym_case_statement;
	v->a[12399] = sym_function_definition;
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
