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
	v->a[36400] = anon_sym_PIPE_AMP;
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
	v->a[36415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36416] = anon_sym_AMP;
	v->a[36417] = anon_sym_DOLLAR;
	v->a[36418] = sym__special_character;
	v->a[36419] = anon_sym_DQUOTE;
	small_parse_table_1821(v);
}

void	small_parse_table_1821(t_small_parse_table_array *v)
{
	v->a[36420] = sym_raw_string;
	v->a[36421] = aux_sym_number_token1;
	v->a[36422] = aux_sym_number_token2;
	v->a[36423] = anon_sym_DOLLAR_LBRACE;
	v->a[36424] = anon_sym_DOLLAR_LPAREN;
	v->a[36425] = anon_sym_BQUOTE;
	v->a[36426] = anon_sym_DOLLAR_BQUOTE;
	v->a[36427] = sym_word;
	v->a[36428] = anon_sym_SEMI;
	v->a[36429] = 3;
	v->a[36430] = actions(3);
	v->a[36431] = 1;
	v->a[36432] = sym_comment;
	v->a[36433] = actions(2664);
	v->a[36434] = 5;
	v->a[36435] = sym_file_descriptor;
	v->a[36436] = sym_variable_name;
	v->a[36437] = sym_test_operator;
	v->a[36438] = sym__brace_start;
	v->a[36439] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1822(v);
}

void	small_parse_table_1822(t_small_parse_table_array *v)
{
	v->a[36440] = actions(2662);
	v->a[36441] = 35;
	v->a[36442] = anon_sym_esac;
	v->a[36443] = anon_sym_PIPE;
	v->a[36444] = anon_sym_SEMI_SEMI;
	v->a[36445] = anon_sym_SEMI_AMP;
	v->a[36446] = anon_sym_SEMI_SEMI_AMP;
	v->a[36447] = anon_sym_PIPE_AMP;
	v->a[36448] = anon_sym_AMP_AMP;
	v->a[36449] = anon_sym_PIPE_PIPE;
	v->a[36450] = anon_sym_LT;
	v->a[36451] = anon_sym_GT;
	v->a[36452] = anon_sym_GT_GT;
	v->a[36453] = anon_sym_AMP_GT;
	v->a[36454] = anon_sym_AMP_GT_GT;
	v->a[36455] = anon_sym_LT_AMP;
	v->a[36456] = anon_sym_GT_AMP;
	v->a[36457] = anon_sym_GT_PIPE;
	v->a[36458] = anon_sym_LT_AMP_DASH;
	v->a[36459] = anon_sym_GT_AMP_DASH;
	small_parse_table_1823(v);
}

void	small_parse_table_1823(t_small_parse_table_array *v)
{
	v->a[36460] = anon_sym_LT_LT;
	v->a[36461] = anon_sym_LT_LT_DASH;
	v->a[36462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36463] = anon_sym_AMP;
	v->a[36464] = anon_sym_DOLLAR;
	v->a[36465] = sym__special_character;
	v->a[36466] = anon_sym_DQUOTE;
	v->a[36467] = sym_raw_string;
	v->a[36468] = aux_sym_number_token1;
	v->a[36469] = aux_sym_number_token2;
	v->a[36470] = anon_sym_DOLLAR_LBRACE;
	v->a[36471] = anon_sym_DOLLAR_LPAREN;
	v->a[36472] = anon_sym_BQUOTE;
	v->a[36473] = anon_sym_DOLLAR_BQUOTE;
	v->a[36474] = aux_sym__simple_variable_name_token1;
	v->a[36475] = sym_word;
	v->a[36476] = anon_sym_SEMI;
	v->a[36477] = 3;
	v->a[36478] = actions(3);
	v->a[36479] = 1;
	small_parse_table_1824(v);
}

void	small_parse_table_1824(t_small_parse_table_array *v)
{
	v->a[36480] = sym_comment;
	v->a[36481] = actions(3050);
	v->a[36482] = 5;
	v->a[36483] = sym_file_descriptor;
	v->a[36484] = sym__concat;
	v->a[36485] = sym_test_operator;
	v->a[36486] = sym__brace_start;
	v->a[36487] = aux_sym_heredoc_redirect_token1;
	v->a[36488] = actions(3048);
	v->a[36489] = 35;
	v->a[36490] = anon_sym_esac;
	v->a[36491] = anon_sym_PIPE;
	v->a[36492] = anon_sym_SEMI_SEMI;
	v->a[36493] = anon_sym_SEMI_AMP;
	v->a[36494] = anon_sym_SEMI_SEMI_AMP;
	v->a[36495] = anon_sym_PIPE_AMP;
	v->a[36496] = anon_sym_AMP_AMP;
	v->a[36497] = anon_sym_PIPE_PIPE;
	v->a[36498] = anon_sym_LT;
	v->a[36499] = anon_sym_GT;
	small_parse_table_1825(v);
}

/* EOF small_parse_table_364.c */
