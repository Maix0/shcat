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
	v->a[62400] = sym_comment;
	v->a[62401] = actions(2070);
	v->a[62402] = 3;
	v->a[62403] = sym_file_descriptor;
	v->a[62404] = ts_builtin_sym_end;
	v->a[62405] = aux_sym_heredoc_redirect_token1;
	v->a[62406] = actions(2072);
	v->a[62407] = 17;
	v->a[62408] = anon_sym_PIPE;
	v->a[62409] = anon_sym_RPAREN;
	v->a[62410] = anon_sym_SEMI_SEMI;
	v->a[62411] = anon_sym_AMP_AMP;
	v->a[62412] = anon_sym_PIPE_PIPE;
	v->a[62413] = anon_sym_LT;
	v->a[62414] = anon_sym_GT;
	v->a[62415] = anon_sym_GT_GT;
	v->a[62416] = anon_sym_LT_AMP;
	v->a[62417] = anon_sym_GT_AMP;
	v->a[62418] = anon_sym_GT_PIPE;
	v->a[62419] = anon_sym_LT_GT;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = anon_sym_LT_LT;
	v->a[62421] = anon_sym_LT_LT_DASH;
	v->a[62422] = anon_sym_AMP;
	v->a[62423] = anon_sym_BQUOTE;
	v->a[62424] = anon_sym_SEMI;
	v->a[62425] = 6;
	v->a[62426] = actions(3);
	v->a[62427] = 1;
	v->a[62428] = sym_comment;
	v->a[62429] = actions(2137);
	v->a[62430] = 1;
	v->a[62431] = aux_sym_heredoc_redirect_token1;
	v->a[62432] = actions(2189);
	v->a[62433] = 1;
	v->a[62434] = sym_file_descriptor;
	v->a[62435] = state(1163);
	v->a[62436] = 2;
	v->a[62437] = sym_file_redirect;
	v->a[62438] = aux_sym_redirected_statement_repeat2;
	v->a[62439] = actions(1898);
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = 7;
	v->a[62441] = anon_sym_LT;
	v->a[62442] = anon_sym_GT;
	v->a[62443] = anon_sym_GT_GT;
	v->a[62444] = anon_sym_LT_AMP;
	v->a[62445] = anon_sym_GT_AMP;
	v->a[62446] = anon_sym_GT_PIPE;
	v->a[62447] = anon_sym_LT_GT;
	v->a[62448] = actions(2139);
	v->a[62449] = 9;
	v->a[62450] = anon_sym_esac;
	v->a[62451] = anon_sym_PIPE;
	v->a[62452] = anon_sym_SEMI_SEMI;
	v->a[62453] = anon_sym_AMP_AMP;
	v->a[62454] = anon_sym_PIPE_PIPE;
	v->a[62455] = anon_sym_LT_LT;
	v->a[62456] = anon_sym_LT_LT_DASH;
	v->a[62457] = anon_sym_AMP;
	v->a[62458] = anon_sym_SEMI;
	v->a[62459] = 3;
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = actions(3);
	v->a[62461] = 1;
	v->a[62462] = sym_comment;
	v->a[62463] = actions(784);
	v->a[62464] = 3;
	v->a[62465] = sym_file_descriptor;
	v->a[62466] = sym__concat;
	v->a[62467] = sym_variable_name;
	v->a[62468] = actions(782);
	v->a[62469] = 17;
	v->a[62470] = anon_sym_LT;
	v->a[62471] = anon_sym_GT;
	v->a[62472] = anon_sym_GT_GT;
	v->a[62473] = anon_sym_LT_AMP;
	v->a[62474] = anon_sym_GT_AMP;
	v->a[62475] = anon_sym_GT_PIPE;
	v->a[62476] = anon_sym_LT_GT;
	v->a[62477] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62478] = aux_sym_concatenation_token1;
	v->a[62479] = anon_sym_DOLLAR;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = anon_sym_DQUOTE;
	v->a[62481] = sym_raw_string;
	v->a[62482] = sym_number;
	v->a[62483] = anon_sym_DOLLAR_LBRACE;
	v->a[62484] = anon_sym_DOLLAR_LPAREN;
	v->a[62485] = anon_sym_BQUOTE;
	v->a[62486] = sym_word;
	v->a[62487] = 6;
	v->a[62488] = actions(3);
	v->a[62489] = 1;
	v->a[62490] = sym_comment;
	v->a[62491] = actions(2038);
	v->a[62492] = 1;
	v->a[62493] = aux_sym_heredoc_redirect_token1;
	v->a[62494] = actions(2189);
	v->a[62495] = 1;
	v->a[62496] = sym_file_descriptor;
	v->a[62497] = state(1163);
	v->a[62498] = 2;
	v->a[62499] = sym_file_redirect;
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
