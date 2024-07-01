/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_882.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4410(t_small_parse_table_array *v)
{
	v->a[88200] = 1;
	v->a[88201] = sym_string_content;
	v->a[88202] = actions(3422);
	v->a[88203] = 1;
	v->a[88204] = anon_sym_DOLLAR_LBRACE;
	v->a[88205] = actions(3424);
	v->a[88206] = 1;
	v->a[88207] = anon_sym_DOLLAR_LPAREN;
	v->a[88208] = actions(3426);
	v->a[88209] = 1;
	v->a[88210] = anon_sym_BQUOTE;
	v->a[88211] = actions(3650);
	v->a[88212] = 1;
	v->a[88213] = anon_sym_DOLLAR;
	v->a[88214] = actions(3652);
	v->a[88215] = 1;
	v->a[88216] = anon_sym_DQUOTE;
	v->a[88217] = state(1906);
	v->a[88218] = 1;
	v->a[88219] = aux_sym_string_repeat1;
	small_parse_table_4411(v);
}

void	small_parse_table_4411(t_small_parse_table_array *v)
{
	v->a[88220] = state(1959);
	v->a[88221] = 4;
	v->a[88222] = sym_arithmetic_expansion;
	v->a[88223] = sym_simple_expansion;
	v->a[88224] = sym_expansion;
	v->a[88225] = sym_command_substitution;
	v->a[88226] = 10;
	v->a[88227] = actions(3);
	v->a[88228] = 1;
	v->a[88229] = sym_comment;
	v->a[88230] = actions(3414);
	v->a[88231] = 1;
	v->a[88232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88233] = actions(3420);
	v->a[88234] = 1;
	v->a[88235] = sym_string_content;
	v->a[88236] = actions(3422);
	v->a[88237] = 1;
	v->a[88238] = anon_sym_DOLLAR_LBRACE;
	v->a[88239] = actions(3424);
	small_parse_table_4412(v);
}

void	small_parse_table_4412(t_small_parse_table_array *v)
{
	v->a[88240] = 1;
	v->a[88241] = anon_sym_DOLLAR_LPAREN;
	v->a[88242] = actions(3426);
	v->a[88243] = 1;
	v->a[88244] = anon_sym_BQUOTE;
	v->a[88245] = actions(3654);
	v->a[88246] = 1;
	v->a[88247] = anon_sym_DOLLAR;
	v->a[88248] = actions(3656);
	v->a[88249] = 1;
	v->a[88250] = anon_sym_DQUOTE;
	v->a[88251] = state(1877);
	v->a[88252] = 1;
	v->a[88253] = aux_sym_string_repeat1;
	v->a[88254] = state(1959);
	v->a[88255] = 4;
	v->a[88256] = sym_arithmetic_expansion;
	v->a[88257] = sym_simple_expansion;
	v->a[88258] = sym_expansion;
	v->a[88259] = sym_command_substitution;
	small_parse_table_4413(v);
}

void	small_parse_table_4413(t_small_parse_table_array *v)
{
	v->a[88260] = 4;
	v->a[88261] = actions(3);
	v->a[88262] = 1;
	v->a[88263] = sym_comment;
	v->a[88264] = actions(3662);
	v->a[88265] = 1;
	v->a[88266] = sym_variable_name;
	v->a[88267] = actions(3660);
	v->a[88268] = 2;
	v->a[88269] = aux_sym__simple_variable_name_token1;
	v->a[88270] = aux_sym__multiline_variable_name_token1;
	v->a[88271] = actions(3658);
	v->a[88272] = 9;
	v->a[88273] = anon_sym_BANG;
	v->a[88274] = anon_sym_DASH;
	v->a[88275] = anon_sym_STAR;
	v->a[88276] = anon_sym_QMARK;
	v->a[88277] = anon_sym_DOLLAR;
	v->a[88278] = anon_sym_POUND;
	v->a[88279] = anon_sym_AT;
	small_parse_table_4414(v);
}

void	small_parse_table_4414(t_small_parse_table_array *v)
{
	v->a[88280] = anon_sym_0;
	v->a[88281] = anon_sym__;
	v->a[88282] = 4;
	v->a[88283] = actions(3);
	v->a[88284] = 1;
	v->a[88285] = sym_comment;
	v->a[88286] = actions(423);
	v->a[88287] = 1;
	v->a[88288] = sym_variable_name;
	v->a[88289] = actions(421);
	v->a[88290] = 2;
	v->a[88291] = aux_sym__simple_variable_name_token1;
	v->a[88292] = aux_sym__multiline_variable_name_token1;
	v->a[88293] = actions(419);
	v->a[88294] = 9;
	v->a[88295] = anon_sym_BANG;
	v->a[88296] = anon_sym_DASH;
	v->a[88297] = anon_sym_STAR;
	v->a[88298] = anon_sym_QMARK;
	v->a[88299] = anon_sym_DOLLAR;
	small_parse_table_4415(v);
}

/* EOF small_parse_table_882.c */
