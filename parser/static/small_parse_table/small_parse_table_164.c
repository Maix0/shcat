/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_164.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_820(t_small_parse_table_array *v)
{
	v->a[16400] = anon_sym_readonly;
	v->a[16401] = anon_sym_local;
	v->a[16402] = anon_sym_unset;
	v->a[16403] = anon_sym_unsetenv;
	v->a[16404] = anon_sym_LT;
	v->a[16405] = anon_sym_GT;
	v->a[16406] = anon_sym_AMP_GT;
	v->a[16407] = anon_sym_LT_AMP;
	v->a[16408] = anon_sym_GT_AMP;
	v->a[16409] = anon_sym_DOLLAR;
	v->a[16410] = sym__special_character;
	v->a[16411] = aux_sym_number_token1;
	v->a[16412] = aux_sym_number_token2;
	v->a[16413] = anon_sym_DOLLAR_LPAREN;
	v->a[16414] = sym_word;
	v->a[16415] = 6;
	v->a[16416] = actions(3);
	v->a[16417] = 1;
	v->a[16418] = sym_comment;
	v->a[16419] = actions(1424);
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = 1;
	v->a[16421] = sym_variable_name;
	v->a[16422] = actions(1422);
	v->a[16423] = 2;
	v->a[16424] = aux_sym__simple_variable_name_token1;
	v->a[16425] = aux_sym__multiline_variable_name_token1;
	v->a[16426] = actions(816);
	v->a[16427] = 4;
	v->a[16428] = sym_file_descriptor;
	v->a[16429] = sym_test_operator;
	v->a[16430] = sym__bare_dollar;
	v->a[16431] = sym__brace_start;
	v->a[16432] = actions(1420);
	v->a[16433] = 9;
	v->a[16434] = anon_sym_BANG;
	v->a[16435] = anon_sym_DASH;
	v->a[16436] = anon_sym_STAR;
	v->a[16437] = anon_sym_QMARK;
	v->a[16438] = anon_sym_DOLLAR;
	v->a[16439] = anon_sym_POUND;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = anon_sym_AT;
	v->a[16441] = anon_sym_0;
	v->a[16442] = anon_sym__;
	v->a[16443] = actions(810);
	v->a[16444] = 28;
	v->a[16445] = anon_sym_PIPE;
	v->a[16446] = anon_sym_PIPE_AMP;
	v->a[16447] = anon_sym_AMP_AMP;
	v->a[16448] = anon_sym_PIPE_PIPE;
	v->a[16449] = anon_sym_LT;
	v->a[16450] = anon_sym_GT;
	v->a[16451] = anon_sym_GT_GT;
	v->a[16452] = anon_sym_AMP_GT;
	v->a[16453] = anon_sym_AMP_GT_GT;
	v->a[16454] = anon_sym_LT_AMP;
	v->a[16455] = anon_sym_GT_AMP;
	v->a[16456] = anon_sym_GT_PIPE;
	v->a[16457] = anon_sym_LT_AMP_DASH;
	v->a[16458] = anon_sym_GT_AMP_DASH;
	v->a[16459] = anon_sym_LT_LT;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = anon_sym_LT_LT_DASH;
	v->a[16461] = aux_sym_heredoc_redirect_token1;
	v->a[16462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16463] = sym__special_character;
	v->a[16464] = anon_sym_DQUOTE;
	v->a[16465] = sym_raw_string;
	v->a[16466] = aux_sym_number_token1;
	v->a[16467] = aux_sym_number_token2;
	v->a[16468] = anon_sym_DOLLAR_LBRACE;
	v->a[16469] = anon_sym_DOLLAR_LPAREN;
	v->a[16470] = anon_sym_BQUOTE;
	v->a[16471] = anon_sym_DOLLAR_BQUOTE;
	v->a[16472] = sym_word;
	v->a[16473] = 6;
	v->a[16474] = actions(3);
	v->a[16475] = 1;
	v->a[16476] = sym_comment;
	v->a[16477] = actions(2656);
	v->a[16478] = 1;
	v->a[16479] = aux_sym_concatenation_token1;
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = actions(2659);
	v->a[16481] = 1;
	v->a[16482] = sym__concat;
	v->a[16483] = state(471);
	v->a[16484] = 1;
	v->a[16485] = aux_sym_concatenation_repeat1;
	v->a[16486] = actions(2654);
	v->a[16487] = 5;
	v->a[16488] = sym_file_descriptor;
	v->a[16489] = sym_variable_name;
	v->a[16490] = sym_test_operator;
	v->a[16491] = sym__brace_start;
	v->a[16492] = aux_sym_heredoc_redirect_token1;
	v->a[16493] = actions(2652);
	v->a[16494] = 35;
	v->a[16495] = anon_sym_esac;
	v->a[16496] = anon_sym_PIPE;
	v->a[16497] = anon_sym_SEMI_SEMI;
	v->a[16498] = anon_sym_SEMI_AMP;
	v->a[16499] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
