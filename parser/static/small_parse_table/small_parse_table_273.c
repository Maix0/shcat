/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_273.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1365(t_small_parse_table_array *v)
{
	v->a[27300] = anon_sym_GT_EQ;
	v->a[27301] = actions(936);
	v->a[27302] = 2;
	v->a[27303] = anon_sym_PLUS;
	v->a[27304] = anon_sym_DASH;
	v->a[27305] = actions(942);
	v->a[27306] = 2;
	v->a[27307] = anon_sym_PLUS_PLUS2;
	v->a[27308] = anon_sym_DASH_DASH2;
	v->a[27309] = actions(938);
	v->a[27310] = 3;
	v->a[27311] = anon_sym_STAR;
	v->a[27312] = anon_sym_SLASH;
	v->a[27313] = anon_sym_PERCENT;
	v->a[27314] = actions(698);
	v->a[27315] = 14;
	v->a[27316] = anon_sym_RPAREN;
	v->a[27317] = anon_sym_AMP_AMP;
	v->a[27318] = anon_sym_PIPE_PIPE;
	v->a[27319] = anon_sym_PLUS_EQ;
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = anon_sym_DASH_EQ;
	v->a[27321] = anon_sym_STAR_EQ;
	v->a[27322] = anon_sym_SLASH_EQ;
	v->a[27323] = anon_sym_PERCENT_EQ;
	v->a[27324] = anon_sym_LT_LT_EQ;
	v->a[27325] = anon_sym_GT_GT_EQ;
	v->a[27326] = anon_sym_AMP_EQ;
	v->a[27327] = anon_sym_CARET_EQ;
	v->a[27328] = anon_sym_PIPE_EQ;
	v->a[27329] = anon_sym_QMARK;
	v->a[27330] = 11;
	v->a[27331] = actions(3);
	v->a[27332] = 1;
	v->a[27333] = sym_comment;
	v->a[27334] = actions(736);
	v->a[27335] = 1;
	v->a[27336] = anon_sym_PIPE;
	v->a[27337] = actions(746);
	v->a[27338] = 1;
	v->a[27339] = sym_file_descriptor;
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = actions(957);
	v->a[27341] = 1;
	v->a[27342] = sym_variable_name;
	v->a[27343] = state(762);
	v->a[27344] = 1;
	v->a[27345] = sym_terminator;
	v->a[27346] = actions(744);
	v->a[27347] = 2;
	v->a[27348] = anon_sym_LT_LT;
	v->a[27349] = anon_sym_LT_LT_DASH;
	v->a[27350] = actions(955);
	v->a[27351] = 2;
	v->a[27352] = anon_sym_AMP_AMP;
	v->a[27353] = anon_sym_PIPE_PIPE;
	v->a[27354] = state(1134);
	v->a[27355] = 2;
	v->a[27356] = sym_variable_assignment;
	v->a[27357] = aux_sym__variable_assignments_repeat1;
	v->a[27358] = state(1194);
	v->a[27359] = 3;
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = sym_file_redirect;
	v->a[27361] = sym_heredoc_redirect;
	v->a[27362] = aux_sym_redirected_statement_repeat1;
	v->a[27363] = actions(1007);
	v->a[27364] = 4;
	v->a[27365] = anon_sym_SEMI_SEMI;
	v->a[27366] = aux_sym_heredoc_redirect_token1;
	v->a[27367] = anon_sym_AMP;
	v->a[27368] = anon_sym_SEMI;
	v->a[27369] = actions(734);
	v->a[27370] = 16;
	v->a[27371] = anon_sym_LT;
	v->a[27372] = anon_sym_GT;
	v->a[27373] = anon_sym_GT_GT;
	v->a[27374] = anon_sym_LT_AMP;
	v->a[27375] = anon_sym_GT_AMP;
	v->a[27376] = anon_sym_GT_PIPE;
	v->a[27377] = anon_sym_LT_GT;
	v->a[27378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27379] = anon_sym_DOLLAR;
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = anon_sym_DQUOTE;
	v->a[27381] = sym_raw_string;
	v->a[27382] = sym_number;
	v->a[27383] = anon_sym_DOLLAR_LBRACE;
	v->a[27384] = anon_sym_DOLLAR_LPAREN;
	v->a[27385] = anon_sym_BQUOTE;
	v->a[27386] = sym_word;
	v->a[27387] = 12;
	v->a[27388] = actions(664);
	v->a[27389] = 1;
	v->a[27390] = sym_comment;
	v->a[27391] = actions(928);
	v->a[27392] = 1;
	v->a[27393] = anon_sym_CARET;
	v->a[27394] = actions(930);
	v->a[27395] = 1;
	v->a[27396] = anon_sym_AMP;
	v->a[27397] = actions(696);
	v->a[27398] = 2;
	v->a[27399] = anon_sym_PIPE;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
