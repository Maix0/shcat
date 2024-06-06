/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_983.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4915(t_small_parse_table_array *v)
{
	v->a[98300] = anon_sym_LT_AMP;
	v->a[98301] = anon_sym_GT_AMP;
	v->a[98302] = anon_sym_GT_PIPE;
	v->a[98303] = 19;
	v->a[98304] = actions(3);
	v->a[98305] = 1;
	v->a[98306] = sym_comment;
	v->a[98307] = actions(5332);
	v->a[98308] = 1;
	v->a[98309] = sym_word;
	v->a[98310] = actions(5334);
	v->a[98311] = 1;
	v->a[98312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98313] = actions(5336);
	v->a[98314] = 1;
	v->a[98315] = anon_sym_DOLLAR;
	v->a[98316] = actions(5338);
	v->a[98317] = 1;
	v->a[98318] = sym__special_character;
	v->a[98319] = actions(5340);
	small_parse_table_4916(v);
}

void	small_parse_table_4916(t_small_parse_table_array *v)
{
	v->a[98320] = 1;
	v->a[98321] = anon_sym_DQUOTE;
	v->a[98322] = actions(5344);
	v->a[98323] = 1;
	v->a[98324] = aux_sym_number_token1;
	v->a[98325] = actions(5346);
	v->a[98326] = 1;
	v->a[98327] = aux_sym_number_token2;
	v->a[98328] = actions(5348);
	v->a[98329] = 1;
	v->a[98330] = anon_sym_DOLLAR_LBRACE;
	v->a[98331] = actions(5350);
	v->a[98332] = 1;
	v->a[98333] = anon_sym_DOLLAR_LPAREN;
	v->a[98334] = actions(5352);
	v->a[98335] = 1;
	v->a[98336] = anon_sym_BQUOTE;
	v->a[98337] = actions(5354);
	v->a[98338] = 1;
	v->a[98339] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4917(v);
}

void	small_parse_table_4917(t_small_parse_table_array *v)
{
	v->a[98340] = actions(5356);
	v->a[98341] = 1;
	v->a[98342] = sym__comment_word;
	v->a[98343] = actions(5358);
	v->a[98344] = 1;
	v->a[98345] = sym__empty_value;
	v->a[98346] = actions(5360);
	v->a[98347] = 1;
	v->a[98348] = sym__brace_start;
	v->a[98349] = state(1229);
	v->a[98350] = 1;
	v->a[98351] = aux_sym__literal_repeat1;
	v->a[98352] = state(1262);
	v->a[98353] = 1;
	v->a[98354] = sym_concatenation;
	v->a[98355] = actions(5342);
	v->a[98356] = 2;
	v->a[98357] = sym_test_operator;
	v->a[98358] = sym_raw_string;
	v->a[98359] = state(772);
	small_parse_table_4918(v);
}

void	small_parse_table_4918(t_small_parse_table_array *v)
{
	v->a[98360] = 7;
	v->a[98361] = sym_arithmetic_expansion;
	v->a[98362] = sym_brace_expression;
	v->a[98363] = sym_string;
	v->a[98364] = sym_number;
	v->a[98365] = sym_simple_expansion;
	v->a[98366] = sym_expansion;
	v->a[98367] = sym_command_substitution;
	v->a[98368] = 5;
	v->a[98369] = actions(3);
	v->a[98370] = 1;
	v->a[98371] = sym_comment;
	v->a[98372] = state(2048);
	v->a[98373] = 1;
	v->a[98374] = aux_sym_pipeline_repeat1;
	v->a[98375] = actions(5364);
	v->a[98376] = 2;
	v->a[98377] = anon_sym_PIPE;
	v->a[98378] = anon_sym_PIPE_AMP;
	v->a[98379] = actions(5367);
	small_parse_table_4919(v);
}

void	small_parse_table_4919(t_small_parse_table_array *v)
{
	v->a[98380] = 2;
	v->a[98381] = sym_file_descriptor;
	v->a[98382] = aux_sym_heredoc_redirect_token1;
	v->a[98383] = actions(5362);
	v->a[98384] = 20;
	v->a[98385] = anon_sym_esac;
	v->a[98386] = anon_sym_SEMI_SEMI;
	v->a[98387] = anon_sym_SEMI_AMP;
	v->a[98388] = anon_sym_SEMI_SEMI_AMP;
	v->a[98389] = anon_sym_AMP_AMP;
	v->a[98390] = anon_sym_PIPE_PIPE;
	v->a[98391] = anon_sym_LT;
	v->a[98392] = anon_sym_GT;
	v->a[98393] = anon_sym_GT_GT;
	v->a[98394] = anon_sym_AMP_GT;
	v->a[98395] = anon_sym_AMP_GT_GT;
	v->a[98396] = anon_sym_LT_AMP;
	v->a[98397] = anon_sym_GT_AMP;
	v->a[98398] = anon_sym_GT_PIPE;
	v->a[98399] = anon_sym_LT_AMP_DASH;
	small_parse_table_4920(v);
}

/* EOF small_parse_table_983.c */
