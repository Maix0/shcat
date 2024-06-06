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
	v->a[101400] = anon_sym_AMP_AMP;
	v->a[101401] = anon_sym_PIPE_PIPE;
	v->a[101402] = anon_sym_LT;
	v->a[101403] = anon_sym_GT;
	v->a[101404] = anon_sym_GT_GT;
	v->a[101405] = anon_sym_AMP_GT;
	v->a[101406] = anon_sym_AMP_GT_GT;
	v->a[101407] = anon_sym_LT_AMP;
	v->a[101408] = anon_sym_GT_AMP;
	v->a[101409] = anon_sym_GT_PIPE;
	v->a[101410] = anon_sym_LT_AMP_DASH;
	v->a[101411] = anon_sym_GT_AMP_DASH;
	v->a[101412] = anon_sym_LT_LT;
	v->a[101413] = anon_sym_LT_LT_DASH;
	v->a[101414] = anon_sym_AMP;
	v->a[101415] = aux_sym_concatenation_token1;
	v->a[101416] = anon_sym_SEMI;
	v->a[101417] = 19;
	v->a[101418] = actions(3);
	v->a[101419] = 1;
	small_parse_table_5071(v);
}

void	small_parse_table_5071(t_small_parse_table_array *v)
{
	v->a[101420] = sym_comment;
	v->a[101421] = actions(1011);
	v->a[101422] = 1;
	v->a[101423] = anon_sym_DOLLAR;
	v->a[101424] = actions(1017);
	v->a[101425] = 1;
	v->a[101426] = aux_sym_number_token1;
	v->a[101427] = actions(1019);
	v->a[101428] = 1;
	v->a[101429] = aux_sym_number_token2;
	v->a[101430] = actions(1023);
	v->a[101431] = 1;
	v->a[101432] = anon_sym_DOLLAR_LPAREN;
	v->a[101433] = actions(1035);
	v->a[101434] = 1;
	v->a[101435] = sym__brace_start;
	v->a[101436] = actions(5763);
	v->a[101437] = 1;
	v->a[101438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101439] = actions(5767);
	small_parse_table_5072(v);
}

void	small_parse_table_5072(t_small_parse_table_array *v)
{
	v->a[101440] = 1;
	v->a[101441] = anon_sym_DQUOTE;
	v->a[101442] = actions(5771);
	v->a[101443] = 1;
	v->a[101444] = anon_sym_DOLLAR_LBRACE;
	v->a[101445] = actions(5773);
	v->a[101446] = 1;
	v->a[101447] = anon_sym_BQUOTE;
	v->a[101448] = actions(5775);
	v->a[101449] = 1;
	v->a[101450] = anon_sym_DOLLAR_BQUOTE;
	v->a[101451] = actions(5777);
	v->a[101452] = 1;
	v->a[101453] = sym__comment_word;
	v->a[101454] = actions(5779);
	v->a[101455] = 1;
	v->a[101456] = sym__empty_value;
	v->a[101457] = actions(5796);
	v->a[101458] = 1;
	v->a[101459] = sym_word;
	small_parse_table_5073(v);
}

void	small_parse_table_5073(t_small_parse_table_array *v)
{
	v->a[101460] = actions(5798);
	v->a[101461] = 1;
	v->a[101462] = sym__special_character;
	v->a[101463] = state(1117);
	v->a[101464] = 1;
	v->a[101465] = aux_sym__literal_repeat1;
	v->a[101466] = state(1238);
	v->a[101467] = 1;
	v->a[101468] = sym_concatenation;
	v->a[101469] = actions(5800);
	v->a[101470] = 2;
	v->a[101471] = sym_test_operator;
	v->a[101472] = sym_raw_string;
	v->a[101473] = state(760);
	v->a[101474] = 7;
	v->a[101475] = sym_arithmetic_expansion;
	v->a[101476] = sym_brace_expression;
	v->a[101477] = sym_string;
	v->a[101478] = sym_number;
	v->a[101479] = sym_simple_expansion;
	small_parse_table_5074(v);
}

void	small_parse_table_5074(t_small_parse_table_array *v)
{
	v->a[101480] = sym_expansion;
	v->a[101481] = sym_command_substitution;
	v->a[101482] = 19;
	v->a[101483] = actions(3);
	v->a[101484] = 1;
	v->a[101485] = sym_comment;
	v->a[101486] = actions(5407);
	v->a[101487] = 1;
	v->a[101488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101489] = actions(5409);
	v->a[101490] = 1;
	v->a[101491] = anon_sym_DOLLAR;
	v->a[101492] = actions(5413);
	v->a[101493] = 1;
	v->a[101494] = anon_sym_DQUOTE;
	v->a[101495] = actions(5417);
	v->a[101496] = 1;
	v->a[101497] = aux_sym_number_token1;
	v->a[101498] = actions(5419);
	v->a[101499] = 1;
	small_parse_table_5075(v);
}

/* EOF small_parse_table_1014.c */
