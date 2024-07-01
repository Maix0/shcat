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
	v->a[38300] = sym_expansion;
	v->a[38301] = sym_command_substitution;
	v->a[38302] = actions(569);
	v->a[38303] = 13;
	v->a[38304] = anon_sym_PIPE;
	v->a[38305] = anon_sym_AMP_AMP;
	v->a[38306] = anon_sym_PIPE_PIPE;
	v->a[38307] = anon_sym_LT;
	v->a[38308] = anon_sym_GT;
	v->a[38309] = anon_sym_GT_GT;
	v->a[38310] = anon_sym_LT_AMP;
	v->a[38311] = anon_sym_GT_AMP;
	v->a[38312] = anon_sym_GT_PIPE;
	v->a[38313] = anon_sym_LT_AMP_DASH;
	v->a[38314] = anon_sym_GT_AMP_DASH;
	v->a[38315] = anon_sym_LT_LT;
	v->a[38316] = anon_sym_LT_LT_DASH;
	v->a[38317] = 5;
	v->a[38318] = actions(3);
	v->a[38319] = 1;
	small_parse_table_1916(v);
}

void	small_parse_table_1916(t_small_parse_table_array *v)
{
	v->a[38320] = sym_comment;
	v->a[38321] = actions(575);
	v->a[38322] = 2;
	v->a[38323] = sym_file_descriptor;
	v->a[38324] = sym_variable_name;
	v->a[38325] = state(496);
	v->a[38326] = 2;
	v->a[38327] = sym_concatenation;
	v->a[38328] = aux_sym_for_statement_repeat1;
	v->a[38329] = state(828);
	v->a[38330] = 5;
	v->a[38331] = sym_arithmetic_expansion;
	v->a[38332] = sym_string;
	v->a[38333] = sym_simple_expansion;
	v->a[38334] = sym_expansion;
	v->a[38335] = sym_command_substitution;
	v->a[38336] = actions(573);
	v->a[38337] = 22;
	v->a[38338] = anon_sym_PIPE;
	v->a[38339] = anon_sym_AMP_AMP;
	small_parse_table_1917(v);
}

void	small_parse_table_1917(t_small_parse_table_array *v)
{
	v->a[38340] = anon_sym_PIPE_PIPE;
	v->a[38341] = anon_sym_LT;
	v->a[38342] = anon_sym_GT;
	v->a[38343] = anon_sym_GT_GT;
	v->a[38344] = anon_sym_LT_AMP;
	v->a[38345] = anon_sym_GT_AMP;
	v->a[38346] = anon_sym_GT_PIPE;
	v->a[38347] = anon_sym_LT_AMP_DASH;
	v->a[38348] = anon_sym_GT_AMP_DASH;
	v->a[38349] = anon_sym_LT_LT;
	v->a[38350] = anon_sym_LT_LT_DASH;
	v->a[38351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38352] = anon_sym_DOLLAR;
	v->a[38353] = anon_sym_DQUOTE;
	v->a[38354] = sym_raw_string;
	v->a[38355] = sym_number;
	v->a[38356] = anon_sym_DOLLAR_LBRACE;
	v->a[38357] = anon_sym_DOLLAR_LPAREN;
	v->a[38358] = anon_sym_BQUOTE;
	v->a[38359] = sym_word;
	small_parse_table_1918(v);
}

void	small_parse_table_1918(t_small_parse_table_array *v)
{
	v->a[38360] = 6;
	v->a[38361] = actions(3);
	v->a[38362] = 1;
	v->a[38363] = sym_comment;
	v->a[38364] = actions(1303);
	v->a[38365] = 1;
	v->a[38366] = sym_file_descriptor;
	v->a[38367] = actions(1383);
	v->a[38368] = 1;
	v->a[38369] = aux_sym_concatenation_token1;
	v->a[38370] = actions(1397);
	v->a[38371] = 1;
	v->a[38372] = sym__concat;
	v->a[38373] = state(508);
	v->a[38374] = 1;
	v->a[38375] = aux_sym_concatenation_repeat1;
	v->a[38376] = actions(1301);
	v->a[38377] = 27;
	v->a[38378] = anon_sym_PIPE;
	v->a[38379] = anon_sym_RPAREN;
	small_parse_table_1919(v);
}

void	small_parse_table_1919(t_small_parse_table_array *v)
{
	v->a[38380] = anon_sym_SEMI_SEMI;
	v->a[38381] = anon_sym_AMP_AMP;
	v->a[38382] = anon_sym_PIPE_PIPE;
	v->a[38383] = anon_sym_LT;
	v->a[38384] = anon_sym_GT;
	v->a[38385] = anon_sym_GT_GT;
	v->a[38386] = anon_sym_LT_AMP;
	v->a[38387] = anon_sym_GT_AMP;
	v->a[38388] = anon_sym_GT_PIPE;
	v->a[38389] = anon_sym_LT_AMP_DASH;
	v->a[38390] = anon_sym_GT_AMP_DASH;
	v->a[38391] = anon_sym_LT_LT;
	v->a[38392] = anon_sym_LT_LT_DASH;
	v->a[38393] = aux_sym_heredoc_redirect_token1;
	v->a[38394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38395] = anon_sym_AMP;
	v->a[38396] = anon_sym_DOLLAR;
	v->a[38397] = anon_sym_DQUOTE;
	v->a[38398] = sym_raw_string;
	v->a[38399] = sym_number;
	small_parse_table_1920(v);
}

/* EOF small_parse_table_383.c */
