/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_542.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2710(t_small_parse_table_array *v)
{
	v->a[54200] = actions(3);
	v->a[54201] = 1;
	v->a[54202] = sym_comment;
	v->a[54203] = actions(3613);
	v->a[54204] = 1;
	v->a[54205] = aux_sym_concatenation_token1;
	v->a[54206] = actions(3794);
	v->a[54207] = 1;
	v->a[54208] = sym__concat;
	v->a[54209] = state(1147);
	v->a[54210] = 1;
	v->a[54211] = aux_sym_concatenation_repeat1;
	v->a[54212] = actions(2696);
	v->a[54213] = 4;
	v->a[54214] = sym_file_descriptor;
	v->a[54215] = sym_test_operator;
	v->a[54216] = sym__brace_start;
	v->a[54217] = aux_sym_heredoc_redirect_token1;
	v->a[54218] = actions(2694);
	v->a[54219] = 31;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = anon_sym_PIPE;
	v->a[54221] = anon_sym_SEMI_SEMI;
	v->a[54222] = anon_sym_PIPE_AMP;
	v->a[54223] = anon_sym_AMP_AMP;
	v->a[54224] = anon_sym_PIPE_PIPE;
	v->a[54225] = anon_sym_LT;
	v->a[54226] = anon_sym_GT;
	v->a[54227] = anon_sym_GT_GT;
	v->a[54228] = anon_sym_AMP_GT;
	v->a[54229] = anon_sym_AMP_GT_GT;
	v->a[54230] = anon_sym_LT_AMP;
	v->a[54231] = anon_sym_GT_AMP;
	v->a[54232] = anon_sym_GT_PIPE;
	v->a[54233] = anon_sym_LT_AMP_DASH;
	v->a[54234] = anon_sym_GT_AMP_DASH;
	v->a[54235] = anon_sym_LT_LT;
	v->a[54236] = anon_sym_LT_LT_DASH;
	v->a[54237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54238] = anon_sym_AMP;
	v->a[54239] = anon_sym_DOLLAR;
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = sym__special_character;
	v->a[54241] = anon_sym_DQUOTE;
	v->a[54242] = sym_raw_string;
	v->a[54243] = aux_sym_number_token1;
	v->a[54244] = aux_sym_number_token2;
	v->a[54245] = anon_sym_DOLLAR_LBRACE;
	v->a[54246] = anon_sym_DOLLAR_LPAREN;
	v->a[54247] = anon_sym_BQUOTE;
	v->a[54248] = anon_sym_DOLLAR_BQUOTE;
	v->a[54249] = sym_word;
	v->a[54250] = anon_sym_SEMI;
	v->a[54251] = 3;
	v->a[54252] = actions(3);
	v->a[54253] = 1;
	v->a[54254] = sym_comment;
	v->a[54255] = actions(3159);
	v->a[54256] = 5;
	v->a[54257] = sym_file_descriptor;
	v->a[54258] = sym__concat;
	v->a[54259] = sym_test_operator;
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = sym__brace_start;
	v->a[54261] = aux_sym_heredoc_redirect_token1;
	v->a[54262] = actions(3157);
	v->a[54263] = 33;
	v->a[54264] = anon_sym_PIPE;
	v->a[54265] = anon_sym_RPAREN;
	v->a[54266] = anon_sym_SEMI_SEMI;
	v->a[54267] = anon_sym_PIPE_AMP;
	v->a[54268] = anon_sym_AMP_AMP;
	v->a[54269] = anon_sym_PIPE_PIPE;
	v->a[54270] = anon_sym_LT;
	v->a[54271] = anon_sym_GT;
	v->a[54272] = anon_sym_GT_GT;
	v->a[54273] = anon_sym_AMP_GT;
	v->a[54274] = anon_sym_AMP_GT_GT;
	v->a[54275] = anon_sym_LT_AMP;
	v->a[54276] = anon_sym_GT_AMP;
	v->a[54277] = anon_sym_GT_PIPE;
	v->a[54278] = anon_sym_LT_AMP_DASH;
	v->a[54279] = anon_sym_GT_AMP_DASH;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = anon_sym_LT_LT;
	v->a[54281] = anon_sym_LT_LT_DASH;
	v->a[54282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54283] = anon_sym_AMP;
	v->a[54284] = aux_sym_concatenation_token1;
	v->a[54285] = anon_sym_DOLLAR;
	v->a[54286] = sym__special_character;
	v->a[54287] = anon_sym_DQUOTE;
	v->a[54288] = sym_raw_string;
	v->a[54289] = aux_sym_number_token1;
	v->a[54290] = aux_sym_number_token2;
	v->a[54291] = anon_sym_DOLLAR_LBRACE;
	v->a[54292] = anon_sym_DOLLAR_LPAREN;
	v->a[54293] = anon_sym_BQUOTE;
	v->a[54294] = anon_sym_DOLLAR_BQUOTE;
	v->a[54295] = sym_word;
	v->a[54296] = anon_sym_SEMI;
	v->a[54297] = 3;
	v->a[54298] = actions(3);
	v->a[54299] = 1;
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
