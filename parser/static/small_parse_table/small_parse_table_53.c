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
	v->a[5300] = actions(61);
	v->a[5301] = 1;
	v->a[5302] = anon_sym_DOLLAR;
	v->a[5303] = actions(63);
	v->a[5304] = 1;
	v->a[5305] = anon_sym_DQUOTE;
	v->a[5306] = actions(67);
	v->a[5307] = 1;
	v->a[5308] = anon_sym_DOLLAR_LBRACE;
	v->a[5309] = actions(69);
	v->a[5310] = 1;
	v->a[5311] = anon_sym_DOLLAR_LPAREN;
	v->a[5312] = actions(71);
	v->a[5313] = 1;
	v->a[5314] = anon_sym_BQUOTE;
	v->a[5315] = actions(73);
	v->a[5316] = 1;
	v->a[5317] = sym_file_descriptor;
	v->a[5318] = actions(75);
	v->a[5319] = 1;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = sym_variable_name;
	v->a[5321] = actions(240);
	v->a[5322] = 1;
	v->a[5323] = sym_word;
	v->a[5324] = actions(242);
	v->a[5325] = 1;
	v->a[5326] = anon_sym_BANG;
	v->a[5327] = state(136);
	v->a[5328] = 1;
	v->a[5329] = aux_sym__statements_repeat1;
	v->a[5330] = state(188);
	v->a[5331] = 1;
	v->a[5332] = sym_command_name;
	v->a[5333] = state(297);
	v->a[5334] = 1;
	v->a[5335] = sym_variable_assignment;
	v->a[5336] = state(650);
	v->a[5337] = 1;
	v->a[5338] = sym_concatenation;
	v->a[5339] = state(749);
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = 1;
	v->a[5341] = aux_sym_command_repeat1;
	v->a[5342] = state(795);
	v->a[5343] = 1;
	v->a[5344] = sym_file_redirect;
	v->a[5345] = state(1154);
	v->a[5346] = 1;
	v->a[5347] = sym_pipeline;
	v->a[5348] = state(1240);
	v->a[5349] = 1;
	v->a[5350] = aux_sym_redirected_statement_repeat2;
	v->a[5351] = state(2119);
	v->a[5352] = 1;
	v->a[5353] = sym__statement_not_pipeline;
	v->a[5354] = state(2277);
	v->a[5355] = 1;
	v->a[5356] = sym__statements;
	v->a[5357] = actions(11);
	v->a[5358] = 2;
	v->a[5359] = anon_sym_while;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = anon_sym_until;
	v->a[5361] = actions(57);
	v->a[5362] = 2;
	v->a[5363] = anon_sym_LT_AMP_DASH;
	v->a[5364] = anon_sym_GT_AMP_DASH;
	v->a[5365] = actions(65);
	v->a[5366] = 2;
	v->a[5367] = sym_raw_string;
	v->a[5368] = sym_number;
	v->a[5369] = state(443);
	v->a[5370] = 5;
	v->a[5371] = sym_arithmetic_expansion;
	v->a[5372] = sym_string;
	v->a[5373] = sym_simple_expansion;
	v->a[5374] = sym_expansion;
	v->a[5375] = sym_command_substitution;
	v->a[5376] = actions(55);
	v->a[5377] = 6;
	v->a[5378] = anon_sym_LT;
	v->a[5379] = anon_sym_GT;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = anon_sym_GT_GT;
	v->a[5381] = anon_sym_LT_AMP;
	v->a[5382] = anon_sym_GT_AMP;
	v->a[5383] = anon_sym_GT_PIPE;
	v->a[5384] = state(1030);
	v->a[5385] = 12;
	v->a[5386] = sym_redirected_statement;
	v->a[5387] = sym_for_statement;
	v->a[5388] = sym_while_statement;
	v->a[5389] = sym_if_statement;
	v->a[5390] = sym_case_statement;
	v->a[5391] = sym_function_definition;
	v->a[5392] = sym_compound_statement;
	v->a[5393] = sym_subshell;
	v->a[5394] = sym_list;
	v->a[5395] = sym_negated_command;
	v->a[5396] = sym_command;
	v->a[5397] = sym__variable_assignments;
	v->a[5398] = 32;
	v->a[5399] = actions(3);
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
