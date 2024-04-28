/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_843.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4215(t_small_parse_table_array *v)
{
	v->a[84300] = actions(3);
	v->a[84301] = 1;
	v->a[84302] = sym_comment;
	v->a[84303] = actions(1314);
	v->a[84304] = 5;
	v->a[84305] = sym_file_descriptor;
	v->a[84306] = sym__concat;
	v->a[84307] = sym_test_operator;
	v->a[84308] = sym__brace_start;
	v->a[84309] = aux_sym_heredoc_redirect_token1;
	v->a[84310] = actions(1312);
	v->a[84311] = 39;
	v->a[84312] = anon_sym_LPAREN_LPAREN;
	v->a[84313] = anon_sym_SEMI;
	v->a[84314] = anon_sym_PIPE_PIPE;
	v->a[84315] = anon_sym_AMP_AMP;
	v->a[84316] = anon_sym_PIPE;
	v->a[84317] = anon_sym_AMP;
	v->a[84318] = anon_sym_LT;
	v->a[84319] = anon_sym_GT;
	small_parse_table_4216(v);
}

void	small_parse_table_4216(t_small_parse_table_array *v)
{
	v->a[84320] = anon_sym_LT_LT;
	v->a[84321] = anon_sym_GT_GT;
	v->a[84322] = anon_sym_SEMI_SEMI;
	v->a[84323] = anon_sym_SEMI_AMP;
	v->a[84324] = anon_sym_SEMI_SEMI_AMP;
	v->a[84325] = anon_sym_PIPE_AMP;
	v->a[84326] = anon_sym_AMP_GT;
	v->a[84327] = anon_sym_AMP_GT_GT;
	v->a[84328] = anon_sym_LT_AMP;
	v->a[84329] = anon_sym_GT_AMP;
	v->a[84330] = anon_sym_GT_PIPE;
	v->a[84331] = anon_sym_LT_AMP_DASH;
	v->a[84332] = anon_sym_GT_AMP_DASH;
	v->a[84333] = anon_sym_LT_LT_DASH;
	v->a[84334] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84335] = anon_sym_DOLLAR_LBRACK;
	v->a[84336] = aux_sym_concatenation_token1;
	v->a[84337] = anon_sym_DOLLAR;
	v->a[84338] = sym__special_character;
	v->a[84339] = anon_sym_DQUOTE;
	small_parse_table_4217(v);
}

void	small_parse_table_4217(t_small_parse_table_array *v)
{
	v->a[84340] = sym_raw_string;
	v->a[84341] = sym_ansi_c_string;
	v->a[84342] = aux_sym_number_token1;
	v->a[84343] = aux_sym_number_token2;
	v->a[84344] = anon_sym_DOLLAR_LBRACE;
	v->a[84345] = anon_sym_DOLLAR_LPAREN;
	v->a[84346] = anon_sym_BQUOTE;
	v->a[84347] = anon_sym_DOLLAR_BQUOTE;
	v->a[84348] = anon_sym_LT_LPAREN;
	v->a[84349] = anon_sym_GT_LPAREN;
	v->a[84350] = sym_word;
	v->a[84351] = 3;
	v->a[84352] = actions(3);
	v->a[84353] = 1;
	v->a[84354] = sym_comment;
	v->a[84355] = actions(1342);
	v->a[84356] = 5;
	v->a[84357] = sym_file_descriptor;
	v->a[84358] = sym__concat;
	v->a[84359] = sym_test_operator;
	small_parse_table_4218(v);
}

void	small_parse_table_4218(t_small_parse_table_array *v)
{
	v->a[84360] = sym__brace_start;
	v->a[84361] = aux_sym_heredoc_redirect_token1;
	v->a[84362] = actions(1340);
	v->a[84363] = 39;
	v->a[84364] = anon_sym_LPAREN_LPAREN;
	v->a[84365] = anon_sym_SEMI;
	v->a[84366] = anon_sym_PIPE_PIPE;
	v->a[84367] = anon_sym_AMP_AMP;
	v->a[84368] = anon_sym_PIPE;
	v->a[84369] = anon_sym_AMP;
	v->a[84370] = anon_sym_LT;
	v->a[84371] = anon_sym_GT;
	v->a[84372] = anon_sym_LT_LT;
	v->a[84373] = anon_sym_GT_GT;
	v->a[84374] = anon_sym_SEMI_SEMI;
	v->a[84375] = anon_sym_SEMI_AMP;
	v->a[84376] = anon_sym_SEMI_SEMI_AMP;
	v->a[84377] = anon_sym_PIPE_AMP;
	v->a[84378] = anon_sym_AMP_GT;
	v->a[84379] = anon_sym_AMP_GT_GT;
	small_parse_table_4219(v);
}

void	small_parse_table_4219(t_small_parse_table_array *v)
{
	v->a[84380] = anon_sym_LT_AMP;
	v->a[84381] = anon_sym_GT_AMP;
	v->a[84382] = anon_sym_GT_PIPE;
	v->a[84383] = anon_sym_LT_AMP_DASH;
	v->a[84384] = anon_sym_GT_AMP_DASH;
	v->a[84385] = anon_sym_LT_LT_DASH;
	v->a[84386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84387] = anon_sym_DOLLAR_LBRACK;
	v->a[84388] = aux_sym_concatenation_token1;
	v->a[84389] = anon_sym_DOLLAR;
	v->a[84390] = sym__special_character;
	v->a[84391] = anon_sym_DQUOTE;
	v->a[84392] = sym_raw_string;
	v->a[84393] = sym_ansi_c_string;
	v->a[84394] = aux_sym_number_token1;
	v->a[84395] = aux_sym_number_token2;
	v->a[84396] = anon_sym_DOLLAR_LBRACE;
	v->a[84397] = anon_sym_DOLLAR_LPAREN;
	v->a[84398] = anon_sym_BQUOTE;
	v->a[84399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4220(v);
}

/* EOF small_parse_table_843.c */
