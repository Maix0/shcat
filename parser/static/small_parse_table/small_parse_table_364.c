/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_364.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1820(t_small_parse_table_array *v)
{
	v->a[36400] = anon_sym_SEMI_SEMI;
	v->a[36401] = anon_sym_AMP_AMP;
	v->a[36402] = anon_sym_PIPE_PIPE;
	v->a[36403] = anon_sym_LT;
	v->a[36404] = anon_sym_GT;
	v->a[36405] = anon_sym_GT_GT;
	v->a[36406] = anon_sym_AMP_GT;
	v->a[36407] = anon_sym_AMP_GT_GT;
	v->a[36408] = anon_sym_LT_AMP;
	v->a[36409] = anon_sym_GT_AMP;
	v->a[36410] = anon_sym_GT_PIPE;
	v->a[36411] = anon_sym_LT_AMP_DASH;
	v->a[36412] = anon_sym_GT_AMP_DASH;
	v->a[36413] = anon_sym_LT_LT;
	v->a[36414] = anon_sym_LT_LT_DASH;
	v->a[36415] = aux_sym_heredoc_redirect_token1;
	v->a[36416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36417] = anon_sym_AMP;
	v->a[36418] = aux_sym_concatenation_token1;
	v->a[36419] = anon_sym_DOLLAR;
	small_parse_table_1821(v);
}

void	small_parse_table_1821(t_small_parse_table_array *v)
{
	v->a[36420] = anon_sym_DQUOTE;
	v->a[36421] = sym_raw_string;
	v->a[36422] = sym_number;
	v->a[36423] = anon_sym_DOLLAR_LBRACE;
	v->a[36424] = anon_sym_DOLLAR_LPAREN;
	v->a[36425] = anon_sym_BQUOTE;
	v->a[36426] = sym_word;
	v->a[36427] = anon_sym_SEMI;
	v->a[36428] = 3;
	v->a[36429] = actions(1094);
	v->a[36430] = 1;
	v->a[36431] = sym_comment;
	v->a[36432] = actions(1122);
	v->a[36433] = 13;
	v->a[36434] = anon_sym_PIPE;
	v->a[36435] = anon_sym_EQ;
	v->a[36436] = anon_sym_LT;
	v->a[36437] = anon_sym_GT;
	v->a[36438] = anon_sym_GT_GT;
	v->a[36439] = anon_sym_LT_LT;
	small_parse_table_1822(v);
}

void	small_parse_table_1822(t_small_parse_table_array *v)
{
	v->a[36440] = anon_sym_CARET;
	v->a[36441] = anon_sym_AMP;
	v->a[36442] = anon_sym_PLUS;
	v->a[36443] = anon_sym_DASH;
	v->a[36444] = anon_sym_STAR;
	v->a[36445] = anon_sym_SLASH;
	v->a[36446] = anon_sym_PERCENT;
	v->a[36447] = actions(1124);
	v->a[36448] = 20;
	v->a[36449] = anon_sym_RPAREN;
	v->a[36450] = anon_sym_AMP_AMP;
	v->a[36451] = anon_sym_PIPE_PIPE;
	v->a[36452] = anon_sym_PLUS_EQ;
	v->a[36453] = anon_sym_DASH_EQ;
	v->a[36454] = anon_sym_STAR_EQ;
	v->a[36455] = anon_sym_SLASH_EQ;
	v->a[36456] = anon_sym_PERCENT_EQ;
	v->a[36457] = anon_sym_LT_LT_EQ;
	v->a[36458] = anon_sym_GT_GT_EQ;
	v->a[36459] = anon_sym_AMP_EQ;
	small_parse_table_1823(v);
}

void	small_parse_table_1823(t_small_parse_table_array *v)
{
	v->a[36460] = anon_sym_CARET_EQ;
	v->a[36461] = anon_sym_PIPE_EQ;
	v->a[36462] = anon_sym_EQ_EQ;
	v->a[36463] = anon_sym_BANG_EQ;
	v->a[36464] = anon_sym_LT_EQ;
	v->a[36465] = anon_sym_GT_EQ;
	v->a[36466] = anon_sym_QMARK;
	v->a[36467] = anon_sym_PLUS_PLUS2;
	v->a[36468] = anon_sym_DASH_DASH2;
	v->a[36469] = 14;
	v->a[36470] = actions(3);
	v->a[36471] = 1;
	v->a[36472] = sym_comment;
	v->a[36473] = actions(536);
	v->a[36474] = 1;
	v->a[36475] = sym_file_descriptor;
	v->a[36476] = actions(1361);
	v->a[36477] = 1;
	v->a[36478] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36479] = actions(1364);
	small_parse_table_1824(v);
}

void	small_parse_table_1824(t_small_parse_table_array *v)
{
	v->a[36480] = 1;
	v->a[36481] = anon_sym_DOLLAR;
	v->a[36482] = actions(1367);
	v->a[36483] = 1;
	v->a[36484] = anon_sym_DQUOTE;
	v->a[36485] = actions(1370);
	v->a[36486] = 1;
	v->a[36487] = anon_sym_DOLLAR_LBRACE;
	v->a[36488] = actions(1373);
	v->a[36489] = 1;
	v->a[36490] = anon_sym_DOLLAR_LPAREN;
	v->a[36491] = actions(1376);
	v->a[36492] = 1;
	v->a[36493] = anon_sym_BQUOTE;
	v->a[36494] = actions(1379);
	v->a[36495] = 1;
	v->a[36496] = sym__bare_dollar;
	v->a[36497] = state(475);
	v->a[36498] = 1;
	v->a[36499] = aux_sym_command_repeat2;
	small_parse_table_1825(v);
}

/* EOF small_parse_table_364.c */
