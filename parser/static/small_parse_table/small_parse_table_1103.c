/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1103.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5515(t_small_parse_table_array *v)
{
	v->a[110300] = 17;
	v->a[110301] = anon_sym_LPAREN_LPAREN;
	v->a[110302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110303] = anon_sym_DOLLAR_LBRACK;
	v->a[110304] = anon_sym_DOLLAR;
	v->a[110305] = sym__special_character;
	v->a[110306] = anon_sym_DQUOTE;
	v->a[110307] = sym_raw_string;
	v->a[110308] = sym_ansi_c_string;
	v->a[110309] = aux_sym_number_token1;
	v->a[110310] = aux_sym_number_token2;
	v->a[110311] = anon_sym_DOLLAR_LBRACE;
	v->a[110312] = anon_sym_DOLLAR_LPAREN;
	v->a[110313] = anon_sym_BQUOTE;
	v->a[110314] = anon_sym_DOLLAR_BQUOTE;
	v->a[110315] = anon_sym_LT_LPAREN;
	v->a[110316] = anon_sym_GT_LPAREN;
	v->a[110317] = sym_word;
	v->a[110318] = 8;
	v->a[110319] = actions(3);
	small_parse_table_5516(v);
}

void	small_parse_table_5516(t_small_parse_table_array *v)
{
	v->a[110320] = 1;
	v->a[110321] = sym_comment;
	v->a[110322] = actions(5826);
	v->a[110323] = 1;
	v->a[110324] = aux_sym_heredoc_redirect_token1;
	v->a[110325] = actions(5828);
	v->a[110326] = 1;
	v->a[110327] = sym_file_descriptor;
	v->a[110328] = actions(6268);
	v->a[110329] = 1;
	v->a[110330] = anon_sym_RPAREN;
	v->a[110331] = actions(5831);
	v->a[110332] = 3;
	v->a[110333] = sym_variable_name;
	v->a[110334] = sym_test_operator;
	v->a[110335] = sym__brace_start;
	v->a[110336] = actions(5821);
	v->a[110337] = 9;
	v->a[110338] = anon_sym_SEMI;
	v->a[110339] = anon_sym_PIPE_PIPE;
	small_parse_table_5517(v);
}

void	small_parse_table_5517(t_small_parse_table_array *v)
{
	v->a[110340] = anon_sym_AMP_AMP;
	v->a[110341] = anon_sym_PIPE;
	v->a[110342] = anon_sym_AMP;
	v->a[110343] = anon_sym_LT_LT;
	v->a[110344] = anon_sym_SEMI_SEMI;
	v->a[110345] = anon_sym_PIPE_AMP;
	v->a[110346] = anon_sym_LT_LT_DASH;
	v->a[110347] = actions(5823);
	v->a[110348] = 11;
	v->a[110349] = anon_sym_LT;
	v->a[110350] = anon_sym_GT;
	v->a[110351] = anon_sym_GT_GT;
	v->a[110352] = anon_sym_AMP_GT;
	v->a[110353] = anon_sym_AMP_GT_GT;
	v->a[110354] = anon_sym_LT_AMP;
	v->a[110355] = anon_sym_GT_AMP;
	v->a[110356] = anon_sym_GT_PIPE;
	v->a[110357] = anon_sym_LT_AMP_DASH;
	v->a[110358] = anon_sym_GT_AMP_DASH;
	v->a[110359] = anon_sym_LT_LT_LT;
	small_parse_table_5518(v);
}

void	small_parse_table_5518(t_small_parse_table_array *v)
{
	v->a[110360] = actions(5819);
	v->a[110361] = 17;
	v->a[110362] = anon_sym_LPAREN_LPAREN;
	v->a[110363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110364] = anon_sym_DOLLAR_LBRACK;
	v->a[110365] = anon_sym_DOLLAR;
	v->a[110366] = sym__special_character;
	v->a[110367] = anon_sym_DQUOTE;
	v->a[110368] = sym_raw_string;
	v->a[110369] = sym_ansi_c_string;
	v->a[110370] = aux_sym_number_token1;
	v->a[110371] = aux_sym_number_token2;
	v->a[110372] = anon_sym_DOLLAR_LBRACE;
	v->a[110373] = anon_sym_DOLLAR_LPAREN;
	v->a[110374] = anon_sym_BQUOTE;
	v->a[110375] = anon_sym_DOLLAR_BQUOTE;
	v->a[110376] = anon_sym_LT_LPAREN;
	v->a[110377] = anon_sym_GT_LPAREN;
	v->a[110378] = sym_word;
	v->a[110379] = 6;
	small_parse_table_5519(v);
}

void	small_parse_table_5519(t_small_parse_table_array *v)
{
	v->a[110380] = actions(71);
	v->a[110381] = 1;
	v->a[110382] = sym_comment;
	v->a[110383] = actions(6133);
	v->a[110384] = 1;
	v->a[110385] = aux_sym_concatenation_token1;
	v->a[110386] = actions(6271);
	v->a[110387] = 1;
	v->a[110388] = sym__concat;
	v->a[110389] = state(2127);
	v->a[110390] = 1;
	v->a[110391] = aux_sym_concatenation_repeat1;
	v->a[110392] = actions(1265);
	v->a[110393] = 15;
	v->a[110394] = anon_sym_PIPE;
	v->a[110395] = anon_sym_EQ_EQ;
	v->a[110396] = anon_sym_LT;
	v->a[110397] = anon_sym_GT;
	v->a[110398] = anon_sym_LT_LT;
	v->a[110399] = anon_sym_EQ_TILDE;
	small_parse_table_5520(v);
}

/* EOF small_parse_table_1103.c */
