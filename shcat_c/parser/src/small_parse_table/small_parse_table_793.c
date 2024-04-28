/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_793.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3965(t_small_parse_table_array *v)
{
	v->a[79300] = anon_sym_LT_AMP;
	v->a[79301] = anon_sym_GT_AMP;
	v->a[79302] = anon_sym_GT_PIPE;
	v->a[79303] = anon_sym_LT_AMP_DASH;
	v->a[79304] = anon_sym_GT_AMP_DASH;
	v->a[79305] = anon_sym_LT_LT_DASH;
	v->a[79306] = anon_sym_LT_LT_LT;
	v->a[79307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79308] = anon_sym_DOLLAR_LBRACK;
	v->a[79309] = aux_sym_concatenation_token1;
	v->a[79310] = anon_sym_DOLLAR;
	v->a[79311] = sym__special_character;
	v->a[79312] = anon_sym_DQUOTE;
	v->a[79313] = sym_raw_string;
	v->a[79314] = sym_ansi_c_string;
	v->a[79315] = aux_sym_number_token1;
	v->a[79316] = aux_sym_number_token2;
	v->a[79317] = anon_sym_DOLLAR_LBRACE;
	v->a[79318] = anon_sym_DOLLAR_LPAREN;
	v->a[79319] = anon_sym_BQUOTE;
	small_parse_table_3966(v);
}

void	small_parse_table_3966(t_small_parse_table_array *v)
{
	v->a[79320] = anon_sym_DOLLAR_BQUOTE;
	v->a[79321] = anon_sym_LT_LPAREN;
	v->a[79322] = anon_sym_GT_LPAREN;
	v->a[79323] = sym_word;
	v->a[79324] = 28;
	v->a[79325] = actions(71);
	v->a[79326] = 1;
	v->a[79327] = sym_comment;
	v->a[79328] = actions(1127);
	v->a[79329] = 1;
	v->a[79330] = sym_word;
	v->a[79331] = actions(1131);
	v->a[79332] = 1;
	v->a[79333] = anon_sym_LPAREN;
	v->a[79334] = actions(1133);
	v->a[79335] = 1;
	v->a[79336] = anon_sym_BANG;
	v->a[79337] = actions(1139);
	v->a[79338] = 1;
	v->a[79339] = anon_sym_TILDE;
	small_parse_table_3967(v);
}

void	small_parse_table_3967(t_small_parse_table_array *v)
{
	v->a[79340] = actions(1141);
	v->a[79341] = 1;
	v->a[79342] = anon_sym_DOLLAR_LBRACK;
	v->a[79343] = actions(1145);
	v->a[79344] = 1;
	v->a[79345] = anon_sym_DOLLAR;
	v->a[79346] = actions(1147);
	v->a[79347] = 1;
	v->a[79348] = sym__special_character;
	v->a[79349] = actions(1149);
	v->a[79350] = 1;
	v->a[79351] = anon_sym_DQUOTE;
	v->a[79352] = actions(1153);
	v->a[79353] = 1;
	v->a[79354] = aux_sym_number_token1;
	v->a[79355] = actions(1155);
	v->a[79356] = 1;
	v->a[79357] = aux_sym_number_token2;
	v->a[79358] = actions(1157);
	v->a[79359] = 1;
	small_parse_table_3968(v);
}

void	small_parse_table_3968(t_small_parse_table_array *v)
{
	v->a[79360] = anon_sym_DOLLAR_LBRACE;
	v->a[79361] = actions(1159);
	v->a[79362] = 1;
	v->a[79363] = anon_sym_DOLLAR_LPAREN;
	v->a[79364] = actions(1163);
	v->a[79365] = 1;
	v->a[79366] = anon_sym_DOLLAR_BQUOTE;
	v->a[79367] = actions(1167);
	v->a[79368] = 1;
	v->a[79369] = sym_test_operator;
	v->a[79370] = actions(1169);
	v->a[79371] = 1;
	v->a[79372] = sym__brace_start;
	v->a[79373] = actions(3060);
	v->a[79374] = 1;
	v->a[79375] = anon_sym_BQUOTE;
	v->a[79376] = actions(5781);
	v->a[79377] = 1;
	v->a[79378] = sym_extglob_pattern;
	v->a[79379] = state(2484);
	small_parse_table_3969(v);
}

void	small_parse_table_3969(t_small_parse_table_array *v)
{
	v->a[79380] = 1;
	v->a[79381] = aux_sym__literal_repeat1;
	v->a[79382] = state(2648);
	v->a[79383] = 1;
	v->a[79384] = sym__extglob_blob;
	v->a[79385] = state(2972);
	v->a[79386] = 1;
	v->a[79387] = sym__expression;
	v->a[79388] = actions(1129);
	v->a[79389] = 2;
	v->a[79390] = anon_sym_LPAREN_LPAREN;
	v->a[79391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79392] = actions(1135);
	v->a[79393] = 2;
	v->a[79394] = anon_sym_PLUS_PLUS2;
	v->a[79395] = anon_sym_DASH_DASH2;
	v->a[79396] = actions(1137);
	v->a[79397] = 2;
	v->a[79398] = anon_sym_DASH2;
	v->a[79399] = anon_sym_PLUS2;
	small_parse_table_3970(v);
}

/* EOF small_parse_table_793.c */
