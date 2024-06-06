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
	v->a[62400] = actions(3423);
	v->a[62401] = 1;
	v->a[62402] = aux_sym_concatenation_token1;
	v->a[62403] = actions(3425);
	v->a[62404] = 1;
	v->a[62405] = sym__concat;
	v->a[62406] = state(1344);
	v->a[62407] = 1;
	v->a[62408] = aux_sym_concatenation_repeat1;
	v->a[62409] = actions(3121);
	v->a[62410] = 5;
	v->a[62411] = sym_file_descriptor;
	v->a[62412] = sym_variable_name;
	v->a[62413] = sym_test_operator;
	v->a[62414] = sym__brace_start;
	v->a[62415] = aux_sym_heredoc_redirect_token1;
	v->a[62416] = actions(3119);
	v->a[62417] = 28;
	v->a[62418] = anon_sym_PIPE;
	v->a[62419] = anon_sym_PIPE_AMP;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = anon_sym_AMP_AMP;
	v->a[62421] = anon_sym_PIPE_PIPE;
	v->a[62422] = anon_sym_LT;
	v->a[62423] = anon_sym_GT;
	v->a[62424] = anon_sym_GT_GT;
	v->a[62425] = anon_sym_AMP_GT;
	v->a[62426] = anon_sym_AMP_GT_GT;
	v->a[62427] = anon_sym_LT_AMP;
	v->a[62428] = anon_sym_GT_AMP;
	v->a[62429] = anon_sym_GT_PIPE;
	v->a[62430] = anon_sym_LT_AMP_DASH;
	v->a[62431] = anon_sym_GT_AMP_DASH;
	v->a[62432] = anon_sym_LT_LT;
	v->a[62433] = anon_sym_LT_LT_DASH;
	v->a[62434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62435] = anon_sym_DOLLAR;
	v->a[62436] = sym__special_character;
	v->a[62437] = anon_sym_DQUOTE;
	v->a[62438] = sym_raw_string;
	v->a[62439] = aux_sym_number_token1;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = aux_sym_number_token2;
	v->a[62441] = anon_sym_DOLLAR_LBRACE;
	v->a[62442] = anon_sym_DOLLAR_LPAREN;
	v->a[62443] = anon_sym_BQUOTE;
	v->a[62444] = anon_sym_DOLLAR_BQUOTE;
	v->a[62445] = sym_word;
	v->a[62446] = 6;
	v->a[62447] = actions(3);
	v->a[62448] = 1;
	v->a[62449] = sym_comment;
	v->a[62450] = actions(3423);
	v->a[62451] = 1;
	v->a[62452] = aux_sym_concatenation_token1;
	v->a[62453] = actions(4054);
	v->a[62454] = 1;
	v->a[62455] = sym__concat;
	v->a[62456] = state(827);
	v->a[62457] = 1;
	v->a[62458] = aux_sym_concatenation_repeat1;
	v->a[62459] = actions(2690);
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = 5;
	v->a[62461] = sym_file_descriptor;
	v->a[62462] = sym_variable_name;
	v->a[62463] = sym_test_operator;
	v->a[62464] = sym__brace_start;
	v->a[62465] = aux_sym_heredoc_redirect_token1;
	v->a[62466] = actions(2688);
	v->a[62467] = 28;
	v->a[62468] = anon_sym_PIPE;
	v->a[62469] = anon_sym_PIPE_AMP;
	v->a[62470] = anon_sym_AMP_AMP;
	v->a[62471] = anon_sym_PIPE_PIPE;
	v->a[62472] = anon_sym_LT;
	v->a[62473] = anon_sym_GT;
	v->a[62474] = anon_sym_GT_GT;
	v->a[62475] = anon_sym_AMP_GT;
	v->a[62476] = anon_sym_AMP_GT_GT;
	v->a[62477] = anon_sym_LT_AMP;
	v->a[62478] = anon_sym_GT_AMP;
	v->a[62479] = anon_sym_GT_PIPE;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = anon_sym_LT_AMP_DASH;
	v->a[62481] = anon_sym_GT_AMP_DASH;
	v->a[62482] = anon_sym_LT_LT;
	v->a[62483] = anon_sym_LT_LT_DASH;
	v->a[62484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62485] = anon_sym_DOLLAR;
	v->a[62486] = sym__special_character;
	v->a[62487] = anon_sym_DQUOTE;
	v->a[62488] = sym_raw_string;
	v->a[62489] = aux_sym_number_token1;
	v->a[62490] = aux_sym_number_token2;
	v->a[62491] = anon_sym_DOLLAR_LBRACE;
	v->a[62492] = anon_sym_DOLLAR_LPAREN;
	v->a[62493] = anon_sym_BQUOTE;
	v->a[62494] = anon_sym_DOLLAR_BQUOTE;
	v->a[62495] = sym_word;
	v->a[62496] = 6;
	v->a[62497] = actions(57);
	v->a[62498] = 1;
	v->a[62499] = sym_comment;
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
