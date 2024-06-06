/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_133.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_665(t_small_parse_table_array *v)
{
	v->a[13300] = anon_sym_DQUOTE;
	v->a[13301] = actions(2160);
	v->a[13302] = 1;
	v->a[13303] = aux_sym_number_token1;
	v->a[13304] = actions(2162);
	v->a[13305] = 1;
	v->a[13306] = aux_sym_number_token2;
	v->a[13307] = actions(2164);
	v->a[13308] = 1;
	v->a[13309] = anon_sym_DOLLAR_LBRACE;
	v->a[13310] = actions(2166);
	v->a[13311] = 1;
	v->a[13312] = anon_sym_DOLLAR_LPAREN;
	v->a[13313] = actions(2170);
	v->a[13314] = 1;
	v->a[13315] = anon_sym_DOLLAR_BQUOTE;
	v->a[13316] = actions(2174);
	v->a[13317] = 1;
	v->a[13318] = sym__brace_start;
	v->a[13319] = actions(2386);
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = 1;
	v->a[13321] = sym__special_character;
	v->a[13322] = actions(2388);
	v->a[13323] = 1;
	v->a[13324] = sym_test_operator;
	v->a[13325] = state(1270);
	v->a[13326] = 1;
	v->a[13327] = aux_sym__literal_repeat1;
	v->a[13328] = actions(1182);
	v->a[13329] = 2;
	v->a[13330] = sym_file_descriptor;
	v->a[13331] = aux_sym_heredoc_redirect_token1;
	v->a[13332] = actions(2384);
	v->a[13333] = 2;
	v->a[13334] = sym_raw_string;
	v->a[13335] = sym_word;
	v->a[13336] = state(428);
	v->a[13337] = 2;
	v->a[13338] = sym_concatenation;
	v->a[13339] = aux_sym_for_statement_repeat1;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = state(1222);
	v->a[13341] = 7;
	v->a[13342] = sym_arithmetic_expansion;
	v->a[13343] = sym_brace_expression;
	v->a[13344] = sym_string;
	v->a[13345] = sym_number;
	v->a[13346] = sym_simple_expansion;
	v->a[13347] = sym_expansion;
	v->a[13348] = sym_command_substitution;
	v->a[13349] = actions(1180);
	v->a[13350] = 20;
	v->a[13351] = anon_sym_PIPE;
	v->a[13352] = anon_sym_SEMI_SEMI;
	v->a[13353] = anon_sym_PIPE_AMP;
	v->a[13354] = anon_sym_AMP_AMP;
	v->a[13355] = anon_sym_PIPE_PIPE;
	v->a[13356] = anon_sym_LT;
	v->a[13357] = anon_sym_GT;
	v->a[13358] = anon_sym_GT_GT;
	v->a[13359] = anon_sym_AMP_GT;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = anon_sym_AMP_GT_GT;
	v->a[13361] = anon_sym_LT_AMP;
	v->a[13362] = anon_sym_GT_AMP;
	v->a[13363] = anon_sym_GT_PIPE;
	v->a[13364] = anon_sym_LT_AMP_DASH;
	v->a[13365] = anon_sym_GT_AMP_DASH;
	v->a[13366] = anon_sym_LT_LT;
	v->a[13367] = anon_sym_LT_LT_DASH;
	v->a[13368] = anon_sym_AMP;
	v->a[13369] = anon_sym_BQUOTE;
	v->a[13370] = anon_sym_SEMI;
	v->a[13371] = 19;
	v->a[13372] = actions(3);
	v->a[13373] = 1;
	v->a[13374] = sym_comment;
	v->a[13375] = actions(2354);
	v->a[13376] = 1;
	v->a[13377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13378] = actions(2356);
	v->a[13379] = 1;
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = anon_sym_DOLLAR;
	v->a[13381] = actions(2360);
	v->a[13382] = 1;
	v->a[13383] = anon_sym_DQUOTE;
	v->a[13384] = actions(2362);
	v->a[13385] = 1;
	v->a[13386] = aux_sym_number_token1;
	v->a[13387] = actions(2364);
	v->a[13388] = 1;
	v->a[13389] = aux_sym_number_token2;
	v->a[13390] = actions(2366);
	v->a[13391] = 1;
	v->a[13392] = anon_sym_DOLLAR_LBRACE;
	v->a[13393] = actions(2368);
	v->a[13394] = 1;
	v->a[13395] = anon_sym_DOLLAR_LPAREN;
	v->a[13396] = actions(2370);
	v->a[13397] = 1;
	v->a[13398] = anon_sym_BQUOTE;
	v->a[13399] = actions(2372);
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
