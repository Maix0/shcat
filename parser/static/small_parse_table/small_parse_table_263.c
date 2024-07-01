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
	v->a[26300] = anon_sym_STAR;
	v->a[26301] = anon_sym_SLASH;
	v->a[26302] = anon_sym_PERCENT;
	v->a[26303] = actions(872);
	v->a[26304] = 8;
	v->a[26305] = anon_sym_PIPE;
	v->a[26306] = anon_sym_EQ;
	v->a[26307] = anon_sym_LT;
	v->a[26308] = anon_sym_GT;
	v->a[26309] = anon_sym_GT_GT;
	v->a[26310] = anon_sym_LT_LT;
	v->a[26311] = anon_sym_CARET;
	v->a[26312] = anon_sym_AMP;
	v->a[26313] = actions(874);
	v->a[26314] = 19;
	v->a[26315] = anon_sym_AMP_AMP;
	v->a[26316] = anon_sym_PIPE_PIPE;
	v->a[26317] = anon_sym_RPAREN_RPAREN;
	v->a[26318] = anon_sym_PLUS_EQ;
	v->a[26319] = anon_sym_DASH_EQ;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = anon_sym_STAR_EQ;
	v->a[26321] = anon_sym_SLASH_EQ;
	v->a[26322] = anon_sym_PERCENT_EQ;
	v->a[26323] = anon_sym_LT_LT_EQ;
	v->a[26324] = anon_sym_GT_GT_EQ;
	v->a[26325] = anon_sym_AMP_EQ;
	v->a[26326] = anon_sym_CARET_EQ;
	v->a[26327] = anon_sym_PIPE_EQ;
	v->a[26328] = anon_sym_EQ_EQ;
	v->a[26329] = anon_sym_BANG_EQ;
	v->a[26330] = anon_sym_LT_EQ;
	v->a[26331] = anon_sym_GT_EQ;
	v->a[26332] = anon_sym_QMARK;
	v->a[26333] = anon_sym_COLON;
	v->a[26334] = 7;
	v->a[26335] = actions(3);
	v->a[26336] = 1;
	v->a[26337] = sym_comment;
	v->a[26338] = actions(756);
	v->a[26339] = 1;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = sym_variable_name;
	v->a[26341] = actions(976);
	v->a[26342] = 1;
	v->a[26343] = sym_file_descriptor;
	v->a[26344] = state(1163);
	v->a[26345] = 2;
	v->a[26346] = sym_variable_assignment;
	v->a[26347] = aux_sym__variable_assignments_repeat1;
	v->a[26348] = state(1128);
	v->a[26349] = 3;
	v->a[26350] = sym_file_redirect;
	v->a[26351] = sym_heredoc_redirect;
	v->a[26352] = aux_sym_redirected_statement_repeat1;
	v->a[26353] = actions(678);
	v->a[26354] = 9;
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
	v->a[26364] = actions(682);
	v->a[26365] = 18;
	v->a[26366] = anon_sym_PIPE;
	v->a[26367] = anon_sym_RPAREN;
	v->a[26368] = anon_sym_SEMI_SEMI;
	v->a[26369] = anon_sym_AMP_AMP;
	v->a[26370] = anon_sym_PIPE_PIPE;
	v->a[26371] = anon_sym_LT;
	v->a[26372] = anon_sym_GT;
	v->a[26373] = anon_sym_GT_GT;
	v->a[26374] = anon_sym_LT_AMP;
	v->a[26375] = anon_sym_GT_AMP;
	v->a[26376] = anon_sym_GT_PIPE;
	v->a[26377] = anon_sym_LT_AMP_DASH;
	v->a[26378] = anon_sym_GT_AMP_DASH;
	v->a[26379] = anon_sym_LT_LT;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = anon_sym_LT_LT_DASH;
	v->a[26381] = aux_sym_heredoc_redirect_token1;
	v->a[26382] = anon_sym_AMP;
	v->a[26383] = anon_sym_SEMI;
	v->a[26384] = 12;
	v->a[26385] = actions(3);
	v->a[26386] = 1;
	v->a[26387] = sym_comment;
	v->a[26388] = actions(602);
	v->a[26389] = 1;
	v->a[26390] = sym_file_descriptor;
	v->a[26391] = actions(699);
	v->a[26392] = 1;
	v->a[26393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26394] = actions(701);
	v->a[26395] = 1;
	v->a[26396] = anon_sym_DOLLAR;
	v->a[26397] = actions(703);
	v->a[26398] = 1;
	v->a[26399] = anon_sym_DQUOTE;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
