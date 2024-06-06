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
	v->a[62200] = 6;
	v->a[62201] = actions(3);
	v->a[62202] = 1;
	v->a[62203] = sym_comment;
	v->a[62204] = actions(3423);
	v->a[62205] = 1;
	v->a[62206] = aux_sym_concatenation_token1;
	v->a[62207] = actions(4047);
	v->a[62208] = 1;
	v->a[62209] = sym__concat;
	v->a[62210] = state(827);
	v->a[62211] = 1;
	v->a[62212] = aux_sym_concatenation_repeat1;
	v->a[62213] = actions(2696);
	v->a[62214] = 5;
	v->a[62215] = sym_file_descriptor;
	v->a[62216] = sym_variable_name;
	v->a[62217] = sym_test_operator;
	v->a[62218] = sym__brace_start;
	v->a[62219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = actions(2694);
	v->a[62221] = 28;
	v->a[62222] = anon_sym_PIPE;
	v->a[62223] = anon_sym_PIPE_AMP;
	v->a[62224] = anon_sym_AMP_AMP;
	v->a[62225] = anon_sym_PIPE_PIPE;
	v->a[62226] = anon_sym_LT;
	v->a[62227] = anon_sym_GT;
	v->a[62228] = anon_sym_GT_GT;
	v->a[62229] = anon_sym_AMP_GT;
	v->a[62230] = anon_sym_AMP_GT_GT;
	v->a[62231] = anon_sym_LT_AMP;
	v->a[62232] = anon_sym_GT_AMP;
	v->a[62233] = anon_sym_GT_PIPE;
	v->a[62234] = anon_sym_LT_AMP_DASH;
	v->a[62235] = anon_sym_GT_AMP_DASH;
	v->a[62236] = anon_sym_LT_LT;
	v->a[62237] = anon_sym_LT_LT_DASH;
	v->a[62238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62239] = anon_sym_DOLLAR;
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = sym__special_character;
	v->a[62241] = anon_sym_DQUOTE;
	v->a[62242] = sym_raw_string;
	v->a[62243] = aux_sym_number_token1;
	v->a[62244] = aux_sym_number_token2;
	v->a[62245] = anon_sym_DOLLAR_LBRACE;
	v->a[62246] = anon_sym_DOLLAR_LPAREN;
	v->a[62247] = anon_sym_BQUOTE;
	v->a[62248] = anon_sym_DOLLAR_BQUOTE;
	v->a[62249] = sym_word;
	v->a[62250] = 5;
	v->a[62251] = actions(57);
	v->a[62252] = 1;
	v->a[62253] = sym_comment;
	v->a[62254] = state(1340);
	v->a[62255] = 1;
	v->a[62256] = aux_sym_concatenation_repeat1;
	v->a[62257] = actions(4049);
	v->a[62258] = 2;
	v->a[62259] = sym__concat;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = aux_sym_concatenation_token1;
	v->a[62261] = actions(2652);
	v->a[62262] = 14;
	v->a[62263] = anon_sym_PIPE;
	v->a[62264] = anon_sym_LT;
	v->a[62265] = anon_sym_GT;
	v->a[62266] = anon_sym_AMP_GT;
	v->a[62267] = anon_sym_LT_AMP;
	v->a[62268] = anon_sym_GT_AMP;
	v->a[62269] = anon_sym_LT_LT;
	v->a[62270] = anon_sym_DOLLAR;
	v->a[62271] = aux_sym_number_token1;
	v->a[62272] = aux_sym_number_token2;
	v->a[62273] = anon_sym_DOLLAR_LPAREN;
	v->a[62274] = anon_sym_BQUOTE;
	v->a[62275] = aux_sym__simple_variable_name_token1;
	v->a[62276] = sym_word;
	v->a[62277] = actions(2654);
	v->a[62278] = 19;
	v->a[62279] = sym_file_descriptor;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = sym_variable_name;
	v->a[62281] = sym_test_operator;
	v->a[62282] = sym__brace_start;
	v->a[62283] = anon_sym_PIPE_AMP;
	v->a[62284] = anon_sym_AMP_AMP;
	v->a[62285] = anon_sym_PIPE_PIPE;
	v->a[62286] = anon_sym_GT_GT;
	v->a[62287] = anon_sym_AMP_GT_GT;
	v->a[62288] = anon_sym_GT_PIPE;
	v->a[62289] = anon_sym_LT_AMP_DASH;
	v->a[62290] = anon_sym_GT_AMP_DASH;
	v->a[62291] = anon_sym_LT_LT_DASH;
	v->a[62292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62293] = sym__special_character;
	v->a[62294] = anon_sym_DQUOTE;
	v->a[62295] = sym_raw_string;
	v->a[62296] = anon_sym_DOLLAR_LBRACE;
	v->a[62297] = anon_sym_DOLLAR_BQUOTE;
	v->a[62298] = 5;
	v->a[62299] = actions(57);
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
