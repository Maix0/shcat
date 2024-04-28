/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1983.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9915(t_small_parse_table_array *v)
{
	v->a[198300] = sym_string;
	v->a[198301] = sym_translated_string;
	v->a[198302] = sym_number;
	v->a[198303] = sym_simple_expansion;
	v->a[198304] = sym_expansion;
	v->a[198305] = sym_command_substitution;
	v->a[198306] = sym_process_substitution;
	v->a[198307] = 8;
	v->a[198308] = actions(3);
	v->a[198309] = 1;
	v->a[198310] = sym_comment;
	v->a[198311] = actions(1235);
	v->a[198312] = 1;
	v->a[198313] = sym_file_descriptor;
	v->a[198314] = actions(8868);
	v->a[198315] = 1;
	v->a[198316] = anon_sym_DQUOTE;
	v->a[198317] = actions(8872);
	v->a[198318] = 1;
	v->a[198319] = sym_variable_name;
	small_parse_table_9916(v);
}

void	small_parse_table_9916(t_small_parse_table_array *v)
{
	v->a[198320] = state(5409);
	v->a[198321] = 1;
	v->a[198322] = sym_string;
	v->a[198323] = actions(8870);
	v->a[198324] = 2;
	v->a[198325] = aux_sym__simple_variable_name_token1;
	v->a[198326] = aux_sym__multiline_variable_name_token1;
	v->a[198327] = actions(8866);
	v->a[198328] = 9;
	v->a[198329] = anon_sym_DASH;
	v->a[198330] = anon_sym_STAR;
	v->a[198331] = anon_sym_BANG;
	v->a[198332] = anon_sym_QMARK;
	v->a[198333] = anon_sym_DOLLAR;
	v->a[198334] = anon_sym_POUND;
	v->a[198335] = anon_sym_AT2;
	v->a[198336] = anon_sym_0;
	v->a[198337] = anon_sym__;
	v->a[198338] = actions(1227);
	v->a[198339] = 16;
	small_parse_table_9917(v);
}

void	small_parse_table_9917(t_small_parse_table_array *v)
{
	v->a[198340] = anon_sym_PIPE_PIPE;
	v->a[198341] = anon_sym_AMP_AMP;
	v->a[198342] = anon_sym_PIPE;
	v->a[198343] = anon_sym_LT;
	v->a[198344] = anon_sym_GT;
	v->a[198345] = anon_sym_LT_LT;
	v->a[198346] = anon_sym_GT_GT;
	v->a[198347] = anon_sym_PIPE_AMP;
	v->a[198348] = anon_sym_AMP_GT;
	v->a[198349] = anon_sym_AMP_GT_GT;
	v->a[198350] = anon_sym_LT_AMP;
	v->a[198351] = anon_sym_GT_AMP;
	v->a[198352] = anon_sym_GT_PIPE;
	v->a[198353] = anon_sym_LT_AMP_DASH;
	v->a[198354] = anon_sym_GT_AMP_DASH;
	v->a[198355] = anon_sym_LT_LT_DASH;
	v->a[198356] = 20;
	v->a[198357] = actions(71);
	v->a[198358] = 1;
	v->a[198359] = sym_comment;
	small_parse_table_9918(v);
}

void	small_parse_table_9918(t_small_parse_table_array *v)
{
	v->a[198360] = actions(8178);
	v->a[198361] = 1;
	v->a[198362] = anon_sym_DOLLAR_LBRACK;
	v->a[198363] = actions(8180);
	v->a[198364] = 1;
	v->a[198365] = anon_sym_DOLLAR;
	v->a[198366] = actions(8184);
	v->a[198367] = 1;
	v->a[198368] = anon_sym_DQUOTE;
	v->a[198369] = actions(8188);
	v->a[198370] = 1;
	v->a[198371] = aux_sym_number_token1;
	v->a[198372] = actions(8190);
	v->a[198373] = 1;
	v->a[198374] = aux_sym_number_token2;
	v->a[198375] = actions(8192);
	v->a[198376] = 1;
	v->a[198377] = anon_sym_DOLLAR_LBRACE;
	v->a[198378] = actions(8194);
	v->a[198379] = 1;
	small_parse_table_9919(v);
}

void	small_parse_table_9919(t_small_parse_table_array *v)
{
	v->a[198380] = anon_sym_DOLLAR_LPAREN;
	v->a[198381] = actions(8196);
	v->a[198382] = 1;
	v->a[198383] = anon_sym_BQUOTE;
	v->a[198384] = actions(8198);
	v->a[198385] = 1;
	v->a[198386] = anon_sym_DOLLAR_BQUOTE;
	v->a[198387] = actions(8208);
	v->a[198388] = 1;
	v->a[198389] = sym__brace_start;
	v->a[198390] = actions(8220);
	v->a[198391] = 1;
	v->a[198392] = sym__special_character;
	v->a[198393] = actions(8978);
	v->a[198394] = 1;
	v->a[198395] = sym_word;
	v->a[198396] = actions(8982);
	v->a[198397] = 1;
	v->a[198398] = sym_test_operator;
	v->a[198399] = state(1744);
	small_parse_table_9920(v);
}

/* EOF small_parse_table_1983.c */
