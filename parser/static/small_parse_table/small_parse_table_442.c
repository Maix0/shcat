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
	v->a[44200] = anon_sym_DOLLAR_LBRACE;
	v->a[44201] = anon_sym_DOLLAR_LPAREN;
	v->a[44202] = anon_sym_BQUOTE;
	v->a[44203] = sym_word;
	v->a[44204] = 5;
	v->a[44205] = actions(3);
	v->a[44206] = 1;
	v->a[44207] = sym_comment;
	v->a[44208] = state(1111);
	v->a[44209] = 1;
	v->a[44210] = sym_concatenation;
	v->a[44211] = actions(717);
	v->a[44212] = 2;
	v->a[44213] = sym_file_descriptor;
	v->a[44214] = sym_variable_name;
	v->a[44215] = state(983);
	v->a[44216] = 5;
	v->a[44217] = sym_arithmetic_expansion;
	v->a[44218] = sym_string;
	v->a[44219] = sym_simple_expansion;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = sym_expansion;
	v->a[44221] = sym_command_substitution;
	v->a[44222] = actions(719);
	v->a[44223] = 24;
	v->a[44224] = anon_sym_PIPE;
	v->a[44225] = anon_sym_AMP_AMP;
	v->a[44226] = anon_sym_PIPE_PIPE;
	v->a[44227] = anon_sym_LT;
	v->a[44228] = anon_sym_GT;
	v->a[44229] = anon_sym_GT_GT;
	v->a[44230] = anon_sym_AMP_GT;
	v->a[44231] = anon_sym_AMP_GT_GT;
	v->a[44232] = anon_sym_LT_AMP;
	v->a[44233] = anon_sym_GT_AMP;
	v->a[44234] = anon_sym_GT_PIPE;
	v->a[44235] = anon_sym_LT_AMP_DASH;
	v->a[44236] = anon_sym_GT_AMP_DASH;
	v->a[44237] = anon_sym_LT_LT;
	v->a[44238] = anon_sym_LT_LT_DASH;
	v->a[44239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_DOLLAR;
	v->a[44241] = anon_sym_DQUOTE;
	v->a[44242] = sym_raw_string;
	v->a[44243] = sym_number;
	v->a[44244] = anon_sym_DOLLAR_LBRACE;
	v->a[44245] = anon_sym_DOLLAR_LPAREN;
	v->a[44246] = anon_sym_BQUOTE;
	v->a[44247] = sym_word;
	v->a[44248] = 12;
	v->a[44249] = actions(3);
	v->a[44250] = 1;
	v->a[44251] = sym_comment;
	v->a[44252] = actions(543);
	v->a[44253] = 1;
	v->a[44254] = sym_file_descriptor;
	v->a[44255] = actions(1513);
	v->a[44256] = 1;
	v->a[44257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44258] = actions(1515);
	v->a[44259] = 1;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = anon_sym_DOLLAR;
	v->a[44261] = actions(1517);
	v->a[44262] = 1;
	v->a[44263] = anon_sym_DQUOTE;
	v->a[44264] = actions(1519);
	v->a[44265] = 1;
	v->a[44266] = anon_sym_DOLLAR_LBRACE;
	v->a[44267] = actions(1521);
	v->a[44268] = 1;
	v->a[44269] = anon_sym_DOLLAR_LPAREN;
	v->a[44270] = actions(1523);
	v->a[44271] = 1;
	v->a[44272] = anon_sym_BQUOTE;
	v->a[44273] = state(641);
	v->a[44274] = 2;
	v->a[44275] = sym_concatenation;
	v->a[44276] = aux_sym_for_statement_repeat1;
	v->a[44277] = actions(1511);
	v->a[44278] = 3;
	v->a[44279] = sym_raw_string;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = sym_number;
	v->a[44281] = sym_word;
	v->a[44282] = state(1028);
	v->a[44283] = 5;
	v->a[44284] = sym_arithmetic_expansion;
	v->a[44285] = sym_string;
	v->a[44286] = sym_simple_expansion;
	v->a[44287] = sym_expansion;
	v->a[44288] = sym_command_substitution;
	v->a[44289] = actions(541);
	v->a[44290] = 15;
	v->a[44291] = anon_sym_PIPE;
	v->a[44292] = anon_sym_AMP_AMP;
	v->a[44293] = anon_sym_PIPE_PIPE;
	v->a[44294] = anon_sym_LT;
	v->a[44295] = anon_sym_GT;
	v->a[44296] = anon_sym_GT_GT;
	v->a[44297] = anon_sym_AMP_GT;
	v->a[44298] = anon_sym_AMP_GT_GT;
	v->a[44299] = anon_sym_LT_AMP;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
