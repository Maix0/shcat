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
	v->a[5300] = 1;
	v->a[5301] = sym_comment;
	v->a[5302] = actions(9);
	v->a[5303] = 1;
	v->a[5304] = anon_sym_for;
	v->a[5305] = actions(13);
	v->a[5306] = 1;
	v->a[5307] = anon_sym_if;
	v->a[5308] = actions(15);
	v->a[5309] = 1;
	v->a[5310] = anon_sym_case;
	v->a[5311] = actions(17);
	v->a[5312] = 1;
	v->a[5313] = anon_sym_LPAREN;
	v->a[5314] = actions(19);
	v->a[5315] = 1;
	v->a[5316] = anon_sym_LBRACE;
	v->a[5317] = actions(53);
	v->a[5318] = 1;
	v->a[5319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = actions(55);
	v->a[5321] = 1;
	v->a[5322] = anon_sym_DOLLAR;
	v->a[5323] = actions(57);
	v->a[5324] = 1;
	v->a[5325] = anon_sym_DQUOTE;
	v->a[5326] = actions(61);
	v->a[5327] = 1;
	v->a[5328] = anon_sym_DOLLAR_LBRACE;
	v->a[5329] = actions(63);
	v->a[5330] = 1;
	v->a[5331] = anon_sym_DOLLAR_LPAREN;
	v->a[5332] = actions(65);
	v->a[5333] = 1;
	v->a[5334] = anon_sym_BQUOTE;
	v->a[5335] = actions(208);
	v->a[5336] = 1;
	v->a[5337] = sym_word;
	v->a[5338] = actions(210);
	v->a[5339] = 1;
	small_parse_table_267(v);
}

void	small_parse_table_267(t_small_parse_table_array *v)
{
	v->a[5340] = anon_sym_BANG;
	v->a[5341] = actions(216);
	v->a[5342] = 1;
	v->a[5343] = sym_variable_name;
	v->a[5344] = state(112);
	v->a[5345] = 1;
	v->a[5346] = aux_sym__statements_repeat1;
	v->a[5347] = state(158);
	v->a[5348] = 1;
	v->a[5349] = sym_command_name;
	v->a[5350] = state(186);
	v->a[5351] = 1;
	v->a[5352] = sym_variable_assignment;
	v->a[5353] = state(298);
	v->a[5354] = 1;
	v->a[5355] = aux_sym_command_repeat1;
	v->a[5356] = state(555);
	v->a[5357] = 1;
	v->a[5358] = sym_concatenation;
	v->a[5359] = state(580);
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = 1;
	v->a[5361] = sym_file_redirect;
	v->a[5362] = state(937);
	v->a[5363] = 1;
	v->a[5364] = sym_pipeline;
	v->a[5365] = state(1019);
	v->a[5366] = 1;
	v->a[5367] = aux_sym_redirected_statement_repeat2;
	v->a[5368] = state(1557);
	v->a[5369] = 1;
	v->a[5370] = sym__statement_not_pipeline;
	v->a[5371] = state(1628);
	v->a[5372] = 1;
	v->a[5373] = sym__statements;
	v->a[5374] = actions(11);
	v->a[5375] = 2;
	v->a[5376] = anon_sym_while;
	v->a[5377] = anon_sym_until;
	v->a[5378] = actions(214);
	v->a[5379] = 2;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = sym_raw_string;
	v->a[5381] = sym_number;
	v->a[5382] = actions(212);
	v->a[5383] = 3;
	v->a[5384] = anon_sym_LT;
	v->a[5385] = anon_sym_GT;
	v->a[5386] = anon_sym_GT_GT;
	v->a[5387] = state(277);
	v->a[5388] = 5;
	v->a[5389] = sym_arithmetic_expansion;
	v->a[5390] = sym_string;
	v->a[5391] = sym_simple_expansion;
	v->a[5392] = sym_expansion;
	v->a[5393] = sym_command_substitution;
	v->a[5394] = state(877);
	v->a[5395] = 12;
	v->a[5396] = sym_redirected_statement;
	v->a[5397] = sym_for_statement;
	v->a[5398] = sym_while_statement;
	v->a[5399] = sym_if_statement;
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
