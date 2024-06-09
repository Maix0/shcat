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
	v->a[5300] = state(582);
	v->a[5301] = 1;
	v->a[5302] = sym_concatenation;
	v->a[5303] = state(587);
	v->a[5304] = 1;
	v->a[5305] = aux_sym_command_repeat1;
	v->a[5306] = state(718);
	v->a[5307] = 1;
	v->a[5308] = sym_file_redirect;
	v->a[5309] = state(1213);
	v->a[5310] = 1;
	v->a[5311] = aux_sym_redirected_statement_repeat2;
	v->a[5312] = state(1217);
	v->a[5313] = 1;
	v->a[5314] = sym_pipeline;
	v->a[5315] = state(2035);
	v->a[5316] = 1;
	v->a[5317] = sym__statement_not_pipeline;
	v->a[5318] = actions(11);
	v->a[5319] = 2;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = anon_sym_while;
	v->a[5321] = anon_sym_until;
	v->a[5322] = actions(61);
	v->a[5323] = 2;
	v->a[5324] = anon_sym_LT_AMP_DASH;
	v->a[5325] = anon_sym_GT_AMP_DASH;
	v->a[5326] = state(397);
	v->a[5327] = 6;
	v->a[5328] = sym_arithmetic_expansion;
	v->a[5329] = sym_string;
	v->a[5330] = sym_number;
	v->a[5331] = sym_simple_expansion;
	v->a[5332] = sym_expansion;
	v->a[5333] = sym_command_substitution;
	v->a[5334] = actions(59);
	v->a[5335] = 8;
	v->a[5336] = anon_sym_LT;
	v->a[5337] = anon_sym_GT;
	v->a[5338] = anon_sym_GT_GT;
	v->a[5339] = anon_sym_AMP_GT;
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = anon_sym_AMP_GT_GT;
	v->a[5341] = anon_sym_LT_AMP;
	v->a[5342] = anon_sym_GT_AMP;
	v->a[5343] = anon_sym_GT_PIPE;
	v->a[5344] = state(1121);
	v->a[5345] = 12;
	v->a[5346] = sym_redirected_statement;
	v->a[5347] = sym_for_statement;
	v->a[5348] = sym_while_statement;
	v->a[5349] = sym_if_statement;
	v->a[5350] = sym_case_statement;
	v->a[5351] = sym_function_definition;
	v->a[5352] = sym_compound_statement;
	v->a[5353] = sym_subshell;
	v->a[5354] = sym_list;
	v->a[5355] = sym_negated_command;
	v->a[5356] = sym_command;
	v->a[5357] = sym_variable_assignments;
	v->a[5358] = 34;
	v->a[5359] = actions(3);
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = 1;
	v->a[5361] = sym_comment;
	v->a[5362] = actions(9);
	v->a[5363] = 1;
	v->a[5364] = anon_sym_for;
	v->a[5365] = actions(13);
	v->a[5366] = 1;
	v->a[5367] = anon_sym_if;
	v->a[5368] = actions(15);
	v->a[5369] = 1;
	v->a[5370] = anon_sym_case;
	v->a[5371] = actions(17);
	v->a[5372] = 1;
	v->a[5373] = anon_sym_LPAREN;
	v->a[5374] = actions(19);
	v->a[5375] = 1;
	v->a[5376] = anon_sym_LBRACE;
	v->a[5377] = actions(49);
	v->a[5378] = 1;
	v->a[5379] = sym_word;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = actions(57);
	v->a[5381] = 1;
	v->a[5382] = anon_sym_BANG;
	v->a[5383] = actions(63);
	v->a[5384] = 1;
	v->a[5385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5386] = actions(65);
	v->a[5387] = 1;
	v->a[5388] = anon_sym_DOLLAR;
	v->a[5389] = actions(67);
	v->a[5390] = 1;
	v->a[5391] = anon_sym_DQUOTE;
	v->a[5392] = actions(69);
	v->a[5393] = 1;
	v->a[5394] = sym_raw_string;
	v->a[5395] = actions(71);
	v->a[5396] = 1;
	v->a[5397] = aux_sym_number_token1;
	v->a[5398] = actions(73);
	v->a[5399] = 1;
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
