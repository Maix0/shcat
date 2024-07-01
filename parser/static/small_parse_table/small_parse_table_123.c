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
	v->a[12301] = aux_sym_command_repeat1;
	v->a[12302] = state(795);
	v->a[12303] = 1;
	v->a[12304] = sym_file_redirect;
	v->a[12305] = state(1154);
	v->a[12306] = 1;
	v->a[12307] = sym_pipeline;
	v->a[12308] = state(1240);
	v->a[12309] = 1;
	v->a[12310] = aux_sym_redirected_statement_repeat2;
	v->a[12311] = state(2119);
	v->a[12312] = 1;
	v->a[12313] = sym__statement_not_pipeline;
	v->a[12314] = state(2333);
	v->a[12315] = 1;
	v->a[12316] = sym__statements;
	v->a[12317] = actions(11);
	v->a[12318] = 2;
	v->a[12319] = anon_sym_while;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = anon_sym_until;
	v->a[12321] = actions(57);
	v->a[12322] = 2;
	v->a[12323] = anon_sym_LT_AMP_DASH;
	v->a[12324] = anon_sym_GT_AMP_DASH;
	v->a[12325] = actions(65);
	v->a[12326] = 2;
	v->a[12327] = sym_raw_string;
	v->a[12328] = sym_number;
	v->a[12329] = state(443);
	v->a[12330] = 5;
	v->a[12331] = sym_arithmetic_expansion;
	v->a[12332] = sym_string;
	v->a[12333] = sym_simple_expansion;
	v->a[12334] = sym_expansion;
	v->a[12335] = sym_command_substitution;
	v->a[12336] = actions(55);
	v->a[12337] = 6;
	v->a[12338] = anon_sym_LT;
	v->a[12339] = anon_sym_GT;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = anon_sym_GT_GT;
	v->a[12341] = anon_sym_LT_AMP;
	v->a[12342] = anon_sym_GT_AMP;
	v->a[12343] = anon_sym_GT_PIPE;
	v->a[12344] = state(1030);
	v->a[12345] = 12;
	v->a[12346] = sym_redirected_statement;
	v->a[12347] = sym_for_statement;
	v->a[12348] = sym_while_statement;
	v->a[12349] = sym_if_statement;
	v->a[12350] = sym_case_statement;
	v->a[12351] = sym_function_definition;
	v->a[12352] = sym_compound_statement;
	v->a[12353] = sym_subshell;
	v->a[12354] = sym_list;
	v->a[12355] = sym_negated_command;
	v->a[12356] = sym_command;
	v->a[12357] = sym__variable_assignments;
	v->a[12358] = 32;
	v->a[12359] = actions(3);
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = 1;
	v->a[12361] = sym_comment;
	v->a[12362] = actions(9);
	v->a[12363] = 1;
	v->a[12364] = anon_sym_for;
	v->a[12365] = actions(13);
	v->a[12366] = 1;
	v->a[12367] = anon_sym_if;
	v->a[12368] = actions(15);
	v->a[12369] = 1;
	v->a[12370] = anon_sym_case;
	v->a[12371] = actions(17);
	v->a[12372] = 1;
	v->a[12373] = anon_sym_LPAREN;
	v->a[12374] = actions(19);
	v->a[12375] = 1;
	v->a[12376] = anon_sym_LBRACE;
	v->a[12377] = actions(59);
	v->a[12378] = 1;
	v->a[12379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = actions(61);
	v->a[12381] = 1;
	v->a[12382] = anon_sym_DOLLAR;
	v->a[12383] = actions(63);
	v->a[12384] = 1;
	v->a[12385] = anon_sym_DQUOTE;
	v->a[12386] = actions(67);
	v->a[12387] = 1;
	v->a[12388] = anon_sym_DOLLAR_LBRACE;
	v->a[12389] = actions(69);
	v->a[12390] = 1;
	v->a[12391] = anon_sym_DOLLAR_LPAREN;
	v->a[12392] = actions(71);
	v->a[12393] = 1;
	v->a[12394] = anon_sym_BQUOTE;
	v->a[12395] = actions(220);
	v->a[12396] = 1;
	v->a[12397] = sym_word;
	v->a[12398] = actions(222);
	v->a[12399] = 1;
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
