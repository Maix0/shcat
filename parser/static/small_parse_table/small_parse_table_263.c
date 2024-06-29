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
	v->a[26300] = 5;
	v->a[26301] = actions(3);
	v->a[26302] = 1;
	v->a[26303] = sym_comment;
	v->a[26304] = state(705);
	v->a[26305] = 1;
	v->a[26306] = sym_concatenation;
	v->a[26307] = actions(760);
	v->a[26308] = 2;
	v->a[26309] = sym_file_descriptor;
	v->a[26310] = sym_variable_name;
	v->a[26311] = state(501);
	v->a[26312] = 5;
	v->a[26313] = sym_arithmetic_expansion;
	v->a[26314] = sym_string;
	v->a[26315] = sym_simple_expansion;
	v->a[26316] = sym_expansion;
	v->a[26317] = sym_command_substitution;
	v->a[26318] = actions(758);
	v->a[26319] = 28;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = anon_sym_PIPE;
	v->a[26321] = anon_sym_SEMI_SEMI;
	v->a[26322] = anon_sym_AMP_AMP;
	v->a[26323] = anon_sym_PIPE_PIPE;
	v->a[26324] = anon_sym_LT;
	v->a[26325] = anon_sym_GT;
	v->a[26326] = anon_sym_GT_GT;
	v->a[26327] = anon_sym_AMP_GT;
	v->a[26328] = anon_sym_AMP_GT_GT;
	v->a[26329] = anon_sym_LT_AMP;
	v->a[26330] = anon_sym_GT_AMP;
	v->a[26331] = anon_sym_GT_PIPE;
	v->a[26332] = anon_sym_LT_AMP_DASH;
	v->a[26333] = anon_sym_GT_AMP_DASH;
	v->a[26334] = anon_sym_LT_LT;
	v->a[26335] = anon_sym_LT_LT_DASH;
	v->a[26336] = aux_sym_heredoc_redirect_token1;
	v->a[26337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26338] = anon_sym_AMP;
	v->a[26339] = anon_sym_DOLLAR;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = anon_sym_DQUOTE;
	v->a[26341] = sym_raw_string;
	v->a[26342] = sym_number;
	v->a[26343] = anon_sym_DOLLAR_LBRACE;
	v->a[26344] = anon_sym_DOLLAR_LPAREN;
	v->a[26345] = anon_sym_BQUOTE;
	v->a[26346] = sym_word;
	v->a[26347] = anon_sym_SEMI;
	v->a[26348] = 12;
	v->a[26349] = actions(3);
	v->a[26350] = 1;
	v->a[26351] = sym_comment;
	v->a[26352] = actions(904);
	v->a[26353] = 1;
	v->a[26354] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26355] = actions(906);
	v->a[26356] = 1;
	v->a[26357] = anon_sym_DOLLAR;
	v->a[26358] = actions(908);
	v->a[26359] = 1;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = anon_sym_DQUOTE;
	v->a[26361] = actions(910);
	v->a[26362] = 1;
	v->a[26363] = anon_sym_DOLLAR_LBRACE;
	v->a[26364] = actions(912);
	v->a[26365] = 1;
	v->a[26366] = anon_sym_DOLLAR_LPAREN;
	v->a[26367] = actions(914);
	v->a[26368] = 1;
	v->a[26369] = anon_sym_BQUOTE;
	v->a[26370] = state(1197);
	v->a[26371] = 1;
	v->a[26372] = sym_concatenation;
	v->a[26373] = actions(760);
	v->a[26374] = 2;
	v->a[26375] = sym_file_descriptor;
	v->a[26376] = ts_builtin_sym_end;
	v->a[26377] = actions(939);
	v->a[26378] = 3;
	v->a[26379] = sym_raw_string;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = sym_number;
	v->a[26381] = sym_word;
	v->a[26382] = state(1138);
	v->a[26383] = 5;
	v->a[26384] = sym_arithmetic_expansion;
	v->a[26385] = sym_string;
	v->a[26386] = sym_simple_expansion;
	v->a[26387] = sym_expansion;
	v->a[26388] = sym_command_substitution;
	v->a[26389] = actions(758);
	v->a[26390] = 19;
	v->a[26391] = anon_sym_PIPE;
	v->a[26392] = anon_sym_SEMI_SEMI;
	v->a[26393] = anon_sym_AMP_AMP;
	v->a[26394] = anon_sym_PIPE_PIPE;
	v->a[26395] = anon_sym_LT;
	v->a[26396] = anon_sym_GT;
	v->a[26397] = anon_sym_GT_GT;
	v->a[26398] = anon_sym_AMP_GT;
	v->a[26399] = anon_sym_AMP_GT_GT;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
