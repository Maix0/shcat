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
	v->a[12300] = anon_sym_GT_AMP;
	v->a[12301] = anon_sym_GT_PIPE;
	v->a[12302] = state(1312);
	v->a[12303] = 12;
	v->a[12304] = sym_redirected_statement;
	v->a[12305] = sym_for_statement;
	v->a[12306] = sym_while_statement;
	v->a[12307] = sym_if_statement;
	v->a[12308] = sym_case_statement;
	v->a[12309] = sym_function_definition;
	v->a[12310] = sym_compound_statement;
	v->a[12311] = sym_subshell;
	v->a[12312] = sym_list;
	v->a[12313] = sym_negated_command;
	v->a[12314] = sym_command;
	v->a[12315] = sym_variable_assignments;
	v->a[12316] = 32;
	v->a[12317] = actions(3);
	v->a[12318] = 1;
	v->a[12319] = sym_comment;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = actions(9);
	v->a[12321] = 1;
	v->a[12322] = anon_sym_for;
	v->a[12323] = actions(13);
	v->a[12324] = 1;
	v->a[12325] = anon_sym_if;
	v->a[12326] = actions(15);
	v->a[12327] = 1;
	v->a[12328] = anon_sym_case;
	v->a[12329] = actions(17);
	v->a[12330] = 1;
	v->a[12331] = anon_sym_LPAREN;
	v->a[12332] = actions(19);
	v->a[12333] = 1;
	v->a[12334] = anon_sym_LBRACE;
	v->a[12335] = actions(45);
	v->a[12336] = 1;
	v->a[12337] = sym_word;
	v->a[12338] = actions(53);
	v->a[12339] = 1;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = anon_sym_BANG;
	v->a[12341] = actions(59);
	v->a[12342] = 1;
	v->a[12343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12344] = actions(61);
	v->a[12345] = 1;
	v->a[12346] = anon_sym_DOLLAR;
	v->a[12347] = actions(63);
	v->a[12348] = 1;
	v->a[12349] = anon_sym_DQUOTE;
	v->a[12350] = actions(67);
	v->a[12351] = 1;
	v->a[12352] = anon_sym_DOLLAR_LBRACE;
	v->a[12353] = actions(69);
	v->a[12354] = 1;
	v->a[12355] = anon_sym_DOLLAR_LPAREN;
	v->a[12356] = actions(71);
	v->a[12357] = 1;
	v->a[12358] = anon_sym_BQUOTE;
	v->a[12359] = actions(73);
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = 1;
	v->a[12361] = sym_file_descriptor;
	v->a[12362] = actions(75);
	v->a[12363] = 1;
	v->a[12364] = sym_variable_name;
	v->a[12365] = actions(262);
	v->a[12366] = 1;
	v->a[12367] = anon_sym_done;
	v->a[12368] = state(100);
	v->a[12369] = 1;
	v->a[12370] = aux_sym__terminated_statement;
	v->a[12371] = state(187);
	v->a[12372] = 1;
	v->a[12373] = sym_command_name;
	v->a[12374] = state(274);
	v->a[12375] = 1;
	v->a[12376] = sym_variable_assignment;
	v->a[12377] = state(647);
	v->a[12378] = 1;
	v->a[12379] = sym_concatenation;
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = state(736);
	v->a[12381] = 1;
	v->a[12382] = aux_sym_command_repeat1;
	v->a[12383] = state(738);
	v->a[12384] = 1;
	v->a[12385] = sym_file_redirect;
	v->a[12386] = state(1439);
	v->a[12387] = 1;
	v->a[12388] = sym_pipeline;
	v->a[12389] = state(1460);
	v->a[12390] = 1;
	v->a[12391] = aux_sym_redirected_statement_repeat2;
	v->a[12392] = state(2269);
	v->a[12393] = 1;
	v->a[12394] = sym__statement_not_pipeline;
	v->a[12395] = actions(11);
	v->a[12396] = 2;
	v->a[12397] = anon_sym_while;
	v->a[12398] = anon_sym_until;
	v->a[12399] = actions(57);
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
