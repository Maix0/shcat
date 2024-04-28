/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_383.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1915(t_small_parse_table_array *v)
{
	v->a[38300] = sym_string;
	v->a[38301] = sym_translated_string;
	v->a[38302] = sym_number;
	v->a[38303] = sym_simple_expansion;
	v->a[38304] = sym_expansion;
	v->a[38305] = sym_command_substitution;
	v->a[38306] = sym_process_substitution;
	v->a[38307] = actions(2442);
	v->a[38308] = 10;
	v->a[38309] = sym_file_descriptor;
	v->a[38310] = anon_sym_PIPE_PIPE;
	v->a[38311] = anon_sym_AMP_AMP;
	v->a[38312] = anon_sym_GT_GT;
	v->a[38313] = anon_sym_PIPE_AMP;
	v->a[38314] = anon_sym_AMP_GT_GT;
	v->a[38315] = anon_sym_GT_PIPE;
	v->a[38316] = anon_sym_LT_AMP_DASH;
	v->a[38317] = anon_sym_GT_AMP_DASH;
	v->a[38318] = anon_sym_LT_LT_DASH;
	v->a[38319] = 3;
	small_parse_table_1916(v);
}

void	small_parse_table_1916(t_small_parse_table_array *v)
{
	v->a[38320] = actions(3);
	v->a[38321] = 1;
	v->a[38322] = sym_comment;
	v->a[38323] = actions(1294);
	v->a[38324] = 6;
	v->a[38325] = sym_file_descriptor;
	v->a[38326] = sym__concat;
	v->a[38327] = sym_test_operator;
	v->a[38328] = sym__bare_dollar;
	v->a[38329] = sym__brace_start;
	v->a[38330] = aux_sym_heredoc_redirect_token1;
	v->a[38331] = actions(1292);
	v->a[38332] = 43;
	v->a[38333] = anon_sym_LPAREN_LPAREN;
	v->a[38334] = anon_sym_SEMI;
	v->a[38335] = anon_sym_PIPE_PIPE;
	v->a[38336] = anon_sym_AMP_AMP;
	v->a[38337] = anon_sym_PIPE;
	v->a[38338] = anon_sym_AMP;
	v->a[38339] = anon_sym_EQ_EQ;
	small_parse_table_1917(v);
}

void	small_parse_table_1917(t_small_parse_table_array *v)
{
	v->a[38340] = anon_sym_LT;
	v->a[38341] = anon_sym_GT;
	v->a[38342] = anon_sym_LT_LT;
	v->a[38343] = anon_sym_GT_GT;
	v->a[38344] = anon_sym_LPAREN;
	v->a[38345] = anon_sym_SEMI_SEMI;
	v->a[38346] = anon_sym_SEMI_AMP;
	v->a[38347] = anon_sym_SEMI_SEMI_AMP;
	v->a[38348] = anon_sym_PIPE_AMP;
	v->a[38349] = anon_sym_EQ_TILDE;
	v->a[38350] = anon_sym_AMP_GT;
	v->a[38351] = anon_sym_AMP_GT_GT;
	v->a[38352] = anon_sym_LT_AMP;
	v->a[38353] = anon_sym_GT_AMP;
	v->a[38354] = anon_sym_GT_PIPE;
	v->a[38355] = anon_sym_LT_AMP_DASH;
	v->a[38356] = anon_sym_GT_AMP_DASH;
	v->a[38357] = anon_sym_LT_LT_DASH;
	v->a[38358] = anon_sym_LT_LT_LT;
	v->a[38359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1918(v);
}

void	small_parse_table_1918(t_small_parse_table_array *v)
{
	v->a[38360] = anon_sym_DOLLAR_LBRACK;
	v->a[38361] = aux_sym_concatenation_token1;
	v->a[38362] = anon_sym_DOLLAR;
	v->a[38363] = sym__special_character;
	v->a[38364] = anon_sym_DQUOTE;
	v->a[38365] = sym_raw_string;
	v->a[38366] = sym_ansi_c_string;
	v->a[38367] = aux_sym_number_token1;
	v->a[38368] = aux_sym_number_token2;
	v->a[38369] = anon_sym_DOLLAR_LBRACE;
	v->a[38370] = anon_sym_DOLLAR_LPAREN;
	v->a[38371] = anon_sym_BQUOTE;
	v->a[38372] = anon_sym_DOLLAR_BQUOTE;
	v->a[38373] = anon_sym_LT_LPAREN;
	v->a[38374] = anon_sym_GT_LPAREN;
	v->a[38375] = sym_word;
	v->a[38376] = 22;
	v->a[38377] = actions(71);
	v->a[38378] = 1;
	v->a[38379] = sym_comment;
	small_parse_table_1919(v);
}

void	small_parse_table_1919(t_small_parse_table_array *v)
{
	v->a[38380] = actions(4943);
	v->a[38381] = 1;
	v->a[38382] = sym_word;
	v->a[38383] = actions(4947);
	v->a[38384] = 1;
	v->a[38385] = anon_sym_DOLLAR_LBRACK;
	v->a[38386] = actions(4949);
	v->a[38387] = 1;
	v->a[38388] = anon_sym_DOLLAR;
	v->a[38389] = actions(4951);
	v->a[38390] = 1;
	v->a[38391] = sym__special_character;
	v->a[38392] = actions(4953);
	v->a[38393] = 1;
	v->a[38394] = anon_sym_DQUOTE;
	v->a[38395] = actions(4957);
	v->a[38396] = 1;
	v->a[38397] = aux_sym_number_token1;
	v->a[38398] = actions(4959);
	v->a[38399] = 1;
	small_parse_table_1920(v);
}

/* EOF small_parse_table_383.c */
