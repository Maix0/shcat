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
	v->a[12300] = sym_raw_string;
	v->a[12301] = sym_number;
	v->a[12302] = state(425);
	v->a[12303] = 5;
	v->a[12304] = sym_arithmetic_expansion;
	v->a[12305] = sym_string;
	v->a[12306] = sym_simple_expansion;
	v->a[12307] = sym_expansion;
	v->a[12308] = sym_command_substitution;
	v->a[12309] = actions(51);
	v->a[12310] = 7;
	v->a[12311] = anon_sym_LT;
	v->a[12312] = anon_sym_GT;
	v->a[12313] = anon_sym_GT_GT;
	v->a[12314] = anon_sym_LT_AMP;
	v->a[12315] = anon_sym_GT_AMP;
	v->a[12316] = anon_sym_GT_PIPE;
	v->a[12317] = anon_sym_LT_GT;
	v->a[12318] = state(956);
	v->a[12319] = 12;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = sym_redirected_statement;
	v->a[12321] = sym_for_statement;
	v->a[12322] = sym_while_statement;
	v->a[12323] = sym_if_statement;
	v->a[12324] = sym_case_statement;
	v->a[12325] = sym_function_definition;
	v->a[12326] = sym_compound_statement;
	v->a[12327] = sym_subshell;
	v->a[12328] = sym_list;
	v->a[12329] = sym_negated_command;
	v->a[12330] = sym_command;
	v->a[12331] = sym__variable_assignments;
	v->a[12332] = 29;
	v->a[12333] = actions(3);
	v->a[12334] = 1;
	v->a[12335] = sym_comment;
	v->a[12336] = actions(9);
	v->a[12337] = 1;
	v->a[12338] = anon_sym_for;
	v->a[12339] = actions(13);
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = 1;
	v->a[12341] = anon_sym_if;
	v->a[12342] = actions(15);
	v->a[12343] = 1;
	v->a[12344] = anon_sym_case;
	v->a[12345] = actions(17);
	v->a[12346] = 1;
	v->a[12347] = anon_sym_LPAREN;
	v->a[12348] = actions(19);
	v->a[12349] = 1;
	v->a[12350] = anon_sym_LBRACE;
	v->a[12351] = actions(41);
	v->a[12352] = 1;
	v->a[12353] = sym_word;
	v->a[12354] = actions(49);
	v->a[12355] = 1;
	v->a[12356] = anon_sym_BANG;
	v->a[12357] = actions(53);
	v->a[12358] = 1;
	v->a[12359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = actions(55);
	v->a[12361] = 1;
	v->a[12362] = anon_sym_DOLLAR;
	v->a[12363] = actions(57);
	v->a[12364] = 1;
	v->a[12365] = anon_sym_DQUOTE;
	v->a[12366] = actions(61);
	v->a[12367] = 1;
	v->a[12368] = anon_sym_DOLLAR_LBRACE;
	v->a[12369] = actions(63);
	v->a[12370] = 1;
	v->a[12371] = anon_sym_DOLLAR_LPAREN;
	v->a[12372] = actions(65);
	v->a[12373] = 1;
	v->a[12374] = anon_sym_BQUOTE;
	v->a[12375] = actions(67);
	v->a[12376] = 1;
	v->a[12377] = sym_variable_name;
	v->a[12378] = state(58);
	v->a[12379] = 1;
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = aux_sym__terminated_statement;
	v->a[12381] = state(271);
	v->a[12382] = 1;
	v->a[12383] = sym_command_name;
	v->a[12384] = state(298);
	v->a[12385] = 1;
	v->a[12386] = sym_variable_assignment;
	v->a[12387] = state(482);
	v->a[12388] = 1;
	v->a[12389] = aux_sym_command_repeat1;
	v->a[12390] = state(600);
	v->a[12391] = 1;
	v->a[12392] = sym_file_redirect;
	v->a[12393] = state(602);
	v->a[12394] = 1;
	v->a[12395] = sym_concatenation;
	v->a[12396] = state(1012);
	v->a[12397] = 1;
	v->a[12398] = sym_pipeline;
	v->a[12399] = state(1068);
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
