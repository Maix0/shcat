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
	v->a[81200] = 1;
	v->a[81201] = sym_comment;
	v->a[81202] = actions(779);
	v->a[81203] = 1;
	v->a[81204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81205] = actions(783);
	v->a[81206] = 1;
	v->a[81207] = anon_sym_DQUOTE;
	v->a[81208] = actions(785);
	v->a[81209] = 1;
	v->a[81210] = aux_sym_number_token1;
	v->a[81211] = actions(787);
	v->a[81212] = 1;
	v->a[81213] = aux_sym_number_token2;
	v->a[81214] = actions(789);
	v->a[81215] = 1;
	v->a[81216] = anon_sym_DOLLAR_LBRACE;
	v->a[81217] = actions(791);
	v->a[81218] = 1;
	v->a[81219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = actions(793);
	v->a[81221] = 1;
	v->a[81222] = anon_sym_BQUOTE;
	v->a[81223] = actions(3168);
	v->a[81224] = 1;
	v->a[81225] = sym__bare_dollar;
	v->a[81226] = actions(3354);
	v->a[81227] = 1;
	v->a[81228] = anon_sym_DOLLAR;
	v->a[81229] = actions(3166);
	v->a[81230] = 3;
	v->a[81231] = sym_raw_string;
	v->a[81232] = sym__comment_word;
	v->a[81233] = sym_word;
	v->a[81234] = state(589);
	v->a[81235] = 6;
	v->a[81236] = sym_arithmetic_expansion;
	v->a[81237] = sym_string;
	v->a[81238] = sym_number;
	v->a[81239] = sym_simple_expansion;
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = sym_expansion;
	v->a[81241] = sym_command_substitution;
	v->a[81242] = 12;
	v->a[81243] = actions(3);
	v->a[81244] = 1;
	v->a[81245] = sym_comment;
	v->a[81246] = actions(2929);
	v->a[81247] = 1;
	v->a[81248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81249] = actions(2931);
	v->a[81250] = 1;
	v->a[81251] = anon_sym_DOLLAR;
	v->a[81252] = actions(2933);
	v->a[81253] = 1;
	v->a[81254] = anon_sym_DQUOTE;
	v->a[81255] = actions(2935);
	v->a[81256] = 1;
	v->a[81257] = aux_sym_number_token1;
	v->a[81258] = actions(2937);
	v->a[81259] = 1;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = aux_sym_number_token2;
	v->a[81261] = actions(2939);
	v->a[81262] = 1;
	v->a[81263] = anon_sym_DOLLAR_LBRACE;
	v->a[81264] = actions(2941);
	v->a[81265] = 1;
	v->a[81266] = anon_sym_DOLLAR_LPAREN;
	v->a[81267] = actions(2943);
	v->a[81268] = 1;
	v->a[81269] = anon_sym_BQUOTE;
	v->a[81270] = actions(3352);
	v->a[81271] = 2;
	v->a[81272] = sym_raw_string;
	v->a[81273] = sym_word;
	v->a[81274] = state(360);
	v->a[81275] = 2;
	v->a[81276] = sym_concatenation;
	v->a[81277] = aux_sym_for_statement_repeat1;
	v->a[81278] = state(784);
	v->a[81279] = 6;
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = sym_arithmetic_expansion;
	v->a[81281] = sym_string;
	v->a[81282] = sym_number;
	v->a[81283] = sym_simple_expansion;
	v->a[81284] = sym_expansion;
	v->a[81285] = sym_command_substitution;
	v->a[81286] = 12;
	v->a[81287] = actions(3);
	v->a[81288] = 1;
	v->a[81289] = sym_comment;
	v->a[81290] = actions(933);
	v->a[81291] = 1;
	v->a[81292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81293] = actions(935);
	v->a[81294] = 1;
	v->a[81295] = anon_sym_DOLLAR;
	v->a[81296] = actions(937);
	v->a[81297] = 1;
	v->a[81298] = anon_sym_DQUOTE;
	v->a[81299] = actions(939);
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
