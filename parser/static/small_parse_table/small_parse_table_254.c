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
	v->a[25400] = anon_sym_QMARK;
	v->a[25401] = anon_sym_COLON;
	v->a[25402] = anon_sym_PLUS_PLUS2;
	v->a[25403] = anon_sym_DASH_DASH2;
	v->a[25404] = 9;
	v->a[25405] = actions(3);
	v->a[25406] = 1;
	v->a[25407] = sym_comment;
	v->a[25408] = actions(682);
	v->a[25409] = 1;
	v->a[25410] = anon_sym_PIPE;
	v->a[25411] = actions(690);
	v->a[25412] = 1;
	v->a[25413] = sym_file_descriptor;
	v->a[25414] = actions(785);
	v->a[25415] = 1;
	v->a[25416] = sym_variable_name;
	v->a[25417] = actions(984);
	v->a[25418] = 1;
	v->a[25419] = ts_builtin_sym_end;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = state(1155);
	v->a[25421] = 2;
	v->a[25422] = sym_variable_assignment;
	v->a[25423] = aux_sym__variable_assignments_repeat1;
	v->a[25424] = state(1160);
	v->a[25425] = 3;
	v->a[25426] = sym_file_redirect;
	v->a[25427] = sym_heredoc_redirect;
	v->a[25428] = aux_sym_redirected_statement_repeat1;
	v->a[25429] = actions(935);
	v->a[25430] = 8;
	v->a[25431] = anon_sym_SEMI_SEMI;
	v->a[25432] = anon_sym_AMP_AMP;
	v->a[25433] = anon_sym_PIPE_PIPE;
	v->a[25434] = anon_sym_LT_LT;
	v->a[25435] = anon_sym_LT_LT_DASH;
	v->a[25436] = aux_sym_heredoc_redirect_token1;
	v->a[25437] = anon_sym_AMP;
	v->a[25438] = anon_sym_SEMI;
	v->a[25439] = actions(678);
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = 17;
	v->a[25441] = anon_sym_LT;
	v->a[25442] = anon_sym_GT;
	v->a[25443] = anon_sym_GT_GT;
	v->a[25444] = anon_sym_LT_AMP;
	v->a[25445] = anon_sym_GT_AMP;
	v->a[25446] = anon_sym_GT_PIPE;
	v->a[25447] = anon_sym_LT_AMP_DASH;
	v->a[25448] = anon_sym_GT_AMP_DASH;
	v->a[25449] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25450] = anon_sym_DOLLAR;
	v->a[25451] = anon_sym_DQUOTE;
	v->a[25452] = sym_raw_string;
	v->a[25453] = sym_number;
	v->a[25454] = anon_sym_DOLLAR_LBRACE;
	v->a[25455] = anon_sym_DOLLAR_LPAREN;
	v->a[25456] = anon_sym_BQUOTE;
	v->a[25457] = sym_word;
	v->a[25458] = 20;
	v->a[25459] = actions(3);
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = 1;
	v->a[25461] = sym_comment;
	v->a[25462] = actions(894);
	v->a[25463] = 1;
	v->a[25464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25465] = actions(896);
	v->a[25466] = 1;
	v->a[25467] = anon_sym_DOLLAR;
	v->a[25468] = actions(898);
	v->a[25469] = 1;
	v->a[25470] = anon_sym_DQUOTE;
	v->a[25471] = actions(900);
	v->a[25472] = 1;
	v->a[25473] = anon_sym_DOLLAR_LBRACE;
	v->a[25474] = actions(902);
	v->a[25475] = 1;
	v->a[25476] = anon_sym_DOLLAR_LPAREN;
	v->a[25477] = actions(904);
	v->a[25478] = 1;
	v->a[25479] = anon_sym_BQUOTE;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = actions(906);
	v->a[25481] = 1;
	v->a[25482] = sym_file_descriptor;
	v->a[25483] = actions(986);
	v->a[25484] = 1;
	v->a[25485] = aux_sym_heredoc_redirect_token1;
	v->a[25486] = state(1429);
	v->a[25487] = 1;
	v->a[25488] = aux_sym__heredoc_command;
	v->a[25489] = state(1937);
	v->a[25490] = 1;
	v->a[25491] = sym_concatenation;
	v->a[25492] = state(2281);
	v->a[25493] = 1;
	v->a[25494] = sym__heredoc_expression;
	v->a[25495] = state(2282);
	v->a[25496] = 1;
	v->a[25497] = sym__heredoc_pipeline;
	v->a[25498] = actions(884);
	v->a[25499] = 2;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
