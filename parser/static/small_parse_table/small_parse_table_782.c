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
	v->a[78200] = actions(3);
	v->a[78201] = 1;
	v->a[78202] = sym_comment;
	v->a[78203] = actions(387);
	v->a[78204] = 1;
	v->a[78205] = sym_variable_name;
	v->a[78206] = actions(385);
	v->a[78207] = 2;
	v->a[78208] = aux_sym__simple_variable_name_token1;
	v->a[78209] = aux_sym__multiline_variable_name_token1;
	v->a[78210] = actions(383);
	v->a[78211] = 9;
	v->a[78212] = anon_sym_BANG;
	v->a[78213] = anon_sym_DASH;
	v->a[78214] = anon_sym_STAR;
	v->a[78215] = anon_sym_QMARK;
	v->a[78216] = anon_sym_DOLLAR;
	v->a[78217] = anon_sym_POUND;
	v->a[78218] = anon_sym_AT;
	v->a[78219] = anon_sym_0;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = anon_sym__;
	v->a[78221] = 10;
	v->a[78222] = actions(3);
	v->a[78223] = 1;
	v->a[78224] = sym_comment;
	v->a[78225] = actions(3071);
	v->a[78226] = 1;
	v->a[78227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78228] = actions(3077);
	v->a[78229] = 1;
	v->a[78230] = sym_string_content;
	v->a[78231] = actions(3079);
	v->a[78232] = 1;
	v->a[78233] = anon_sym_DOLLAR_LBRACE;
	v->a[78234] = actions(3081);
	v->a[78235] = 1;
	v->a[78236] = anon_sym_DOLLAR_LPAREN;
	v->a[78237] = actions(3083);
	v->a[78238] = 1;
	v->a[78239] = anon_sym_BQUOTE;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = actions(3295);
	v->a[78241] = 1;
	v->a[78242] = anon_sym_DOLLAR;
	v->a[78243] = actions(3297);
	v->a[78244] = 1;
	v->a[78245] = anon_sym_DQUOTE;
	v->a[78246] = state(1681);
	v->a[78247] = 1;
	v->a[78248] = aux_sym_string_repeat1;
	v->a[78249] = state(1739);
	v->a[78250] = 4;
	v->a[78251] = sym_arithmetic_expansion;
	v->a[78252] = sym_simple_expansion;
	v->a[78253] = sym_expansion;
	v->a[78254] = sym_command_substitution;
	v->a[78255] = 10;
	v->a[78256] = actions(3);
	v->a[78257] = 1;
	v->a[78258] = sym_comment;
	v->a[78259] = actions(3071);
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = 1;
	v->a[78261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78262] = actions(3077);
	v->a[78263] = 1;
	v->a[78264] = sym_string_content;
	v->a[78265] = actions(3079);
	v->a[78266] = 1;
	v->a[78267] = anon_sym_DOLLAR_LBRACE;
	v->a[78268] = actions(3081);
	v->a[78269] = 1;
	v->a[78270] = anon_sym_DOLLAR_LPAREN;
	v->a[78271] = actions(3083);
	v->a[78272] = 1;
	v->a[78273] = anon_sym_BQUOTE;
	v->a[78274] = actions(3299);
	v->a[78275] = 1;
	v->a[78276] = anon_sym_DOLLAR;
	v->a[78277] = actions(3301);
	v->a[78278] = 1;
	v->a[78279] = anon_sym_DQUOTE;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = state(1681);
	v->a[78281] = 1;
	v->a[78282] = aux_sym_string_repeat1;
	v->a[78283] = state(1739);
	v->a[78284] = 4;
	v->a[78285] = sym_arithmetic_expansion;
	v->a[78286] = sym_simple_expansion;
	v->a[78287] = sym_expansion;
	v->a[78288] = sym_command_substitution;
	v->a[78289] = 10;
	v->a[78290] = actions(3);
	v->a[78291] = 1;
	v->a[78292] = sym_comment;
	v->a[78293] = actions(3303);
	v->a[78294] = 1;
	v->a[78295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78296] = actions(3306);
	v->a[78297] = 1;
	v->a[78298] = anon_sym_DOLLAR;
	v->a[78299] = actions(3309);
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
