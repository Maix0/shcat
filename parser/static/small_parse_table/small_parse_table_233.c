/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_233.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1165(t_small_parse_table_array *v)
{
	v->a[23300] = anon_sym_DOLLAR;
	v->a[23301] = sym__special_character;
	v->a[23302] = anon_sym_DQUOTE;
	v->a[23303] = sym_raw_string;
	v->a[23304] = aux_sym_number_token1;
	v->a[23305] = aux_sym_number_token2;
	v->a[23306] = anon_sym_DOLLAR_LBRACE;
	v->a[23307] = anon_sym_DOLLAR_LPAREN;
	v->a[23308] = anon_sym_BQUOTE;
	v->a[23309] = anon_sym_DOLLAR_BQUOTE;
	v->a[23310] = sym_word;
	v->a[23311] = 19;
	v->a[23312] = actions(3);
	v->a[23313] = 1;
	v->a[23314] = sym_comment;
	v->a[23315] = actions(2152);
	v->a[23316] = 1;
	v->a[23317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23318] = actions(2154);
	v->a[23319] = 1;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_DOLLAR;
	v->a[23321] = actions(2158);
	v->a[23322] = 1;
	v->a[23323] = anon_sym_DQUOTE;
	v->a[23324] = actions(2160);
	v->a[23325] = 1;
	v->a[23326] = aux_sym_number_token1;
	v->a[23327] = actions(2162);
	v->a[23328] = 1;
	v->a[23329] = aux_sym_number_token2;
	v->a[23330] = actions(2164);
	v->a[23331] = 1;
	v->a[23332] = anon_sym_DOLLAR_LBRACE;
	v->a[23333] = actions(2166);
	v->a[23334] = 1;
	v->a[23335] = anon_sym_DOLLAR_LPAREN;
	v->a[23336] = actions(2168);
	v->a[23337] = 1;
	v->a[23338] = anon_sym_BQUOTE;
	v->a[23339] = actions(2170);
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = 1;
	v->a[23341] = anon_sym_DOLLAR_BQUOTE;
	v->a[23342] = actions(2174);
	v->a[23343] = 1;
	v->a[23344] = sym__brace_start;
	v->a[23345] = actions(3129);
	v->a[23346] = 1;
	v->a[23347] = sym__special_character;
	v->a[23348] = actions(3131);
	v->a[23349] = 1;
	v->a[23350] = sym_test_operator;
	v->a[23351] = state(1270);
	v->a[23352] = 1;
	v->a[23353] = aux_sym__literal_repeat1;
	v->a[23354] = actions(1390);
	v->a[23355] = 2;
	v->a[23356] = sym_file_descriptor;
	v->a[23357] = aux_sym_heredoc_redirect_token1;
	v->a[23358] = actions(3127);
	v->a[23359] = 2;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = sym_raw_string;
	v->a[23361] = sym_word;
	v->a[23362] = state(531);
	v->a[23363] = 2;
	v->a[23364] = sym_concatenation;
	v->a[23365] = aux_sym_for_statement_repeat1;
	v->a[23366] = state(1412);
	v->a[23367] = 7;
	v->a[23368] = sym_arithmetic_expansion;
	v->a[23369] = sym_brace_expression;
	v->a[23370] = sym_string;
	v->a[23371] = sym_number;
	v->a[23372] = sym_simple_expansion;
	v->a[23373] = sym_expansion;
	v->a[23374] = sym_command_substitution;
	v->a[23375] = actions(1388);
	v->a[23376] = 16;
	v->a[23377] = anon_sym_PIPE;
	v->a[23378] = anon_sym_PIPE_AMP;
	v->a[23379] = anon_sym_AMP_AMP;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = anon_sym_PIPE_PIPE;
	v->a[23381] = anon_sym_LT;
	v->a[23382] = anon_sym_GT;
	v->a[23383] = anon_sym_GT_GT;
	v->a[23384] = anon_sym_AMP_GT;
	v->a[23385] = anon_sym_AMP_GT_GT;
	v->a[23386] = anon_sym_LT_AMP;
	v->a[23387] = anon_sym_GT_AMP;
	v->a[23388] = anon_sym_GT_PIPE;
	v->a[23389] = anon_sym_LT_AMP_DASH;
	v->a[23390] = anon_sym_GT_AMP_DASH;
	v->a[23391] = anon_sym_LT_LT;
	v->a[23392] = anon_sym_LT_LT_DASH;
	v->a[23393] = 19;
	v->a[23394] = actions(3);
	v->a[23395] = 1;
	v->a[23396] = sym_comment;
	v->a[23397] = actions(2152);
	v->a[23398] = 1;
	v->a[23399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
