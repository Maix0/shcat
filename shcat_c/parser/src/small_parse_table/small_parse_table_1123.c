/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1123.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5615(t_small_parse_table_array *v)
{
	v->a[112300] = 11;
	v->a[112301] = anon_sym_LT;
	v->a[112302] = anon_sym_GT;
	v->a[112303] = anon_sym_GT_GT;
	v->a[112304] = anon_sym_AMP_GT;
	v->a[112305] = anon_sym_AMP_GT_GT;
	v->a[112306] = anon_sym_LT_AMP;
	v->a[112307] = anon_sym_GT_AMP;
	v->a[112308] = anon_sym_GT_PIPE;
	v->a[112309] = anon_sym_LT_AMP_DASH;
	v->a[112310] = anon_sym_GT_AMP_DASH;
	v->a[112311] = anon_sym_LT_LT_LT;
	v->a[112312] = actions(5819);
	v->a[112313] = 17;
	v->a[112314] = anon_sym_LPAREN_LPAREN;
	v->a[112315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112316] = anon_sym_DOLLAR_LBRACK;
	v->a[112317] = anon_sym_DOLLAR;
	v->a[112318] = sym__special_character;
	v->a[112319] = anon_sym_DQUOTE;
	small_parse_table_5616(v);
}

void	small_parse_table_5616(t_small_parse_table_array *v)
{
	v->a[112320] = sym_raw_string;
	v->a[112321] = sym_ansi_c_string;
	v->a[112322] = aux_sym_number_token1;
	v->a[112323] = aux_sym_number_token2;
	v->a[112324] = anon_sym_DOLLAR_LBRACE;
	v->a[112325] = anon_sym_DOLLAR_LPAREN;
	v->a[112326] = anon_sym_BQUOTE;
	v->a[112327] = anon_sym_DOLLAR_BQUOTE;
	v->a[112328] = anon_sym_LT_LPAREN;
	v->a[112329] = anon_sym_GT_LPAREN;
	v->a[112330] = sym_word;
	v->a[112331] = 26;
	v->a[112332] = actions(71);
	v->a[112333] = 1;
	v->a[112334] = sym_comment;
	v->a[112335] = actions(1131);
	v->a[112336] = 1;
	v->a[112337] = anon_sym_LPAREN;
	v->a[112338] = actions(1141);
	v->a[112339] = 1;
	small_parse_table_5617(v);
}

void	small_parse_table_5617(t_small_parse_table_array *v)
{
	v->a[112340] = anon_sym_DOLLAR_LBRACK;
	v->a[112341] = actions(1145);
	v->a[112342] = 1;
	v->a[112343] = anon_sym_DOLLAR;
	v->a[112344] = actions(1149);
	v->a[112345] = 1;
	v->a[112346] = anon_sym_DQUOTE;
	v->a[112347] = actions(1153);
	v->a[112348] = 1;
	v->a[112349] = aux_sym_number_token1;
	v->a[112350] = actions(1155);
	v->a[112351] = 1;
	v->a[112352] = aux_sym_number_token2;
	v->a[112353] = actions(1157);
	v->a[112354] = 1;
	v->a[112355] = anon_sym_DOLLAR_LBRACE;
	v->a[112356] = actions(1159);
	v->a[112357] = 1;
	v->a[112358] = anon_sym_DOLLAR_LPAREN;
	v->a[112359] = actions(1163);
	small_parse_table_5618(v);
}

void	small_parse_table_5618(t_small_parse_table_array *v)
{
	v->a[112360] = 1;
	v->a[112361] = anon_sym_DOLLAR_BQUOTE;
	v->a[112362] = actions(1169);
	v->a[112363] = 1;
	v->a[112364] = sym__brace_start;
	v->a[112365] = actions(1211);
	v->a[112366] = 1;
	v->a[112367] = sym_word;
	v->a[112368] = actions(1213);
	v->a[112369] = 1;
	v->a[112370] = anon_sym_BANG;
	v->a[112371] = actions(1219);
	v->a[112372] = 1;
	v->a[112373] = anon_sym_TILDE;
	v->a[112374] = actions(1221);
	v->a[112375] = 1;
	v->a[112376] = sym__special_character;
	v->a[112377] = actions(1225);
	v->a[112378] = 1;
	v->a[112379] = sym_test_operator;
	small_parse_table_5619(v);
}

void	small_parse_table_5619(t_small_parse_table_array *v)
{
	v->a[112380] = actions(3060);
	v->a[112381] = 1;
	v->a[112382] = anon_sym_BQUOTE;
	v->a[112383] = state(2484);
	v->a[112384] = 1;
	v->a[112385] = aux_sym__literal_repeat1;
	v->a[112386] = state(2621);
	v->a[112387] = 1;
	v->a[112388] = sym__expression;
	v->a[112389] = actions(1129);
	v->a[112390] = 2;
	v->a[112391] = anon_sym_LPAREN_LPAREN;
	v->a[112392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112393] = actions(1165);
	v->a[112394] = 2;
	v->a[112395] = anon_sym_LT_LPAREN;
	v->a[112396] = anon_sym_GT_LPAREN;
	v->a[112397] = actions(1215);
	v->a[112398] = 2;
	v->a[112399] = anon_sym_PLUS_PLUS2;
	small_parse_table_5620(v);
}

/* EOF small_parse_table_1123.c */
