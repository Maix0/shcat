/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_993.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4965(t_small_parse_table_array *v)
{
	v->a[99300] = 1;
	v->a[99301] = sym_word;
	v->a[99302] = actions(5586);
	v->a[99303] = 1;
	v->a[99304] = sym__special_character;
	v->a[99305] = state(1229);
	v->a[99306] = 1;
	v->a[99307] = aux_sym__literal_repeat1;
	v->a[99308] = state(1262);
	v->a[99309] = 1;
	v->a[99310] = sym_concatenation;
	v->a[99311] = actions(5588);
	v->a[99312] = 2;
	v->a[99313] = sym_test_operator;
	v->a[99314] = sym_raw_string;
	v->a[99315] = state(1355);
	v->a[99316] = 7;
	v->a[99317] = sym_arithmetic_expansion;
	v->a[99318] = sym_brace_expression;
	v->a[99319] = sym_string;
	small_parse_table_4966(v);
}

void	small_parse_table_4966(t_small_parse_table_array *v)
{
	v->a[99320] = sym_number;
	v->a[99321] = sym_simple_expansion;
	v->a[99322] = sym_expansion;
	v->a[99323] = sym_command_substitution;
	v->a[99324] = 3;
	v->a[99325] = actions(3);
	v->a[99326] = 1;
	v->a[99327] = sym_comment;
	v->a[99328] = actions(2774);
	v->a[99329] = 3;
	v->a[99330] = sym_file_descriptor;
	v->a[99331] = sym__concat;
	v->a[99332] = aux_sym_heredoc_redirect_token1;
	v->a[99333] = actions(2772);
	v->a[99334] = 22;
	v->a[99335] = anon_sym_PIPE;
	v->a[99336] = anon_sym_SEMI_SEMI;
	v->a[99337] = anon_sym_SEMI_AMP;
	v->a[99338] = anon_sym_SEMI_SEMI_AMP;
	v->a[99339] = anon_sym_PIPE_AMP;
	small_parse_table_4967(v);
}

void	small_parse_table_4967(t_small_parse_table_array *v)
{
	v->a[99340] = anon_sym_AMP_AMP;
	v->a[99341] = anon_sym_PIPE_PIPE;
	v->a[99342] = anon_sym_LT;
	v->a[99343] = anon_sym_GT;
	v->a[99344] = anon_sym_GT_GT;
	v->a[99345] = anon_sym_AMP_GT;
	v->a[99346] = anon_sym_AMP_GT_GT;
	v->a[99347] = anon_sym_LT_AMP;
	v->a[99348] = anon_sym_GT_AMP;
	v->a[99349] = anon_sym_GT_PIPE;
	v->a[99350] = anon_sym_LT_AMP_DASH;
	v->a[99351] = anon_sym_GT_AMP_DASH;
	v->a[99352] = anon_sym_LT_LT;
	v->a[99353] = anon_sym_LT_LT_DASH;
	v->a[99354] = anon_sym_AMP;
	v->a[99355] = aux_sym_concatenation_token1;
	v->a[99356] = anon_sym_SEMI;
	v->a[99357] = 6;
	v->a[99358] = actions(3);
	v->a[99359] = 1;
	small_parse_table_4968(v);
}

void	small_parse_table_4968(t_small_parse_table_array *v)
{
	v->a[99360] = sym_comment;
	v->a[99361] = actions(5267);
	v->a[99362] = 1;
	v->a[99363] = aux_sym_concatenation_token1;
	v->a[99364] = actions(5269);
	v->a[99365] = 1;
	v->a[99366] = sym__concat;
	v->a[99367] = state(2075);
	v->a[99368] = 1;
	v->a[99369] = aux_sym_concatenation_repeat1;
	v->a[99370] = actions(1182);
	v->a[99371] = 2;
	v->a[99372] = sym_file_descriptor;
	v->a[99373] = aux_sym_heredoc_redirect_token1;
	v->a[99374] = actions(1180);
	v->a[99375] = 20;
	v->a[99376] = anon_sym_PIPE;
	v->a[99377] = anon_sym_RPAREN;
	v->a[99378] = anon_sym_SEMI_SEMI;
	v->a[99379] = anon_sym_PIPE_AMP;
	small_parse_table_4969(v);
}

void	small_parse_table_4969(t_small_parse_table_array *v)
{
	v->a[99380] = anon_sym_AMP_AMP;
	v->a[99381] = anon_sym_PIPE_PIPE;
	v->a[99382] = anon_sym_LT;
	v->a[99383] = anon_sym_GT;
	v->a[99384] = anon_sym_GT_GT;
	v->a[99385] = anon_sym_AMP_GT;
	v->a[99386] = anon_sym_AMP_GT_GT;
	v->a[99387] = anon_sym_LT_AMP;
	v->a[99388] = anon_sym_GT_AMP;
	v->a[99389] = anon_sym_GT_PIPE;
	v->a[99390] = anon_sym_LT_AMP_DASH;
	v->a[99391] = anon_sym_GT_AMP_DASH;
	v->a[99392] = anon_sym_LT_LT;
	v->a[99393] = anon_sym_LT_LT_DASH;
	v->a[99394] = anon_sym_AMP;
	v->a[99395] = anon_sym_SEMI;
	v->a[99396] = 6;
	v->a[99397] = actions(3);
	v->a[99398] = 1;
	v->a[99399] = sym_comment;
	small_parse_table_4970(v);
}

/* EOF small_parse_table_993.c */
