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
	v->a[44200] = actions(1428);
	v->a[44201] = 9;
	v->a[44202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44203] = anon_sym_DOLLAR;
	v->a[44204] = anon_sym_DQUOTE;
	v->a[44205] = sym_raw_string;
	v->a[44206] = sym_number;
	v->a[44207] = anon_sym_DOLLAR_LBRACE;
	v->a[44208] = anon_sym_DOLLAR_LPAREN;
	v->a[44209] = anon_sym_BQUOTE;
	v->a[44210] = sym_word;
	v->a[44211] = actions(1430);
	v->a[44212] = 9;
	v->a[44213] = anon_sym_PIPE;
	v->a[44214] = anon_sym_SEMI_SEMI;
	v->a[44215] = anon_sym_AMP_AMP;
	v->a[44216] = anon_sym_PIPE_PIPE;
	v->a[44217] = anon_sym_LT_LT;
	v->a[44218] = anon_sym_LT_LT_DASH;
	v->a[44219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = anon_sym_AMP;
	v->a[44221] = anon_sym_SEMI;
	v->a[44222] = 12;
	v->a[44223] = actions(3);
	v->a[44224] = 1;
	v->a[44225] = sym_comment;
	v->a[44226] = actions(515);
	v->a[44227] = 1;
	v->a[44228] = sym_file_descriptor;
	v->a[44229] = actions(1562);
	v->a[44230] = 1;
	v->a[44231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44232] = actions(1564);
	v->a[44233] = 1;
	v->a[44234] = anon_sym_DOLLAR;
	v->a[44235] = actions(1566);
	v->a[44236] = 1;
	v->a[44237] = anon_sym_DQUOTE;
	v->a[44238] = actions(1568);
	v->a[44239] = 1;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_DOLLAR_LBRACE;
	v->a[44241] = actions(1570);
	v->a[44242] = 1;
	v->a[44243] = anon_sym_DOLLAR_LPAREN;
	v->a[44244] = actions(1572);
	v->a[44245] = 1;
	v->a[44246] = anon_sym_BQUOTE;
	v->a[44247] = state(774);
	v->a[44248] = 2;
	v->a[44249] = sym_concatenation;
	v->a[44250] = aux_sym_for_statement_repeat1;
	v->a[44251] = actions(1560);
	v->a[44252] = 3;
	v->a[44253] = sym_raw_string;
	v->a[44254] = sym_number;
	v->a[44255] = sym_word;
	v->a[44256] = state(917);
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
	v->a[44263] = actions(513);
	v->a[44264] = 10;
	v->a[44265] = anon_sym_AMP_AMP;
	v->a[44266] = anon_sym_PIPE_PIPE;
	v->a[44267] = anon_sym_LT;
	v->a[44268] = anon_sym_GT;
	v->a[44269] = anon_sym_GT_GT;
	v->a[44270] = anon_sym_LT_AMP;
	v->a[44271] = anon_sym_GT_AMP;
	v->a[44272] = anon_sym_GT_PIPE;
	v->a[44273] = anon_sym_LT_GT;
	v->a[44274] = aux_sym_heredoc_redirect_token1;
	v->a[44275] = 16;
	v->a[44276] = actions(680);
	v->a[44277] = 1;
	v->a[44278] = sym_comment;
	v->a[44279] = actions(1574);
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = 1;
	v->a[44281] = anon_sym_LPAREN;
	v->a[44282] = actions(1576);
	v->a[44283] = 1;
	v->a[44284] = anon_sym_BANG;
	v->a[44285] = actions(1578);
	v->a[44286] = 1;
	v->a[44287] = anon_sym_RPAREN_RPAREN;
	v->a[44288] = actions(1584);
	v->a[44289] = 1;
	v->a[44290] = anon_sym_TILDE;
	v->a[44291] = actions(1586);
	v->a[44292] = 1;
	v->a[44293] = anon_sym_DOLLAR;
	v->a[44294] = actions(1588);
	v->a[44295] = 1;
	v->a[44296] = anon_sym_DQUOTE;
	v->a[44297] = actions(1592);
	v->a[44298] = 1;
	v->a[44299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
