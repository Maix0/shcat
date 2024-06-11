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
	v->a[27300] = anon_sym_GT_PIPE;
	v->a[27301] = anon_sym_LT_AMP_DASH;
	v->a[27302] = anon_sym_GT_AMP_DASH;
	v->a[27303] = anon_sym_LT_LT;
	v->a[27304] = anon_sym_LT_LT_DASH;
	v->a[27305] = aux_sym_heredoc_redirect_token1;
	v->a[27306] = anon_sym_AMP;
	v->a[27307] = anon_sym_BQUOTE;
	v->a[27308] = anon_sym_SEMI;
	v->a[27309] = 10;
	v->a[27310] = actions(3);
	v->a[27311] = 1;
	v->a[27312] = sym_comment;
	v->a[27313] = actions(807);
	v->a[27314] = 1;
	v->a[27315] = anon_sym_PIPE;
	v->a[27316] = actions(811);
	v->a[27317] = 1;
	v->a[27318] = sym_file_descriptor;
	v->a[27319] = actions(967);
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = 1;
	v->a[27321] = sym_variable_name;
	v->a[27322] = actions(861);
	v->a[27323] = 2;
	v->a[27324] = anon_sym_LT_LT;
	v->a[27325] = anon_sym_LT_LT_DASH;
	v->a[27326] = actions(965);
	v->a[27327] = 2;
	v->a[27328] = anon_sym_AMP_AMP;
	v->a[27329] = anon_sym_PIPE_PIPE;
	v->a[27330] = state(1415);
	v->a[27331] = 2;
	v->a[27332] = sym_variable_assignment;
	v->a[27333] = aux_sym_variable_assignments_repeat1;
	v->a[27334] = state(1322);
	v->a[27335] = 3;
	v->a[27336] = sym_file_redirect;
	v->a[27337] = sym_heredoc_redirect;
	v->a[27338] = aux_sym_redirected_statement_repeat1;
	v->a[27339] = actions(1039);
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = 4;
	v->a[27341] = anon_sym_SEMI_SEMI;
	v->a[27342] = aux_sym_heredoc_redirect_token1;
	v->a[27343] = anon_sym_AMP;
	v->a[27344] = anon_sym_SEMI;
	v->a[27345] = actions(805);
	v->a[27346] = 19;
	v->a[27347] = anon_sym_LT;
	v->a[27348] = anon_sym_GT;
	v->a[27349] = anon_sym_GT_GT;
	v->a[27350] = anon_sym_AMP_GT;
	v->a[27351] = anon_sym_AMP_GT_GT;
	v->a[27352] = anon_sym_LT_AMP;
	v->a[27353] = anon_sym_GT_AMP;
	v->a[27354] = anon_sym_GT_PIPE;
	v->a[27355] = anon_sym_LT_AMP_DASH;
	v->a[27356] = anon_sym_GT_AMP_DASH;
	v->a[27357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27358] = anon_sym_DOLLAR;
	v->a[27359] = anon_sym_DQUOTE;
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = sym_raw_string;
	v->a[27361] = sym_number;
	v->a[27362] = anon_sym_DOLLAR_LBRACE;
	v->a[27363] = anon_sym_DOLLAR_LPAREN;
	v->a[27364] = anon_sym_BQUOTE;
	v->a[27365] = sym_word;
	v->a[27366] = 10;
	v->a[27367] = actions(3);
	v->a[27368] = 1;
	v->a[27369] = sym_comment;
	v->a[27370] = actions(807);
	v->a[27371] = 1;
	v->a[27372] = anon_sym_PIPE;
	v->a[27373] = actions(811);
	v->a[27374] = 1;
	v->a[27375] = sym_file_descriptor;
	v->a[27376] = actions(967);
	v->a[27377] = 1;
	v->a[27378] = sym_variable_name;
	v->a[27379] = actions(861);
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = 2;
	v->a[27381] = anon_sym_LT_LT;
	v->a[27382] = anon_sym_LT_LT_DASH;
	v->a[27383] = actions(965);
	v->a[27384] = 2;
	v->a[27385] = anon_sym_AMP_AMP;
	v->a[27386] = anon_sym_PIPE_PIPE;
	v->a[27387] = state(1415);
	v->a[27388] = 2;
	v->a[27389] = sym_variable_assignment;
	v->a[27390] = aux_sym_variable_assignments_repeat1;
	v->a[27391] = state(1322);
	v->a[27392] = 3;
	v->a[27393] = sym_file_redirect;
	v->a[27394] = sym_heredoc_redirect;
	v->a[27395] = aux_sym_redirected_statement_repeat1;
	v->a[27396] = actions(1041);
	v->a[27397] = 4;
	v->a[27398] = anon_sym_SEMI_SEMI;
	v->a[27399] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
