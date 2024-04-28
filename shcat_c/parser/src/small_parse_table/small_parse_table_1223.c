/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1223.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6115(t_small_parse_table_array *v)
{
	v->a[122300] = sym__concat;
	v->a[122301] = state(2297);
	v->a[122302] = 1;
	v->a[122303] = aux_sym_concatenation_repeat1;
	v->a[122304] = actions(5391);
	v->a[122305] = 5;
	v->a[122306] = sym_file_descriptor;
	v->a[122307] = sym_variable_name;
	v->a[122308] = sym_test_operator;
	v->a[122309] = sym__brace_start;
	v->a[122310] = aux_sym_heredoc_redirect_token1;
	v->a[122311] = actions(5389);
	v->a[122312] = 34;
	v->a[122313] = anon_sym_LPAREN_LPAREN;
	v->a[122314] = anon_sym_PIPE_PIPE;
	v->a[122315] = anon_sym_AMP_AMP;
	v->a[122316] = anon_sym_PIPE;
	v->a[122317] = anon_sym_LT;
	v->a[122318] = anon_sym_GT;
	v->a[122319] = anon_sym_LT_LT;
	small_parse_table_6116(v);
}

void	small_parse_table_6116(t_small_parse_table_array *v)
{
	v->a[122320] = anon_sym_GT_GT;
	v->a[122321] = anon_sym_PIPE_AMP;
	v->a[122322] = anon_sym_AMP_GT;
	v->a[122323] = anon_sym_AMP_GT_GT;
	v->a[122324] = anon_sym_LT_AMP;
	v->a[122325] = anon_sym_GT_AMP;
	v->a[122326] = anon_sym_GT_PIPE;
	v->a[122327] = anon_sym_LT_AMP_DASH;
	v->a[122328] = anon_sym_GT_AMP_DASH;
	v->a[122329] = anon_sym_LT_LT_DASH;
	v->a[122330] = anon_sym_LT_LT_LT;
	v->a[122331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122332] = anon_sym_DOLLAR_LBRACK;
	v->a[122333] = anon_sym_DOLLAR;
	v->a[122334] = sym__special_character;
	v->a[122335] = anon_sym_DQUOTE;
	v->a[122336] = sym_raw_string;
	v->a[122337] = sym_ansi_c_string;
	v->a[122338] = aux_sym_number_token1;
	v->a[122339] = aux_sym_number_token2;
	small_parse_table_6117(v);
}

void	small_parse_table_6117(t_small_parse_table_array *v)
{
	v->a[122340] = anon_sym_DOLLAR_LBRACE;
	v->a[122341] = anon_sym_DOLLAR_LPAREN;
	v->a[122342] = anon_sym_BQUOTE;
	v->a[122343] = anon_sym_DOLLAR_BQUOTE;
	v->a[122344] = anon_sym_LT_LPAREN;
	v->a[122345] = anon_sym_GT_LPAREN;
	v->a[122346] = sym_word;
	v->a[122347] = 3;
	v->a[122348] = actions(3);
	v->a[122349] = 1;
	v->a[122350] = sym_comment;
	v->a[122351] = actions(1263);
	v->a[122352] = 4;
	v->a[122353] = sym_file_descriptor;
	v->a[122354] = sym_test_operator;
	v->a[122355] = sym__brace_start;
	v->a[122356] = aux_sym_heredoc_redirect_token1;
	v->a[122357] = actions(1261);
	v->a[122358] = 38;
	v->a[122359] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6118(v);
}

void	small_parse_table_6118(t_small_parse_table_array *v)
{
	v->a[122360] = anon_sym_SEMI;
	v->a[122361] = anon_sym_PIPE_PIPE;
	v->a[122362] = anon_sym_AMP_AMP;
	v->a[122363] = anon_sym_PIPE;
	v->a[122364] = anon_sym_AMP;
	v->a[122365] = anon_sym_LT;
	v->a[122366] = anon_sym_GT;
	v->a[122367] = anon_sym_LT_LT;
	v->a[122368] = anon_sym_GT_GT;
	v->a[122369] = anon_sym_RPAREN;
	v->a[122370] = anon_sym_SEMI_SEMI;
	v->a[122371] = anon_sym_PIPE_AMP;
	v->a[122372] = anon_sym_AMP_GT;
	v->a[122373] = anon_sym_AMP_GT_GT;
	v->a[122374] = anon_sym_LT_AMP;
	v->a[122375] = anon_sym_GT_AMP;
	v->a[122376] = anon_sym_GT_PIPE;
	v->a[122377] = anon_sym_LT_AMP_DASH;
	v->a[122378] = anon_sym_GT_AMP_DASH;
	v->a[122379] = anon_sym_LT_LT_DASH;
	small_parse_table_6119(v);
}

void	small_parse_table_6119(t_small_parse_table_array *v)
{
	v->a[122380] = anon_sym_LT_LT_LT;
	v->a[122381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122382] = anon_sym_DOLLAR_LBRACK;
	v->a[122383] = anon_sym_DOLLAR;
	v->a[122384] = sym__special_character;
	v->a[122385] = anon_sym_DQUOTE;
	v->a[122386] = sym_raw_string;
	v->a[122387] = sym_ansi_c_string;
	v->a[122388] = aux_sym_number_token1;
	v->a[122389] = aux_sym_number_token2;
	v->a[122390] = anon_sym_DOLLAR_LBRACE;
	v->a[122391] = anon_sym_DOLLAR_LPAREN;
	v->a[122392] = anon_sym_BQUOTE;
	v->a[122393] = anon_sym_DOLLAR_BQUOTE;
	v->a[122394] = anon_sym_LT_LPAREN;
	v->a[122395] = anon_sym_GT_LPAREN;
	v->a[122396] = sym_word;
	v->a[122397] = 3;
	v->a[122398] = actions(71);
	v->a[122399] = 1;
	small_parse_table_6120(v);
}

/* EOF small_parse_table_1223.c */
