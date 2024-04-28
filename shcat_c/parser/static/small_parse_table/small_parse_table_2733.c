/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2733.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13665(t_small_parse_table_array *v)
{
	v->a[273300] = aux_sym_number_token1;
	v->a[273301] = aux_sym_number_token2;
	v->a[273302] = anon_sym_DOLLAR_LPAREN;
	v->a[273303] = anon_sym_BQUOTE;
	v->a[273304] = sym_word;
	v->a[273305] = actions(1267);
	v->a[273306] = 14;
	v->a[273307] = sym_test_operator;
	v->a[273308] = sym__brace_start;
	v->a[273309] = anon_sym_LPAREN_LPAREN;
	v->a[273310] = anon_sym_RPAREN;
	v->a[273311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[273312] = anon_sym_DOLLAR_LBRACK;
	v->a[273313] = sym__special_character;
	v->a[273314] = anon_sym_DQUOTE;
	v->a[273315] = sym_raw_string;
	v->a[273316] = sym_ansi_c_string;
	v->a[273317] = anon_sym_DOLLAR_LBRACE;
	v->a[273318] = anon_sym_DOLLAR_BQUOTE;
	v->a[273319] = anon_sym_LT_LPAREN;
	small_parse_table_13666(v);
}

void	small_parse_table_13666(t_small_parse_table_array *v)
{
	v->a[273320] = anon_sym_GT_LPAREN;
	v->a[273321] = 3;
	v->a[273322] = actions(3);
	v->a[273323] = 1;
	v->a[273324] = sym_comment;
	v->a[273325] = actions(12209);
	v->a[273326] = 2;
	v->a[273327] = sym_file_descriptor;
	v->a[273328] = aux_sym_heredoc_redirect_token1;
	v->a[273329] = actions(12211);
	v->a[273330] = 21;
	v->a[273331] = anon_sym_SEMI;
	v->a[273332] = anon_sym_PIPE_PIPE;
	v->a[273333] = anon_sym_AMP_AMP;
	v->a[273334] = anon_sym_PIPE;
	v->a[273335] = anon_sym_AMP;
	v->a[273336] = anon_sym_LT;
	v->a[273337] = anon_sym_GT;
	v->a[273338] = anon_sym_LT_LT;
	v->a[273339] = anon_sym_GT_GT;
	small_parse_table_13667(v);
}

void	small_parse_table_13667(t_small_parse_table_array *v)
{
	v->a[273340] = anon_sym_SEMI_SEMI;
	v->a[273341] = anon_sym_SEMI_AMP;
	v->a[273342] = anon_sym_SEMI_SEMI_AMP;
	v->a[273343] = anon_sym_PIPE_AMP;
	v->a[273344] = anon_sym_AMP_GT;
	v->a[273345] = anon_sym_AMP_GT_GT;
	v->a[273346] = anon_sym_LT_AMP;
	v->a[273347] = anon_sym_GT_AMP;
	v->a[273348] = anon_sym_GT_PIPE;
	v->a[273349] = anon_sym_LT_AMP_DASH;
	v->a[273350] = anon_sym_GT_AMP_DASH;
	v->a[273351] = anon_sym_LT_LT_DASH;
	v->a[273352] = 3;
	v->a[273353] = actions(3);
	v->a[273354] = 1;
	v->a[273355] = sym_comment;
	v->a[273356] = actions(12107);
	v->a[273357] = 2;
	v->a[273358] = sym_file_descriptor;
	v->a[273359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13668(v);
}

void	small_parse_table_13668(t_small_parse_table_array *v)
{
	v->a[273360] = actions(12105);
	v->a[273361] = 21;
	v->a[273362] = anon_sym_SEMI;
	v->a[273363] = anon_sym_PIPE_PIPE;
	v->a[273364] = anon_sym_AMP_AMP;
	v->a[273365] = anon_sym_PIPE;
	v->a[273366] = anon_sym_AMP;
	v->a[273367] = anon_sym_LT;
	v->a[273368] = anon_sym_GT;
	v->a[273369] = anon_sym_LT_LT;
	v->a[273370] = anon_sym_GT_GT;
	v->a[273371] = anon_sym_SEMI_SEMI;
	v->a[273372] = anon_sym_SEMI_AMP;
	v->a[273373] = anon_sym_SEMI_SEMI_AMP;
	v->a[273374] = anon_sym_PIPE_AMP;
	v->a[273375] = anon_sym_AMP_GT;
	v->a[273376] = anon_sym_AMP_GT_GT;
	v->a[273377] = anon_sym_LT_AMP;
	v->a[273378] = anon_sym_GT_AMP;
	v->a[273379] = anon_sym_GT_PIPE;
	small_parse_table_13669(v);
}

void	small_parse_table_13669(t_small_parse_table_array *v)
{
	v->a[273380] = anon_sym_LT_AMP_DASH;
	v->a[273381] = anon_sym_GT_AMP_DASH;
	v->a[273382] = anon_sym_LT_LT_DASH;
	v->a[273383] = 3;
	v->a[273384] = actions(3);
	v->a[273385] = 1;
	v->a[273386] = sym_comment;
	v->a[273387] = actions(12107);
	v->a[273388] = 2;
	v->a[273389] = sym_file_descriptor;
	v->a[273390] = aux_sym_heredoc_redirect_token1;
	v->a[273391] = actions(12105);
	v->a[273392] = 21;
	v->a[273393] = anon_sym_SEMI;
	v->a[273394] = anon_sym_PIPE_PIPE;
	v->a[273395] = anon_sym_AMP_AMP;
	v->a[273396] = anon_sym_PIPE;
	v->a[273397] = anon_sym_AMP;
	v->a[273398] = anon_sym_LT;
	v->a[273399] = anon_sym_GT;
	small_parse_table_13670(v);
}

/* EOF small_parse_table_2733.c */
