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
	v->a[36400] = anon_sym_STAR;
	v->a[36401] = anon_sym_BANG;
	v->a[36402] = anon_sym_QMARK;
	v->a[36403] = anon_sym_DOLLAR;
	v->a[36404] = anon_sym_POUND;
	v->a[36405] = anon_sym_AT2;
	v->a[36406] = anon_sym_0;
	v->a[36407] = anon_sym__;
	v->a[36408] = actions(1239);
	v->a[36409] = 32;
	v->a[36410] = anon_sym_LPAREN_LPAREN;
	v->a[36411] = anon_sym_PIPE_PIPE;
	v->a[36412] = anon_sym_AMP_AMP;
	v->a[36413] = anon_sym_PIPE;
	v->a[36414] = anon_sym_LT;
	v->a[36415] = anon_sym_GT;
	v->a[36416] = anon_sym_LT_LT;
	v->a[36417] = anon_sym_GT_GT;
	v->a[36418] = anon_sym_PIPE_AMP;
	v->a[36419] = anon_sym_AMP_GT;
	small_parse_table_1821(v);
}

void	small_parse_table_1821(t_small_parse_table_array *v)
{
	v->a[36420] = anon_sym_AMP_GT_GT;
	v->a[36421] = anon_sym_LT_AMP;
	v->a[36422] = anon_sym_GT_AMP;
	v->a[36423] = anon_sym_GT_PIPE;
	v->a[36424] = anon_sym_LT_AMP_DASH;
	v->a[36425] = anon_sym_GT_AMP_DASH;
	v->a[36426] = anon_sym_LT_LT_DASH;
	v->a[36427] = anon_sym_LT_LT_LT;
	v->a[36428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36429] = anon_sym_DOLLAR_LBRACK;
	v->a[36430] = sym__special_character;
	v->a[36431] = sym_raw_string;
	v->a[36432] = sym_ansi_c_string;
	v->a[36433] = aux_sym_number_token1;
	v->a[36434] = aux_sym_number_token2;
	v->a[36435] = anon_sym_DOLLAR_LBRACE;
	v->a[36436] = anon_sym_DOLLAR_LPAREN;
	v->a[36437] = anon_sym_BQUOTE;
	v->a[36438] = anon_sym_DOLLAR_BQUOTE;
	v->a[36439] = anon_sym_LT_LPAREN;
	small_parse_table_1822(v);
}

void	small_parse_table_1822(t_small_parse_table_array *v)
{
	v->a[36440] = anon_sym_GT_LPAREN;
	v->a[36441] = sym_word;
	v->a[36442] = 30;
	v->a[36443] = actions(71);
	v->a[36444] = 1;
	v->a[36445] = sym_comment;
	v->a[36446] = actions(1043);
	v->a[36447] = 1;
	v->a[36448] = anon_sym_DOLLAR_LBRACK;
	v->a[36449] = actions(1045);
	v->a[36450] = 1;
	v->a[36451] = anon_sym_DOLLAR;
	v->a[36452] = actions(1049);
	v->a[36453] = 1;
	v->a[36454] = anon_sym_DQUOTE;
	v->a[36455] = actions(1053);
	v->a[36456] = 1;
	v->a[36457] = aux_sym_number_token1;
	v->a[36458] = actions(1055);
	v->a[36459] = 1;
	small_parse_table_1823(v);
}

void	small_parse_table_1823(t_small_parse_table_array *v)
{
	v->a[36460] = aux_sym_number_token2;
	v->a[36461] = actions(1057);
	v->a[36462] = 1;
	v->a[36463] = anon_sym_DOLLAR_LBRACE;
	v->a[36464] = actions(1059);
	v->a[36465] = 1;
	v->a[36466] = anon_sym_DOLLAR_LPAREN;
	v->a[36467] = actions(1061);
	v->a[36468] = 1;
	v->a[36469] = anon_sym_BQUOTE;
	v->a[36470] = actions(1063);
	v->a[36471] = 1;
	v->a[36472] = anon_sym_DOLLAR_BQUOTE;
	v->a[36473] = actions(1069);
	v->a[36474] = 1;
	v->a[36475] = sym_test_operator;
	v->a[36476] = actions(1071);
	v->a[36477] = 1;
	v->a[36478] = sym__brace_start;
	v->a[36479] = actions(1394);
	small_parse_table_1824(v);
}

void	small_parse_table_1824(t_small_parse_table_array *v)
{
	v->a[36480] = 1;
	v->a[36481] = anon_sym_LT_LT_LT;
	v->a[36482] = actions(1396);
	v->a[36483] = 1;
	v->a[36484] = sym_file_descriptor;
	v->a[36485] = actions(2668);
	v->a[36486] = 1;
	v->a[36487] = sym_word;
	v->a[36488] = actions(4705);
	v->a[36489] = 1;
	v->a[36490] = sym_variable_name;
	v->a[36491] = actions(4863);
	v->a[36492] = 1;
	v->a[36493] = sym__special_character;
	v->a[36494] = state(617);
	v->a[36495] = 1;
	v->a[36496] = sym_command_name;
	v->a[36497] = state(2332);
	v->a[36498] = 1;
	v->a[36499] = aux_sym__literal_repeat1;
	small_parse_table_1825(v);
}

/* EOF small_parse_table_364.c */
