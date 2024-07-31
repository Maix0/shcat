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
	v->a[25400] = 1;
	v->a[25401] = sym__bare_dollar;
	v->a[25402] = state(320);
	v->a[25403] = 1;
	v->a[25404] = aux_sym_command_repeat2;
	v->a[25405] = state(614);
	v->a[25406] = 1;
	v->a[25407] = sym_concatenation;
	v->a[25408] = actions(983);
	v->a[25409] = 3;
	v->a[25410] = sym_raw_string;
	v->a[25411] = sym_number;
	v->a[25412] = sym_word;
	v->a[25413] = state(570);
	v->a[25414] = 5;
	v->a[25415] = sym_arithmetic_expansion;
	v->a[25416] = sym_string;
	v->a[25417] = sym_simple_expansion;
	v->a[25418] = sym_expansion;
	v->a[25419] = sym_command_substitution;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = actions(497);
	v->a[25421] = 13;
	v->a[25422] = anon_sym_PIPE;
	v->a[25423] = anon_sym_AMP_AMP;
	v->a[25424] = anon_sym_PIPE_PIPE;
	v->a[25425] = anon_sym_LT;
	v->a[25426] = anon_sym_GT;
	v->a[25427] = anon_sym_GT_GT;
	v->a[25428] = anon_sym_LT_AMP;
	v->a[25429] = anon_sym_GT_AMP;
	v->a[25430] = anon_sym_GT_PIPE;
	v->a[25431] = anon_sym_LT_GT;
	v->a[25432] = anon_sym_LT_LT;
	v->a[25433] = anon_sym_LT_LT_DASH;
	v->a[25434] = aux_sym_heredoc_redirect_token1;
	v->a[25435] = 7;
	v->a[25436] = actions(3);
	v->a[25437] = 1;
	v->a[25438] = sym_comment;
	v->a[25439] = actions(746);
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = 1;
	v->a[25441] = anon_sym_PIPE;
	v->a[25442] = actions(911);
	v->a[25443] = 1;
	v->a[25444] = sym_variable_name;
	v->a[25445] = state(972);
	v->a[25446] = 2;
	v->a[25447] = sym_variable_assignment;
	v->a[25448] = aux_sym__variable_assignments_repeat1;
	v->a[25449] = state(970);
	v->a[25450] = 3;
	v->a[25451] = sym_file_redirect;
	v->a[25452] = sym_heredoc_redirect;
	v->a[25453] = aux_sym_redirected_statement_repeat1;
	v->a[25454] = actions(916);
	v->a[25455] = 7;
	v->a[25456] = anon_sym_SEMI_SEMI;
	v->a[25457] = anon_sym_AMP_AMP;
	v->a[25458] = anon_sym_PIPE_PIPE;
	v->a[25459] = anon_sym_LT_LT;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = anon_sym_LT_LT_DASH;
	v->a[25461] = aux_sym_heredoc_redirect_token1;
	v->a[25462] = anon_sym_SEMI;
	v->a[25463] = actions(742);
	v->a[25464] = 16;
	v->a[25465] = anon_sym_LT;
	v->a[25466] = anon_sym_GT;
	v->a[25467] = anon_sym_GT_GT;
	v->a[25468] = anon_sym_LT_AMP;
	v->a[25469] = anon_sym_GT_AMP;
	v->a[25470] = anon_sym_GT_PIPE;
	v->a[25471] = anon_sym_LT_GT;
	v->a[25472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25473] = anon_sym_DOLLAR;
	v->a[25474] = anon_sym_DQUOTE;
	v->a[25475] = sym_raw_string;
	v->a[25476] = sym_number;
	v->a[25477] = anon_sym_DOLLAR_LBRACE;
	v->a[25478] = anon_sym_DOLLAR_LPAREN;
	v->a[25479] = anon_sym_BQUOTE;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = sym_word;
	v->a[25481] = 6;
	v->a[25482] = actions(3);
	v->a[25483] = 1;
	v->a[25484] = sym_comment;
	v->a[25485] = actions(900);
	v->a[25486] = 1;
	v->a[25487] = sym_variable_name;
	v->a[25488] = state(1002);
	v->a[25489] = 2;
	v->a[25490] = sym_variable_assignment;
	v->a[25491] = aux_sym__variable_assignments_repeat1;
	v->a[25492] = state(984);
	v->a[25493] = 3;
	v->a[25494] = sym_file_redirect;
	v->a[25495] = sym_heredoc_redirect;
	v->a[25496] = aux_sym_redirected_statement_repeat1;
	v->a[25497] = actions(742);
	v->a[25498] = 9;
	v->a[25499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
