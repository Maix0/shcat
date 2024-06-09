/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_754.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3770(t_small_parse_table_array *v)
{
	v->a[75400] = aux_sym_redirected_statement_repeat1;
	v->a[75401] = actions(1004);
	v->a[75402] = 7;
	v->a[75403] = anon_sym_PIPE;
	v->a[75404] = anon_sym_LT;
	v->a[75405] = anon_sym_GT;
	v->a[75406] = anon_sym_AMP_GT;
	v->a[75407] = anon_sym_LT_AMP;
	v->a[75408] = anon_sym_GT_AMP;
	v->a[75409] = anon_sym_LT_LT;
	v->a[75410] = actions(1071);
	v->a[75411] = 9;
	v->a[75412] = sym_file_descriptor;
	v->a[75413] = anon_sym_AMP_AMP;
	v->a[75414] = anon_sym_PIPE_PIPE;
	v->a[75415] = anon_sym_GT_GT;
	v->a[75416] = anon_sym_AMP_GT_GT;
	v->a[75417] = anon_sym_GT_PIPE;
	v->a[75418] = anon_sym_LT_AMP_DASH;
	v->a[75419] = anon_sym_GT_AMP_DASH;
	small_parse_table_3771(v);
}

void	small_parse_table_3771(t_small_parse_table_array *v)
{
	v->a[75420] = anon_sym_LT_LT_DASH;
	v->a[75421] = 14;
	v->a[75422] = actions(3);
	v->a[75423] = 1;
	v->a[75424] = sym_comment;
	v->a[75425] = actions(3012);
	v->a[75426] = 1;
	v->a[75427] = aux_sym_heredoc_redirect_token1;
	v->a[75428] = actions(3014);
	v->a[75429] = 1;
	v->a[75430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75431] = actions(3017);
	v->a[75432] = 1;
	v->a[75433] = anon_sym_DOLLAR;
	v->a[75434] = actions(3020);
	v->a[75435] = 1;
	v->a[75436] = anon_sym_DQUOTE;
	v->a[75437] = actions(3023);
	v->a[75438] = 1;
	v->a[75439] = aux_sym_number_token1;
	small_parse_table_3772(v);
}

void	small_parse_table_3772(t_small_parse_table_array *v)
{
	v->a[75440] = actions(3026);
	v->a[75441] = 1;
	v->a[75442] = aux_sym_number_token2;
	v->a[75443] = actions(3029);
	v->a[75444] = 1;
	v->a[75445] = anon_sym_DOLLAR_LBRACE;
	v->a[75446] = actions(3032);
	v->a[75447] = 1;
	v->a[75448] = anon_sym_DOLLAR_LPAREN;
	v->a[75449] = actions(3035);
	v->a[75450] = 1;
	v->a[75451] = anon_sym_BQUOTE;
	v->a[75452] = state(1348);
	v->a[75453] = 1;
	v->a[75454] = aux_sym__heredoc_command;
	v->a[75455] = state(1832);
	v->a[75456] = 1;
	v->a[75457] = sym_concatenation;
	v->a[75458] = actions(3009);
	v->a[75459] = 2;
	small_parse_table_3773(v);
}

void	small_parse_table_3773(t_small_parse_table_array *v)
{
	v->a[75460] = sym_raw_string;
	v->a[75461] = sym_word;
	v->a[75462] = state(1614);
	v->a[75463] = 6;
	v->a[75464] = sym_arithmetic_expansion;
	v->a[75465] = sym_string;
	v->a[75466] = sym_number;
	v->a[75467] = sym_simple_expansion;
	v->a[75468] = sym_expansion;
	v->a[75469] = sym_command_substitution;
	v->a[75470] = 5;
	v->a[75471] = actions(1002);
	v->a[75472] = 1;
	v->a[75473] = anon_sym_PIPE;
	v->a[75474] = actions(1404);
	v->a[75475] = 1;
	v->a[75476] = sym_comment;
	v->a[75477] = state(1351);
	v->a[75478] = 3;
	v->a[75479] = sym_file_redirect;
	small_parse_table_3774(v);
}

void	small_parse_table_3774(t_small_parse_table_array *v)
{
	v->a[75480] = sym_heredoc_redirect;
	v->a[75481] = aux_sym_redirected_statement_repeat1;
	v->a[75482] = actions(1004);
	v->a[75483] = 6;
	v->a[75484] = anon_sym_LT;
	v->a[75485] = anon_sym_GT;
	v->a[75486] = anon_sym_AMP_GT;
	v->a[75487] = anon_sym_LT_AMP;
	v->a[75488] = anon_sym_GT_AMP;
	v->a[75489] = anon_sym_LT_LT;
	v->a[75490] = actions(1071);
	v->a[75491] = 9;
	v->a[75492] = sym_file_descriptor;
	v->a[75493] = anon_sym_AMP_AMP;
	v->a[75494] = anon_sym_PIPE_PIPE;
	v->a[75495] = anon_sym_GT_GT;
	v->a[75496] = anon_sym_AMP_GT_GT;
	v->a[75497] = anon_sym_GT_PIPE;
	v->a[75498] = anon_sym_LT_AMP_DASH;
	v->a[75499] = anon_sym_GT_AMP_DASH;
	small_parse_table_3775(v);
}

/* EOF small_parse_table_754.c */
