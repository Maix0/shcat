/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1023.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5115(t_small_parse_table_array *v)
{
	v->a[102300] = anon_sym_LT_AMP_DASH;
	v->a[102301] = anon_sym_GT_AMP_DASH;
	v->a[102302] = state(2148);
	v->a[102303] = 3;
	v->a[102304] = sym_file_redirect;
	v->a[102305] = sym_heredoc_redirect;
	v->a[102306] = aux_sym_redirected_statement_repeat1;
	v->a[102307] = actions(5151);
	v->a[102308] = 7;
	v->a[102309] = anon_sym_PIPE;
	v->a[102310] = anon_sym_SEMI_SEMI;
	v->a[102311] = anon_sym_PIPE_AMP;
	v->a[102312] = anon_sym_AMP_AMP;
	v->a[102313] = anon_sym_PIPE_PIPE;
	v->a[102314] = anon_sym_AMP;
	v->a[102315] = anon_sym_SEMI;
	v->a[102316] = actions(5600);
	v->a[102317] = 8;
	v->a[102318] = anon_sym_LT;
	v->a[102319] = anon_sym_GT;
	small_parse_table_5116(v);
}

void	small_parse_table_5116(t_small_parse_table_array *v)
{
	v->a[102320] = anon_sym_GT_GT;
	v->a[102321] = anon_sym_AMP_GT;
	v->a[102322] = anon_sym_AMP_GT_GT;
	v->a[102323] = anon_sym_LT_AMP;
	v->a[102324] = anon_sym_GT_AMP;
	v->a[102325] = anon_sym_GT_PIPE;
	v->a[102326] = 19;
	v->a[102327] = actions(3);
	v->a[102328] = 1;
	v->a[102329] = sym_comment;
	v->a[102330] = actions(1011);
	v->a[102331] = 1;
	v->a[102332] = anon_sym_DOLLAR;
	v->a[102333] = actions(1017);
	v->a[102334] = 1;
	v->a[102335] = aux_sym_number_token1;
	v->a[102336] = actions(1019);
	v->a[102337] = 1;
	v->a[102338] = aux_sym_number_token2;
	v->a[102339] = actions(1023);
	small_parse_table_5117(v);
}

void	small_parse_table_5117(t_small_parse_table_array *v)
{
	v->a[102340] = 1;
	v->a[102341] = anon_sym_DOLLAR_LPAREN;
	v->a[102342] = actions(1035);
	v->a[102343] = 1;
	v->a[102344] = sym__brace_start;
	v->a[102345] = actions(5763);
	v->a[102346] = 1;
	v->a[102347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102348] = actions(5767);
	v->a[102349] = 1;
	v->a[102350] = anon_sym_DQUOTE;
	v->a[102351] = actions(5771);
	v->a[102352] = 1;
	v->a[102353] = anon_sym_DOLLAR_LBRACE;
	v->a[102354] = actions(5773);
	v->a[102355] = 1;
	v->a[102356] = anon_sym_BQUOTE;
	v->a[102357] = actions(5775);
	v->a[102358] = 1;
	v->a[102359] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5118(v);
}

void	small_parse_table_5118(t_small_parse_table_array *v)
{
	v->a[102360] = actions(5777);
	v->a[102361] = 1;
	v->a[102362] = sym__comment_word;
	v->a[102363] = actions(5779);
	v->a[102364] = 1;
	v->a[102365] = sym__empty_value;
	v->a[102366] = actions(5917);
	v->a[102367] = 1;
	v->a[102368] = sym_word;
	v->a[102369] = actions(5919);
	v->a[102370] = 1;
	v->a[102371] = sym__special_character;
	v->a[102372] = state(1117);
	v->a[102373] = 1;
	v->a[102374] = aux_sym__literal_repeat1;
	v->a[102375] = state(1238);
	v->a[102376] = 1;
	v->a[102377] = sym_concatenation;
	v->a[102378] = actions(5921);
	v->a[102379] = 2;
	small_parse_table_5119(v);
}

void	small_parse_table_5119(t_small_parse_table_array *v)
{
	v->a[102380] = sym_test_operator;
	v->a[102381] = sym_raw_string;
	v->a[102382] = state(898);
	v->a[102383] = 7;
	v->a[102384] = sym_arithmetic_expansion;
	v->a[102385] = sym_brace_expression;
	v->a[102386] = sym_string;
	v->a[102387] = sym_number;
	v->a[102388] = sym_simple_expansion;
	v->a[102389] = sym_expansion;
	v->a[102390] = sym_command_substitution;
	v->a[102391] = 6;
	v->a[102392] = actions(3);
	v->a[102393] = 1;
	v->a[102394] = sym_comment;
	v->a[102395] = actions(5161);
	v->a[102396] = 1;
	v->a[102397] = aux_sym_concatenation_token1;
	v->a[102398] = actions(5923);
	v->a[102399] = 1;
	small_parse_table_5120(v);
}

/* EOF small_parse_table_1023.c */
