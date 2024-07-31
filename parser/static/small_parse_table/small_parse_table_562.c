/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_562.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2810(t_small_parse_table_array *v)
{
	v->a[56200] = anon_sym_GT_AMP;
	v->a[56201] = anon_sym_GT_PIPE;
	v->a[56202] = anon_sym_LT_GT;
	v->a[56203] = 10;
	v->a[56204] = actions(3);
	v->a[56205] = 1;
	v->a[56206] = sym_comment;
	v->a[56207] = actions(2157);
	v->a[56208] = 1;
	v->a[56209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56210] = actions(2161);
	v->a[56211] = 1;
	v->a[56212] = anon_sym_DQUOTE;
	v->a[56213] = actions(2163);
	v->a[56214] = 1;
	v->a[56215] = anon_sym_DOLLAR_LBRACE;
	v->a[56216] = actions(2165);
	v->a[56217] = 1;
	v->a[56218] = anon_sym_DOLLAR_LPAREN;
	v->a[56219] = actions(2167);
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = 1;
	v->a[56221] = anon_sym_BQUOTE;
	v->a[56222] = actions(2169);
	v->a[56223] = 1;
	v->a[56224] = sym__bare_dollar;
	v->a[56225] = actions(2274);
	v->a[56226] = 1;
	v->a[56227] = anon_sym_DOLLAR;
	v->a[56228] = actions(2155);
	v->a[56229] = 5;
	v->a[56230] = aux_sym_concatenation_token1;
	v->a[56231] = sym_raw_string;
	v->a[56232] = sym_number;
	v->a[56233] = sym__comment_word;
	v->a[56234] = sym_word;
	v->a[56235] = state(1494);
	v->a[56236] = 5;
	v->a[56237] = sym_arithmetic_expansion;
	v->a[56238] = sym_string;
	v->a[56239] = sym_simple_expansion;
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = sym_expansion;
	v->a[56241] = sym_command_substitution;
	v->a[56242] = 12;
	v->a[56243] = actions(3);
	v->a[56244] = 1;
	v->a[56245] = sym_comment;
	v->a[56246] = actions(1922);
	v->a[56247] = 1;
	v->a[56248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56249] = actions(1926);
	v->a[56250] = 1;
	v->a[56251] = anon_sym_DQUOTE;
	v->a[56252] = actions(1928);
	v->a[56253] = 1;
	v->a[56254] = anon_sym_DOLLAR_LBRACE;
	v->a[56255] = actions(1930);
	v->a[56256] = 1;
	v->a[56257] = anon_sym_DOLLAR_LPAREN;
	v->a[56258] = actions(1932);
	v->a[56259] = 1;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = anon_sym_BQUOTE;
	v->a[56261] = actions(2087);
	v->a[56262] = 1;
	v->a[56263] = anon_sym_DOLLAR;
	v->a[56264] = actions(2089);
	v->a[56265] = 1;
	v->a[56266] = sym__comment_word;
	v->a[56267] = actions(2091);
	v->a[56268] = 1;
	v->a[56269] = sym__empty_value;
	v->a[56270] = state(890);
	v->a[56271] = 1;
	v->a[56272] = sym_concatenation;
	v->a[56273] = actions(2276);
	v->a[56274] = 3;
	v->a[56275] = sym_raw_string;
	v->a[56276] = sym_number;
	v->a[56277] = sym_word;
	v->a[56278] = state(877);
	v->a[56279] = 5;
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = sym_arithmetic_expansion;
	v->a[56281] = sym_string;
	v->a[56282] = sym_simple_expansion;
	v->a[56283] = sym_expansion;
	v->a[56284] = sym_command_substitution;
	v->a[56285] = 10;
	v->a[56286] = actions(3);
	v->a[56287] = 1;
	v->a[56288] = sym_comment;
	v->a[56289] = actions(1151);
	v->a[56290] = 1;
	v->a[56291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56292] = actions(1153);
	v->a[56293] = 1;
	v->a[56294] = anon_sym_DOLLAR;
	v->a[56295] = actions(1155);
	v->a[56296] = 1;
	v->a[56297] = anon_sym_DQUOTE;
	v->a[56298] = actions(1157);
	v->a[56299] = 1;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
