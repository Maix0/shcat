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
	v->a[26300] = aux_sym__variable_assignments_repeat1;
	v->a[26301] = state(1059);
	v->a[26302] = 3;
	v->a[26303] = sym_file_redirect;
	v->a[26304] = sym_heredoc_redirect;
	v->a[26305] = aux_sym_redirected_statement_repeat1;
	v->a[26306] = actions(740);
	v->a[26307] = 4;
	v->a[26308] = anon_sym_SEMI_SEMI;
	v->a[26309] = aux_sym_heredoc_redirect_token1;
	v->a[26310] = anon_sym_AMP;
	v->a[26311] = anon_sym_SEMI;
	v->a[26312] = actions(734);
	v->a[26313] = 15;
	v->a[26314] = anon_sym_LT;
	v->a[26315] = anon_sym_GT;
	v->a[26316] = anon_sym_GT_GT;
	v->a[26317] = anon_sym_LT_AMP;
	v->a[26318] = anon_sym_GT_AMP;
	v->a[26319] = anon_sym_GT_PIPE;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = anon_sym_LT_GT;
	v->a[26321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26322] = anon_sym_DOLLAR;
	v->a[26323] = anon_sym_DQUOTE;
	v->a[26324] = sym_raw_string;
	v->a[26325] = sym_number;
	v->a[26326] = anon_sym_DOLLAR_LBRACE;
	v->a[26327] = anon_sym_DOLLAR_LPAREN;
	v->a[26328] = sym_word;
	v->a[26329] = 15;
	v->a[26330] = actions(664);
	v->a[26331] = 1;
	v->a[26332] = sym_comment;
	v->a[26333] = actions(889);
	v->a[26334] = 1;
	v->a[26335] = anon_sym_EQ;
	v->a[26336] = actions(912);
	v->a[26337] = 1;
	v->a[26338] = anon_sym_PIPE;
	v->a[26339] = actions(916);
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = 1;
	v->a[26341] = anon_sym_AMP_AMP;
	v->a[26342] = actions(918);
	v->a[26343] = 1;
	v->a[26344] = anon_sym_PIPE_PIPE;
	v->a[26345] = actions(928);
	v->a[26346] = 1;
	v->a[26347] = anon_sym_CARET;
	v->a[26348] = actions(930);
	v->a[26349] = 1;
	v->a[26350] = anon_sym_AMP;
	v->a[26351] = actions(922);
	v->a[26352] = 2;
	v->a[26353] = anon_sym_LT;
	v->a[26354] = anon_sym_GT;
	v->a[26355] = actions(924);
	v->a[26356] = 2;
	v->a[26357] = anon_sym_GT_GT;
	v->a[26358] = anon_sym_LT_LT;
	v->a[26359] = actions(932);
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = 2;
	v->a[26361] = anon_sym_EQ_EQ;
	v->a[26362] = anon_sym_BANG_EQ;
	v->a[26363] = actions(934);
	v->a[26364] = 2;
	v->a[26365] = anon_sym_LT_EQ;
	v->a[26366] = anon_sym_GT_EQ;
	v->a[26367] = actions(936);
	v->a[26368] = 2;
	v->a[26369] = anon_sym_PLUS;
	v->a[26370] = anon_sym_DASH;
	v->a[26371] = actions(942);
	v->a[26372] = 2;
	v->a[26373] = anon_sym_PLUS_PLUS2;
	v->a[26374] = anon_sym_DASH_DASH2;
	v->a[26375] = actions(938);
	v->a[26376] = 3;
	v->a[26377] = anon_sym_STAR;
	v->a[26378] = anon_sym_SLASH;
	v->a[26379] = anon_sym_PERCENT;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = actions(891);
	v->a[26381] = 12;
	v->a[26382] = anon_sym_RPAREN;
	v->a[26383] = anon_sym_PLUS_EQ;
	v->a[26384] = anon_sym_DASH_EQ;
	v->a[26385] = anon_sym_STAR_EQ;
	v->a[26386] = anon_sym_SLASH_EQ;
	v->a[26387] = anon_sym_PERCENT_EQ;
	v->a[26388] = anon_sym_LT_LT_EQ;
	v->a[26389] = anon_sym_GT_GT_EQ;
	v->a[26390] = anon_sym_AMP_EQ;
	v->a[26391] = anon_sym_CARET_EQ;
	v->a[26392] = anon_sym_PIPE_EQ;
	v->a[26393] = anon_sym_QMARK;
	v->a[26394] = 9;
	v->a[26395] = actions(3);
	v->a[26396] = 1;
	v->a[26397] = sym_comment;
	v->a[26398] = actions(736);
	v->a[26399] = 1;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
