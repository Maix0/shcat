/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_624.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3120(t_small_parse_table_array *v)
{
	v->a[62400] = 3;
	v->a[62401] = actions(3);
	v->a[62402] = 1;
	v->a[62403] = sym_comment;
	v->a[62404] = actions(770);
	v->a[62405] = 3;
	v->a[62406] = sym_file_descriptor;
	v->a[62407] = sym__concat;
	v->a[62408] = sym_variable_name;
	v->a[62409] = actions(768);
	v->a[62410] = 17;
	v->a[62411] = anon_sym_LT;
	v->a[62412] = anon_sym_GT;
	v->a[62413] = anon_sym_GT_GT;
	v->a[62414] = anon_sym_LT_AMP;
	v->a[62415] = anon_sym_GT_AMP;
	v->a[62416] = anon_sym_GT_PIPE;
	v->a[62417] = anon_sym_LT_GT;
	v->a[62418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62419] = aux_sym_concatenation_token1;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = anon_sym_DOLLAR;
	v->a[62421] = anon_sym_DQUOTE;
	v->a[62422] = sym_raw_string;
	v->a[62423] = sym_number;
	v->a[62424] = anon_sym_DOLLAR_LBRACE;
	v->a[62425] = anon_sym_DOLLAR_LPAREN;
	v->a[62426] = anon_sym_BQUOTE;
	v->a[62427] = sym_word;
	v->a[62428] = 3;
	v->a[62429] = actions(3);
	v->a[62430] = 1;
	v->a[62431] = sym_comment;
	v->a[62432] = actions(2172);
	v->a[62433] = 3;
	v->a[62434] = sym_file_descriptor;
	v->a[62435] = ts_builtin_sym_end;
	v->a[62436] = aux_sym_heredoc_redirect_token1;
	v->a[62437] = actions(2174);
	v->a[62438] = 17;
	v->a[62439] = anon_sym_PIPE;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = anon_sym_RPAREN;
	v->a[62441] = anon_sym_SEMI_SEMI;
	v->a[62442] = anon_sym_AMP_AMP;
	v->a[62443] = anon_sym_PIPE_PIPE;
	v->a[62444] = anon_sym_LT;
	v->a[62445] = anon_sym_GT;
	v->a[62446] = anon_sym_GT_GT;
	v->a[62447] = anon_sym_LT_AMP;
	v->a[62448] = anon_sym_GT_AMP;
	v->a[62449] = anon_sym_GT_PIPE;
	v->a[62450] = anon_sym_LT_GT;
	v->a[62451] = anon_sym_LT_LT;
	v->a[62452] = anon_sym_LT_LT_DASH;
	v->a[62453] = anon_sym_AMP;
	v->a[62454] = anon_sym_BQUOTE;
	v->a[62455] = anon_sym_SEMI;
	v->a[62456] = 6;
	v->a[62457] = actions(3);
	v->a[62458] = 1;
	v->a[62459] = sym_comment;
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = actions(2051);
	v->a[62461] = 1;
	v->a[62462] = aux_sym_heredoc_redirect_token1;
	v->a[62463] = actions(2176);
	v->a[62464] = 1;
	v->a[62465] = sym_file_descriptor;
	v->a[62466] = state(1167);
	v->a[62467] = 2;
	v->a[62468] = sym_file_redirect;
	v->a[62469] = aux_sym_redirected_statement_repeat2;
	v->a[62470] = actions(1863);
	v->a[62471] = 7;
	v->a[62472] = anon_sym_LT;
	v->a[62473] = anon_sym_GT;
	v->a[62474] = anon_sym_GT_GT;
	v->a[62475] = anon_sym_LT_AMP;
	v->a[62476] = anon_sym_GT_AMP;
	v->a[62477] = anon_sym_GT_PIPE;
	v->a[62478] = anon_sym_LT_GT;
	v->a[62479] = actions(2053);
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = 9;
	v->a[62481] = anon_sym_PIPE;
	v->a[62482] = anon_sym_SEMI_SEMI;
	v->a[62483] = anon_sym_AMP_AMP;
	v->a[62484] = anon_sym_PIPE_PIPE;
	v->a[62485] = anon_sym_LT_LT;
	v->a[62486] = anon_sym_LT_LT_DASH;
	v->a[62487] = anon_sym_AMP;
	v->a[62488] = anon_sym_BQUOTE;
	v->a[62489] = anon_sym_SEMI;
	v->a[62490] = 9;
	v->a[62491] = actions(3);
	v->a[62492] = 1;
	v->a[62493] = sym_comment;
	v->a[62494] = actions(1889);
	v->a[62495] = 1;
	v->a[62496] = sym_file_descriptor;
	v->a[62497] = actions(1945);
	v->a[62498] = 1;
	v->a[62499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
