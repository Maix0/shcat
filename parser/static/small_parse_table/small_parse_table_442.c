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
	v->a[44200] = actions(3);
	v->a[44201] = 1;
	v->a[44202] = sym_comment;
	v->a[44203] = actions(385);
	v->a[44204] = 1;
	v->a[44205] = sym_file_descriptor;
	v->a[44206] = actions(1262);
	v->a[44207] = 1;
	v->a[44208] = sym_variable_name;
	v->a[44209] = actions(1260);
	v->a[44210] = 2;
	v->a[44211] = aux_sym__simple_variable_name_token1;
	v->a[44212] = aux_sym__multiline_variable_name_token1;
	v->a[44213] = actions(1258);
	v->a[44214] = 9;
	v->a[44215] = anon_sym_BANG;
	v->a[44216] = anon_sym_DASH;
	v->a[44217] = anon_sym_STAR;
	v->a[44218] = anon_sym_QMARK;
	v->a[44219] = anon_sym_DOLLAR;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = anon_sym_POUND;
	v->a[44221] = anon_sym_AT;
	v->a[44222] = anon_sym_0;
	v->a[44223] = anon_sym__;
	v->a[44224] = actions(379);
	v->a[44225] = 19;
	v->a[44226] = anon_sym_PIPE;
	v->a[44227] = anon_sym_SEMI_SEMI;
	v->a[44228] = anon_sym_AMP_AMP;
	v->a[44229] = anon_sym_PIPE_PIPE;
	v->a[44230] = anon_sym_LT;
	v->a[44231] = anon_sym_GT;
	v->a[44232] = anon_sym_GT_GT;
	v->a[44233] = anon_sym_AMP_GT;
	v->a[44234] = anon_sym_AMP_GT_GT;
	v->a[44235] = anon_sym_LT_AMP;
	v->a[44236] = anon_sym_GT_AMP;
	v->a[44237] = anon_sym_GT_PIPE;
	v->a[44238] = anon_sym_LT_AMP_DASH;
	v->a[44239] = anon_sym_GT_AMP_DASH;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_LT_LT;
	v->a[44241] = anon_sym_LT_LT_DASH;
	v->a[44242] = aux_sym_heredoc_redirect_token1;
	v->a[44243] = anon_sym_AMP;
	v->a[44244] = anon_sym_SEMI;
	v->a[44245] = 5;
	v->a[44246] = actions(3);
	v->a[44247] = 1;
	v->a[44248] = sym_comment;
	v->a[44249] = state(987);
	v->a[44250] = 1;
	v->a[44251] = sym_concatenation;
	v->a[44252] = actions(760);
	v->a[44253] = 2;
	v->a[44254] = sym_file_descriptor;
	v->a[44255] = sym_variable_name;
	v->a[44256] = state(845);
	v->a[44257] = 5;
	v->a[44258] = sym_arithmetic_expansion;
	v->a[44259] = sym_string;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = sym_simple_expansion;
	v->a[44261] = sym_expansion;
	v->a[44262] = sym_command_substitution;
	v->a[44263] = actions(758);
	v->a[44264] = 24;
	v->a[44265] = anon_sym_PIPE;
	v->a[44266] = anon_sym_AMP_AMP;
	v->a[44267] = anon_sym_PIPE_PIPE;
	v->a[44268] = anon_sym_LT;
	v->a[44269] = anon_sym_GT;
	v->a[44270] = anon_sym_GT_GT;
	v->a[44271] = anon_sym_AMP_GT;
	v->a[44272] = anon_sym_AMP_GT_GT;
	v->a[44273] = anon_sym_LT_AMP;
	v->a[44274] = anon_sym_GT_AMP;
	v->a[44275] = anon_sym_GT_PIPE;
	v->a[44276] = anon_sym_LT_AMP_DASH;
	v->a[44277] = anon_sym_GT_AMP_DASH;
	v->a[44278] = anon_sym_LT_LT;
	v->a[44279] = anon_sym_LT_LT_DASH;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44281] = anon_sym_DOLLAR;
	v->a[44282] = anon_sym_DQUOTE;
	v->a[44283] = sym_raw_string;
	v->a[44284] = sym_number;
	v->a[44285] = anon_sym_DOLLAR_LBRACE;
	v->a[44286] = anon_sym_DOLLAR_LPAREN;
	v->a[44287] = anon_sym_BQUOTE;
	v->a[44288] = sym_word;
	v->a[44289] = 5;
	v->a[44290] = actions(3);
	v->a[44291] = 1;
	v->a[44292] = sym_comment;
	v->a[44293] = state(988);
	v->a[44294] = 1;
	v->a[44295] = sym_concatenation;
	v->a[44296] = actions(754);
	v->a[44297] = 2;
	v->a[44298] = sym_file_descriptor;
	v->a[44299] = sym_variable_name;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
