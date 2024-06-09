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
	v->a[27300] = ts_builtin_sym_end;
	v->a[27301] = actions(1064);
	v->a[27302] = 1;
	v->a[27303] = sym_variable_name;
	v->a[27304] = actions(1060);
	v->a[27305] = 2;
	v->a[27306] = anon_sym_AMP_AMP;
	v->a[27307] = anon_sym_PIPE_PIPE;
	v->a[27308] = actions(1062);
	v->a[27309] = 2;
	v->a[27310] = anon_sym_LT_LT;
	v->a[27311] = anon_sym_LT_LT_DASH;
	v->a[27312] = state(1044);
	v->a[27313] = 2;
	v->a[27314] = sym_variable_assignment;
	v->a[27315] = aux_sym_variable_assignments_repeat1;
	v->a[27316] = state(1043);
	v->a[27317] = 3;
	v->a[27318] = sym_file_redirect;
	v->a[27319] = sym_heredoc_redirect;
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = aux_sym_redirected_statement_repeat1;
	v->a[27321] = actions(1058);
	v->a[27322] = 4;
	v->a[27323] = anon_sym_SEMI_SEMI;
	v->a[27324] = aux_sym_heredoc_redirect_token1;
	v->a[27325] = anon_sym_AMP;
	v->a[27326] = anon_sym_SEMI;
	v->a[27327] = actions(1000);
	v->a[27328] = 20;
	v->a[27329] = anon_sym_LT;
	v->a[27330] = anon_sym_GT;
	v->a[27331] = anon_sym_GT_GT;
	v->a[27332] = anon_sym_AMP_GT;
	v->a[27333] = anon_sym_AMP_GT_GT;
	v->a[27334] = anon_sym_LT_AMP;
	v->a[27335] = anon_sym_GT_AMP;
	v->a[27336] = anon_sym_GT_PIPE;
	v->a[27337] = anon_sym_LT_AMP_DASH;
	v->a[27338] = anon_sym_GT_AMP_DASH;
	v->a[27339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = anon_sym_DOLLAR;
	v->a[27341] = anon_sym_DQUOTE;
	v->a[27342] = sym_raw_string;
	v->a[27343] = aux_sym_number_token1;
	v->a[27344] = aux_sym_number_token2;
	v->a[27345] = anon_sym_DOLLAR_LBRACE;
	v->a[27346] = anon_sym_DOLLAR_LPAREN;
	v->a[27347] = anon_sym_BQUOTE;
	v->a[27348] = sym_word;
	v->a[27349] = 8;
	v->a[27350] = actions(3);
	v->a[27351] = 1;
	v->a[27352] = sym_comment;
	v->a[27353] = actions(1002);
	v->a[27354] = 1;
	v->a[27355] = anon_sym_PIPE;
	v->a[27356] = actions(1006);
	v->a[27357] = 1;
	v->a[27358] = sym_file_descriptor;
	v->a[27359] = actions(1041);
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = 1;
	v->a[27361] = sym_variable_name;
	v->a[27362] = state(1039);
	v->a[27363] = 2;
	v->a[27364] = sym_variable_assignment;
	v->a[27365] = aux_sym_variable_assignments_repeat1;
	v->a[27366] = state(1035);
	v->a[27367] = 3;
	v->a[27368] = sym_file_redirect;
	v->a[27369] = sym_heredoc_redirect;
	v->a[27370] = aux_sym_redirected_statement_repeat1;
	v->a[27371] = actions(1004);
	v->a[27372] = 9;
	v->a[27373] = anon_sym_esac;
	v->a[27374] = anon_sym_SEMI_SEMI;
	v->a[27375] = anon_sym_AMP_AMP;
	v->a[27376] = anon_sym_PIPE_PIPE;
	v->a[27377] = anon_sym_LT_LT;
	v->a[27378] = anon_sym_LT_LT_DASH;
	v->a[27379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = anon_sym_AMP;
	v->a[27381] = anon_sym_SEMI;
	v->a[27382] = actions(1000);
	v->a[27383] = 20;
	v->a[27384] = anon_sym_LT;
	v->a[27385] = anon_sym_GT;
	v->a[27386] = anon_sym_GT_GT;
	v->a[27387] = anon_sym_AMP_GT;
	v->a[27388] = anon_sym_AMP_GT_GT;
	v->a[27389] = anon_sym_LT_AMP;
	v->a[27390] = anon_sym_GT_AMP;
	v->a[27391] = anon_sym_GT_PIPE;
	v->a[27392] = anon_sym_LT_AMP_DASH;
	v->a[27393] = anon_sym_GT_AMP_DASH;
	v->a[27394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27395] = anon_sym_DOLLAR;
	v->a[27396] = anon_sym_DQUOTE;
	v->a[27397] = sym_raw_string;
	v->a[27398] = aux_sym_number_token1;
	v->a[27399] = aux_sym_number_token2;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
