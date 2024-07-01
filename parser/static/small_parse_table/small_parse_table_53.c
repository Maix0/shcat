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
	v->a[5300] = actions(65);
	v->a[5301] = 1;
	v->a[5302] = anon_sym_DOLLAR_LPAREN;
	v->a[5303] = actions(67);
	v->a[5304] = 1;
	v->a[5305] = anon_sym_BQUOTE;
	v->a[5306] = actions(211);
	v->a[5307] = 1;
	v->a[5308] = sym_word;
	v->a[5309] = actions(213);
	v->a[5310] = 1;
	v->a[5311] = anon_sym_BANG;
	v->a[5312] = actions(219);
	v->a[5313] = 1;
	v->a[5314] = sym_file_descriptor;
	v->a[5315] = actions(221);
	v->a[5316] = 1;
	v->a[5317] = sym_variable_name;
	v->a[5318] = state(125);
	v->a[5319] = 1;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = aux_sym__statements_repeat1;
	v->a[5321] = state(173);
	v->a[5322] = 1;
	v->a[5323] = sym_command_name;
	v->a[5324] = state(224);
	v->a[5325] = 1;
	v->a[5326] = sym_variable_assignment;
	v->a[5327] = state(603);
	v->a[5328] = 1;
	v->a[5329] = sym_concatenation;
	v->a[5330] = state(624);
	v->a[5331] = 1;
	v->a[5332] = sym_file_redirect;
	v->a[5333] = state(673);
	v->a[5334] = 1;
	v->a[5335] = aux_sym_command_repeat1;
	v->a[5336] = state(1020);
	v->a[5337] = 1;
	v->a[5338] = sym_pipeline;
	v->a[5339] = state(1136);
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = 1;
	v->a[5341] = aux_sym_redirected_statement_repeat2;
	v->a[5342] = state(1898);
	v->a[5343] = 1;
	v->a[5344] = sym__statement_not_pipeline;
	v->a[5345] = state(2046);
	v->a[5346] = 1;
	v->a[5347] = sym__statements;
	v->a[5348] = actions(11);
	v->a[5349] = 2;
	v->a[5350] = anon_sym_while;
	v->a[5351] = anon_sym_until;
	v->a[5352] = actions(217);
	v->a[5353] = 2;
	v->a[5354] = sym_raw_string;
	v->a[5355] = sym_number;
	v->a[5356] = state(362);
	v->a[5357] = 5;
	v->a[5358] = sym_arithmetic_expansion;
	v->a[5359] = sym_string;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = sym_simple_expansion;
	v->a[5361] = sym_expansion;
	v->a[5362] = sym_command_substitution;
	v->a[5363] = actions(215);
	v->a[5364] = 7;
	v->a[5365] = anon_sym_LT;
	v->a[5366] = anon_sym_GT;
	v->a[5367] = anon_sym_GT_GT;
	v->a[5368] = anon_sym_LT_AMP;
	v->a[5369] = anon_sym_GT_AMP;
	v->a[5370] = anon_sym_GT_PIPE;
	v->a[5371] = anon_sym_LT_GT;
	v->a[5372] = state(1003);
	v->a[5373] = 12;
	v->a[5374] = sym_redirected_statement;
	v->a[5375] = sym_for_statement;
	v->a[5376] = sym_while_statement;
	v->a[5377] = sym_if_statement;
	v->a[5378] = sym_case_statement;
	v->a[5379] = sym_function_definition;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = sym_compound_statement;
	v->a[5381] = sym_subshell;
	v->a[5382] = sym_list;
	v->a[5383] = sym_negated_command;
	v->a[5384] = sym_command;
	v->a[5385] = sym__variable_assignments;
	v->a[5386] = 31;
	v->a[5387] = actions(3);
	v->a[5388] = 1;
	v->a[5389] = sym_comment;
	v->a[5390] = actions(9);
	v->a[5391] = 1;
	v->a[5392] = anon_sym_for;
	v->a[5393] = actions(13);
	v->a[5394] = 1;
	v->a[5395] = anon_sym_if;
	v->a[5396] = actions(15);
	v->a[5397] = 1;
	v->a[5398] = anon_sym_case;
	v->a[5399] = actions(17);
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
