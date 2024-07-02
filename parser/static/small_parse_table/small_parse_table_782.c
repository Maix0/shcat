/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_782.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3910(t_small_parse_table_array *v)
{
	v->a[78200] = anon_sym_DQUOTE;
	v->a[78201] = state(1661);
	v->a[78202] = 1;
	v->a[78203] = aux_sym_string_repeat1;
	v->a[78204] = state(1748);
	v->a[78205] = 4;
	v->a[78206] = sym_arithmetic_expansion;
	v->a[78207] = sym_simple_expansion;
	v->a[78208] = sym_expansion;
	v->a[78209] = sym_command_substitution;
	v->a[78210] = 4;
	v->a[78211] = actions(3);
	v->a[78212] = 1;
	v->a[78213] = sym_comment;
	v->a[78214] = actions(1502);
	v->a[78215] = 1;
	v->a[78216] = sym_variable_name;
	v->a[78217] = actions(1500);
	v->a[78218] = 2;
	v->a[78219] = aux_sym__simple_variable_name_token1;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = aux_sym__multiline_variable_name_token1;
	v->a[78221] = actions(1498);
	v->a[78222] = 9;
	v->a[78223] = anon_sym_BANG;
	v->a[78224] = anon_sym_DASH;
	v->a[78225] = anon_sym_STAR;
	v->a[78226] = anon_sym_QMARK;
	v->a[78227] = anon_sym_DOLLAR;
	v->a[78228] = anon_sym_POUND;
	v->a[78229] = anon_sym_AT;
	v->a[78230] = anon_sym_0;
	v->a[78231] = anon_sym__;
	v->a[78232] = 10;
	v->a[78233] = actions(3);
	v->a[78234] = 1;
	v->a[78235] = sym_comment;
	v->a[78236] = actions(3104);
	v->a[78237] = 1;
	v->a[78238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78239] = actions(3110);
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = 1;
	v->a[78241] = sym_string_content;
	v->a[78242] = actions(3112);
	v->a[78243] = 1;
	v->a[78244] = anon_sym_DOLLAR_LBRACE;
	v->a[78245] = actions(3114);
	v->a[78246] = 1;
	v->a[78247] = anon_sym_DOLLAR_LPAREN;
	v->a[78248] = actions(3116);
	v->a[78249] = 1;
	v->a[78250] = anon_sym_BQUOTE;
	v->a[78251] = actions(3326);
	v->a[78252] = 1;
	v->a[78253] = anon_sym_DOLLAR;
	v->a[78254] = actions(3328);
	v->a[78255] = 1;
	v->a[78256] = anon_sym_DQUOTE;
	v->a[78257] = state(1674);
	v->a[78258] = 1;
	v->a[78259] = aux_sym_string_repeat1;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = state(1748);
	v->a[78261] = 4;
	v->a[78262] = sym_arithmetic_expansion;
	v->a[78263] = sym_simple_expansion;
	v->a[78264] = sym_expansion;
	v->a[78265] = sym_command_substitution;
	v->a[78266] = 4;
	v->a[78267] = actions(3);
	v->a[78268] = 1;
	v->a[78269] = sym_comment;
	v->a[78270] = actions(993);
	v->a[78271] = 1;
	v->a[78272] = sym_variable_name;
	v->a[78273] = actions(991);
	v->a[78274] = 2;
	v->a[78275] = aux_sym__simple_variable_name_token1;
	v->a[78276] = aux_sym__multiline_variable_name_token1;
	v->a[78277] = actions(989);
	v->a[78278] = 9;
	v->a[78279] = anon_sym_BANG;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = anon_sym_DASH;
	v->a[78281] = anon_sym_STAR;
	v->a[78282] = anon_sym_QMARK;
	v->a[78283] = anon_sym_DOLLAR;
	v->a[78284] = anon_sym_POUND;
	v->a[78285] = anon_sym_AT;
	v->a[78286] = anon_sym_0;
	v->a[78287] = anon_sym__;
	v->a[78288] = 10;
	v->a[78289] = actions(3);
	v->a[78290] = 1;
	v->a[78291] = sym_comment;
	v->a[78292] = actions(3104);
	v->a[78293] = 1;
	v->a[78294] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78295] = actions(3110);
	v->a[78296] = 1;
	v->a[78297] = sym_string_content;
	v->a[78298] = actions(3112);
	v->a[78299] = 1;
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
