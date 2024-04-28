/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1534.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7670(t_small_parse_table_array *v)
{
	v->a[153400] = anon_sym_GT;
	v->a[153401] = anon_sym_LT_LT;
	v->a[153402] = anon_sym_AMP_GT;
	v->a[153403] = anon_sym_LT_AMP;
	v->a[153404] = anon_sym_GT_AMP;
	v->a[153405] = anon_sym_DOLLAR;
	v->a[153406] = aux_sym_number_token1;
	v->a[153407] = aux_sym_number_token2;
	v->a[153408] = anon_sym_DOLLAR_LPAREN;
	v->a[153409] = anon_sym_BQUOTE;
	v->a[153410] = sym_word;
	v->a[153411] = actions(1322);
	v->a[153412] = 25;
	v->a[153413] = sym_file_descriptor;
	v->a[153414] = sym__concat;
	v->a[153415] = sym_test_operator;
	v->a[153416] = sym__brace_start;
	v->a[153417] = anon_sym_LPAREN_LPAREN;
	v->a[153418] = anon_sym_PIPE_PIPE;
	v->a[153419] = anon_sym_AMP_AMP;
	small_parse_table_7671(v);
}

void	small_parse_table_7671(t_small_parse_table_array *v)
{
	v->a[153420] = anon_sym_GT_GT;
	v->a[153421] = anon_sym_PIPE_AMP;
	v->a[153422] = anon_sym_AMP_GT_GT;
	v->a[153423] = anon_sym_GT_PIPE;
	v->a[153424] = anon_sym_LT_AMP_DASH;
	v->a[153425] = anon_sym_GT_AMP_DASH;
	v->a[153426] = anon_sym_LT_LT_DASH;
	v->a[153427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[153428] = anon_sym_DOLLAR_LBRACK;
	v->a[153429] = aux_sym_concatenation_token1;
	v->a[153430] = sym__special_character;
	v->a[153431] = anon_sym_DQUOTE;
	v->a[153432] = sym_raw_string;
	v->a[153433] = sym_ansi_c_string;
	v->a[153434] = anon_sym_DOLLAR_LBRACE;
	v->a[153435] = anon_sym_DOLLAR_BQUOTE;
	v->a[153436] = anon_sym_LT_LPAREN;
	v->a[153437] = anon_sym_GT_LPAREN;
	v->a[153438] = 8;
	v->a[153439] = actions(3);
	small_parse_table_7672(v);
}

void	small_parse_table_7672(t_small_parse_table_array *v)
{
	v->a[153440] = 1;
	v->a[153441] = sym_comment;
	v->a[153442] = actions(1235);
	v->a[153443] = 1;
	v->a[153444] = sym_file_descriptor;
	v->a[153445] = actions(3371);
	v->a[153446] = 1;
	v->a[153447] = anon_sym_DQUOTE;
	v->a[153448] = actions(7153);
	v->a[153449] = 1;
	v->a[153450] = sym_variable_name;
	v->a[153451] = state(4512);
	v->a[153452] = 1;
	v->a[153453] = sym_string;
	v->a[153454] = actions(7151);
	v->a[153455] = 2;
	v->a[153456] = aux_sym__simple_variable_name_token1;
	v->a[153457] = aux_sym__multiline_variable_name_token1;
	v->a[153458] = actions(7149);
	v->a[153459] = 9;
	small_parse_table_7673(v);
}

void	small_parse_table_7673(t_small_parse_table_array *v)
{
	v->a[153460] = anon_sym_DASH;
	v->a[153461] = anon_sym_STAR;
	v->a[153462] = anon_sym_BANG;
	v->a[153463] = anon_sym_QMARK;
	v->a[153464] = anon_sym_DOLLAR;
	v->a[153465] = anon_sym_POUND;
	v->a[153466] = anon_sym_AT2;
	v->a[153467] = anon_sym_0;
	v->a[153468] = anon_sym__;
	v->a[153469] = actions(1227);
	v->a[153470] = 23;
	v->a[153471] = anon_sym_SEMI;
	v->a[153472] = anon_sym_PIPE_PIPE;
	v->a[153473] = anon_sym_AMP_AMP;
	v->a[153474] = anon_sym_PIPE;
	v->a[153475] = anon_sym_AMP;
	v->a[153476] = anon_sym_LT;
	v->a[153477] = anon_sym_GT;
	v->a[153478] = anon_sym_LT_LT;
	v->a[153479] = anon_sym_GT_GT;
	small_parse_table_7674(v);
}

void	small_parse_table_7674(t_small_parse_table_array *v)
{
	v->a[153480] = anon_sym_esac;
	v->a[153481] = anon_sym_SEMI_SEMI;
	v->a[153482] = anon_sym_SEMI_AMP;
	v->a[153483] = anon_sym_SEMI_SEMI_AMP;
	v->a[153484] = anon_sym_PIPE_AMP;
	v->a[153485] = anon_sym_AMP_GT;
	v->a[153486] = anon_sym_AMP_GT_GT;
	v->a[153487] = anon_sym_LT_AMP;
	v->a[153488] = anon_sym_GT_AMP;
	v->a[153489] = anon_sym_GT_PIPE;
	v->a[153490] = anon_sym_LT_AMP_DASH;
	v->a[153491] = anon_sym_GT_AMP_DASH;
	v->a[153492] = anon_sym_LT_LT_DASH;
	v->a[153493] = aux_sym_heredoc_redirect_token1;
	v->a[153494] = 8;
	v->a[153495] = actions(3);
	v->a[153496] = 1;
	v->a[153497] = sym_comment;
	v->a[153498] = actions(1241);
	v->a[153499] = 1;
	small_parse_table_7675(v);
}

/* EOF small_parse_table_1534.c */
