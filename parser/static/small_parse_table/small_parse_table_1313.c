/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1313.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6565(t_small_parse_table_array *v)
{
	v->a[131300] = sym__special_character;
	v->a[131301] = anon_sym_DQUOTE;
	v->a[131302] = sym_raw_string;
	v->a[131303] = anon_sym_DOLLAR_LBRACE;
	v->a[131304] = anon_sym_BQUOTE;
	v->a[131305] = anon_sym_DOLLAR_BQUOTE;
	v->a[131306] = 7;
	v->a[131307] = actions(3);
	v->a[131308] = 1;
	v->a[131309] = sym_comment;
	v->a[131310] = actions(5281);
	v->a[131311] = 1;
	v->a[131312] = aux_sym_heredoc_redirect_token1;
	v->a[131313] = actions(7513);
	v->a[131314] = 1;
	v->a[131315] = sym_file_descriptor;
	v->a[131316] = actions(5273);
	v->a[131317] = 2;
	v->a[131318] = anon_sym_AMP_AMP;
	v->a[131319] = anon_sym_PIPE_PIPE;
	small_parse_table_6566(v);
}

void	small_parse_table_6566(t_small_parse_table_array *v)
{
	v->a[131320] = actions(7510);
	v->a[131321] = 2;
	v->a[131322] = anon_sym_LT_AMP_DASH;
	v->a[131323] = anon_sym_GT_AMP_DASH;
	v->a[131324] = state(2874);
	v->a[131325] = 2;
	v->a[131326] = sym_file_redirect;
	v->a[131327] = aux_sym_redirected_statement_repeat2;
	v->a[131328] = actions(7507);
	v->a[131329] = 8;
	v->a[131330] = anon_sym_LT;
	v->a[131331] = anon_sym_GT;
	v->a[131332] = anon_sym_GT_GT;
	v->a[131333] = anon_sym_AMP_GT;
	v->a[131334] = anon_sym_AMP_GT_GT;
	v->a[131335] = anon_sym_LT_AMP;
	v->a[131336] = anon_sym_GT_AMP;
	v->a[131337] = anon_sym_GT_PIPE;
	v->a[131338] = 3;
	v->a[131339] = actions(57);
	small_parse_table_6567(v);
}

void	small_parse_table_6567(t_small_parse_table_array *v)
{
	v->a[131340] = 1;
	v->a[131341] = sym_comment;
	v->a[131342] = actions(7516);
	v->a[131343] = 5;
	v->a[131344] = anon_sym_DOLLAR;
	v->a[131345] = aux_sym_number_token1;
	v->a[131346] = aux_sym_number_token2;
	v->a[131347] = anon_sym_DOLLAR_LPAREN;
	v->a[131348] = sym_word;
	v->a[131349] = actions(7518);
	v->a[131350] = 11;
	v->a[131351] = sym_test_operator;
	v->a[131352] = sym_extglob_pattern;
	v->a[131353] = sym__brace_start;
	v->a[131354] = anon_sym_LPAREN;
	v->a[131355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131356] = sym__special_character;
	v->a[131357] = anon_sym_DQUOTE;
	v->a[131358] = sym_raw_string;
	v->a[131359] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6568(v);
}

void	small_parse_table_6568(t_small_parse_table_array *v)
{
	v->a[131360] = anon_sym_BQUOTE;
	v->a[131361] = anon_sym_DOLLAR_BQUOTE;
	v->a[131362] = 3;
	v->a[131363] = actions(3);
	v->a[131364] = 1;
	v->a[131365] = sym_comment;
	v->a[131366] = actions(2828);
	v->a[131367] = 3;
	v->a[131368] = sym_file_descriptor;
	v->a[131369] = sym__concat;
	v->a[131370] = aux_sym_heredoc_redirect_token1;
	v->a[131371] = actions(2826);
	v->a[131372] = 13;
	v->a[131373] = anon_sym_AMP_AMP;
	v->a[131374] = anon_sym_PIPE_PIPE;
	v->a[131375] = anon_sym_LT;
	v->a[131376] = anon_sym_GT;
	v->a[131377] = anon_sym_GT_GT;
	v->a[131378] = anon_sym_AMP_GT;
	v->a[131379] = anon_sym_AMP_GT_GT;
	small_parse_table_6569(v);
}

void	small_parse_table_6569(t_small_parse_table_array *v)
{
	v->a[131380] = anon_sym_LT_AMP;
	v->a[131381] = anon_sym_GT_AMP;
	v->a[131382] = anon_sym_GT_PIPE;
	v->a[131383] = anon_sym_LT_AMP_DASH;
	v->a[131384] = anon_sym_GT_AMP_DASH;
	v->a[131385] = aux_sym_concatenation_token1;
	v->a[131386] = 3;
	v->a[131387] = actions(57);
	v->a[131388] = 1;
	v->a[131389] = sym_comment;
	v->a[131390] = actions(7479);
	v->a[131391] = 5;
	v->a[131392] = anon_sym_DOLLAR;
	v->a[131393] = aux_sym_number_token1;
	v->a[131394] = aux_sym_number_token2;
	v->a[131395] = anon_sym_DOLLAR_LPAREN;
	v->a[131396] = sym_word;
	v->a[131397] = actions(7481);
	v->a[131398] = 11;
	v->a[131399] = sym_test_operator;
	small_parse_table_6570(v);
}

/* EOF small_parse_table_1313.c */
