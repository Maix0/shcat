/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1014.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5070(t_small_parse_table_array *v)
{
	v->a[101400] = anon_sym_LT_LPAREN;
	v->a[101401] = anon_sym_GT_LPAREN;
	v->a[101402] = sym_word;
	v->a[101403] = 5;
	v->a[101404] = actions(3);
	v->a[101405] = 1;
	v->a[101406] = sym_comment;
	v->a[101407] = actions(6130);
	v->a[101408] = 1;
	v->a[101409] = sym__special_character;
	v->a[101410] = state(2026);
	v->a[101411] = 1;
	v->a[101412] = aux_sym__literal_repeat1;
	v->a[101413] = actions(1364);
	v->a[101414] = 5;
	v->a[101415] = sym_file_descriptor;
	v->a[101416] = sym_test_operator;
	v->a[101417] = sym__brace_start;
	v->a[101418] = ts_builtin_sym_end;
	v->a[101419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5071(v);
}

void	small_parse_table_5071(t_small_parse_table_array *v)
{
	v->a[101420] = actions(1362);
	v->a[101421] = 36;
	v->a[101422] = anon_sym_LPAREN_LPAREN;
	v->a[101423] = anon_sym_SEMI;
	v->a[101424] = anon_sym_PIPE_PIPE;
	v->a[101425] = anon_sym_AMP_AMP;
	v->a[101426] = anon_sym_PIPE;
	v->a[101427] = anon_sym_AMP;
	v->a[101428] = anon_sym_LT;
	v->a[101429] = anon_sym_GT;
	v->a[101430] = anon_sym_LT_LT;
	v->a[101431] = anon_sym_GT_GT;
	v->a[101432] = anon_sym_SEMI_SEMI;
	v->a[101433] = anon_sym_PIPE_AMP;
	v->a[101434] = anon_sym_AMP_GT;
	v->a[101435] = anon_sym_AMP_GT_GT;
	v->a[101436] = anon_sym_LT_AMP;
	v->a[101437] = anon_sym_GT_AMP;
	v->a[101438] = anon_sym_GT_PIPE;
	v->a[101439] = anon_sym_LT_AMP_DASH;
	small_parse_table_5072(v);
}

void	small_parse_table_5072(t_small_parse_table_array *v)
{
	v->a[101440] = anon_sym_GT_AMP_DASH;
	v->a[101441] = anon_sym_LT_LT_DASH;
	v->a[101442] = anon_sym_LT_LT_LT;
	v->a[101443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101444] = anon_sym_DOLLAR_LBRACK;
	v->a[101445] = anon_sym_DOLLAR;
	v->a[101446] = anon_sym_DQUOTE;
	v->a[101447] = sym_raw_string;
	v->a[101448] = sym_ansi_c_string;
	v->a[101449] = aux_sym_number_token1;
	v->a[101450] = aux_sym_number_token2;
	v->a[101451] = anon_sym_DOLLAR_LBRACE;
	v->a[101452] = anon_sym_DOLLAR_LPAREN;
	v->a[101453] = anon_sym_BQUOTE;
	v->a[101454] = anon_sym_DOLLAR_BQUOTE;
	v->a[101455] = anon_sym_LT_LPAREN;
	v->a[101456] = anon_sym_GT_LPAREN;
	v->a[101457] = sym_word;
	v->a[101458] = 26;
	v->a[101459] = actions(71);
	small_parse_table_5073(v);
}

void	small_parse_table_5073(t_small_parse_table_array *v)
{
	v->a[101460] = 1;
	v->a[101461] = sym_comment;
	v->a[101462] = actions(363);
	v->a[101463] = 1;
	v->a[101464] = anon_sym_DOLLAR_LBRACK;
	v->a[101465] = actions(367);
	v->a[101466] = 1;
	v->a[101467] = anon_sym_DOLLAR;
	v->a[101468] = actions(371);
	v->a[101469] = 1;
	v->a[101470] = anon_sym_DQUOTE;
	v->a[101471] = actions(375);
	v->a[101472] = 1;
	v->a[101473] = aux_sym_number_token1;
	v->a[101474] = actions(377);
	v->a[101475] = 1;
	v->a[101476] = aux_sym_number_token2;
	v->a[101477] = actions(379);
	v->a[101478] = 1;
	v->a[101479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5074(v);
}

void	small_parse_table_5074(t_small_parse_table_array *v)
{
	v->a[101480] = actions(381);
	v->a[101481] = 1;
	v->a[101482] = anon_sym_DOLLAR_LPAREN;
	v->a[101483] = actions(385);
	v->a[101484] = 1;
	v->a[101485] = anon_sym_DOLLAR_BQUOTE;
	v->a[101486] = actions(391);
	v->a[101487] = 1;
	v->a[101488] = sym__brace_start;
	v->a[101489] = actions(1091);
	v->a[101490] = 1;
	v->a[101491] = sym_word;
	v->a[101492] = actions(1093);
	v->a[101493] = 1;
	v->a[101494] = anon_sym_LPAREN;
	v->a[101495] = actions(1095);
	v->a[101496] = 1;
	v->a[101497] = anon_sym_BANG;
	v->a[101498] = actions(1103);
	v->a[101499] = 1;
	small_parse_table_5075(v);
}

/* EOF small_parse_table_1014.c */
