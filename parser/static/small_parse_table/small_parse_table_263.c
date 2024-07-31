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
	v->a[26300] = anon_sym_AMP_AMP;
	v->a[26301] = anon_sym_PIPE_PIPE;
	v->a[26302] = anon_sym_LT;
	v->a[26303] = anon_sym_GT;
	v->a[26304] = anon_sym_GT_GT;
	v->a[26305] = anon_sym_LT_AMP;
	v->a[26306] = anon_sym_GT_AMP;
	v->a[26307] = anon_sym_GT_PIPE;
	v->a[26308] = anon_sym_LT_GT;
	v->a[26309] = anon_sym_LT_LT;
	v->a[26310] = anon_sym_LT_LT_DASH;
	v->a[26311] = aux_sym_heredoc_redirect_token1;
	v->a[26312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26313] = anon_sym_DOLLAR;
	v->a[26314] = anon_sym_DQUOTE;
	v->a[26315] = sym_raw_string;
	v->a[26316] = sym_number;
	v->a[26317] = anon_sym_DOLLAR_LBRACE;
	v->a[26318] = anon_sym_DOLLAR_LPAREN;
	v->a[26319] = anon_sym_BQUOTE;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = sym_word;
	v->a[26321] = anon_sym_SEMI;
	v->a[26322] = 6;
	v->a[26323] = actions(3);
	v->a[26324] = 1;
	v->a[26325] = sym_comment;
	v->a[26326] = actions(979);
	v->a[26327] = 1;
	v->a[26328] = aux_sym_concatenation_token1;
	v->a[26329] = actions(981);
	v->a[26330] = 1;
	v->a[26331] = sym__concat;
	v->a[26332] = state(348);
	v->a[26333] = 1;
	v->a[26334] = aux_sym_concatenation_repeat1;
	v->a[26335] = actions(975);
	v->a[26336] = 2;
	v->a[26337] = sym__bare_dollar;
	v->a[26338] = ts_builtin_sym_end;
	v->a[26339] = actions(967);
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = 24;
	v->a[26341] = anon_sym_PIPE;
	v->a[26342] = anon_sym_SEMI_SEMI;
	v->a[26343] = anon_sym_AMP_AMP;
	v->a[26344] = anon_sym_PIPE_PIPE;
	v->a[26345] = anon_sym_LT;
	v->a[26346] = anon_sym_GT;
	v->a[26347] = anon_sym_GT_GT;
	v->a[26348] = anon_sym_LT_AMP;
	v->a[26349] = anon_sym_GT_AMP;
	v->a[26350] = anon_sym_GT_PIPE;
	v->a[26351] = anon_sym_LT_GT;
	v->a[26352] = anon_sym_LT_LT;
	v->a[26353] = anon_sym_LT_LT_DASH;
	v->a[26354] = aux_sym_heredoc_redirect_token1;
	v->a[26355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26356] = anon_sym_DOLLAR;
	v->a[26357] = anon_sym_DQUOTE;
	v->a[26358] = sym_raw_string;
	v->a[26359] = sym_number;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = anon_sym_DOLLAR_LBRACE;
	v->a[26361] = anon_sym_DOLLAR_LPAREN;
	v->a[26362] = anon_sym_BQUOTE;
	v->a[26363] = sym_word;
	v->a[26364] = anon_sym_SEMI;
	v->a[26365] = 6;
	v->a[26366] = actions(3);
	v->a[26367] = 1;
	v->a[26368] = sym_comment;
	v->a[26369] = actions(1001);
	v->a[26370] = 1;
	v->a[26371] = sym_variable_name;
	v->a[26372] = actions(1013);
	v->a[26373] = 1;
	v->a[26374] = aux_sym_concatenation_token1;
	v->a[26375] = actions(1015);
	v->a[26376] = 1;
	v->a[26377] = sym__concat;
	v->a[26378] = state(328);
	v->a[26379] = 1;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = aux_sym_concatenation_repeat1;
	v->a[26381] = actions(997);
	v->a[26382] = 25;
	v->a[26383] = anon_sym_esac;
	v->a[26384] = anon_sym_PIPE;
	v->a[26385] = anon_sym_SEMI_SEMI;
	v->a[26386] = anon_sym_AMP_AMP;
	v->a[26387] = anon_sym_PIPE_PIPE;
	v->a[26388] = anon_sym_LT;
	v->a[26389] = anon_sym_GT;
	v->a[26390] = anon_sym_GT_GT;
	v->a[26391] = anon_sym_LT_AMP;
	v->a[26392] = anon_sym_GT_AMP;
	v->a[26393] = anon_sym_GT_PIPE;
	v->a[26394] = anon_sym_LT_GT;
	v->a[26395] = anon_sym_LT_LT;
	v->a[26396] = anon_sym_LT_LT_DASH;
	v->a[26397] = aux_sym_heredoc_redirect_token1;
	v->a[26398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26399] = anon_sym_DOLLAR;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
