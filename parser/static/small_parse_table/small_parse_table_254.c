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
	v->a[25400] = actions(935);
	v->a[25401] = 1;
	v->a[25402] = anon_sym_DOLLAR;
	v->a[25403] = actions(937);
	v->a[25404] = 1;
	v->a[25405] = anon_sym_DQUOTE;
	v->a[25406] = actions(939);
	v->a[25407] = 1;
	v->a[25408] = aux_sym_number_token1;
	v->a[25409] = actions(941);
	v->a[25410] = 1;
	v->a[25411] = aux_sym_number_token2;
	v->a[25412] = actions(943);
	v->a[25413] = 1;
	v->a[25414] = anon_sym_DOLLAR_LBRACE;
	v->a[25415] = actions(945);
	v->a[25416] = 1;
	v->a[25417] = anon_sym_DOLLAR_LPAREN;
	v->a[25418] = actions(947);
	v->a[25419] = 1;
	small_parse_table_1271(v);
}

void	small_parse_table_1271(t_small_parse_table_array *v)
{
	v->a[25420] = anon_sym_BQUOTE;
	v->a[25421] = actions(949);
	v->a[25422] = 1;
	v->a[25423] = sym_file_descriptor;
	v->a[25424] = state(1340);
	v->a[25425] = 1;
	v->a[25426] = aux_sym__heredoc_command;
	v->a[25427] = state(1832);
	v->a[25428] = 1;
	v->a[25429] = sym_concatenation;
	v->a[25430] = state(2087);
	v->a[25431] = 1;
	v->a[25432] = sym__heredoc_expression;
	v->a[25433] = state(2088);
	v->a[25434] = 1;
	v->a[25435] = sym__heredoc_pipeline;
	v->a[25436] = actions(921);
	v->a[25437] = 2;
	v->a[25438] = sym_raw_string;
	v->a[25439] = sym_word;
	small_parse_table_1272(v);
}

void	small_parse_table_1272(t_small_parse_table_array *v)
{
	v->a[25440] = actions(923);
	v->a[25441] = 2;
	v->a[25442] = anon_sym_PIPE;
	v->a[25443] = anon_sym_PIPE_AMP;
	v->a[25444] = actions(925);
	v->a[25445] = 2;
	v->a[25446] = anon_sym_AMP_AMP;
	v->a[25447] = anon_sym_PIPE_PIPE;
	v->a[25448] = actions(929);
	v->a[25449] = 2;
	v->a[25450] = anon_sym_LT_AMP_DASH;
	v->a[25451] = anon_sym_GT_AMP_DASH;
	v->a[25452] = state(1508);
	v->a[25453] = 2;
	v->a[25454] = sym_file_redirect;
	v->a[25455] = aux_sym_redirected_statement_repeat2;
	v->a[25456] = state(1614);
	v->a[25457] = 6;
	v->a[25458] = sym_arithmetic_expansion;
	v->a[25459] = sym_string;
	small_parse_table_1273(v);
}

void	small_parse_table_1273(t_small_parse_table_array *v)
{
	v->a[25460] = sym_number;
	v->a[25461] = sym_simple_expansion;
	v->a[25462] = sym_expansion;
	v->a[25463] = sym_command_substitution;
	v->a[25464] = actions(927);
	v->a[25465] = 8;
	v->a[25466] = anon_sym_LT;
	v->a[25467] = anon_sym_GT;
	v->a[25468] = anon_sym_GT_GT;
	v->a[25469] = anon_sym_AMP_GT;
	v->a[25470] = anon_sym_AMP_GT_GT;
	v->a[25471] = anon_sym_LT_AMP;
	v->a[25472] = anon_sym_GT_AMP;
	v->a[25473] = anon_sym_GT_PIPE;
	v->a[25474] = 22;
	v->a[25475] = actions(3);
	v->a[25476] = 1;
	v->a[25477] = sym_comment;
	v->a[25478] = actions(933);
	v->a[25479] = 1;
	small_parse_table_1274(v);
}

void	small_parse_table_1274(t_small_parse_table_array *v)
{
	v->a[25480] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25481] = actions(935);
	v->a[25482] = 1;
	v->a[25483] = anon_sym_DOLLAR;
	v->a[25484] = actions(937);
	v->a[25485] = 1;
	v->a[25486] = anon_sym_DQUOTE;
	v->a[25487] = actions(939);
	v->a[25488] = 1;
	v->a[25489] = aux_sym_number_token1;
	v->a[25490] = actions(941);
	v->a[25491] = 1;
	v->a[25492] = aux_sym_number_token2;
	v->a[25493] = actions(943);
	v->a[25494] = 1;
	v->a[25495] = anon_sym_DOLLAR_LBRACE;
	v->a[25496] = actions(945);
	v->a[25497] = 1;
	v->a[25498] = anon_sym_DOLLAR_LPAREN;
	v->a[25499] = actions(947);
	small_parse_table_1275(v);
}

/* EOF small_parse_table_254.c */
