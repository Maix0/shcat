/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_762.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3810(t_small_parse_table_array *v)
{
	v->a[76200] = 1;
	v->a[76201] = sym_comment;
	v->a[76202] = actions(3040);
	v->a[76203] = 1;
	v->a[76204] = anon_sym_POUND;
	v->a[76205] = actions(3042);
	v->a[76206] = 1;
	v->a[76207] = aux_sym__simple_variable_name_token1;
	v->a[76208] = actions(3044);
	v->a[76209] = 1;
	v->a[76210] = anon_sym_0;
	v->a[76211] = actions(3046);
	v->a[76212] = 1;
	v->a[76213] = sym_variable_name;
	v->a[76214] = actions(3234);
	v->a[76215] = 1;
	v->a[76216] = anon_sym_RBRACE;
	v->a[76217] = state(2054);
	v->a[76218] = 1;
	v->a[76219] = sym__expansion_body;
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = actions(3038);
	v->a[76221] = 6;
	v->a[76222] = anon_sym_BANG;
	v->a[76223] = anon_sym_DASH;
	v->a[76224] = anon_sym_STAR;
	v->a[76225] = anon_sym_QMARK;
	v->a[76226] = anon_sym_DOLLAR;
	v->a[76227] = anon_sym_AT;
	v->a[76228] = 10;
	v->a[76229] = actions(3);
	v->a[76230] = 1;
	v->a[76231] = sym_comment;
	v->a[76232] = actions(3058);
	v->a[76233] = 1;
	v->a[76234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76235] = actions(3064);
	v->a[76236] = 1;
	v->a[76237] = sym_string_content;
	v->a[76238] = actions(3066);
	v->a[76239] = 1;
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = anon_sym_DOLLAR_LBRACE;
	v->a[76241] = actions(3068);
	v->a[76242] = 1;
	v->a[76243] = anon_sym_DOLLAR_LPAREN;
	v->a[76244] = actions(3070);
	v->a[76245] = 1;
	v->a[76246] = anon_sym_BQUOTE;
	v->a[76247] = actions(3236);
	v->a[76248] = 1;
	v->a[76249] = anon_sym_DOLLAR;
	v->a[76250] = actions(3238);
	v->a[76251] = 1;
	v->a[76252] = anon_sym_DQUOTE;
	v->a[76253] = state(1634);
	v->a[76254] = 1;
	v->a[76255] = aux_sym_string_repeat1;
	v->a[76256] = state(1748);
	v->a[76257] = 4;
	v->a[76258] = sym_arithmetic_expansion;
	v->a[76259] = sym_simple_expansion;
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = sym_expansion;
	v->a[76261] = sym_command_substitution;
	v->a[76262] = 8;
	v->a[76263] = actions(3);
	v->a[76264] = 1;
	v->a[76265] = sym_comment;
	v->a[76266] = actions(3040);
	v->a[76267] = 1;
	v->a[76268] = anon_sym_POUND;
	v->a[76269] = actions(3042);
	v->a[76270] = 1;
	v->a[76271] = aux_sym__simple_variable_name_token1;
	v->a[76272] = actions(3044);
	v->a[76273] = 1;
	v->a[76274] = anon_sym_0;
	v->a[76275] = actions(3046);
	v->a[76276] = 1;
	v->a[76277] = sym_variable_name;
	v->a[76278] = actions(3240);
	v->a[76279] = 1;
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = anon_sym_RBRACE;
	v->a[76281] = state(1949);
	v->a[76282] = 1;
	v->a[76283] = sym__expansion_body;
	v->a[76284] = actions(3038);
	v->a[76285] = 6;
	v->a[76286] = anon_sym_BANG;
	v->a[76287] = anon_sym_DASH;
	v->a[76288] = anon_sym_STAR;
	v->a[76289] = anon_sym_QMARK;
	v->a[76290] = anon_sym_DOLLAR;
	v->a[76291] = anon_sym_AT;
	v->a[76292] = 10;
	v->a[76293] = actions(3);
	v->a[76294] = 1;
	v->a[76295] = sym_comment;
	v->a[76296] = actions(3058);
	v->a[76297] = 1;
	v->a[76298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76299] = actions(3064);
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
