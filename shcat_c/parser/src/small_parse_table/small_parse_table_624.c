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
	v->a[62400] = anon_sym_DOLLAR_BQUOTE;
	v->a[62401] = anon_sym_LT_LPAREN;
	v->a[62402] = anon_sym_GT_LPAREN;
	v->a[62403] = sym_word;
	v->a[62404] = 3;
	v->a[62405] = actions(3);
	v->a[62406] = 1;
	v->a[62407] = sym_comment;
	v->a[62408] = actions(1334);
	v->a[62409] = 6;
	v->a[62410] = sym_file_descriptor;
	v->a[62411] = sym__concat;
	v->a[62412] = sym_variable_name;
	v->a[62413] = sym_test_operator;
	v->a[62414] = sym__brace_start;
	v->a[62415] = aux_sym_heredoc_redirect_token1;
	v->a[62416] = actions(1332);
	v->a[62417] = 40;
	v->a[62418] = anon_sym_LPAREN_LPAREN;
	v->a[62419] = anon_sym_SEMI;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = anon_sym_PIPE_PIPE;
	v->a[62421] = anon_sym_AMP_AMP;
	v->a[62422] = anon_sym_PIPE;
	v->a[62423] = anon_sym_AMP;
	v->a[62424] = anon_sym_LT;
	v->a[62425] = anon_sym_GT;
	v->a[62426] = anon_sym_LT_LT;
	v->a[62427] = anon_sym_GT_GT;
	v->a[62428] = anon_sym_SEMI_SEMI;
	v->a[62429] = anon_sym_SEMI_AMP;
	v->a[62430] = anon_sym_SEMI_SEMI_AMP;
	v->a[62431] = anon_sym_PIPE_AMP;
	v->a[62432] = anon_sym_AMP_GT;
	v->a[62433] = anon_sym_AMP_GT_GT;
	v->a[62434] = anon_sym_LT_AMP;
	v->a[62435] = anon_sym_GT_AMP;
	v->a[62436] = anon_sym_GT_PIPE;
	v->a[62437] = anon_sym_LT_AMP_DASH;
	v->a[62438] = anon_sym_GT_AMP_DASH;
	v->a[62439] = anon_sym_LT_LT_DASH;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62441] = anon_sym_DOLLAR_LBRACK;
	v->a[62442] = aux_sym_concatenation_token1;
	v->a[62443] = anon_sym_DOLLAR;
	v->a[62444] = sym__special_character;
	v->a[62445] = anon_sym_DQUOTE;
	v->a[62446] = sym_raw_string;
	v->a[62447] = sym_ansi_c_string;
	v->a[62448] = aux_sym_number_token1;
	v->a[62449] = aux_sym_number_token2;
	v->a[62450] = anon_sym_DOLLAR_LBRACE;
	v->a[62451] = anon_sym_DOLLAR_LPAREN;
	v->a[62452] = anon_sym_BQUOTE;
	v->a[62453] = anon_sym_DOLLAR_BQUOTE;
	v->a[62454] = anon_sym_LT_LPAREN;
	v->a[62455] = anon_sym_GT_LPAREN;
	v->a[62456] = aux_sym__simple_variable_name_token1;
	v->a[62457] = sym_word;
	v->a[62458] = 5;
	v->a[62459] = actions(3);
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = 1;
	v->a[62461] = sym_comment;
	v->a[62462] = actions(5642);
	v->a[62463] = 1;
	v->a[62464] = sym__special_character;
	v->a[62465] = state(1358);
	v->a[62466] = 1;
	v->a[62467] = aux_sym__literal_repeat1;
	v->a[62468] = actions(4482);
	v->a[62469] = 5;
	v->a[62470] = sym_file_descriptor;
	v->a[62471] = sym_test_operator;
	v->a[62472] = sym__bare_dollar;
	v->a[62473] = sym__brace_start;
	v->a[62474] = aux_sym_heredoc_redirect_token1;
	v->a[62475] = actions(4480);
	v->a[62476] = 39;
	v->a[62477] = anon_sym_LPAREN_LPAREN;
	v->a[62478] = anon_sym_SEMI;
	v->a[62479] = anon_sym_PIPE_PIPE;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = anon_sym_AMP_AMP;
	v->a[62481] = anon_sym_PIPE;
	v->a[62482] = anon_sym_AMP;
	v->a[62483] = anon_sym_EQ_EQ;
	v->a[62484] = anon_sym_LT;
	v->a[62485] = anon_sym_GT;
	v->a[62486] = anon_sym_LT_LT;
	v->a[62487] = anon_sym_GT_GT;
	v->a[62488] = anon_sym_RPAREN;
	v->a[62489] = anon_sym_SEMI_SEMI;
	v->a[62490] = anon_sym_PIPE_AMP;
	v->a[62491] = anon_sym_EQ_TILDE;
	v->a[62492] = anon_sym_AMP_GT;
	v->a[62493] = anon_sym_AMP_GT_GT;
	v->a[62494] = anon_sym_LT_AMP;
	v->a[62495] = anon_sym_GT_AMP;
	v->a[62496] = anon_sym_GT_PIPE;
	v->a[62497] = anon_sym_LT_AMP_DASH;
	v->a[62498] = anon_sym_GT_AMP_DASH;
	v->a[62499] = anon_sym_LT_LT_DASH;
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
