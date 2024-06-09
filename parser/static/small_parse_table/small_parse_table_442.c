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
	v->a[44200] = actions(1568);
	v->a[44201] = 2;
	v->a[44202] = anon_sym_LT;
	v->a[44203] = anon_sym_GT;
	v->a[44204] = actions(1570);
	v->a[44205] = 2;
	v->a[44206] = anon_sym_GT_GT;
	v->a[44207] = anon_sym_LT_LT;
	v->a[44208] = actions(1576);
	v->a[44209] = 2;
	v->a[44210] = anon_sym_EQ_EQ;
	v->a[44211] = anon_sym_BANG_EQ;
	v->a[44212] = actions(1578);
	v->a[44213] = 2;
	v->a[44214] = anon_sym_LT_EQ;
	v->a[44215] = anon_sym_GT_EQ;
	v->a[44216] = actions(1580);
	v->a[44217] = 2;
	v->a[44218] = anon_sym_PLUS;
	v->a[44219] = anon_sym_DASH;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = actions(1582);
	v->a[44221] = 3;
	v->a[44222] = anon_sym_STAR;
	v->a[44223] = anon_sym_SLASH;
	v->a[44224] = anon_sym_PERCENT;
	v->a[44225] = actions(1398);
	v->a[44226] = 4;
	v->a[44227] = anon_sym_PIPE;
	v->a[44228] = anon_sym_EQ;
	v->a[44229] = anon_sym_CARET;
	v->a[44230] = anon_sym_AMP;
	v->a[44231] = actions(1400);
	v->a[44232] = 14;
	v->a[44233] = anon_sym_RPAREN;
	v->a[44234] = anon_sym_AMP_AMP;
	v->a[44235] = anon_sym_PIPE_PIPE;
	v->a[44236] = anon_sym_PLUS_EQ;
	v->a[44237] = anon_sym_DASH_EQ;
	v->a[44238] = anon_sym_STAR_EQ;
	v->a[44239] = anon_sym_SLASH_EQ;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_PERCENT_EQ;
	v->a[44241] = anon_sym_LT_LT_EQ;
	v->a[44242] = anon_sym_GT_GT_EQ;
	v->a[44243] = anon_sym_AMP_EQ;
	v->a[44244] = anon_sym_CARET_EQ;
	v->a[44245] = anon_sym_PIPE_EQ;
	v->a[44246] = anon_sym_QMARK;
	v->a[44247] = 3;
	v->a[44248] = actions(3);
	v->a[44249] = 1;
	v->a[44250] = sym_comment;
	v->a[44251] = actions(1112);
	v->a[44252] = 2;
	v->a[44253] = sym_file_descriptor;
	v->a[44254] = sym__concat;
	v->a[44255] = actions(1114);
	v->a[44256] = 31;
	v->a[44257] = anon_sym_esac;
	v->a[44258] = anon_sym_PIPE;
	v->a[44259] = anon_sym_SEMI_SEMI;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = anon_sym_AMP_AMP;
	v->a[44261] = anon_sym_PIPE_PIPE;
	v->a[44262] = anon_sym_LT;
	v->a[44263] = anon_sym_GT;
	v->a[44264] = anon_sym_GT_GT;
	v->a[44265] = anon_sym_AMP_GT;
	v->a[44266] = anon_sym_AMP_GT_GT;
	v->a[44267] = anon_sym_LT_AMP;
	v->a[44268] = anon_sym_GT_AMP;
	v->a[44269] = anon_sym_GT_PIPE;
	v->a[44270] = anon_sym_LT_AMP_DASH;
	v->a[44271] = anon_sym_GT_AMP_DASH;
	v->a[44272] = anon_sym_LT_LT;
	v->a[44273] = anon_sym_LT_LT_DASH;
	v->a[44274] = aux_sym_heredoc_redirect_token1;
	v->a[44275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44276] = anon_sym_AMP;
	v->a[44277] = aux_sym_concatenation_token1;
	v->a[44278] = anon_sym_DOLLAR;
	v->a[44279] = anon_sym_DQUOTE;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = sym_raw_string;
	v->a[44281] = aux_sym_number_token1;
	v->a[44282] = aux_sym_number_token2;
	v->a[44283] = anon_sym_DOLLAR_LBRACE;
	v->a[44284] = anon_sym_DOLLAR_LPAREN;
	v->a[44285] = anon_sym_BQUOTE;
	v->a[44286] = sym_word;
	v->a[44287] = anon_sym_SEMI;
	v->a[44288] = 3;
	v->a[44289] = actions(1404);
	v->a[44290] = 1;
	v->a[44291] = sym_comment;
	v->a[44292] = actions(1253);
	v->a[44293] = 13;
	v->a[44294] = anon_sym_PIPE;
	v->a[44295] = anon_sym_EQ;
	v->a[44296] = anon_sym_LT;
	v->a[44297] = anon_sym_GT;
	v->a[44298] = anon_sym_GT_GT;
	v->a[44299] = anon_sym_LT_LT;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
