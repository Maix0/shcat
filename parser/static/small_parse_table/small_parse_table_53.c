/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_53.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_265(t_small_parse_table_array *v)
{
	v->a[5300] = state(119);
	v->a[5301] = 1;
	v->a[5302] = aux_sym__statements_repeat1;
	v->a[5303] = state(272);
	v->a[5304] = 1;
	v->a[5305] = sym_command_name;
	v->a[5306] = state(283);
	v->a[5307] = 1;
	v->a[5308] = sym_variable_assignment;
	v->a[5309] = state(486);
	v->a[5310] = 1;
	v->a[5311] = aux_sym_command_repeat1;
	v->a[5312] = state(602);
	v->a[5313] = 1;
	v->a[5314] = sym_concatenation;
	v->a[5315] = state(636);
	v->a[5316] = 1;
	v->a[5317] = sym_file_redirect;
	v->a[5318] = state(951);
	v->a[5319] = 1;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = sym_pipeline;
	v->a[5321] = state(1006);
	v->a[5322] = 1;
	v->a[5323] = aux_sym_redirected_statement_repeat2;
	v->a[5324] = state(1605);
	v->a[5325] = 1;
	v->a[5326] = sym__statement_not_pipeline;
	v->a[5327] = state(1671);
	v->a[5328] = 1;
	v->a[5329] = sym__statements;
	v->a[5330] = actions(11);
	v->a[5331] = 2;
	v->a[5332] = anon_sym_while;
	v->a[5333] = anon_sym_until;
	v->a[5334] = actions(59);
	v->a[5335] = 2;
	v->a[5336] = sym_raw_string;
	v->a[5337] = sym_number;
	v->a[5338] = state(425);
	v->a[5339] = 5;
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = sym_arithmetic_expansion;
	v->a[5341] = sym_string;
	v->a[5342] = sym_simple_expansion;
	v->a[5343] = sym_expansion;
	v->a[5344] = sym_command_substitution;
	v->a[5345] = actions(51);
	v->a[5346] = 7;
	v->a[5347] = anon_sym_LT;
	v->a[5348] = anon_sym_GT;
	v->a[5349] = anon_sym_GT_GT;
	v->a[5350] = anon_sym_LT_AMP;
	v->a[5351] = anon_sym_GT_AMP;
	v->a[5352] = anon_sym_GT_PIPE;
	v->a[5353] = anon_sym_LT_GT;
	v->a[5354] = state(849);
	v->a[5355] = 12;
	v->a[5356] = sym_redirected_statement;
	v->a[5357] = sym_for_statement;
	v->a[5358] = sym_while_statement;
	v->a[5359] = sym_if_statement;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = sym_case_statement;
	v->a[5361] = sym_function_definition;
	v->a[5362] = sym_compound_statement;
	v->a[5363] = sym_subshell;
	v->a[5364] = sym_list;
	v->a[5365] = sym_negated_command;
	v->a[5366] = sym_command;
	v->a[5367] = sym__variable_assignments;
	v->a[5368] = 30;
	v->a[5369] = actions(3);
	v->a[5370] = 1;
	v->a[5371] = sym_comment;
	v->a[5372] = actions(9);
	v->a[5373] = 1;
	v->a[5374] = anon_sym_for;
	v->a[5375] = actions(13);
	v->a[5376] = 1;
	v->a[5377] = anon_sym_if;
	v->a[5378] = actions(15);
	v->a[5379] = 1;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = anon_sym_case;
	v->a[5381] = actions(17);
	v->a[5382] = 1;
	v->a[5383] = anon_sym_LPAREN;
	v->a[5384] = actions(19);
	v->a[5385] = 1;
	v->a[5386] = anon_sym_LBRACE;
	v->a[5387] = actions(41);
	v->a[5388] = 1;
	v->a[5389] = sym_word;
	v->a[5390] = actions(49);
	v->a[5391] = 1;
	v->a[5392] = anon_sym_BANG;
	v->a[5393] = actions(53);
	v->a[5394] = 1;
	v->a[5395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5396] = actions(55);
	v->a[5397] = 1;
	v->a[5398] = anon_sym_DOLLAR;
	v->a[5399] = actions(57);
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
