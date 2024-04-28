/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_622.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3110(t_small_parse_table_array *v)
{
	v->a[62200] = anon_sym_LPAREN_LPAREN;
	v->a[62201] = anon_sym_SEMI;
	v->a[62202] = anon_sym_PIPE_PIPE;
	v->a[62203] = anon_sym_AMP_AMP;
	v->a[62204] = anon_sym_PIPE;
	v->a[62205] = anon_sym_AMP;
	v->a[62206] = anon_sym_EQ_EQ;
	v->a[62207] = anon_sym_LT;
	v->a[62208] = anon_sym_GT;
	v->a[62209] = anon_sym_LT_LT;
	v->a[62210] = anon_sym_GT_GT;
	v->a[62211] = anon_sym_SEMI_SEMI;
	v->a[62212] = anon_sym_PIPE_AMP;
	v->a[62213] = anon_sym_EQ_TILDE;
	v->a[62214] = anon_sym_AMP_GT;
	v->a[62215] = anon_sym_AMP_GT_GT;
	v->a[62216] = anon_sym_LT_AMP;
	v->a[62217] = anon_sym_GT_AMP;
	v->a[62218] = anon_sym_GT_PIPE;
	v->a[62219] = anon_sym_LT_AMP_DASH;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = anon_sym_GT_AMP_DASH;
	v->a[62221] = anon_sym_LT_LT_DASH;
	v->a[62222] = anon_sym_LT_LT_LT;
	v->a[62223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62224] = anon_sym_DOLLAR_LBRACK;
	v->a[62225] = anon_sym_DOLLAR;
	v->a[62226] = anon_sym_DQUOTE;
	v->a[62227] = sym_raw_string;
	v->a[62228] = sym_ansi_c_string;
	v->a[62229] = aux_sym_number_token1;
	v->a[62230] = aux_sym_number_token2;
	v->a[62231] = anon_sym_DOLLAR_LBRACE;
	v->a[62232] = anon_sym_DOLLAR_LPAREN;
	v->a[62233] = anon_sym_BQUOTE;
	v->a[62234] = anon_sym_DOLLAR_BQUOTE;
	v->a[62235] = anon_sym_LT_LPAREN;
	v->a[62236] = anon_sym_GT_LPAREN;
	v->a[62237] = sym_word;
	v->a[62238] = 3;
	v->a[62239] = actions(3);
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = 1;
	v->a[62241] = sym_comment;
	v->a[62242] = actions(1294);
	v->a[62243] = 6;
	v->a[62244] = sym_file_descriptor;
	v->a[62245] = sym__concat;
	v->a[62246] = sym_variable_name;
	v->a[62247] = sym_test_operator;
	v->a[62248] = sym__brace_start;
	v->a[62249] = aux_sym_heredoc_redirect_token1;
	v->a[62250] = actions(1292);
	v->a[62251] = 40;
	v->a[62252] = anon_sym_LPAREN_LPAREN;
	v->a[62253] = anon_sym_SEMI;
	v->a[62254] = anon_sym_PIPE_PIPE;
	v->a[62255] = anon_sym_AMP_AMP;
	v->a[62256] = anon_sym_PIPE;
	v->a[62257] = anon_sym_AMP;
	v->a[62258] = anon_sym_LT;
	v->a[62259] = anon_sym_GT;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = anon_sym_LT_LT;
	v->a[62261] = anon_sym_GT_GT;
	v->a[62262] = anon_sym_SEMI_SEMI;
	v->a[62263] = anon_sym_SEMI_AMP;
	v->a[62264] = anon_sym_SEMI_SEMI_AMP;
	v->a[62265] = anon_sym_PIPE_AMP;
	v->a[62266] = anon_sym_AMP_GT;
	v->a[62267] = anon_sym_AMP_GT_GT;
	v->a[62268] = anon_sym_LT_AMP;
	v->a[62269] = anon_sym_GT_AMP;
	v->a[62270] = anon_sym_GT_PIPE;
	v->a[62271] = anon_sym_LT_AMP_DASH;
	v->a[62272] = anon_sym_GT_AMP_DASH;
	v->a[62273] = anon_sym_LT_LT_DASH;
	v->a[62274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62275] = anon_sym_DOLLAR_LBRACK;
	v->a[62276] = aux_sym_concatenation_token1;
	v->a[62277] = anon_sym_DOLLAR;
	v->a[62278] = sym__special_character;
	v->a[62279] = anon_sym_DQUOTE;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = sym_raw_string;
	v->a[62281] = sym_ansi_c_string;
	v->a[62282] = aux_sym_number_token1;
	v->a[62283] = aux_sym_number_token2;
	v->a[62284] = anon_sym_DOLLAR_LBRACE;
	v->a[62285] = anon_sym_DOLLAR_LPAREN;
	v->a[62286] = anon_sym_BQUOTE;
	v->a[62287] = anon_sym_DOLLAR_BQUOTE;
	v->a[62288] = anon_sym_LT_LPAREN;
	v->a[62289] = anon_sym_GT_LPAREN;
	v->a[62290] = aux_sym__simple_variable_name_token1;
	v->a[62291] = sym_word;
	v->a[62292] = 3;
	v->a[62293] = actions(3);
	v->a[62294] = 1;
	v->a[62295] = sym_comment;
	v->a[62296] = actions(1281);
	v->a[62297] = 5;
	v->a[62298] = sym_file_descriptor;
	v->a[62299] = sym_test_operator;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
