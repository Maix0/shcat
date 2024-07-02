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
	v->a[26300] = anon_sym_GT_GT;
	v->a[26301] = anon_sym_LT_AMP;
	v->a[26302] = anon_sym_GT_AMP;
	v->a[26303] = anon_sym_GT_PIPE;
	v->a[26304] = anon_sym_LT_GT;
	v->a[26305] = anon_sym_LT_LT;
	v->a[26306] = anon_sym_LT_LT_DASH;
	v->a[26307] = aux_sym_heredoc_redirect_token1;
	v->a[26308] = anon_sym_AMP;
	v->a[26309] = anon_sym_SEMI;
	v->a[26310] = 17;
	v->a[26311] = actions(668);
	v->a[26312] = 1;
	v->a[26313] = anon_sym_AMP;
	v->a[26314] = actions(680);
	v->a[26315] = 1;
	v->a[26316] = sym_comment;
	v->a[26317] = actions(730);
	v->a[26318] = 1;
	v->a[26319] = anon_sym_CARET;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = actions(732);
	v->a[26321] = 1;
	v->a[26322] = anon_sym_PIPE;
	v->a[26323] = actions(734);
	v->a[26324] = 1;
	v->a[26325] = anon_sym_AMP_AMP;
	v->a[26326] = actions(736);
	v->a[26327] = 1;
	v->a[26328] = anon_sym_PIPE_PIPE;
	v->a[26329] = actions(738);
	v->a[26330] = 1;
	v->a[26331] = anon_sym_QMARK;
	v->a[26332] = actions(740);
	v->a[26333] = 1;
	v->a[26334] = anon_sym_EQ;
	v->a[26335] = actions(999);
	v->a[26336] = 1;
	v->a[26337] = anon_sym_RPAREN_RPAREN;
	v->a[26338] = actions(664);
	v->a[26339] = 2;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = anon_sym_LT;
	v->a[26341] = anon_sym_GT;
	v->a[26342] = actions(666);
	v->a[26343] = 2;
	v->a[26344] = anon_sym_GT_GT;
	v->a[26345] = anon_sym_LT_LT;
	v->a[26346] = actions(670);
	v->a[26347] = 2;
	v->a[26348] = anon_sym_EQ_EQ;
	v->a[26349] = anon_sym_BANG_EQ;
	v->a[26350] = actions(672);
	v->a[26351] = 2;
	v->a[26352] = anon_sym_LT_EQ;
	v->a[26353] = anon_sym_GT_EQ;
	v->a[26354] = actions(674);
	v->a[26355] = 2;
	v->a[26356] = anon_sym_PLUS;
	v->a[26357] = anon_sym_DASH;
	v->a[26358] = actions(678);
	v->a[26359] = 2;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = anon_sym_PLUS_PLUS2;
	v->a[26361] = anon_sym_DASH_DASH2;
	v->a[26362] = actions(676);
	v->a[26363] = 3;
	v->a[26364] = anon_sym_STAR;
	v->a[26365] = anon_sym_SLASH;
	v->a[26366] = anon_sym_PERCENT;
	v->a[26367] = actions(912);
	v->a[26368] = 10;
	v->a[26369] = anon_sym_PLUS_EQ;
	v->a[26370] = anon_sym_DASH_EQ;
	v->a[26371] = anon_sym_STAR_EQ;
	v->a[26372] = anon_sym_SLASH_EQ;
	v->a[26373] = anon_sym_PERCENT_EQ;
	v->a[26374] = anon_sym_LT_LT_EQ;
	v->a[26375] = anon_sym_GT_GT_EQ;
	v->a[26376] = anon_sym_AMP_EQ;
	v->a[26377] = anon_sym_CARET_EQ;
	v->a[26378] = anon_sym_PIPE_EQ;
	v->a[26379] = 11;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = actions(3);
	v->a[26381] = 1;
	v->a[26382] = sym_comment;
	v->a[26383] = actions(692);
	v->a[26384] = 1;
	v->a[26385] = anon_sym_PIPE;
	v->a[26386] = actions(702);
	v->a[26387] = 1;
	v->a[26388] = sym_file_descriptor;
	v->a[26389] = actions(916);
	v->a[26390] = 1;
	v->a[26391] = sym_variable_name;
	v->a[26392] = state(669);
	v->a[26393] = 1;
	v->a[26394] = sym_terminator;
	v->a[26395] = actions(700);
	v->a[26396] = 2;
	v->a[26397] = anon_sym_LT_LT;
	v->a[26398] = anon_sym_LT_LT_DASH;
	v->a[26399] = actions(914);
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
