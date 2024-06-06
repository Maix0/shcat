/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1214.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6070(t_small_parse_table_array *v)
{
	v->a[121400] = actions(1045);
	v->a[121401] = 1;
	v->a[121402] = anon_sym_DOLLAR;
	v->a[121403] = actions(1051);
	v->a[121404] = 1;
	v->a[121405] = aux_sym_number_token1;
	v->a[121406] = actions(1053);
	v->a[121407] = 1;
	v->a[121408] = aux_sym_number_token2;
	v->a[121409] = actions(1057);
	v->a[121410] = 1;
	v->a[121411] = anon_sym_DOLLAR_LPAREN;
	v->a[121412] = actions(1067);
	v->a[121413] = 1;
	v->a[121414] = sym__brace_start;
	v->a[121415] = actions(6300);
	v->a[121416] = 1;
	v->a[121417] = sym_word;
	v->a[121418] = actions(6302);
	v->a[121419] = 1;
	small_parse_table_6071(v);
}

void	small_parse_table_6071(t_small_parse_table_array *v)
{
	v->a[121420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121421] = actions(6306);
	v->a[121422] = 1;
	v->a[121423] = sym__special_character;
	v->a[121424] = actions(6308);
	v->a[121425] = 1;
	v->a[121426] = anon_sym_DQUOTE;
	v->a[121427] = actions(6312);
	v->a[121428] = 1;
	v->a[121429] = anon_sym_DOLLAR_LBRACE;
	v->a[121430] = actions(6314);
	v->a[121431] = 1;
	v->a[121432] = anon_sym_BQUOTE;
	v->a[121433] = actions(6316);
	v->a[121434] = 1;
	v->a[121435] = anon_sym_DOLLAR_BQUOTE;
	v->a[121436] = actions(6318);
	v->a[121437] = 1;
	v->a[121438] = sym__comment_word;
	v->a[121439] = actions(6310);
	small_parse_table_6072(v);
}

void	small_parse_table_6072(t_small_parse_table_array *v)
{
	v->a[121440] = 3;
	v->a[121441] = sym_test_operator;
	v->a[121442] = sym__bare_dollar;
	v->a[121443] = sym_raw_string;
	v->a[121444] = state(729);
	v->a[121445] = 7;
	v->a[121446] = sym_arithmetic_expansion;
	v->a[121447] = sym_brace_expression;
	v->a[121448] = sym_string;
	v->a[121449] = sym_number;
	v->a[121450] = sym_simple_expansion;
	v->a[121451] = sym_expansion;
	v->a[121452] = sym_command_substitution;
	v->a[121453] = 7;
	v->a[121454] = actions(3);
	v->a[121455] = 1;
	v->a[121456] = sym_comment;
	v->a[121457] = actions(5641);
	v->a[121458] = 1;
	v->a[121459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6073(v);
}

void	small_parse_table_6073(t_small_parse_table_array *v)
{
	v->a[121460] = actions(6041);
	v->a[121461] = 1;
	v->a[121462] = sym_file_descriptor;
	v->a[121463] = state(2286);
	v->a[121464] = 1;
	v->a[121465] = sym_file_redirect;
	v->a[121466] = actions(5401);
	v->a[121467] = 2;
	v->a[121468] = anon_sym_LT_AMP_DASH;
	v->a[121469] = anon_sym_GT_AMP_DASH;
	v->a[121470] = actions(5399);
	v->a[121471] = 8;
	v->a[121472] = anon_sym_LT;
	v->a[121473] = anon_sym_GT;
	v->a[121474] = anon_sym_GT_GT;
	v->a[121475] = anon_sym_AMP_GT;
	v->a[121476] = anon_sym_AMP_GT_GT;
	v->a[121477] = anon_sym_LT_AMP;
	v->a[121478] = anon_sym_GT_AMP;
	v->a[121479] = anon_sym_GT_PIPE;
	small_parse_table_6074(v);
}

void	small_parse_table_6074(t_small_parse_table_array *v)
{
	v->a[121480] = actions(5639);
	v->a[121481] = 10;
	v->a[121482] = anon_sym_PIPE;
	v->a[121483] = anon_sym_SEMI_SEMI;
	v->a[121484] = anon_sym_PIPE_AMP;
	v->a[121485] = anon_sym_AMP_AMP;
	v->a[121486] = anon_sym_PIPE_PIPE;
	v->a[121487] = anon_sym_LT_LT;
	v->a[121488] = anon_sym_LT_LT_DASH;
	v->a[121489] = anon_sym_AMP;
	v->a[121490] = anon_sym_BQUOTE;
	v->a[121491] = anon_sym_SEMI;
	v->a[121492] = 16;
	v->a[121493] = actions(3);
	v->a[121494] = 1;
	v->a[121495] = sym_comment;
	v->a[121496] = actions(6390);
	v->a[121497] = 1;
	v->a[121498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121499] = actions(6392);
	small_parse_table_6075(v);
}

/* EOF small_parse_table_1214.c */
