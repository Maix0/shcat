/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_812.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4060(t_small_parse_table_array *v)
{
	v->a[81200] = actions(2809);
	v->a[81201] = 1;
	v->a[81202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81203] = actions(2813);
	v->a[81204] = 1;
	v->a[81205] = anon_sym_DQUOTE;
	v->a[81206] = actions(2815);
	v->a[81207] = 1;
	v->a[81208] = anon_sym_DOLLAR_LBRACE;
	v->a[81209] = actions(2817);
	v->a[81210] = 1;
	v->a[81211] = anon_sym_DOLLAR_LPAREN;
	v->a[81212] = actions(2819);
	v->a[81213] = 1;
	v->a[81214] = anon_sym_BQUOTE;
	v->a[81215] = actions(2821);
	v->a[81216] = 1;
	v->a[81217] = sym__bare_dollar;
	v->a[81218] = actions(3046);
	v->a[81219] = 1;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = anon_sym_DOLLAR;
	v->a[81221] = actions(2807);
	v->a[81222] = 5;
	v->a[81223] = aux_sym_concatenation_token1;
	v->a[81224] = sym_raw_string;
	v->a[81225] = sym_number;
	v->a[81226] = sym__comment_word;
	v->a[81227] = sym_word;
	v->a[81228] = state(992);
	v->a[81229] = 5;
	v->a[81230] = sym_arithmetic_expansion;
	v->a[81231] = sym_string;
	v->a[81232] = sym_simple_expansion;
	v->a[81233] = sym_expansion;
	v->a[81234] = sym_command_substitution;
	v->a[81235] = 10;
	v->a[81236] = actions(3);
	v->a[81237] = 1;
	v->a[81238] = sym_comment;
	v->a[81239] = actions(2881);
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = 1;
	v->a[81241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81242] = actions(2883);
	v->a[81243] = 1;
	v->a[81244] = anon_sym_DOLLAR;
	v->a[81245] = actions(2885);
	v->a[81246] = 1;
	v->a[81247] = anon_sym_DQUOTE;
	v->a[81248] = actions(2887);
	v->a[81249] = 1;
	v->a[81250] = anon_sym_DOLLAR_LBRACE;
	v->a[81251] = actions(2889);
	v->a[81252] = 1;
	v->a[81253] = anon_sym_DOLLAR_LPAREN;
	v->a[81254] = actions(2891);
	v->a[81255] = 1;
	v->a[81256] = anon_sym_BQUOTE;
	v->a[81257] = actions(3032);
	v->a[81258] = 1;
	v->a[81259] = sym__bare_dollar;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = actions(3028);
	v->a[81261] = 5;
	v->a[81262] = aux_sym_concatenation_token1;
	v->a[81263] = sym_raw_string;
	v->a[81264] = sym_number;
	v->a[81265] = sym__comment_word;
	v->a[81266] = sym_word;
	v->a[81267] = state(872);
	v->a[81268] = 5;
	v->a[81269] = sym_arithmetic_expansion;
	v->a[81270] = sym_string;
	v->a[81271] = sym_simple_expansion;
	v->a[81272] = sym_expansion;
	v->a[81273] = sym_command_substitution;
	v->a[81274] = 10;
	v->a[81275] = actions(3);
	v->a[81276] = 1;
	v->a[81277] = sym_comment;
	v->a[81278] = actions(2809);
	v->a[81279] = 1;
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81281] = actions(2813);
	v->a[81282] = 1;
	v->a[81283] = anon_sym_DQUOTE;
	v->a[81284] = actions(2815);
	v->a[81285] = 1;
	v->a[81286] = anon_sym_DOLLAR_LBRACE;
	v->a[81287] = actions(2817);
	v->a[81288] = 1;
	v->a[81289] = anon_sym_DOLLAR_LPAREN;
	v->a[81290] = actions(2819);
	v->a[81291] = 1;
	v->a[81292] = anon_sym_BQUOTE;
	v->a[81293] = actions(2821);
	v->a[81294] = 1;
	v->a[81295] = sym__bare_dollar;
	v->a[81296] = actions(3048);
	v->a[81297] = 1;
	v->a[81298] = anon_sym_DOLLAR;
	v->a[81299] = actions(2807);
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
