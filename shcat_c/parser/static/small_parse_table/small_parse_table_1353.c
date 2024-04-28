/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1353.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6765(t_small_parse_table_array *v)
{
	v->a[135300] = aux_sym_number_token2;
	v->a[135301] = anon_sym_DOLLAR_LPAREN;
	v->a[135302] = anon_sym_BQUOTE;
	v->a[135303] = sym_word;
	v->a[135304] = actions(1342);
	v->a[135305] = 26;
	v->a[135306] = sym_file_descriptor;
	v->a[135307] = sym__concat;
	v->a[135308] = sym_test_operator;
	v->a[135309] = sym__brace_start;
	v->a[135310] = anon_sym_LPAREN_LPAREN;
	v->a[135311] = anon_sym_PIPE_PIPE;
	v->a[135312] = anon_sym_AMP_AMP;
	v->a[135313] = anon_sym_GT_GT;
	v->a[135314] = anon_sym_PIPE_AMP;
	v->a[135315] = anon_sym_RBRACK;
	v->a[135316] = anon_sym_AMP_GT_GT;
	v->a[135317] = anon_sym_GT_PIPE;
	v->a[135318] = anon_sym_LT_AMP_DASH;
	v->a[135319] = anon_sym_GT_AMP_DASH;
	small_parse_table_6766(v);
}

void	small_parse_table_6766(t_small_parse_table_array *v)
{
	v->a[135320] = anon_sym_LT_LT_DASH;
	v->a[135321] = anon_sym_LT_LT_LT;
	v->a[135322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135323] = anon_sym_DOLLAR_LBRACK;
	v->a[135324] = aux_sym_concatenation_token1;
	v->a[135325] = anon_sym_DQUOTE;
	v->a[135326] = sym_raw_string;
	v->a[135327] = sym_ansi_c_string;
	v->a[135328] = anon_sym_DOLLAR_LBRACE;
	v->a[135329] = anon_sym_DOLLAR_BQUOTE;
	v->a[135330] = anon_sym_LT_LPAREN;
	v->a[135331] = anon_sym_GT_LPAREN;
	v->a[135332] = 6;
	v->a[135333] = actions(3);
	v->a[135334] = 1;
	v->a[135335] = sym_comment;
	v->a[135336] = actions(6013);
	v->a[135337] = 1;
	v->a[135338] = aux_sym_concatenation_token1;
	v->a[135339] = actions(6015);
	small_parse_table_6767(v);
}

void	small_parse_table_6767(t_small_parse_table_array *v)
{
	v->a[135340] = 1;
	v->a[135341] = sym__concat;
	v->a[135342] = state(2470);
	v->a[135343] = 1;
	v->a[135344] = aux_sym_concatenation_repeat1;
	v->a[135345] = actions(5395);
	v->a[135346] = 4;
	v->a[135347] = sym_file_descriptor;
	v->a[135348] = sym_test_operator;
	v->a[135349] = sym__brace_start;
	v->a[135350] = aux_sym_heredoc_redirect_token1;
	v->a[135351] = actions(5393);
	v->a[135352] = 33;
	v->a[135353] = anon_sym_LPAREN_LPAREN;
	v->a[135354] = anon_sym_PIPE_PIPE;
	v->a[135355] = anon_sym_AMP_AMP;
	v->a[135356] = anon_sym_PIPE;
	v->a[135357] = anon_sym_LT;
	v->a[135358] = anon_sym_GT;
	v->a[135359] = anon_sym_LT_LT;
	small_parse_table_6768(v);
}

void	small_parse_table_6768(t_small_parse_table_array *v)
{
	v->a[135360] = anon_sym_GT_GT;
	v->a[135361] = anon_sym_PIPE_AMP;
	v->a[135362] = anon_sym_AMP_GT;
	v->a[135363] = anon_sym_AMP_GT_GT;
	v->a[135364] = anon_sym_LT_AMP;
	v->a[135365] = anon_sym_GT_AMP;
	v->a[135366] = anon_sym_GT_PIPE;
	v->a[135367] = anon_sym_LT_AMP_DASH;
	v->a[135368] = anon_sym_GT_AMP_DASH;
	v->a[135369] = anon_sym_LT_LT_DASH;
	v->a[135370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135371] = anon_sym_DOLLAR_LBRACK;
	v->a[135372] = anon_sym_DOLLAR;
	v->a[135373] = sym__special_character;
	v->a[135374] = anon_sym_DQUOTE;
	v->a[135375] = sym_raw_string;
	v->a[135376] = sym_ansi_c_string;
	v->a[135377] = aux_sym_number_token1;
	v->a[135378] = aux_sym_number_token2;
	v->a[135379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6769(v);
}

void	small_parse_table_6769(t_small_parse_table_array *v)
{
	v->a[135380] = anon_sym_DOLLAR_LPAREN;
	v->a[135381] = anon_sym_BQUOTE;
	v->a[135382] = anon_sym_DOLLAR_BQUOTE;
	v->a[135383] = anon_sym_LT_LPAREN;
	v->a[135384] = anon_sym_GT_LPAREN;
	v->a[135385] = sym_word;
	v->a[135386] = 3;
	v->a[135387] = actions(71);
	v->a[135388] = 1;
	v->a[135389] = sym_comment;
	v->a[135390] = actions(1324);
	v->a[135391] = 14;
	v->a[135392] = anon_sym_PIPE;
	v->a[135393] = anon_sym_LT;
	v->a[135394] = anon_sym_GT;
	v->a[135395] = anon_sym_LT_LT;
	v->a[135396] = anon_sym_AMP_GT;
	v->a[135397] = anon_sym_LT_AMP;
	v->a[135398] = anon_sym_GT_AMP;
	v->a[135399] = anon_sym_DOLLAR;
	small_parse_table_6770(v);
}

/* EOF small_parse_table_1353.c */
