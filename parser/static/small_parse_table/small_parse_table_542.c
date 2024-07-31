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
	v->a[54200] = 1;
	v->a[54201] = sym_comment;
	v->a[54202] = actions(2031);
	v->a[54203] = 1;
	v->a[54204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54205] = actions(2035);
	v->a[54206] = 1;
	v->a[54207] = anon_sym_DQUOTE;
	v->a[54208] = actions(2037);
	v->a[54209] = 1;
	v->a[54210] = anon_sym_DOLLAR_LBRACE;
	v->a[54211] = actions(2039);
	v->a[54212] = 1;
	v->a[54213] = anon_sym_DOLLAR_LPAREN;
	v->a[54214] = actions(2041);
	v->a[54215] = 1;
	v->a[54216] = anon_sym_BQUOTE;
	v->a[54217] = actions(2043);
	v->a[54218] = 1;
	v->a[54219] = sym__bare_dollar;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = actions(2093);
	v->a[54221] = 1;
	v->a[54222] = anon_sym_DOLLAR;
	v->a[54223] = actions(2029);
	v->a[54224] = 5;
	v->a[54225] = aux_sym_concatenation_token1;
	v->a[54226] = sym_raw_string;
	v->a[54227] = sym_number;
	v->a[54228] = sym__comment_word;
	v->a[54229] = sym_word;
	v->a[54230] = state(928);
	v->a[54231] = 5;
	v->a[54232] = sym_arithmetic_expansion;
	v->a[54233] = sym_string;
	v->a[54234] = sym_simple_expansion;
	v->a[54235] = sym_expansion;
	v->a[54236] = sym_command_substitution;
	v->a[54237] = 12;
	v->a[54238] = actions(3);
	v->a[54239] = 1;
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = sym_comment;
	v->a[54241] = actions(2097);
	v->a[54242] = 1;
	v->a[54243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54244] = actions(2099);
	v->a[54245] = 1;
	v->a[54246] = anon_sym_DOLLAR;
	v->a[54247] = actions(2101);
	v->a[54248] = 1;
	v->a[54249] = anon_sym_DQUOTE;
	v->a[54250] = actions(2103);
	v->a[54251] = 1;
	v->a[54252] = anon_sym_DOLLAR_LBRACE;
	v->a[54253] = actions(2105);
	v->a[54254] = 1;
	v->a[54255] = anon_sym_DOLLAR_LPAREN;
	v->a[54256] = actions(2107);
	v->a[54257] = 1;
	v->a[54258] = anon_sym_BQUOTE;
	v->a[54259] = actions(2109);
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = 1;
	v->a[54261] = sym__comment_word;
	v->a[54262] = actions(2111);
	v->a[54263] = 1;
	v->a[54264] = sym__empty_value;
	v->a[54265] = state(1252);
	v->a[54266] = 1;
	v->a[54267] = sym_concatenation;
	v->a[54268] = actions(2095);
	v->a[54269] = 3;
	v->a[54270] = sym_raw_string;
	v->a[54271] = sym_number;
	v->a[54272] = sym_word;
	v->a[54273] = state(1174);
	v->a[54274] = 5;
	v->a[54275] = sym_arithmetic_expansion;
	v->a[54276] = sym_string;
	v->a[54277] = sym_simple_expansion;
	v->a[54278] = sym_expansion;
	v->a[54279] = sym_command_substitution;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = 10;
	v->a[54281] = actions(3);
	v->a[54282] = 1;
	v->a[54283] = sym_comment;
	v->a[54284] = actions(2015);
	v->a[54285] = 1;
	v->a[54286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54287] = actions(2019);
	v->a[54288] = 1;
	v->a[54289] = anon_sym_DQUOTE;
	v->a[54290] = actions(2021);
	v->a[54291] = 1;
	v->a[54292] = anon_sym_DOLLAR_LBRACE;
	v->a[54293] = actions(2023);
	v->a[54294] = 1;
	v->a[54295] = anon_sym_DOLLAR_LPAREN;
	v->a[54296] = actions(2025);
	v->a[54297] = 1;
	v->a[54298] = anon_sym_BQUOTE;
	v->a[54299] = actions(2027);
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
