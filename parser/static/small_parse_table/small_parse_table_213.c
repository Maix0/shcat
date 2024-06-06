/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_213.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1065(t_small_parse_table_array *v)
{
	v->a[21300] = anon_sym_LT_LT_DASH;
	v->a[21301] = 9;
	v->a[21302] = actions(3);
	v->a[21303] = 1;
	v->a[21304] = sym_comment;
	v->a[21305] = actions(2632);
	v->a[21306] = 1;
	v->a[21307] = aux_sym_heredoc_redirect_token1;
	v->a[21308] = actions(2962);
	v->a[21309] = 1;
	v->a[21310] = sym_variable_name;
	v->a[21311] = actions(2516);
	v->a[21312] = 2;
	v->a[21313] = anon_sym_PIPE;
	v->a[21314] = anon_sym_PIPE_AMP;
	v->a[21315] = state(2076);
	v->a[21316] = 2;
	v->a[21317] = sym_variable_assignment;
	v->a[21318] = aux_sym_variable_assignments_repeat1;
	v->a[21319] = actions(2526);
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = 3;
	v->a[21321] = sym_file_descriptor;
	v->a[21322] = sym_test_operator;
	v->a[21323] = sym__brace_start;
	v->a[21324] = state(2109);
	v->a[21325] = 3;
	v->a[21326] = sym_file_redirect;
	v->a[21327] = sym_heredoc_redirect;
	v->a[21328] = aux_sym_redirected_statement_repeat1;
	v->a[21329] = actions(2630);
	v->a[21330] = 8;
	v->a[21331] = anon_sym_RPAREN;
	v->a[21332] = anon_sym_SEMI_SEMI;
	v->a[21333] = anon_sym_AMP_AMP;
	v->a[21334] = anon_sym_PIPE_PIPE;
	v->a[21335] = anon_sym_LT_LT;
	v->a[21336] = anon_sym_LT_LT_DASH;
	v->a[21337] = anon_sym_AMP;
	v->a[21338] = anon_sym_SEMI;
	v->a[21339] = actions(2512);
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = 22;
	v->a[21341] = anon_sym_LT;
	v->a[21342] = anon_sym_GT;
	v->a[21343] = anon_sym_GT_GT;
	v->a[21344] = anon_sym_AMP_GT;
	v->a[21345] = anon_sym_AMP_GT_GT;
	v->a[21346] = anon_sym_LT_AMP;
	v->a[21347] = anon_sym_GT_AMP;
	v->a[21348] = anon_sym_GT_PIPE;
	v->a[21349] = anon_sym_LT_AMP_DASH;
	v->a[21350] = anon_sym_GT_AMP_DASH;
	v->a[21351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21352] = anon_sym_DOLLAR;
	v->a[21353] = sym__special_character;
	v->a[21354] = anon_sym_DQUOTE;
	v->a[21355] = sym_raw_string;
	v->a[21356] = aux_sym_number_token1;
	v->a[21357] = aux_sym_number_token2;
	v->a[21358] = anon_sym_DOLLAR_LBRACE;
	v->a[21359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = anon_sym_BQUOTE;
	v->a[21361] = anon_sym_DOLLAR_BQUOTE;
	v->a[21362] = sym_word;
	v->a[21363] = 8;
	v->a[21364] = actions(3);
	v->a[21365] = 1;
	v->a[21366] = sym_comment;
	v->a[21367] = actions(2962);
	v->a[21368] = 1;
	v->a[21369] = sym_variable_name;
	v->a[21370] = actions(2526);
	v->a[21371] = 2;
	v->a[21372] = sym_test_operator;
	v->a[21373] = sym__brace_start;
	v->a[21374] = actions(2638);
	v->a[21375] = 2;
	v->a[21376] = sym_file_descriptor;
	v->a[21377] = aux_sym_heredoc_redirect_token1;
	v->a[21378] = state(2076);
	v->a[21379] = 2;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = sym_variable_assignment;
	v->a[21381] = aux_sym_variable_assignments_repeat1;
	v->a[21382] = state(2109);
	v->a[21383] = 3;
	v->a[21384] = sym_file_redirect;
	v->a[21385] = sym_heredoc_redirect;
	v->a[21386] = aux_sym_redirected_statement_repeat1;
	v->a[21387] = actions(2512);
	v->a[21388] = 12;
	v->a[21389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21390] = anon_sym_DOLLAR;
	v->a[21391] = sym__special_character;
	v->a[21392] = anon_sym_DQUOTE;
	v->a[21393] = sym_raw_string;
	v->a[21394] = aux_sym_number_token1;
	v->a[21395] = aux_sym_number_token2;
	v->a[21396] = anon_sym_DOLLAR_LBRACE;
	v->a[21397] = anon_sym_DOLLAR_LPAREN;
	v->a[21398] = anon_sym_BQUOTE;
	v->a[21399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
