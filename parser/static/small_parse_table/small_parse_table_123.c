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
	v->a[12301] = sym__statement_not_pipeline;
	v->a[12302] = actions(11);
	v->a[12303] = 2;
	v->a[12304] = anon_sym_while;
	v->a[12305] = anon_sym_until;
	v->a[12306] = actions(59);
	v->a[12307] = 2;
	v->a[12308] = sym_raw_string;
	v->a[12309] = sym_number;
	v->a[12310] = actions(51);
	v->a[12311] = 3;
	v->a[12312] = anon_sym_LT;
	v->a[12313] = anon_sym_GT;
	v->a[12314] = anon_sym_GT_GT;
	v->a[12315] = state(401);
	v->a[12316] = 5;
	v->a[12317] = sym_arithmetic_expansion;
	v->a[12318] = sym_string;
	v->a[12319] = sym_simple_expansion;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = sym_expansion;
	v->a[12321] = sym_command_substitution;
	v->a[12322] = state(949);
	v->a[12323] = 12;
	v->a[12324] = sym_redirected_statement;
	v->a[12325] = sym_for_statement;
	v->a[12326] = sym_while_statement;
	v->a[12327] = sym_if_statement;
	v->a[12328] = sym_case_statement;
	v->a[12329] = sym_function_definition;
	v->a[12330] = sym_compound_statement;
	v->a[12331] = sym_subshell;
	v->a[12332] = sym_list;
	v->a[12333] = sym_negated_command;
	v->a[12334] = sym_command;
	v->a[12335] = sym__variable_assignments;
	v->a[12336] = 40;
	v->a[12337] = actions(3);
	v->a[12338] = 1;
	v->a[12339] = sym_comment;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = actions(9);
	v->a[12341] = 1;
	v->a[12342] = anon_sym_for;
	v->a[12343] = actions(13);
	v->a[12344] = 1;
	v->a[12345] = anon_sym_if;
	v->a[12346] = actions(15);
	v->a[12347] = 1;
	v->a[12348] = anon_sym_case;
	v->a[12349] = actions(17);
	v->a[12350] = 1;
	v->a[12351] = anon_sym_LPAREN;
	v->a[12352] = actions(19);
	v->a[12353] = 1;
	v->a[12354] = anon_sym_LBRACE;
	v->a[12355] = actions(53);
	v->a[12356] = 1;
	v->a[12357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12358] = actions(55);
	v->a[12359] = 1;
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = anon_sym_DOLLAR;
	v->a[12361] = actions(57);
	v->a[12362] = 1;
	v->a[12363] = anon_sym_DQUOTE;
	v->a[12364] = actions(61);
	v->a[12365] = 1;
	v->a[12366] = anon_sym_DOLLAR_LBRACE;
	v->a[12367] = actions(63);
	v->a[12368] = 1;
	v->a[12369] = anon_sym_DOLLAR_LPAREN;
	v->a[12370] = actions(65);
	v->a[12371] = 1;
	v->a[12372] = anon_sym_BQUOTE;
	v->a[12373] = actions(208);
	v->a[12374] = 1;
	v->a[12375] = sym_word;
	v->a[12376] = actions(210);
	v->a[12377] = 1;
	v->a[12378] = anon_sym_BANG;
	v->a[12379] = actions(216);
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = 1;
	v->a[12381] = sym_variable_name;
	v->a[12382] = state(109);
	v->a[12383] = 1;
	v->a[12384] = aux_sym__statements_repeat1;
	v->a[12385] = state(158);
	v->a[12386] = 1;
	v->a[12387] = sym_command_name;
	v->a[12388] = state(178);
	v->a[12389] = 1;
	v->a[12390] = sym_variable_assignment;
	v->a[12391] = state(298);
	v->a[12392] = 1;
	v->a[12393] = aux_sym_command_repeat1;
	v->a[12394] = state(551);
	v->a[12395] = 1;
	v->a[12396] = sym_file_redirect;
	v->a[12397] = state(555);
	v->a[12398] = 1;
	v->a[12399] = sym_concatenation;
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
