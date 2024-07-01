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
	v->a[76200] = sym_word;
	v->a[76201] = 4;
	v->a[76202] = actions(3);
	v->a[76203] = 1;
	v->a[76204] = sym_comment;
	v->a[76205] = actions(3095);
	v->a[76206] = 1;
	v->a[76207] = sym_variable_name;
	v->a[76208] = actions(3093);
	v->a[76209] = 2;
	v->a[76210] = aux_sym__simple_variable_name_token1;
	v->a[76211] = aux_sym__multiline_variable_name_token1;
	v->a[76212] = actions(3091);
	v->a[76213] = 9;
	v->a[76214] = anon_sym_BANG;
	v->a[76215] = anon_sym_DASH;
	v->a[76216] = anon_sym_STAR;
	v->a[76217] = anon_sym_QMARK;
	v->a[76218] = anon_sym_DOLLAR;
	v->a[76219] = anon_sym_POUND;
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = anon_sym_AT;
	v->a[76221] = anon_sym_0;
	v->a[76222] = anon_sym__;
	v->a[76223] = 10;
	v->a[76224] = actions(3);
	v->a[76225] = 1;
	v->a[76226] = sym_comment;
	v->a[76227] = actions(3071);
	v->a[76228] = 1;
	v->a[76229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76230] = actions(3077);
	v->a[76231] = 1;
	v->a[76232] = sym_string_content;
	v->a[76233] = actions(3079);
	v->a[76234] = 1;
	v->a[76235] = anon_sym_DOLLAR_LBRACE;
	v->a[76236] = actions(3081);
	v->a[76237] = 1;
	v->a[76238] = anon_sym_DOLLAR_LPAREN;
	v->a[76239] = actions(3083);
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = 1;
	v->a[76241] = anon_sym_BQUOTE;
	v->a[76242] = actions(3097);
	v->a[76243] = 1;
	v->a[76244] = anon_sym_DOLLAR;
	v->a[76245] = actions(3099);
	v->a[76246] = 1;
	v->a[76247] = anon_sym_DQUOTE;
	v->a[76248] = state(1617);
	v->a[76249] = 1;
	v->a[76250] = aux_sym_string_repeat1;
	v->a[76251] = state(1739);
	v->a[76252] = 4;
	v->a[76253] = sym_arithmetic_expansion;
	v->a[76254] = sym_simple_expansion;
	v->a[76255] = sym_expansion;
	v->a[76256] = sym_command_substitution;
	v->a[76257] = 4;
	v->a[76258] = actions(3);
	v->a[76259] = 1;
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = sym_comment;
	v->a[76261] = actions(399);
	v->a[76262] = 1;
	v->a[76263] = sym_variable_name;
	v->a[76264] = actions(397);
	v->a[76265] = 2;
	v->a[76266] = aux_sym__simple_variable_name_token1;
	v->a[76267] = aux_sym__multiline_variable_name_token1;
	v->a[76268] = actions(395);
	v->a[76269] = 9;
	v->a[76270] = anon_sym_BANG;
	v->a[76271] = anon_sym_DASH;
	v->a[76272] = anon_sym_STAR;
	v->a[76273] = anon_sym_QMARK;
	v->a[76274] = anon_sym_DOLLAR;
	v->a[76275] = anon_sym_POUND;
	v->a[76276] = anon_sym_AT;
	v->a[76277] = anon_sym_0;
	v->a[76278] = anon_sym__;
	v->a[76279] = 10;
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = actions(3);
	v->a[76281] = 1;
	v->a[76282] = sym_comment;
	v->a[76283] = actions(3071);
	v->a[76284] = 1;
	v->a[76285] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76286] = actions(3077);
	v->a[76287] = 1;
	v->a[76288] = sym_string_content;
	v->a[76289] = actions(3079);
	v->a[76290] = 1;
	v->a[76291] = anon_sym_DOLLAR_LBRACE;
	v->a[76292] = actions(3081);
	v->a[76293] = 1;
	v->a[76294] = anon_sym_DOLLAR_LPAREN;
	v->a[76295] = actions(3083);
	v->a[76296] = 1;
	v->a[76297] = anon_sym_BQUOTE;
	v->a[76298] = actions(3101);
	v->a[76299] = 1;
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
