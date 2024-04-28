/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1032.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5160(t_small_parse_table_array *v)
{
	v->a[103200] = anon_sym_PIPE_AMP;
	v->a[103201] = anon_sym_AMP_GT_GT;
	v->a[103202] = anon_sym_GT_PIPE;
	v->a[103203] = anon_sym_LT_AMP_DASH;
	v->a[103204] = anon_sym_GT_AMP_DASH;
	v->a[103205] = anon_sym_LT_LT_DASH;
	v->a[103206] = anon_sym_LT_LT_LT;
	v->a[103207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103208] = anon_sym_DOLLAR_LBRACK;
	v->a[103209] = aux_sym_concatenation_token1;
	v->a[103210] = sym__special_character;
	v->a[103211] = anon_sym_DQUOTE;
	v->a[103212] = sym_raw_string;
	v->a[103213] = sym_ansi_c_string;
	v->a[103214] = anon_sym_DOLLAR_LBRACE;
	v->a[103215] = anon_sym_DOLLAR_BQUOTE;
	v->a[103216] = anon_sym_LT_LPAREN;
	v->a[103217] = anon_sym_GT_LPAREN;
	v->a[103218] = 26;
	v->a[103219] = actions(71);
	small_parse_table_5161(v);
}

void	small_parse_table_5161(t_small_parse_table_array *v)
{
	v->a[103220] = 1;
	v->a[103221] = sym_comment;
	v->a[103222] = actions(1131);
	v->a[103223] = 1;
	v->a[103224] = anon_sym_LPAREN;
	v->a[103225] = actions(1141);
	v->a[103226] = 1;
	v->a[103227] = anon_sym_DOLLAR_LBRACK;
	v->a[103228] = actions(1145);
	v->a[103229] = 1;
	v->a[103230] = anon_sym_DOLLAR;
	v->a[103231] = actions(1149);
	v->a[103232] = 1;
	v->a[103233] = anon_sym_DQUOTE;
	v->a[103234] = actions(1153);
	v->a[103235] = 1;
	v->a[103236] = aux_sym_number_token1;
	v->a[103237] = actions(1155);
	v->a[103238] = 1;
	v->a[103239] = aux_sym_number_token2;
	small_parse_table_5162(v);
}

void	small_parse_table_5162(t_small_parse_table_array *v)
{
	v->a[103240] = actions(1157);
	v->a[103241] = 1;
	v->a[103242] = anon_sym_DOLLAR_LBRACE;
	v->a[103243] = actions(1159);
	v->a[103244] = 1;
	v->a[103245] = anon_sym_DOLLAR_LPAREN;
	v->a[103246] = actions(1163);
	v->a[103247] = 1;
	v->a[103248] = anon_sym_DOLLAR_BQUOTE;
	v->a[103249] = actions(1169);
	v->a[103250] = 1;
	v->a[103251] = sym__brace_start;
	v->a[103252] = actions(1171);
	v->a[103253] = 1;
	v->a[103254] = sym_word;
	v->a[103255] = actions(1173);
	v->a[103256] = 1;
	v->a[103257] = anon_sym_BANG;
	v->a[103258] = actions(1179);
	v->a[103259] = 1;
	small_parse_table_5163(v);
}

void	small_parse_table_5163(t_small_parse_table_array *v)
{
	v->a[103260] = anon_sym_TILDE;
	v->a[103261] = actions(1181);
	v->a[103262] = 1;
	v->a[103263] = sym__special_character;
	v->a[103264] = actions(1185);
	v->a[103265] = 1;
	v->a[103266] = sym_test_operator;
	v->a[103267] = actions(3060);
	v->a[103268] = 1;
	v->a[103269] = anon_sym_BQUOTE;
	v->a[103270] = state(2484);
	v->a[103271] = 1;
	v->a[103272] = aux_sym__literal_repeat1;
	v->a[103273] = state(3063);
	v->a[103274] = 1;
	v->a[103275] = sym__expression;
	v->a[103276] = actions(1129);
	v->a[103277] = 2;
	v->a[103278] = anon_sym_LPAREN_LPAREN;
	v->a[103279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5164(v);
}

void	small_parse_table_5164(t_small_parse_table_array *v)
{
	v->a[103280] = actions(1165);
	v->a[103281] = 2;
	v->a[103282] = anon_sym_LT_LPAREN;
	v->a[103283] = anon_sym_GT_LPAREN;
	v->a[103284] = actions(1175);
	v->a[103285] = 2;
	v->a[103286] = anon_sym_PLUS_PLUS2;
	v->a[103287] = anon_sym_DASH_DASH2;
	v->a[103288] = actions(1177);
	v->a[103289] = 2;
	v->a[103290] = anon_sym_DASH2;
	v->a[103291] = anon_sym_PLUS2;
	v->a[103292] = actions(1183);
	v->a[103293] = 2;
	v->a[103294] = sym_raw_string;
	v->a[103295] = sym_ansi_c_string;
	v->a[103296] = state(2594);
	v->a[103297] = 6;
	v->a[103298] = sym_binary_expression;
	v->a[103299] = sym_ternary_expression;
	small_parse_table_5165(v);
}

/* EOF small_parse_table_1032.c */
