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
	v->a[121400] = aux_sym_number_token2;
	v->a[121401] = anon_sym_DOLLAR_LPAREN;
	v->a[121402] = anon_sym_BQUOTE;
	v->a[121403] = sym_word;
	v->a[121404] = actions(1346);
	v->a[121405] = 27;
	v->a[121406] = sym_file_descriptor;
	v->a[121407] = sym__concat;
	v->a[121408] = sym_test_operator;
	v->a[121409] = sym__bare_dollar;
	v->a[121410] = sym__brace_start;
	v->a[121411] = anon_sym_LPAREN_LPAREN;
	v->a[121412] = anon_sym_PIPE_PIPE;
	v->a[121413] = anon_sym_AMP_AMP;
	v->a[121414] = anon_sym_GT_GT;
	v->a[121415] = anon_sym_PIPE_AMP;
	v->a[121416] = anon_sym_AMP_GT_GT;
	v->a[121417] = anon_sym_GT_PIPE;
	v->a[121418] = anon_sym_LT_AMP_DASH;
	v->a[121419] = anon_sym_GT_AMP_DASH;
	small_parse_table_6071(v);
}

void	small_parse_table_6071(t_small_parse_table_array *v)
{
	v->a[121420] = anon_sym_LT_LT_DASH;
	v->a[121421] = anon_sym_LT_LT_LT;
	v->a[121422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121423] = anon_sym_DOLLAR_LBRACK;
	v->a[121424] = aux_sym_concatenation_token1;
	v->a[121425] = sym__special_character;
	v->a[121426] = anon_sym_DQUOTE;
	v->a[121427] = sym_raw_string;
	v->a[121428] = sym_ansi_c_string;
	v->a[121429] = anon_sym_DOLLAR_LBRACE;
	v->a[121430] = anon_sym_DOLLAR_BQUOTE;
	v->a[121431] = anon_sym_LT_LPAREN;
	v->a[121432] = anon_sym_GT_LPAREN;
	v->a[121433] = 3;
	v->a[121434] = actions(71);
	v->a[121435] = 1;
	v->a[121436] = sym_comment;
	v->a[121437] = actions(1312);
	v->a[121438] = 14;
	v->a[121439] = anon_sym_EQ;
	small_parse_table_6072(v);
}

void	small_parse_table_6072(t_small_parse_table_array *v)
{
	v->a[121440] = anon_sym_PIPE;
	v->a[121441] = anon_sym_CARET;
	v->a[121442] = anon_sym_AMP;
	v->a[121443] = anon_sym_LT;
	v->a[121444] = anon_sym_GT;
	v->a[121445] = anon_sym_LT_LT;
	v->a[121446] = anon_sym_GT_GT;
	v->a[121447] = anon_sym_PLUS;
	v->a[121448] = anon_sym_DASH;
	v->a[121449] = anon_sym_STAR;
	v->a[121450] = anon_sym_SLASH;
	v->a[121451] = anon_sym_PERCENT;
	v->a[121452] = anon_sym_STAR_STAR;
	v->a[121453] = actions(1314);
	v->a[121454] = 28;
	v->a[121455] = sym__concat;
	v->a[121456] = sym_test_operator;
	v->a[121457] = anon_sym_RPAREN_RPAREN;
	v->a[121458] = anon_sym_COMMA;
	v->a[121459] = anon_sym_PLUS_PLUS;
	small_parse_table_6073(v);
}

void	small_parse_table_6073(t_small_parse_table_array *v)
{
	v->a[121460] = anon_sym_DASH_DASH;
	v->a[121461] = anon_sym_PLUS_EQ;
	v->a[121462] = anon_sym_DASH_EQ;
	v->a[121463] = anon_sym_STAR_EQ;
	v->a[121464] = anon_sym_SLASH_EQ;
	v->a[121465] = anon_sym_PERCENT_EQ;
	v->a[121466] = anon_sym_STAR_STAR_EQ;
	v->a[121467] = anon_sym_LT_LT_EQ;
	v->a[121468] = anon_sym_GT_GT_EQ;
	v->a[121469] = anon_sym_AMP_EQ;
	v->a[121470] = anon_sym_CARET_EQ;
	v->a[121471] = anon_sym_PIPE_EQ;
	v->a[121472] = anon_sym_PIPE_PIPE;
	v->a[121473] = anon_sym_AMP_AMP;
	v->a[121474] = anon_sym_EQ_EQ;
	v->a[121475] = anon_sym_BANG_EQ;
	v->a[121476] = anon_sym_LT_EQ;
	v->a[121477] = anon_sym_GT_EQ;
	v->a[121478] = anon_sym_RBRACK_RBRACK;
	v->a[121479] = anon_sym_EQ_TILDE;
	small_parse_table_6074(v);
}

void	small_parse_table_6074(t_small_parse_table_array *v)
{
	v->a[121480] = anon_sym_QMARK;
	v->a[121481] = anon_sym_COLON;
	v->a[121482] = aux_sym_concatenation_token1;
	v->a[121483] = 3;
	v->a[121484] = actions(71);
	v->a[121485] = 1;
	v->a[121486] = sym_comment;
	v->a[121487] = actions(1340);
	v->a[121488] = 14;
	v->a[121489] = anon_sym_EQ;
	v->a[121490] = anon_sym_PIPE;
	v->a[121491] = anon_sym_CARET;
	v->a[121492] = anon_sym_AMP;
	v->a[121493] = anon_sym_LT;
	v->a[121494] = anon_sym_GT;
	v->a[121495] = anon_sym_LT_LT;
	v->a[121496] = anon_sym_GT_GT;
	v->a[121497] = anon_sym_PLUS;
	v->a[121498] = anon_sym_DASH;
	v->a[121499] = anon_sym_STAR;
	small_parse_table_6075(v);
}

/* EOF small_parse_table_1214.c */
