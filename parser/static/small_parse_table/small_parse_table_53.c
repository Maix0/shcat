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
	v->a[5300] = sym_variable_name;
	v->a[5301] = actions(1570);
	v->a[5302] = 1;
	v->a[5303] = sym_test_operator;
	v->a[5304] = state(1024);
	v->a[5305] = 1;
	v->a[5306] = aux_sym__literal_repeat1;
	v->a[5307] = actions(822);
	v->a[5308] = 2;
	v->a[5309] = sym_file_descriptor;
	v->a[5310] = aux_sym_heredoc_redirect_token1;
	v->a[5311] = actions(1562);
	v->a[5312] = 2;
	v->a[5313] = sym_raw_string;
	v->a[5314] = sym_word;
	v->a[5315] = state(336);
	v->a[5316] = 3;
	v->a[5317] = sym_variable_assignment;
	v->a[5318] = sym_concatenation;
	v->a[5319] = aux_sym_declaration_command_repeat1;
	small_parse_table_266(v);
}

void	small_parse_table_266(t_small_parse_table_array *v)
{
	v->a[5320] = state(906);
	v->a[5321] = 7;
	v->a[5322] = sym_arithmetic_expansion;
	v->a[5323] = sym_brace_expression;
	v->a[5324] = sym_string;
	v->a[5325] = sym_number;
	v->a[5326] = sym_simple_expansion;
	v->a[5327] = sym_expansion;
	v->a[5328] = sym_command_substitution;
	v->a[5329] = actions(820);
	v->a[5330] = 19;
	v->a[5331] = anon_sym_PIPE;
	v->a[5332] = anon_sym_SEMI_SEMI;
	v->a[5333] = anon_sym_PIPE_AMP;
	v->a[5334] = anon_sym_AMP_AMP;
	v->a[5335] = anon_sym_PIPE_PIPE;
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
	v->a[5344] = anon_sym_LT_AMP_DASH;
	v->a[5345] = anon_sym_GT_AMP_DASH;
	v->a[5346] = anon_sym_LT_LT;
	v->a[5347] = anon_sym_LT_LT_DASH;
	v->a[5348] = anon_sym_AMP;
	v->a[5349] = anon_sym_SEMI;
	v->a[5350] = 20;
	v->a[5351] = actions(3);
	v->a[5352] = 1;
	v->a[5353] = sym_comment;
	v->a[5354] = actions(1394);
	v->a[5355] = 1;
	v->a[5356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5357] = actions(1396);
	v->a[5358] = 1;
	v->a[5359] = anon_sym_DOLLAR;
	small_parse_table_268(v);
}

void	small_parse_table_268(t_small_parse_table_array *v)
{
	v->a[5360] = actions(1398);
	v->a[5361] = 1;
	v->a[5362] = sym__special_character;
	v->a[5363] = actions(1400);
	v->a[5364] = 1;
	v->a[5365] = anon_sym_DQUOTE;
	v->a[5366] = actions(1402);
	v->a[5367] = 1;
	v->a[5368] = aux_sym_number_token1;
	v->a[5369] = actions(1404);
	v->a[5370] = 1;
	v->a[5371] = aux_sym_number_token2;
	v->a[5372] = actions(1406);
	v->a[5373] = 1;
	v->a[5374] = anon_sym_DOLLAR_LBRACE;
	v->a[5375] = actions(1408);
	v->a[5376] = 1;
	v->a[5377] = anon_sym_DOLLAR_LPAREN;
	v->a[5378] = actions(1410);
	v->a[5379] = 1;
	small_parse_table_269(v);
}

void	small_parse_table_269(t_small_parse_table_array *v)
{
	v->a[5380] = anon_sym_BQUOTE;
	v->a[5381] = actions(1412);
	v->a[5382] = 1;
	v->a[5383] = anon_sym_DOLLAR_BQUOTE;
	v->a[5384] = actions(1416);
	v->a[5385] = 1;
	v->a[5386] = sym_test_operator;
	v->a[5387] = actions(1418);
	v->a[5388] = 1;
	v->a[5389] = sym__brace_start;
	v->a[5390] = actions(1572);
	v->a[5391] = 1;
	v->a[5392] = aux_sym__simple_variable_name_token1;
	v->a[5393] = state(1021);
	v->a[5394] = 1;
	v->a[5395] = aux_sym__literal_repeat1;
	v->a[5396] = actions(1246);
	v->a[5397] = 2;
	v->a[5398] = sym_file_descriptor;
	v->a[5399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_270(v);
}

/* EOF small_parse_table_53.c */
