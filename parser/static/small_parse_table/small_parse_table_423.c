/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_423.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2115(t_small_parse_table_array *v)
{
	v->a[42300] = anon_sym_LPAREN_LPAREN;
	v->a[42301] = anon_sym_SEMI;
	v->a[42302] = anon_sym_PIPE_PIPE;
	v->a[42303] = anon_sym_AMP_AMP;
	v->a[42304] = anon_sym_PIPE;
	v->a[42305] = anon_sym_AMP;
	v->a[42306] = anon_sym_EQ_EQ;
	v->a[42307] = anon_sym_LT;
	v->a[42308] = anon_sym_GT;
	v->a[42309] = anon_sym_LT_LT;
	v->a[42310] = anon_sym_GT_GT;
	v->a[42311] = anon_sym_SEMI_SEMI;
	v->a[42312] = anon_sym_PIPE_AMP;
	v->a[42313] = anon_sym_EQ_TILDE;
	v->a[42314] = anon_sym_AMP_GT;
	v->a[42315] = anon_sym_AMP_GT_GT;
	v->a[42316] = anon_sym_LT_AMP;
	v->a[42317] = anon_sym_GT_AMP;
	v->a[42318] = anon_sym_GT_PIPE;
	v->a[42319] = anon_sym_LT_AMP_DASH;
	small_parse_table_2116(v);
}

void	small_parse_table_2116(t_small_parse_table_array *v)
{
	v->a[42320] = anon_sym_GT_AMP_DASH;
	v->a[42321] = anon_sym_LT_LT_DASH;
	v->a[42322] = anon_sym_LT_LT_LT;
	v->a[42323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42324] = anon_sym_DOLLAR_LBRACK;
	v->a[42325] = anon_sym_DOLLAR;
	v->a[42326] = sym__special_character;
	v->a[42327] = anon_sym_DQUOTE;
	v->a[42328] = sym_raw_string;
	v->a[42329] = sym_ansi_c_string;
	v->a[42330] = aux_sym_number_token1;
	v->a[42331] = aux_sym_number_token2;
	v->a[42332] = anon_sym_DOLLAR_LBRACE;
	v->a[42333] = anon_sym_DOLLAR_LPAREN;
	v->a[42334] = anon_sym_BQUOTE;
	v->a[42335] = anon_sym_DOLLAR_BQUOTE;
	v->a[42336] = anon_sym_LT_LPAREN;
	v->a[42337] = anon_sym_GT_LPAREN;
	v->a[42338] = sym_word;
	v->a[42339] = 3;
	small_parse_table_2117(v);
}

void	small_parse_table_2117(t_small_parse_table_array *v)
{
	v->a[42340] = actions(3);
	v->a[42341] = 1;
	v->a[42342] = sym_comment;
	v->a[42343] = actions(1310);
	v->a[42344] = 7;
	v->a[42345] = sym_file_descriptor;
	v->a[42346] = sym__concat;
	v->a[42347] = sym_test_operator;
	v->a[42348] = sym__bare_dollar;
	v->a[42349] = sym__brace_start;
	v->a[42350] = ts_builtin_sym_end;
	v->a[42351] = aux_sym_heredoc_redirect_token1;
	v->a[42352] = actions(1308);
	v->a[42353] = 41;
	v->a[42354] = anon_sym_LPAREN_LPAREN;
	v->a[42355] = anon_sym_SEMI;
	v->a[42356] = anon_sym_PIPE_PIPE;
	v->a[42357] = anon_sym_AMP_AMP;
	v->a[42358] = anon_sym_PIPE;
	v->a[42359] = anon_sym_AMP;
	small_parse_table_2118(v);
}

void	small_parse_table_2118(t_small_parse_table_array *v)
{
	v->a[42360] = anon_sym_EQ_EQ;
	v->a[42361] = anon_sym_LT;
	v->a[42362] = anon_sym_GT;
	v->a[42363] = anon_sym_LT_LT;
	v->a[42364] = anon_sym_GT_GT;
	v->a[42365] = anon_sym_LPAREN;
	v->a[42366] = anon_sym_SEMI_SEMI;
	v->a[42367] = anon_sym_PIPE_AMP;
	v->a[42368] = anon_sym_EQ_TILDE;
	v->a[42369] = anon_sym_AMP_GT;
	v->a[42370] = anon_sym_AMP_GT_GT;
	v->a[42371] = anon_sym_LT_AMP;
	v->a[42372] = anon_sym_GT_AMP;
	v->a[42373] = anon_sym_GT_PIPE;
	v->a[42374] = anon_sym_LT_AMP_DASH;
	v->a[42375] = anon_sym_GT_AMP_DASH;
	v->a[42376] = anon_sym_LT_LT_DASH;
	v->a[42377] = anon_sym_LT_LT_LT;
	v->a[42378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42379] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2119(v);
}

void	small_parse_table_2119(t_small_parse_table_array *v)
{
	v->a[42380] = aux_sym_concatenation_token1;
	v->a[42381] = anon_sym_DOLLAR;
	v->a[42382] = sym__special_character;
	v->a[42383] = anon_sym_DQUOTE;
	v->a[42384] = sym_raw_string;
	v->a[42385] = sym_ansi_c_string;
	v->a[42386] = aux_sym_number_token1;
	v->a[42387] = aux_sym_number_token2;
	v->a[42388] = anon_sym_DOLLAR_LBRACE;
	v->a[42389] = anon_sym_DOLLAR_LPAREN;
	v->a[42390] = anon_sym_BQUOTE;
	v->a[42391] = anon_sym_DOLLAR_BQUOTE;
	v->a[42392] = anon_sym_LT_LPAREN;
	v->a[42393] = anon_sym_GT_LPAREN;
	v->a[42394] = sym_word;
	v->a[42395] = 3;
	v->a[42396] = actions(3);
	v->a[42397] = 1;
	v->a[42398] = sym_comment;
	v->a[42399] = actions(1306);
	small_parse_table_2120(v);
}

/* EOF small_parse_table_423.c */
