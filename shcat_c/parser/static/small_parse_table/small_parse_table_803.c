/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_803.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4015(t_small_parse_table_array *v)
{
	v->a[80300] = state(1704);
	v->a[80301] = 1;
	v->a[80302] = aux_sym_concatenation_repeat1;
	v->a[80303] = actions(1288);
	v->a[80304] = 4;
	v->a[80305] = sym_file_descriptor;
	v->a[80306] = sym_test_operator;
	v->a[80307] = sym__brace_start;
	v->a[80308] = aux_sym_heredoc_redirect_token1;
	v->a[80309] = actions(1286);
	v->a[80310] = 38;
	v->a[80311] = anon_sym_LPAREN_LPAREN;
	v->a[80312] = anon_sym_SEMI;
	v->a[80313] = anon_sym_PIPE_PIPE;
	v->a[80314] = anon_sym_AMP_AMP;
	v->a[80315] = anon_sym_PIPE;
	v->a[80316] = anon_sym_AMP;
	v->a[80317] = anon_sym_LT;
	v->a[80318] = anon_sym_GT;
	v->a[80319] = anon_sym_LT_LT;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = anon_sym_GT_GT;
	v->a[80321] = anon_sym_RPAREN;
	v->a[80322] = anon_sym_SEMI_SEMI;
	v->a[80323] = anon_sym_PIPE_AMP;
	v->a[80324] = anon_sym_AMP_GT;
	v->a[80325] = anon_sym_AMP_GT_GT;
	v->a[80326] = anon_sym_LT_AMP;
	v->a[80327] = anon_sym_GT_AMP;
	v->a[80328] = anon_sym_GT_PIPE;
	v->a[80329] = anon_sym_LT_AMP_DASH;
	v->a[80330] = anon_sym_GT_AMP_DASH;
	v->a[80331] = anon_sym_LT_LT_DASH;
	v->a[80332] = anon_sym_LT_LT_LT;
	v->a[80333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80334] = anon_sym_DOLLAR_LBRACK;
	v->a[80335] = anon_sym_DOLLAR;
	v->a[80336] = sym__special_character;
	v->a[80337] = anon_sym_DQUOTE;
	v->a[80338] = sym_raw_string;
	v->a[80339] = sym_ansi_c_string;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = aux_sym_number_token1;
	v->a[80341] = aux_sym_number_token2;
	v->a[80342] = anon_sym_DOLLAR_LBRACE;
	v->a[80343] = anon_sym_DOLLAR_LPAREN;
	v->a[80344] = anon_sym_BQUOTE;
	v->a[80345] = anon_sym_DOLLAR_BQUOTE;
	v->a[80346] = anon_sym_LT_LPAREN;
	v->a[80347] = anon_sym_GT_LPAREN;
	v->a[80348] = sym_word;
	v->a[80349] = 6;
	v->a[80350] = actions(3);
	v->a[80351] = 1;
	v->a[80352] = sym_comment;
	v->a[80353] = actions(5762);
	v->a[80354] = 1;
	v->a[80355] = aux_sym_concatenation_token1;
	v->a[80356] = actions(5789);
	v->a[80357] = 1;
	v->a[80358] = sym__concat;
	v->a[80359] = state(1528);
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = 1;
	v->a[80361] = aux_sym_concatenation_repeat1;
	v->a[80362] = actions(5478);
	v->a[80363] = 5;
	v->a[80364] = sym_file_descriptor;
	v->a[80365] = sym_test_operator;
	v->a[80366] = sym__brace_start;
	v->a[80367] = ts_builtin_sym_end;
	v->a[80368] = aux_sym_heredoc_redirect_token1;
	v->a[80369] = actions(5476);
	v->a[80370] = 37;
	v->a[80371] = anon_sym_LPAREN_LPAREN;
	v->a[80372] = anon_sym_SEMI;
	v->a[80373] = anon_sym_PIPE_PIPE;
	v->a[80374] = anon_sym_AMP_AMP;
	v->a[80375] = anon_sym_PIPE;
	v->a[80376] = anon_sym_AMP;
	v->a[80377] = anon_sym_LT;
	v->a[80378] = anon_sym_GT;
	v->a[80379] = anon_sym_LT_LT;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = anon_sym_GT_GT;
	v->a[80381] = anon_sym_SEMI_SEMI;
	v->a[80382] = anon_sym_PIPE_AMP;
	v->a[80383] = anon_sym_AMP_GT;
	v->a[80384] = anon_sym_AMP_GT_GT;
	v->a[80385] = anon_sym_LT_AMP;
	v->a[80386] = anon_sym_GT_AMP;
	v->a[80387] = anon_sym_GT_PIPE;
	v->a[80388] = anon_sym_LT_AMP_DASH;
	v->a[80389] = anon_sym_GT_AMP_DASH;
	v->a[80390] = anon_sym_LT_LT_DASH;
	v->a[80391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80392] = anon_sym_DOLLAR_LBRACK;
	v->a[80393] = anon_sym_DOLLAR;
	v->a[80394] = sym__special_character;
	v->a[80395] = anon_sym_DQUOTE;
	v->a[80396] = sym_raw_string;
	v->a[80397] = sym_ansi_c_string;
	v->a[80398] = aux_sym_number_token1;
	v->a[80399] = aux_sym_number_token2;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
