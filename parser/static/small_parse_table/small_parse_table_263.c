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
	v->a[26300] = 2;
	v->a[26301] = sym_variable_assignment;
	v->a[26302] = aux_sym_command_repeat1;
	v->a[26303] = actions(31);
	v->a[26304] = 3;
	v->a[26305] = sym_raw_string;
	v->a[26306] = sym_number;
	v->a[26307] = sym_word;
	v->a[26308] = actions(758);
	v->a[26309] = 3;
	v->a[26310] = anon_sym_LT;
	v->a[26311] = anon_sym_GT;
	v->a[26312] = anon_sym_GT_GT;
	v->a[26313] = state(280);
	v->a[26314] = 5;
	v->a[26315] = sym_arithmetic_expansion;
	v->a[26316] = sym_string;
	v->a[26317] = sym_simple_expansion;
	v->a[26318] = sym_expansion;
	v->a[26319] = sym_command_substitution;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = 3;
	v->a[26321] = actions(3);
	v->a[26322] = 1;
	v->a[26323] = sym_comment;
	v->a[26324] = actions(1046);
	v->a[26325] = 2;
	v->a[26326] = sym__concat;
	v->a[26327] = sym__bare_dollar;
	v->a[26328] = actions(1048);
	v->a[26329] = 21;
	v->a[26330] = anon_sym_PIPE;
	v->a[26331] = anon_sym_RPAREN;
	v->a[26332] = anon_sym_SEMI_SEMI;
	v->a[26333] = anon_sym_AMP_AMP;
	v->a[26334] = anon_sym_PIPE_PIPE;
	v->a[26335] = anon_sym_LT;
	v->a[26336] = anon_sym_GT;
	v->a[26337] = anon_sym_GT_GT;
	v->a[26338] = anon_sym_LT_LT;
	v->a[26339] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26341] = aux_sym_concatenation_token1;
	v->a[26342] = anon_sym_DOLLAR;
	v->a[26343] = anon_sym_DQUOTE;
	v->a[26344] = sym_raw_string;
	v->a[26345] = sym_number;
	v->a[26346] = anon_sym_DOLLAR_LBRACE;
	v->a[26347] = anon_sym_DOLLAR_LPAREN;
	v->a[26348] = anon_sym_BQUOTE;
	v->a[26349] = sym_word;
	v->a[26350] = anon_sym_SEMI;
	v->a[26351] = 3;
	v->a[26352] = actions(3);
	v->a[26353] = 1;
	v->a[26354] = sym_comment;
	v->a[26355] = actions(981);
	v->a[26356] = 3;
	v->a[26357] = sym__concat;
	v->a[26358] = sym__bare_dollar;
	v->a[26359] = ts_builtin_sym_end;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = actions(973);
	v->a[26361] = 20;
	v->a[26362] = anon_sym_PIPE;
	v->a[26363] = anon_sym_SEMI_SEMI;
	v->a[26364] = anon_sym_AMP_AMP;
	v->a[26365] = anon_sym_PIPE_PIPE;
	v->a[26366] = anon_sym_LT;
	v->a[26367] = anon_sym_GT;
	v->a[26368] = anon_sym_GT_GT;
	v->a[26369] = anon_sym_LT_LT;
	v->a[26370] = aux_sym_heredoc_redirect_token1;
	v->a[26371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26372] = aux_sym_concatenation_token1;
	v->a[26373] = anon_sym_DOLLAR;
	v->a[26374] = anon_sym_DQUOTE;
	v->a[26375] = sym_raw_string;
	v->a[26376] = sym_number;
	v->a[26377] = anon_sym_DOLLAR_LBRACE;
	v->a[26378] = anon_sym_DOLLAR_LPAREN;
	v->a[26379] = anon_sym_BQUOTE;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = sym_word;
	v->a[26381] = anon_sym_SEMI;
	v->a[26382] = 6;
	v->a[26383] = actions(3);
	v->a[26384] = 1;
	v->a[26385] = sym_comment;
	v->a[26386] = actions(841);
	v->a[26387] = 1;
	v->a[26388] = sym__bare_dollar;
	v->a[26389] = actions(857);
	v->a[26390] = 1;
	v->a[26391] = aux_sym_concatenation_token1;
	v->a[26392] = actions(859);
	v->a[26393] = 1;
	v->a[26394] = sym__concat;
	v->a[26395] = state(422);
	v->a[26396] = 1;
	v->a[26397] = aux_sym_concatenation_repeat1;
	v->a[26398] = actions(833);
	v->a[26399] = 19;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
