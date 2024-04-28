/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1132.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5660(t_small_parse_table_array *v)
{
	v->a[113200] = anon_sym_AMP_GT_GT;
	v->a[113201] = anon_sym_LT_AMP;
	v->a[113202] = anon_sym_GT_AMP;
	v->a[113203] = anon_sym_GT_PIPE;
	v->a[113204] = anon_sym_LT_AMP_DASH;
	v->a[113205] = anon_sym_GT_AMP_DASH;
	v->a[113206] = anon_sym_LT_LT_LT;
	v->a[113207] = actions(5819);
	v->a[113208] = 17;
	v->a[113209] = anon_sym_LPAREN_LPAREN;
	v->a[113210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113211] = anon_sym_DOLLAR_LBRACK;
	v->a[113212] = anon_sym_DOLLAR;
	v->a[113213] = sym__special_character;
	v->a[113214] = anon_sym_DQUOTE;
	v->a[113215] = sym_raw_string;
	v->a[113216] = sym_ansi_c_string;
	v->a[113217] = aux_sym_number_token1;
	v->a[113218] = aux_sym_number_token2;
	v->a[113219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5661(v);
}

void	small_parse_table_5661(t_small_parse_table_array *v)
{
	v->a[113220] = anon_sym_DOLLAR_LPAREN;
	v->a[113221] = anon_sym_BQUOTE;
	v->a[113222] = anon_sym_DOLLAR_BQUOTE;
	v->a[113223] = anon_sym_LT_LPAREN;
	v->a[113224] = anon_sym_GT_LPAREN;
	v->a[113225] = sym_word;
	v->a[113226] = 26;
	v->a[113227] = actions(71);
	v->a[113228] = 1;
	v->a[113229] = sym_comment;
	v->a[113230] = actions(1131);
	v->a[113231] = 1;
	v->a[113232] = anon_sym_LPAREN;
	v->a[113233] = actions(1141);
	v->a[113234] = 1;
	v->a[113235] = anon_sym_DOLLAR_LBRACK;
	v->a[113236] = actions(1145);
	v->a[113237] = 1;
	v->a[113238] = anon_sym_DOLLAR;
	v->a[113239] = actions(1149);
	small_parse_table_5662(v);
}

void	small_parse_table_5662(t_small_parse_table_array *v)
{
	v->a[113240] = 1;
	v->a[113241] = anon_sym_DQUOTE;
	v->a[113242] = actions(1153);
	v->a[113243] = 1;
	v->a[113244] = aux_sym_number_token1;
	v->a[113245] = actions(1155);
	v->a[113246] = 1;
	v->a[113247] = aux_sym_number_token2;
	v->a[113248] = actions(1157);
	v->a[113249] = 1;
	v->a[113250] = anon_sym_DOLLAR_LBRACE;
	v->a[113251] = actions(1159);
	v->a[113252] = 1;
	v->a[113253] = anon_sym_DOLLAR_LPAREN;
	v->a[113254] = actions(1163);
	v->a[113255] = 1;
	v->a[113256] = anon_sym_DOLLAR_BQUOTE;
	v->a[113257] = actions(1169);
	v->a[113258] = 1;
	v->a[113259] = sym__brace_start;
	small_parse_table_5663(v);
}

void	small_parse_table_5663(t_small_parse_table_array *v)
{
	v->a[113260] = actions(1187);
	v->a[113261] = 1;
	v->a[113262] = sym_word;
	v->a[113263] = actions(1189);
	v->a[113264] = 1;
	v->a[113265] = anon_sym_BANG;
	v->a[113266] = actions(1195);
	v->a[113267] = 1;
	v->a[113268] = anon_sym_TILDE;
	v->a[113269] = actions(1201);
	v->a[113270] = 1;
	v->a[113271] = sym_test_operator;
	v->a[113272] = actions(3060);
	v->a[113273] = 1;
	v->a[113274] = anon_sym_BQUOTE;
	v->a[113275] = actions(5779);
	v->a[113276] = 1;
	v->a[113277] = sym__special_character;
	v->a[113278] = state(2717);
	v->a[113279] = 1;
	small_parse_table_5664(v);
}

void	small_parse_table_5664(t_small_parse_table_array *v)
{
	v->a[113280] = aux_sym__literal_repeat1;
	v->a[113281] = state(3003);
	v->a[113282] = 1;
	v->a[113283] = sym__expression;
	v->a[113284] = actions(1129);
	v->a[113285] = 2;
	v->a[113286] = anon_sym_LPAREN_LPAREN;
	v->a[113287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113288] = actions(1165);
	v->a[113289] = 2;
	v->a[113290] = anon_sym_LT_LPAREN;
	v->a[113291] = anon_sym_GT_LPAREN;
	v->a[113292] = actions(1191);
	v->a[113293] = 2;
	v->a[113294] = anon_sym_PLUS_PLUS2;
	v->a[113295] = anon_sym_DASH_DASH2;
	v->a[113296] = actions(1193);
	v->a[113297] = 2;
	v->a[113298] = anon_sym_DASH2;
	v->a[113299] = anon_sym_PLUS2;
	small_parse_table_5665(v);
}

/* EOF small_parse_table_1132.c */
