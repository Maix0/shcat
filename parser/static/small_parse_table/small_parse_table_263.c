/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_263.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1315(t_small_parse_table_array *v)
{
	v->a[26300] = sym__heredoc_pipeline;
	v->a[26301] = state(2057);
	v->a[26302] = 1;
	v->a[26303] = sym__heredoc_expression;
	v->a[26304] = actions(921);
	v->a[26305] = 2;
	v->a[26306] = sym_raw_string;
	v->a[26307] = sym_word;
	v->a[26308] = actions(923);
	v->a[26309] = 2;
	v->a[26310] = anon_sym_PIPE;
	v->a[26311] = anon_sym_PIPE_AMP;
	v->a[26312] = actions(925);
	v->a[26313] = 2;
	v->a[26314] = anon_sym_AMP_AMP;
	v->a[26315] = anon_sym_PIPE_PIPE;
	v->a[26316] = actions(929);
	v->a[26317] = 2;
	v->a[26318] = anon_sym_LT_AMP_DASH;
	v->a[26319] = anon_sym_GT_AMP_DASH;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = state(1511);
	v->a[26321] = 2;
	v->a[26322] = sym_file_redirect;
	v->a[26323] = aux_sym_redirected_statement_repeat2;
	v->a[26324] = state(1614);
	v->a[26325] = 6;
	v->a[26326] = sym_arithmetic_expansion;
	v->a[26327] = sym_string;
	v->a[26328] = sym_number;
	v->a[26329] = sym_simple_expansion;
	v->a[26330] = sym_expansion;
	v->a[26331] = sym_command_substitution;
	v->a[26332] = actions(927);
	v->a[26333] = 8;
	v->a[26334] = anon_sym_LT;
	v->a[26335] = anon_sym_GT;
	v->a[26336] = anon_sym_GT_GT;
	v->a[26337] = anon_sym_AMP_GT;
	v->a[26338] = anon_sym_AMP_GT_GT;
	v->a[26339] = anon_sym_LT_AMP;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = anon_sym_GT_AMP;
	v->a[26341] = anon_sym_GT_PIPE;
	v->a[26342] = 6;
	v->a[26343] = actions(3);
	v->a[26344] = 1;
	v->a[26345] = sym_comment;
	v->a[26346] = actions(974);
	v->a[26347] = 1;
	v->a[26348] = sym_variable_name;
	v->a[26349] = actions(413);
	v->a[26350] = 2;
	v->a[26351] = sym_file_descriptor;
	v->a[26352] = sym__bare_dollar;
	v->a[26353] = actions(972);
	v->a[26354] = 2;
	v->a[26355] = aux_sym__simple_variable_name_token1;
	v->a[26356] = aux_sym__multiline_variable_name_token1;
	v->a[26357] = actions(970);
	v->a[26358] = 9;
	v->a[26359] = anon_sym_BANG;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = anon_sym_DASH;
	v->a[26361] = anon_sym_STAR;
	v->a[26362] = anon_sym_QMARK;
	v->a[26363] = anon_sym_DOLLAR;
	v->a[26364] = anon_sym_POUND;
	v->a[26365] = anon_sym_AT;
	v->a[26366] = anon_sym_0;
	v->a[26367] = anon_sym__;
	v->a[26368] = actions(407);
	v->a[26369] = 24;
	v->a[26370] = anon_sym_PIPE;
	v->a[26371] = anon_sym_AMP_AMP;
	v->a[26372] = anon_sym_PIPE_PIPE;
	v->a[26373] = anon_sym_LT;
	v->a[26374] = anon_sym_GT;
	v->a[26375] = anon_sym_GT_GT;
	v->a[26376] = anon_sym_AMP_GT;
	v->a[26377] = anon_sym_AMP_GT_GT;
	v->a[26378] = anon_sym_LT_AMP;
	v->a[26379] = anon_sym_GT_AMP;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = anon_sym_GT_PIPE;
	v->a[26381] = anon_sym_LT_AMP_DASH;
	v->a[26382] = anon_sym_GT_AMP_DASH;
	v->a[26383] = anon_sym_LT_LT;
	v->a[26384] = anon_sym_LT_LT_DASH;
	v->a[26385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26386] = anon_sym_DQUOTE;
	v->a[26387] = sym_raw_string;
	v->a[26388] = aux_sym_number_token1;
	v->a[26389] = aux_sym_number_token2;
	v->a[26390] = anon_sym_DOLLAR_LBRACE;
	v->a[26391] = anon_sym_DOLLAR_LPAREN;
	v->a[26392] = anon_sym_BQUOTE;
	v->a[26393] = sym_word;
	v->a[26394] = 14;
	v->a[26395] = actions(3);
	v->a[26396] = 1;
	v->a[26397] = sym_comment;
	v->a[26398] = actions(750);
	v->a[26399] = 1;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
