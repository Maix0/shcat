/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_283.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1415(t_small_parse_table_array *v)
{
	v->a[28300] = ts_builtin_sym_end;
	v->a[28301] = aux_sym_heredoc_redirect_token1;
	v->a[28302] = actions(2662);
	v->a[28303] = 32;
	v->a[28304] = anon_sym_PIPE;
	v->a[28305] = anon_sym_SEMI_SEMI;
	v->a[28306] = anon_sym_PIPE_AMP;
	v->a[28307] = anon_sym_AMP_AMP;
	v->a[28308] = anon_sym_PIPE_PIPE;
	v->a[28309] = anon_sym_LT;
	v->a[28310] = anon_sym_GT;
	v->a[28311] = anon_sym_GT_GT;
	v->a[28312] = anon_sym_AMP_GT;
	v->a[28313] = anon_sym_AMP_GT_GT;
	v->a[28314] = anon_sym_LT_AMP;
	v->a[28315] = anon_sym_GT_AMP;
	v->a[28316] = anon_sym_GT_PIPE;
	v->a[28317] = anon_sym_LT_AMP_DASH;
	v->a[28318] = anon_sym_GT_AMP_DASH;
	v->a[28319] = anon_sym_LT_LT;
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = anon_sym_LT_LT_DASH;
	v->a[28321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28322] = anon_sym_AMP;
	v->a[28323] = anon_sym_DOLLAR;
	v->a[28324] = sym__special_character;
	v->a[28325] = anon_sym_DQUOTE;
	v->a[28326] = sym_raw_string;
	v->a[28327] = aux_sym_number_token1;
	v->a[28328] = aux_sym_number_token2;
	v->a[28329] = anon_sym_DOLLAR_LBRACE;
	v->a[28330] = anon_sym_DOLLAR_LPAREN;
	v->a[28331] = anon_sym_BQUOTE;
	v->a[28332] = anon_sym_DOLLAR_BQUOTE;
	v->a[28333] = aux_sym__simple_variable_name_token1;
	v->a[28334] = sym_word;
	v->a[28335] = anon_sym_SEMI;
	v->a[28336] = 6;
	v->a[28337] = actions(3);
	v->a[28338] = 1;
	v->a[28339] = sym_comment;
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = actions(3316);
	v->a[28341] = 1;
	v->a[28342] = aux_sym_concatenation_token1;
	v->a[28343] = actions(3319);
	v->a[28344] = 1;
	v->a[28345] = sym__concat;
	v->a[28346] = state(672);
	v->a[28347] = 1;
	v->a[28348] = aux_sym_concatenation_repeat1;
	v->a[28349] = actions(2654);
	v->a[28350] = 4;
	v->a[28351] = sym_file_descriptor;
	v->a[28352] = sym_test_operator;
	v->a[28353] = sym__brace_start;
	v->a[28354] = aux_sym_heredoc_redirect_token1;
	v->a[28355] = actions(2652);
	v->a[28356] = 34;
	v->a[28357] = anon_sym_PIPE;
	v->a[28358] = anon_sym_SEMI_SEMI;
	v->a[28359] = anon_sym_SEMI_AMP;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = anon_sym_SEMI_SEMI_AMP;
	v->a[28361] = anon_sym_PIPE_AMP;
	v->a[28362] = anon_sym_AMP_AMP;
	v->a[28363] = anon_sym_PIPE_PIPE;
	v->a[28364] = anon_sym_LT;
	v->a[28365] = anon_sym_GT;
	v->a[28366] = anon_sym_GT_GT;
	v->a[28367] = anon_sym_AMP_GT;
	v->a[28368] = anon_sym_AMP_GT_GT;
	v->a[28369] = anon_sym_LT_AMP;
	v->a[28370] = anon_sym_GT_AMP;
	v->a[28371] = anon_sym_GT_PIPE;
	v->a[28372] = anon_sym_LT_AMP_DASH;
	v->a[28373] = anon_sym_GT_AMP_DASH;
	v->a[28374] = anon_sym_LT_LT;
	v->a[28375] = anon_sym_LT_LT_DASH;
	v->a[28376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28377] = anon_sym_AMP;
	v->a[28378] = anon_sym_DOLLAR;
	v->a[28379] = sym__special_character;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = anon_sym_DQUOTE;
	v->a[28381] = sym_raw_string;
	v->a[28382] = aux_sym_number_token1;
	v->a[28383] = aux_sym_number_token2;
	v->a[28384] = anon_sym_DOLLAR_LBRACE;
	v->a[28385] = anon_sym_DOLLAR_LPAREN;
	v->a[28386] = anon_sym_BQUOTE;
	v->a[28387] = anon_sym_DOLLAR_BQUOTE;
	v->a[28388] = aux_sym__simple_variable_name_token1;
	v->a[28389] = sym_word;
	v->a[28390] = anon_sym_SEMI;
	v->a[28391] = 3;
	v->a[28392] = actions(3);
	v->a[28393] = 1;
	v->a[28394] = sym_comment;
	v->a[28395] = actions(3125);
	v->a[28396] = 6;
	v->a[28397] = sym_file_descriptor;
	v->a[28398] = sym__concat;
	v->a[28399] = sym_variable_name;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
