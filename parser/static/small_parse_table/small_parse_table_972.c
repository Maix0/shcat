/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_972.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4860(t_small_parse_table_array *v)
{
	v->a[97200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97201] = actions(3862);
	v->a[97202] = 1;
	v->a[97203] = sym_string_content;
	v->a[97204] = actions(3864);
	v->a[97205] = 1;
	v->a[97206] = anon_sym_DOLLAR_LBRACE;
	v->a[97207] = actions(3866);
	v->a[97208] = 1;
	v->a[97209] = anon_sym_DOLLAR_LPAREN;
	v->a[97210] = actions(3868);
	v->a[97211] = 1;
	v->a[97212] = anon_sym_BQUOTE;
	v->a[97213] = actions(4208);
	v->a[97214] = 1;
	v->a[97215] = anon_sym_DOLLAR;
	v->a[97216] = actions(4210);
	v->a[97217] = 1;
	v->a[97218] = anon_sym_DQUOTE;
	v->a[97219] = state(1987);
	small_parse_table_4861(v);
}

void	small_parse_table_4861(t_small_parse_table_array *v)
{
	v->a[97220] = 1;
	v->a[97221] = aux_sym_string_repeat1;
	v->a[97222] = state(2107);
	v->a[97223] = 4;
	v->a[97224] = sym_arithmetic_expansion;
	v->a[97225] = sym_simple_expansion;
	v->a[97226] = sym_expansion;
	v->a[97227] = sym_command_substitution;
	v->a[97228] = 4;
	v->a[97229] = actions(3);
	v->a[97230] = 1;
	v->a[97231] = sym_comment;
	v->a[97232] = actions(906);
	v->a[97233] = 1;
	v->a[97234] = sym_variable_name;
	v->a[97235] = actions(904);
	v->a[97236] = 2;
	v->a[97237] = aux_sym__simple_variable_name_token1;
	v->a[97238] = aux_sym__multiline_variable_name_token1;
	v->a[97239] = actions(902);
	small_parse_table_4862(v);
}

void	small_parse_table_4862(t_small_parse_table_array *v)
{
	v->a[97240] = 9;
	v->a[97241] = anon_sym_BANG;
	v->a[97242] = anon_sym_DASH;
	v->a[97243] = anon_sym_STAR;
	v->a[97244] = anon_sym_QMARK;
	v->a[97245] = anon_sym_DOLLAR;
	v->a[97246] = anon_sym_POUND;
	v->a[97247] = anon_sym_AT;
	v->a[97248] = anon_sym_0;
	v->a[97249] = anon_sym__;
	v->a[97250] = 10;
	v->a[97251] = actions(3);
	v->a[97252] = 1;
	v->a[97253] = sym_comment;
	v->a[97254] = actions(3856);
	v->a[97255] = 1;
	v->a[97256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97257] = actions(3862);
	v->a[97258] = 1;
	v->a[97259] = sym_string_content;
	small_parse_table_4863(v);
}

void	small_parse_table_4863(t_small_parse_table_array *v)
{
	v->a[97260] = actions(3864);
	v->a[97261] = 1;
	v->a[97262] = anon_sym_DOLLAR_LBRACE;
	v->a[97263] = actions(3866);
	v->a[97264] = 1;
	v->a[97265] = anon_sym_DOLLAR_LPAREN;
	v->a[97266] = actions(3868);
	v->a[97267] = 1;
	v->a[97268] = anon_sym_BQUOTE;
	v->a[97269] = actions(4212);
	v->a[97270] = 1;
	v->a[97271] = anon_sym_DOLLAR;
	v->a[97272] = actions(4214);
	v->a[97273] = 1;
	v->a[97274] = anon_sym_DQUOTE;
	v->a[97275] = state(2055);
	v->a[97276] = 1;
	v->a[97277] = aux_sym_string_repeat1;
	v->a[97278] = state(2107);
	v->a[97279] = 4;
	small_parse_table_4864(v);
}

void	small_parse_table_4864(t_small_parse_table_array *v)
{
	v->a[97280] = sym_arithmetic_expansion;
	v->a[97281] = sym_simple_expansion;
	v->a[97282] = sym_expansion;
	v->a[97283] = sym_command_substitution;
	v->a[97284] = 10;
	v->a[97285] = actions(3);
	v->a[97286] = 1;
	v->a[97287] = sym_comment;
	v->a[97288] = actions(3856);
	v->a[97289] = 1;
	v->a[97290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97291] = actions(3862);
	v->a[97292] = 1;
	v->a[97293] = sym_string_content;
	v->a[97294] = actions(3864);
	v->a[97295] = 1;
	v->a[97296] = anon_sym_DOLLAR_LBRACE;
	v->a[97297] = actions(3866);
	v->a[97298] = 1;
	v->a[97299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4865(v);
}

/* EOF small_parse_table_972.c */
