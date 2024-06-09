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
	v->a[12301] = actions(71);
	v->a[12302] = 1;
	v->a[12303] = aux_sym_number_token1;
	v->a[12304] = actions(73);
	v->a[12305] = 1;
	v->a[12306] = aux_sym_number_token2;
	v->a[12307] = actions(75);
	v->a[12308] = 1;
	v->a[12309] = anon_sym_DOLLAR_LBRACE;
	v->a[12310] = actions(77);
	v->a[12311] = 1;
	v->a[12312] = anon_sym_DOLLAR_LPAREN;
	v->a[12313] = actions(79);
	v->a[12314] = 1;
	v->a[12315] = anon_sym_BQUOTE;
	v->a[12316] = actions(81);
	v->a[12317] = 1;
	v->a[12318] = sym_file_descriptor;
	v->a[12319] = actions(83);
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = 1;
	v->a[12321] = sym_variable_name;
	v->a[12322] = actions(238);
	v->a[12323] = 1;
	v->a[12324] = sym_word;
	v->a[12325] = actions(240);
	v->a[12326] = 1;
	v->a[12327] = anon_sym_BANG;
	v->a[12328] = state(132);
	v->a[12329] = 1;
	v->a[12330] = aux_sym__statements_repeat1;
	v->a[12331] = state(185);
	v->a[12332] = 1;
	v->a[12333] = sym_command_name;
	v->a[12334] = state(297);
	v->a[12335] = 1;
	v->a[12336] = sym_variable_assignment;
	v->a[12337] = state(582);
	v->a[12338] = 1;
	v->a[12339] = sym_concatenation;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = state(614);
	v->a[12341] = 1;
	v->a[12342] = aux_sym_command_repeat1;
	v->a[12343] = state(769);
	v->a[12344] = 1;
	v->a[12345] = sym_file_redirect;
	v->a[12346] = state(1133);
	v->a[12347] = 1;
	v->a[12348] = aux_sym_redirected_statement_repeat2;
	v->a[12349] = state(1142);
	v->a[12350] = 1;
	v->a[12351] = sym_pipeline;
	v->a[12352] = state(2041);
	v->a[12353] = 1;
	v->a[12354] = sym__statement_not_pipeline;
	v->a[12355] = state(2136);
	v->a[12356] = 1;
	v->a[12357] = sym__statements;
	v->a[12358] = actions(11);
	v->a[12359] = 2;
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = anon_sym_while;
	v->a[12361] = anon_sym_until;
	v->a[12362] = actions(61);
	v->a[12363] = 2;
	v->a[12364] = anon_sym_LT_AMP_DASH;
	v->a[12365] = anon_sym_GT_AMP_DASH;
	v->a[12366] = state(397);
	v->a[12367] = 6;
	v->a[12368] = sym_arithmetic_expansion;
	v->a[12369] = sym_string;
	v->a[12370] = sym_number;
	v->a[12371] = sym_simple_expansion;
	v->a[12372] = sym_expansion;
	v->a[12373] = sym_command_substitution;
	v->a[12374] = actions(59);
	v->a[12375] = 8;
	v->a[12376] = anon_sym_LT;
	v->a[12377] = anon_sym_GT;
	v->a[12378] = anon_sym_GT_GT;
	v->a[12379] = anon_sym_AMP_GT;
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = anon_sym_AMP_GT_GT;
	v->a[12381] = anon_sym_LT_AMP;
	v->a[12382] = anon_sym_GT_AMP;
	v->a[12383] = anon_sym_GT_PIPE;
	v->a[12384] = state(1071);
	v->a[12385] = 12;
	v->a[12386] = sym_redirected_statement;
	v->a[12387] = sym_for_statement;
	v->a[12388] = sym_while_statement;
	v->a[12389] = sym_if_statement;
	v->a[12390] = sym_case_statement;
	v->a[12391] = sym_function_definition;
	v->a[12392] = sym_compound_statement;
	v->a[12393] = sym_subshell;
	v->a[12394] = sym_list;
	v->a[12395] = sym_negated_command;
	v->a[12396] = sym_command;
	v->a[12397] = sym_variable_assignments;
	v->a[12398] = 34;
	v->a[12399] = actions(3);
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
