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
	v->a[5300] = sym_concatenation;
	v->a[5301] = state(746);
	v->a[5302] = 1;
	v->a[5303] = aux_sym_command_repeat1;
	v->a[5304] = state(905);
	v->a[5305] = 1;
	v->a[5306] = sym_file_redirect;
	v->a[5307] = state(1422);
	v->a[5308] = 1;
	v->a[5309] = sym_pipeline;
	v->a[5310] = state(1429);
	v->a[5311] = 1;
	v->a[5312] = aux_sym_redirected_statement_repeat2;
	v->a[5313] = state(2271);
	v->a[5314] = 1;
	v->a[5315] = sym__statement_not_pipeline;
	v->a[5316] = state(2437);
	v->a[5317] = 1;
	v->a[5318] = sym__statements;
	v->a[5319] = actions(11);
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = 2;
	v->a[5321] = anon_sym_while;
	v->a[5322] = anon_sym_until;
	v->a[5323] = actions(57);
	v->a[5324] = 2;
	v->a[5325] = anon_sym_LT_AMP_DASH;
	v->a[5326] = anon_sym_GT_AMP_DASH;
	v->a[5327] = actions(65);
	v->a[5328] = 2;
	v->a[5329] = sym_raw_string;
	v->a[5330] = sym_number;
	v->a[5331] = state(394);
	v->a[5332] = 5;
	v->a[5333] = sym_arithmetic_expansion;
	v->a[5334] = sym_string;
	v->a[5335] = sym_simple_expansion;
	v->a[5336] = sym_expansion;
	v->a[5337] = sym_command_substitution;
	v->a[5338] = actions(55);
	v->a[5339] = 8;
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = anon_sym_LT;
	v->a[5341] = anon_sym_GT;
	v->a[5342] = anon_sym_GT_GT;
	v->a[5343] = anon_sym_AMP_GT;
	v->a[5344] = anon_sym_AMP_GT_GT;
	v->a[5345] = anon_sym_LT_AMP;
	v->a[5346] = anon_sym_GT_AMP;
	v->a[5347] = anon_sym_GT_PIPE;
	v->a[5348] = state(1211);
	v->a[5349] = 12;
	v->a[5350] = sym_redirected_statement;
	v->a[5351] = sym_for_statement;
	v->a[5352] = sym_while_statement;
	v->a[5353] = sym_if_statement;
	v->a[5354] = sym_case_statement;
	v->a[5355] = sym_function_definition;
	v->a[5356] = sym_compound_statement;
	v->a[5357] = sym_subshell;
	v->a[5358] = sym_list;
	v->a[5359] = sym_negated_command;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = sym_command;
	v->a[5361] = sym_variable_assignments;
	v->a[5362] = 32;
	v->a[5363] = actions(3);
	v->a[5364] = 1;
	v->a[5365] = sym_comment;
	v->a[5366] = actions(9);
	v->a[5367] = 1;
	v->a[5368] = anon_sym_for;
	v->a[5369] = actions(13);
	v->a[5370] = 1;
	v->a[5371] = anon_sym_if;
	v->a[5372] = actions(15);
	v->a[5373] = 1;
	v->a[5374] = anon_sym_case;
	v->a[5375] = actions(17);
	v->a[5376] = 1;
	v->a[5377] = anon_sym_LPAREN;
	v->a[5378] = actions(19);
	v->a[5379] = 1;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = anon_sym_LBRACE;
	v->a[5381] = actions(45);
	v->a[5382] = 1;
	v->a[5383] = sym_word;
	v->a[5384] = actions(53);
	v->a[5385] = 1;
	v->a[5386] = anon_sym_BANG;
	v->a[5387] = actions(59);
	v->a[5388] = 1;
	v->a[5389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5390] = actions(61);
	v->a[5391] = 1;
	v->a[5392] = anon_sym_DOLLAR;
	v->a[5393] = actions(63);
	v->a[5394] = 1;
	v->a[5395] = anon_sym_DQUOTE;
	v->a[5396] = actions(67);
	v->a[5397] = 1;
	v->a[5398] = anon_sym_DOLLAR_LBRACE;
	v->a[5399] = actions(69);
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
