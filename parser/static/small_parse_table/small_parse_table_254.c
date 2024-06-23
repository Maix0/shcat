/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_254.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1270(t_small_parse_table_array *v)
{
	v->a[25400] = sym_variable_name;
	v->a[25401] = state(1208);
	v->a[25402] = 2;
	v->a[25403] = sym_variable_assignment;
	v->a[25404] = aux_sym__variable_assignments_repeat1;
	v->a[25405] = state(1283);
	v->a[25406] = 3;
	v->a[25407] = sym_file_redirect;
	v->a[25408] = sym_heredoc_redirect;
	v->a[25409] = aux_sym_redirected_statement_repeat1;
	v->a[25410] = actions(809);
	v->a[25411] = 9;
	v->a[25412] = anon_sym_RPAREN;
	v->a[25413] = anon_sym_SEMI_SEMI;
	v->a[25414] = anon_sym_AMP_AMP;
	v->a[25415] = anon_sym_PIPE_PIPE;
	v->a[25416] = anon_sym_LT_LT;
	v->a[25417] = anon_sym_LT_LT_DASH;
	v->a[25418] = aux_sym_heredoc_redirect_token1;
	v->a[25419] = anon_sym_AMP;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = anon_sym_SEMI;
	v->a[25421] = actions(805);
	v->a[25422] = 19;
	v->a[25423] = anon_sym_LT;
	v->a[25424] = anon_sym_GT;
	v->a[25425] = anon_sym_GT_GT;
	v->a[25426] = anon_sym_AMP_GT;
	v->a[25427] = anon_sym_AMP_GT_GT;
	v->a[25428] = anon_sym_LT_AMP;
	v->a[25429] = anon_sym_GT_AMP;
	v->a[25430] = anon_sym_GT_PIPE;
	v->a[25431] = anon_sym_LT_AMP_DASH;
	v->a[25432] = anon_sym_GT_AMP_DASH;
	v->a[25433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25434] = anon_sym_DOLLAR;
	v->a[25435] = anon_sym_DQUOTE;
	v->a[25436] = sym_raw_string;
	v->a[25437] = sym_number;
	v->a[25438] = anon_sym_DOLLAR_LBRACE;
	v->a[25439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = anon_sym_BQUOTE;
	v->a[25441] = sym_word;
	v->a[25442] = 7;
	v->a[25443] = actions(3);
	v->a[25444] = 1;
	v->a[25445] = sym_comment;
	v->a[25446] = actions(869);
	v->a[25447] = 1;
	v->a[25448] = sym_variable_name;
	v->a[25449] = actions(900);
	v->a[25450] = 1;
	v->a[25451] = sym_file_descriptor;
	v->a[25452] = state(1208);
	v->a[25453] = 2;
	v->a[25454] = sym_variable_assignment;
	v->a[25455] = aux_sym__variable_assignments_repeat1;
	v->a[25456] = state(1283);
	v->a[25457] = 3;
	v->a[25458] = sym_file_redirect;
	v->a[25459] = sym_heredoc_redirect;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = aux_sym_redirected_statement_repeat1;
	v->a[25461] = actions(805);
	v->a[25462] = 9;
	v->a[25463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25464] = anon_sym_DOLLAR;
	v->a[25465] = anon_sym_DQUOTE;
	v->a[25466] = sym_raw_string;
	v->a[25467] = sym_number;
	v->a[25468] = anon_sym_DOLLAR_LBRACE;
	v->a[25469] = anon_sym_DOLLAR_LPAREN;
	v->a[25470] = anon_sym_BQUOTE;
	v->a[25471] = sym_word;
	v->a[25472] = actions(807);
	v->a[25473] = 20;
	v->a[25474] = anon_sym_PIPE;
	v->a[25475] = anon_sym_RPAREN;
	v->a[25476] = anon_sym_SEMI_SEMI;
	v->a[25477] = anon_sym_AMP_AMP;
	v->a[25478] = anon_sym_PIPE_PIPE;
	v->a[25479] = anon_sym_LT;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = anon_sym_GT;
	v->a[25481] = anon_sym_GT_GT;
	v->a[25482] = anon_sym_AMP_GT;
	v->a[25483] = anon_sym_AMP_GT_GT;
	v->a[25484] = anon_sym_LT_AMP;
	v->a[25485] = anon_sym_GT_AMP;
	v->a[25486] = anon_sym_GT_PIPE;
	v->a[25487] = anon_sym_LT_AMP_DASH;
	v->a[25488] = anon_sym_GT_AMP_DASH;
	v->a[25489] = anon_sym_LT_LT;
	v->a[25490] = anon_sym_LT_LT_DASH;
	v->a[25491] = aux_sym_heredoc_redirect_token1;
	v->a[25492] = anon_sym_AMP;
	v->a[25493] = anon_sym_SEMI;
	v->a[25494] = 7;
	v->a[25495] = actions(3);
	v->a[25496] = 1;
	v->a[25497] = sym_comment;
	v->a[25498] = actions(813);
	v->a[25499] = 1;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
