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
	v->a[80300] = anon_sym_LT_LT;
	v->a[80301] = anon_sym_DOLLAR;
	v->a[80302] = aux_sym_number_token1;
	v->a[80303] = aux_sym_number_token2;
	v->a[80304] = anon_sym_DOLLAR_LPAREN;
	v->a[80305] = sym_word;
	v->a[80306] = actions(2664);
	v->a[80307] = 19;
	v->a[80308] = sym_file_descriptor;
	v->a[80309] = sym_test_operator;
	v->a[80310] = sym__brace_start;
	v->a[80311] = anon_sym_PIPE_AMP;
	v->a[80312] = anon_sym_AMP_AMP;
	v->a[80313] = anon_sym_PIPE_PIPE;
	v->a[80314] = anon_sym_GT_GT;
	v->a[80315] = anon_sym_AMP_GT_GT;
	v->a[80316] = anon_sym_GT_PIPE;
	v->a[80317] = anon_sym_LT_AMP_DASH;
	v->a[80318] = anon_sym_GT_AMP_DASH;
	v->a[80319] = anon_sym_LT_LT_DASH;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80321] = sym__special_character;
	v->a[80322] = anon_sym_DQUOTE;
	v->a[80323] = sym_raw_string;
	v->a[80324] = anon_sym_DOLLAR_LBRACE;
	v->a[80325] = anon_sym_BQUOTE;
	v->a[80326] = anon_sym_DOLLAR_BQUOTE;
	v->a[80327] = 6;
	v->a[80328] = actions(3);
	v->a[80329] = 1;
	v->a[80330] = sym_comment;
	v->a[80331] = actions(828);
	v->a[80332] = 1;
	v->a[80333] = sym_file_descriptor;
	v->a[80334] = actions(4324);
	v->a[80335] = 1;
	v->a[80336] = sym_variable_name;
	v->a[80337] = actions(4322);
	v->a[80338] = 2;
	v->a[80339] = aux_sym__simple_variable_name_token1;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = aux_sym__multiline_variable_name_token1;
	v->a[80341] = actions(4320);
	v->a[80342] = 9;
	v->a[80343] = anon_sym_BANG;
	v->a[80344] = anon_sym_DASH;
	v->a[80345] = anon_sym_STAR;
	v->a[80346] = anon_sym_QMARK;
	v->a[80347] = anon_sym_DOLLAR;
	v->a[80348] = anon_sym_POUND;
	v->a[80349] = anon_sym_AT;
	v->a[80350] = anon_sym_0;
	v->a[80351] = anon_sym__;
	v->a[80352] = actions(826);
	v->a[80353] = 17;
	v->a[80354] = anon_sym_PIPE;
	v->a[80355] = anon_sym_PIPE_AMP;
	v->a[80356] = anon_sym_AMP_AMP;
	v->a[80357] = anon_sym_PIPE_PIPE;
	v->a[80358] = anon_sym_LT;
	v->a[80359] = anon_sym_GT;
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = anon_sym_GT_GT;
	v->a[80361] = anon_sym_AMP_GT;
	v->a[80362] = anon_sym_AMP_GT_GT;
	v->a[80363] = anon_sym_LT_AMP;
	v->a[80364] = anon_sym_GT_AMP;
	v->a[80365] = anon_sym_GT_PIPE;
	v->a[80366] = anon_sym_LT_AMP_DASH;
	v->a[80367] = anon_sym_GT_AMP_DASH;
	v->a[80368] = anon_sym_LT_LT;
	v->a[80369] = anon_sym_LT_LT_DASH;
	v->a[80370] = aux_sym_heredoc_redirect_token1;
	v->a[80371] = 3;
	v->a[80372] = actions(3);
	v->a[80373] = 1;
	v->a[80374] = sym_comment;
	v->a[80375] = actions(2908);
	v->a[80376] = 5;
	v->a[80377] = sym_file_descriptor;
	v->a[80378] = sym__concat;
	v->a[80379] = sym_test_operator;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = sym__brace_start;
	v->a[80381] = aux_sym_heredoc_redirect_token1;
	v->a[80382] = actions(2906);
	v->a[80383] = 25;
	v->a[80384] = anon_sym_AMP_AMP;
	v->a[80385] = anon_sym_PIPE_PIPE;
	v->a[80386] = anon_sym_LT;
	v->a[80387] = anon_sym_GT;
	v->a[80388] = anon_sym_GT_GT;
	v->a[80389] = anon_sym_AMP_GT;
	v->a[80390] = anon_sym_AMP_GT_GT;
	v->a[80391] = anon_sym_LT_AMP;
	v->a[80392] = anon_sym_GT_AMP;
	v->a[80393] = anon_sym_GT_PIPE;
	v->a[80394] = anon_sym_LT_AMP_DASH;
	v->a[80395] = anon_sym_GT_AMP_DASH;
	v->a[80396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80397] = aux_sym_concatenation_token1;
	v->a[80398] = anon_sym_DOLLAR;
	v->a[80399] = sym__special_character;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
