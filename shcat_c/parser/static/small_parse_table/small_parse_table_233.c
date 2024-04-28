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
	v->a[23300] = actions(3616);
	v->a[23301] = 1;
	v->a[23302] = aux_sym_number_token1;
	v->a[23303] = actions(3618);
	v->a[23304] = 1;
	v->a[23305] = aux_sym_number_token2;
	v->a[23306] = actions(3620);
	v->a[23307] = 1;
	v->a[23308] = anon_sym_DOLLAR_LBRACE;
	v->a[23309] = actions(3622);
	v->a[23310] = 1;
	v->a[23311] = anon_sym_DOLLAR_LPAREN;
	v->a[23312] = actions(3624);
	v->a[23313] = 1;
	v->a[23314] = anon_sym_BQUOTE;
	v->a[23315] = actions(3626);
	v->a[23316] = 1;
	v->a[23317] = anon_sym_DOLLAR_BQUOTE;
	v->a[23318] = actions(3630);
	v->a[23319] = 1;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = sym_test_operator;
	v->a[23321] = actions(3632);
	v->a[23322] = 1;
	v->a[23323] = sym__brace_start;
	v->a[23324] = state(2270);
	v->a[23325] = 1;
	v->a[23326] = aux_sym__literal_repeat1;
	v->a[23327] = actions(2096);
	v->a[23328] = 2;
	v->a[23329] = sym_file_descriptor;
	v->a[23330] = aux_sym_heredoc_redirect_token1;
	v->a[23331] = actions(3608);
	v->a[23332] = 2;
	v->a[23333] = anon_sym_LPAREN_LPAREN;
	v->a[23334] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23335] = actions(3628);
	v->a[23336] = 2;
	v->a[23337] = anon_sym_LT_LPAREN;
	v->a[23338] = anon_sym_GT_LPAREN;
	v->a[23339] = state(741);
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = 2;
	v->a[23341] = sym_concatenation;
	v->a[23342] = aux_sym_for_statement_repeat1;
	v->a[23343] = actions(3606);
	v->a[23344] = 3;
	v->a[23345] = sym_raw_string;
	v->a[23346] = sym_ansi_c_string;
	v->a[23347] = sym_word;
	v->a[23348] = state(1839);
	v->a[23349] = 9;
	v->a[23350] = sym_arithmetic_expansion;
	v->a[23351] = sym_brace_expression;
	v->a[23352] = sym_string;
	v->a[23353] = sym_translated_string;
	v->a[23354] = sym_number;
	v->a[23355] = sym_simple_expansion;
	v->a[23356] = sym_expansion;
	v->a[23357] = sym_command_substitution;
	v->a[23358] = sym_process_substitution;
	v->a[23359] = actions(2094);
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = 20;
	v->a[23361] = anon_sym_SEMI;
	v->a[23362] = anon_sym_PIPE_PIPE;
	v->a[23363] = anon_sym_AMP_AMP;
	v->a[23364] = anon_sym_PIPE;
	v->a[23365] = anon_sym_AMP;
	v->a[23366] = anon_sym_LT;
	v->a[23367] = anon_sym_GT;
	v->a[23368] = anon_sym_LT_LT;
	v->a[23369] = anon_sym_GT_GT;
	v->a[23370] = anon_sym_RPAREN;
	v->a[23371] = anon_sym_SEMI_SEMI;
	v->a[23372] = anon_sym_PIPE_AMP;
	v->a[23373] = anon_sym_AMP_GT;
	v->a[23374] = anon_sym_AMP_GT_GT;
	v->a[23375] = anon_sym_LT_AMP;
	v->a[23376] = anon_sym_GT_AMP;
	v->a[23377] = anon_sym_GT_PIPE;
	v->a[23378] = anon_sym_LT_AMP_DASH;
	v->a[23379] = anon_sym_GT_AMP_DASH;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = anon_sym_LT_LT_DASH;
	v->a[23381] = 8;
	v->a[23382] = actions(3);
	v->a[23383] = 1;
	v->a[23384] = sym_comment;
	v->a[23385] = actions(3580);
	v->a[23386] = 1;
	v->a[23387] = anon_sym_DQUOTE;
	v->a[23388] = actions(3584);
	v->a[23389] = 1;
	v->a[23390] = sym_variable_name;
	v->a[23391] = state(2121);
	v->a[23392] = 1;
	v->a[23393] = sym_string;
	v->a[23394] = actions(3582);
	v->a[23395] = 2;
	v->a[23396] = aux_sym__simple_variable_name_token1;
	v->a[23397] = aux_sym__multiline_variable_name_token1;
	v->a[23398] = actions(1241);
	v->a[23399] = 3;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
