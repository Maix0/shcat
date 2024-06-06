/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_442.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2210(t_small_parse_table_array *v)
{
	v->a[44200] = sym_raw_string;
	v->a[44201] = aux_sym_number_token1;
	v->a[44202] = aux_sym_number_token2;
	v->a[44203] = anon_sym_DOLLAR_LBRACE;
	v->a[44204] = anon_sym_DOLLAR_LPAREN;
	v->a[44205] = anon_sym_BQUOTE;
	v->a[44206] = anon_sym_DOLLAR_BQUOTE;
	v->a[44207] = aux_sym__simple_variable_name_token1;
	v->a[44208] = sym_word;
	v->a[44209] = anon_sym_SEMI;
	v->a[44210] = 6;
	v->a[44211] = actions(3);
	v->a[44212] = 1;
	v->a[44213] = sym_comment;
	v->a[44214] = actions(3613);
	v->a[44215] = 1;
	v->a[44216] = aux_sym_concatenation_token1;
	v->a[44217] = actions(3619);
	v->a[44218] = 1;
	v->a[44219] = sym__concat;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = state(1147);
	v->a[44221] = 1;
	v->a[44222] = aux_sym_concatenation_repeat1;
	v->a[44223] = actions(2690);
	v->a[44224] = 4;
	v->a[44225] = sym_file_descriptor;
	v->a[44226] = sym_test_operator;
	v->a[44227] = sym__brace_start;
	v->a[44228] = aux_sym_heredoc_redirect_token1;
	v->a[44229] = actions(2688);
	v->a[44230] = 32;
	v->a[44231] = anon_sym_PIPE;
	v->a[44232] = anon_sym_RPAREN;
	v->a[44233] = anon_sym_SEMI_SEMI;
	v->a[44234] = anon_sym_PIPE_AMP;
	v->a[44235] = anon_sym_AMP_AMP;
	v->a[44236] = anon_sym_PIPE_PIPE;
	v->a[44237] = anon_sym_LT;
	v->a[44238] = anon_sym_GT;
	v->a[44239] = anon_sym_GT_GT;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_AMP_GT;
	v->a[44241] = anon_sym_AMP_GT_GT;
	v->a[44242] = anon_sym_LT_AMP;
	v->a[44243] = anon_sym_GT_AMP;
	v->a[44244] = anon_sym_GT_PIPE;
	v->a[44245] = anon_sym_LT_AMP_DASH;
	v->a[44246] = anon_sym_GT_AMP_DASH;
	v->a[44247] = anon_sym_LT_LT;
	v->a[44248] = anon_sym_LT_LT_DASH;
	v->a[44249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44250] = anon_sym_AMP;
	v->a[44251] = anon_sym_DOLLAR;
	v->a[44252] = sym__special_character;
	v->a[44253] = anon_sym_DQUOTE;
	v->a[44254] = sym_raw_string;
	v->a[44255] = aux_sym_number_token1;
	v->a[44256] = aux_sym_number_token2;
	v->a[44257] = anon_sym_DOLLAR_LBRACE;
	v->a[44258] = anon_sym_DOLLAR_LPAREN;
	v->a[44259] = anon_sym_BQUOTE;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = anon_sym_DOLLAR_BQUOTE;
	v->a[44261] = sym_word;
	v->a[44262] = anon_sym_SEMI;
	v->a[44263] = 3;
	v->a[44264] = actions(3);
	v->a[44265] = 1;
	v->a[44266] = sym_comment;
	v->a[44267] = actions(2828);
	v->a[44268] = 6;
	v->a[44269] = sym_file_descriptor;
	v->a[44270] = sym__concat;
	v->a[44271] = sym_test_operator;
	v->a[44272] = sym__bare_dollar;
	v->a[44273] = sym__brace_start;
	v->a[44274] = aux_sym_heredoc_redirect_token1;
	v->a[44275] = actions(2826);
	v->a[44276] = 33;
	v->a[44277] = anon_sym_PIPE;
	v->a[44278] = anon_sym_RPAREN;
	v->a[44279] = anon_sym_SEMI_SEMI;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = anon_sym_PIPE_AMP;
	v->a[44281] = anon_sym_AMP_AMP;
	v->a[44282] = anon_sym_PIPE_PIPE;
	v->a[44283] = anon_sym_LT;
	v->a[44284] = anon_sym_GT;
	v->a[44285] = anon_sym_GT_GT;
	v->a[44286] = anon_sym_AMP_GT;
	v->a[44287] = anon_sym_AMP_GT_GT;
	v->a[44288] = anon_sym_LT_AMP;
	v->a[44289] = anon_sym_GT_AMP;
	v->a[44290] = anon_sym_GT_PIPE;
	v->a[44291] = anon_sym_LT_AMP_DASH;
	v->a[44292] = anon_sym_GT_AMP_DASH;
	v->a[44293] = anon_sym_LT_LT;
	v->a[44294] = anon_sym_LT_LT_DASH;
	v->a[44295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44296] = anon_sym_AMP;
	v->a[44297] = aux_sym_concatenation_token1;
	v->a[44298] = anon_sym_DOLLAR;
	v->a[44299] = sym__special_character;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
