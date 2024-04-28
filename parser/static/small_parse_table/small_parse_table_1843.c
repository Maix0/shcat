/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1843.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9215(t_small_parse_table_array *v)
{
	v->a[184300] = anon_sym_LPAREN_LPAREN;
	v->a[184301] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184302] = actions(7232);
	v->a[184303] = 2;
	v->a[184304] = sym_raw_string;
	v->a[184305] = sym_ansi_c_string;
	v->a[184306] = actions(7240);
	v->a[184307] = 2;
	v->a[184308] = anon_sym_LT_LPAREN;
	v->a[184309] = anon_sym_GT_LPAREN;
	v->a[184310] = state(3477);
	v->a[184311] = 2;
	v->a[184312] = sym_case_item;
	v->a[184313] = aux_sym_case_statement_repeat1;
	v->a[184314] = state(6695);
	v->a[184315] = 2;
	v->a[184316] = sym_concatenation;
	v->a[184317] = sym__extglob_blob;
	v->a[184318] = state(6303);
	v->a[184319] = 9;
	small_parse_table_9216(v);
}

void	small_parse_table_9216(t_small_parse_table_array *v)
{
	v->a[184320] = sym_arithmetic_expansion;
	v->a[184321] = sym_brace_expression;
	v->a[184322] = sym_string;
	v->a[184323] = sym_translated_string;
	v->a[184324] = sym_number;
	v->a[184325] = sym_simple_expansion;
	v->a[184326] = sym_expansion;
	v->a[184327] = sym_command_substitution;
	v->a[184328] = sym_process_substitution;
	v->a[184329] = 8;
	v->a[184330] = actions(3);
	v->a[184331] = 1;
	v->a[184332] = sym_comment;
	v->a[184333] = actions(1235);
	v->a[184334] = 1;
	v->a[184335] = sym_file_descriptor;
	v->a[184336] = actions(4084);
	v->a[184337] = 1;
	v->a[184338] = anon_sym_DQUOTE;
	v->a[184339] = actions(7613);
	small_parse_table_9217(v);
}

void	small_parse_table_9217(t_small_parse_table_array *v)
{
	v->a[184340] = 1;
	v->a[184341] = sym_variable_name;
	v->a[184342] = state(4606);
	v->a[184343] = 1;
	v->a[184344] = sym_string;
	v->a[184345] = actions(7611);
	v->a[184346] = 2;
	v->a[184347] = aux_sym__simple_variable_name_token1;
	v->a[184348] = aux_sym__multiline_variable_name_token1;
	v->a[184349] = actions(7609);
	v->a[184350] = 9;
	v->a[184351] = anon_sym_DASH;
	v->a[184352] = anon_sym_STAR;
	v->a[184353] = anon_sym_BANG;
	v->a[184354] = anon_sym_QMARK;
	v->a[184355] = anon_sym_DOLLAR;
	v->a[184356] = anon_sym_POUND;
	v->a[184357] = anon_sym_AT2;
	v->a[184358] = anon_sym_0;
	v->a[184359] = anon_sym__;
	small_parse_table_9218(v);
}

void	small_parse_table_9218(t_small_parse_table_array *v)
{
	v->a[184360] = actions(1227);
	v->a[184361] = 21;
	v->a[184362] = anon_sym_SEMI;
	v->a[184363] = anon_sym_PIPE_PIPE;
	v->a[184364] = anon_sym_AMP_AMP;
	v->a[184365] = anon_sym_PIPE;
	v->a[184366] = anon_sym_AMP;
	v->a[184367] = anon_sym_LT;
	v->a[184368] = anon_sym_GT;
	v->a[184369] = anon_sym_LT_LT;
	v->a[184370] = anon_sym_GT_GT;
	v->a[184371] = anon_sym_RPAREN;
	v->a[184372] = anon_sym_SEMI_SEMI;
	v->a[184373] = anon_sym_PIPE_AMP;
	v->a[184374] = anon_sym_AMP_GT;
	v->a[184375] = anon_sym_AMP_GT_GT;
	v->a[184376] = anon_sym_LT_AMP;
	v->a[184377] = anon_sym_GT_AMP;
	v->a[184378] = anon_sym_GT_PIPE;
	v->a[184379] = anon_sym_LT_AMP_DASH;
	small_parse_table_9219(v);
}

void	small_parse_table_9219(t_small_parse_table_array *v)
{
	v->a[184380] = anon_sym_GT_AMP_DASH;
	v->a[184381] = anon_sym_LT_LT_DASH;
	v->a[184382] = aux_sym_heredoc_redirect_token1;
	v->a[184383] = 3;
	v->a[184384] = actions(3);
	v->a[184385] = 1;
	v->a[184386] = sym_comment;
	v->a[184387] = actions(1326);
	v->a[184388] = 5;
	v->a[184389] = sym_file_descriptor;
	v->a[184390] = sym__concat;
	v->a[184391] = sym_test_operator;
	v->a[184392] = sym__brace_start;
	v->a[184393] = aux_sym_heredoc_redirect_token1;
	v->a[184394] = actions(1324);
	v->a[184395] = 31;
	v->a[184396] = anon_sym_LPAREN_LPAREN;
	v->a[184397] = anon_sym_PIPE_PIPE;
	v->a[184398] = anon_sym_AMP_AMP;
	v->a[184399] = anon_sym_LT;
	small_parse_table_9220(v);
}

/* EOF small_parse_table_1843.c */
