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
	v->a[25400] = anon_sym_DOLLAR;
	v->a[25401] = anon_sym_DQUOTE;
	v->a[25402] = sym_raw_string;
	v->a[25403] = sym_number;
	v->a[25404] = anon_sym_DOLLAR_LBRACE;
	v->a[25405] = anon_sym_DOLLAR_LPAREN;
	v->a[25406] = anon_sym_BQUOTE;
	v->a[25407] = sym_word;
	v->a[25408] = 11;
	v->a[25409] = actions(3);
	v->a[25410] = 1;
	v->a[25411] = sym_comment;
	v->a[25412] = actions(766);
	v->a[25413] = 1;
	v->a[25414] = anon_sym_PIPE;
	v->a[25415] = actions(774);
	v->a[25416] = 1;
	v->a[25417] = sym_file_descriptor;
	v->a[25418] = actions(895);
	v->a[25419] = 1;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = sym_variable_name;
	v->a[25421] = state(783);
	v->a[25422] = 1;
	v->a[25423] = sym_terminator;
	v->a[25424] = actions(804);
	v->a[25425] = 2;
	v->a[25426] = anon_sym_LT_LT;
	v->a[25427] = anon_sym_LT_LT_DASH;
	v->a[25428] = actions(893);
	v->a[25429] = 2;
	v->a[25430] = anon_sym_AMP_AMP;
	v->a[25431] = anon_sym_PIPE_PIPE;
	v->a[25432] = state(1270);
	v->a[25433] = 2;
	v->a[25434] = sym_variable_assignment;
	v->a[25435] = aux_sym__variable_assignments_repeat1;
	v->a[25436] = state(1256);
	v->a[25437] = 3;
	v->a[25438] = sym_file_redirect;
	v->a[25439] = sym_heredoc_redirect;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = aux_sym_redirected_statement_repeat1;
	v->a[25441] = actions(898);
	v->a[25442] = 4;
	v->a[25443] = anon_sym_SEMI_SEMI;
	v->a[25444] = aux_sym_heredoc_redirect_token1;
	v->a[25445] = anon_sym_AMP;
	v->a[25446] = anon_sym_SEMI;
	v->a[25447] = actions(762);
	v->a[25448] = 19;
	v->a[25449] = anon_sym_LT;
	v->a[25450] = anon_sym_GT;
	v->a[25451] = anon_sym_GT_GT;
	v->a[25452] = anon_sym_AMP_GT;
	v->a[25453] = anon_sym_AMP_GT_GT;
	v->a[25454] = anon_sym_LT_AMP;
	v->a[25455] = anon_sym_GT_AMP;
	v->a[25456] = anon_sym_GT_PIPE;
	v->a[25457] = anon_sym_LT_AMP_DASH;
	v->a[25458] = anon_sym_GT_AMP_DASH;
	v->a[25459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = anon_sym_DOLLAR;
	v->a[25461] = anon_sym_DQUOTE;
	v->a[25462] = sym_raw_string;
	v->a[25463] = sym_number;
	v->a[25464] = anon_sym_DOLLAR_LBRACE;
	v->a[25465] = anon_sym_DOLLAR_LPAREN;
	v->a[25466] = anon_sym_BQUOTE;
	v->a[25467] = sym_word;
	v->a[25468] = 8;
	v->a[25469] = actions(3);
	v->a[25470] = 1;
	v->a[25471] = sym_comment;
	v->a[25472] = actions(766);
	v->a[25473] = 1;
	v->a[25474] = anon_sym_PIPE;
	v->a[25475] = actions(774);
	v->a[25476] = 1;
	v->a[25477] = sym_file_descriptor;
	v->a[25478] = actions(806);
	v->a[25479] = 1;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = sym_variable_name;
	v->a[25481] = state(1143);
	v->a[25482] = 2;
	v->a[25483] = sym_variable_assignment;
	v->a[25484] = aux_sym__variable_assignments_repeat1;
	v->a[25485] = state(1137);
	v->a[25486] = 3;
	v->a[25487] = sym_file_redirect;
	v->a[25488] = sym_heredoc_redirect;
	v->a[25489] = aux_sym_redirected_statement_repeat1;
	v->a[25490] = actions(900);
	v->a[25491] = 9;
	v->a[25492] = anon_sym_RPAREN;
	v->a[25493] = anon_sym_SEMI_SEMI;
	v->a[25494] = anon_sym_AMP_AMP;
	v->a[25495] = anon_sym_PIPE_PIPE;
	v->a[25496] = anon_sym_LT_LT;
	v->a[25497] = anon_sym_LT_LT_DASH;
	v->a[25498] = aux_sym_heredoc_redirect_token1;
	v->a[25499] = anon_sym_AMP;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
