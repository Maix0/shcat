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
	v->a[27300] = anon_sym_GT_GT_EQ;
	v->a[27301] = anon_sym_AMP_EQ;
	v->a[27302] = anon_sym_CARET_EQ;
	v->a[27303] = anon_sym_PIPE_EQ;
	v->a[27304] = anon_sym_QMARK;
	v->a[27305] = anon_sym_COLON;
	v->a[27306] = 3;
	v->a[27307] = actions(870);
	v->a[27308] = 1;
	v->a[27309] = sym_comment;
	v->a[27310] = actions(1039);
	v->a[27311] = 13;
	v->a[27312] = anon_sym_PIPE;
	v->a[27313] = anon_sym_EQ;
	v->a[27314] = anon_sym_LT;
	v->a[27315] = anon_sym_GT;
	v->a[27316] = anon_sym_GT_GT;
	v->a[27317] = anon_sym_LT_LT;
	v->a[27318] = anon_sym_CARET;
	v->a[27319] = anon_sym_AMP;
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = anon_sym_PLUS;
	v->a[27321] = anon_sym_DASH;
	v->a[27322] = anon_sym_STAR;
	v->a[27323] = anon_sym_SLASH;
	v->a[27324] = anon_sym_PERCENT;
	v->a[27325] = actions(1041);
	v->a[27326] = 21;
	v->a[27327] = anon_sym_AMP_AMP;
	v->a[27328] = anon_sym_PIPE_PIPE;
	v->a[27329] = anon_sym_RPAREN_RPAREN;
	v->a[27330] = anon_sym_PLUS_EQ;
	v->a[27331] = anon_sym_DASH_EQ;
	v->a[27332] = anon_sym_STAR_EQ;
	v->a[27333] = anon_sym_SLASH_EQ;
	v->a[27334] = anon_sym_PERCENT_EQ;
	v->a[27335] = anon_sym_LT_LT_EQ;
	v->a[27336] = anon_sym_GT_GT_EQ;
	v->a[27337] = anon_sym_AMP_EQ;
	v->a[27338] = anon_sym_CARET_EQ;
	v->a[27339] = anon_sym_PIPE_EQ;
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = anon_sym_EQ_EQ;
	v->a[27341] = anon_sym_BANG_EQ;
	v->a[27342] = anon_sym_LT_EQ;
	v->a[27343] = anon_sym_GT_EQ;
	v->a[27344] = anon_sym_QMARK;
	v->a[27345] = anon_sym_COLON;
	v->a[27346] = anon_sym_PLUS_PLUS2;
	v->a[27347] = anon_sym_DASH_DASH2;
	v->a[27348] = 12;
	v->a[27349] = actions(3);
	v->a[27350] = 1;
	v->a[27351] = sym_comment;
	v->a[27352] = actions(680);
	v->a[27353] = 1;
	v->a[27354] = anon_sym_SEMI_SEMI;
	v->a[27355] = actions(682);
	v->a[27356] = 1;
	v->a[27357] = anon_sym_PIPE;
	v->a[27358] = actions(690);
	v->a[27359] = 1;
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = sym_file_descriptor;
	v->a[27361] = actions(926);
	v->a[27362] = 1;
	v->a[27363] = sym_variable_name;
	v->a[27364] = state(716);
	v->a[27365] = 1;
	v->a[27366] = sym_terminator;
	v->a[27367] = actions(754);
	v->a[27368] = 2;
	v->a[27369] = anon_sym_LT_LT;
	v->a[27370] = anon_sym_LT_LT_DASH;
	v->a[27371] = actions(924);
	v->a[27372] = 2;
	v->a[27373] = anon_sym_AMP_AMP;
	v->a[27374] = anon_sym_PIPE_PIPE;
	v->a[27375] = state(1298);
	v->a[27376] = 2;
	v->a[27377] = sym_variable_assignment;
	v->a[27378] = aux_sym__variable_assignments_repeat1;
	v->a[27379] = actions(750);
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = 3;
	v->a[27381] = aux_sym_heredoc_redirect_token1;
	v->a[27382] = anon_sym_AMP;
	v->a[27383] = anon_sym_SEMI;
	v->a[27384] = state(1268);
	v->a[27385] = 3;
	v->a[27386] = sym_file_redirect;
	v->a[27387] = sym_heredoc_redirect;
	v->a[27388] = aux_sym_redirected_statement_repeat1;
	v->a[27389] = actions(678);
	v->a[27390] = 17;
	v->a[27391] = anon_sym_LT;
	v->a[27392] = anon_sym_GT;
	v->a[27393] = anon_sym_GT_GT;
	v->a[27394] = anon_sym_LT_AMP;
	v->a[27395] = anon_sym_GT_AMP;
	v->a[27396] = anon_sym_GT_PIPE;
	v->a[27397] = anon_sym_LT_AMP_DASH;
	v->a[27398] = anon_sym_GT_AMP_DASH;
	v->a[27399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
