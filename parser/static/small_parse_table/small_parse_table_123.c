/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_123.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_615(t_small_parse_table_array *v)
{
	v->a[12300] = sym_concatenation;
	v->a[12301] = aux_sym_for_statement_repeat1;
	v->a[12302] = actions(1182);
	v->a[12303] = 5;
	v->a[12304] = sym_file_descriptor;
	v->a[12305] = sym_variable_name;
	v->a[12306] = sym_test_operator;
	v->a[12307] = sym__brace_start;
	v->a[12308] = aux_sym_heredoc_redirect_token1;
	v->a[12309] = state(1107);
	v->a[12310] = 7;
	v->a[12311] = sym_arithmetic_expansion;
	v->a[12312] = sym_brace_expression;
	v->a[12313] = sym_string;
	v->a[12314] = sym_number;
	v->a[12315] = sym_simple_expansion;
	v->a[12316] = sym_expansion;
	v->a[12317] = sym_command_substitution;
	v->a[12318] = actions(1180);
	v->a[12319] = 31;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = anon_sym_PIPE;
	v->a[12321] = anon_sym_SEMI_SEMI;
	v->a[12322] = anon_sym_PIPE_AMP;
	v->a[12323] = anon_sym_AMP_AMP;
	v->a[12324] = anon_sym_PIPE_PIPE;
	v->a[12325] = anon_sym_LT;
	v->a[12326] = anon_sym_GT;
	v->a[12327] = anon_sym_GT_GT;
	v->a[12328] = anon_sym_AMP_GT;
	v->a[12329] = anon_sym_AMP_GT_GT;
	v->a[12330] = anon_sym_LT_AMP;
	v->a[12331] = anon_sym_GT_AMP;
	v->a[12332] = anon_sym_GT_PIPE;
	v->a[12333] = anon_sym_LT_AMP_DASH;
	v->a[12334] = anon_sym_GT_AMP_DASH;
	v->a[12335] = anon_sym_LT_LT;
	v->a[12336] = anon_sym_LT_LT_DASH;
	v->a[12337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12338] = anon_sym_AMP;
	v->a[12339] = anon_sym_DOLLAR;
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = sym__special_character;
	v->a[12341] = anon_sym_DQUOTE;
	v->a[12342] = sym_raw_string;
	v->a[12343] = aux_sym_number_token1;
	v->a[12344] = aux_sym_number_token2;
	v->a[12345] = anon_sym_DOLLAR_LBRACE;
	v->a[12346] = anon_sym_DOLLAR_LPAREN;
	v->a[12347] = anon_sym_BQUOTE;
	v->a[12348] = anon_sym_DOLLAR_BQUOTE;
	v->a[12349] = sym_word;
	v->a[12350] = anon_sym_SEMI;
	v->a[12351] = 19;
	v->a[12352] = actions(3);
	v->a[12353] = 1;
	v->a[12354] = sym_comment;
	v->a[12355] = actions(2152);
	v->a[12356] = 1;
	v->a[12357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12358] = actions(2154);
	v->a[12359] = 1;
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = anon_sym_DOLLAR;
	v->a[12361] = actions(2156);
	v->a[12362] = 1;
	v->a[12363] = sym__special_character;
	v->a[12364] = actions(2158);
	v->a[12365] = 1;
	v->a[12366] = anon_sym_DQUOTE;
	v->a[12367] = actions(2160);
	v->a[12368] = 1;
	v->a[12369] = aux_sym_number_token1;
	v->a[12370] = actions(2162);
	v->a[12371] = 1;
	v->a[12372] = aux_sym_number_token2;
	v->a[12373] = actions(2164);
	v->a[12374] = 1;
	v->a[12375] = anon_sym_DOLLAR_LBRACE;
	v->a[12376] = actions(2166);
	v->a[12377] = 1;
	v->a[12378] = anon_sym_DOLLAR_LPAREN;
	v->a[12379] = actions(2168);
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = 1;
	v->a[12381] = anon_sym_BQUOTE;
	v->a[12382] = actions(2170);
	v->a[12383] = 1;
	v->a[12384] = anon_sym_DOLLAR_BQUOTE;
	v->a[12385] = actions(2172);
	v->a[12386] = 1;
	v->a[12387] = sym_test_operator;
	v->a[12388] = actions(2174);
	v->a[12389] = 1;
	v->a[12390] = sym__brace_start;
	v->a[12391] = state(1270);
	v->a[12392] = 1;
	v->a[12393] = aux_sym__literal_repeat1;
	v->a[12394] = actions(1390);
	v->a[12395] = 2;
	v->a[12396] = sym_file_descriptor;
	v->a[12397] = aux_sym_heredoc_redirect_token1;
	v->a[12398] = actions(2150);
	v->a[12399] = 2;
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
