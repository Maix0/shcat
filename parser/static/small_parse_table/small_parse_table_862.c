/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_862.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4310(t_small_parse_table_array *v)
{
	v->a[86200] = 1;
	v->a[86201] = aux_sym_string_repeat1;
	v->a[86202] = state(1959);
	v->a[86203] = 4;
	v->a[86204] = sym_arithmetic_expansion;
	v->a[86205] = sym_simple_expansion;
	v->a[86206] = sym_expansion;
	v->a[86207] = sym_command_substitution;
	v->a[86208] = 4;
	v->a[86209] = actions(3);
	v->a[86210] = 1;
	v->a[86211] = sym_comment;
	v->a[86212] = actions(429);
	v->a[86213] = 1;
	v->a[86214] = sym_variable_name;
	v->a[86215] = actions(427);
	v->a[86216] = 2;
	v->a[86217] = aux_sym__simple_variable_name_token1;
	v->a[86218] = aux_sym__multiline_variable_name_token1;
	v->a[86219] = actions(425);
	small_parse_table_4311(v);
}

void	small_parse_table_4311(t_small_parse_table_array *v)
{
	v->a[86220] = 9;
	v->a[86221] = anon_sym_BANG;
	v->a[86222] = anon_sym_DASH;
	v->a[86223] = anon_sym_STAR;
	v->a[86224] = anon_sym_QMARK;
	v->a[86225] = anon_sym_DOLLAR;
	v->a[86226] = anon_sym_POUND;
	v->a[86227] = anon_sym_AT;
	v->a[86228] = anon_sym_0;
	v->a[86229] = anon_sym__;
	v->a[86230] = 4;
	v->a[86231] = actions(3);
	v->a[86232] = 1;
	v->a[86233] = sym_comment;
	v->a[86234] = actions(1630);
	v->a[86235] = 1;
	v->a[86236] = sym_variable_name;
	v->a[86237] = actions(1628);
	v->a[86238] = 2;
	v->a[86239] = aux_sym__simple_variable_name_token1;
	small_parse_table_4312(v);
}

void	small_parse_table_4312(t_small_parse_table_array *v)
{
	v->a[86240] = aux_sym__multiline_variable_name_token1;
	v->a[86241] = actions(1626);
	v->a[86242] = 9;
	v->a[86243] = anon_sym_BANG;
	v->a[86244] = anon_sym_DASH;
	v->a[86245] = anon_sym_STAR;
	v->a[86246] = anon_sym_QMARK;
	v->a[86247] = anon_sym_DOLLAR;
	v->a[86248] = anon_sym_POUND;
	v->a[86249] = anon_sym_AT;
	v->a[86250] = anon_sym_0;
	v->a[86251] = anon_sym__;
	v->a[86252] = 10;
	v->a[86253] = actions(3);
	v->a[86254] = 1;
	v->a[86255] = sym_comment;
	v->a[86256] = actions(3414);
	v->a[86257] = 1;
	v->a[86258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86259] = actions(3420);
	small_parse_table_4313(v);
}

void	small_parse_table_4313(t_small_parse_table_array *v)
{
	v->a[86260] = 1;
	v->a[86261] = sym_string_content;
	v->a[86262] = actions(3422);
	v->a[86263] = 1;
	v->a[86264] = anon_sym_DOLLAR_LBRACE;
	v->a[86265] = actions(3424);
	v->a[86266] = 1;
	v->a[86267] = anon_sym_DOLLAR_LPAREN;
	v->a[86268] = actions(3426);
	v->a[86269] = 1;
	v->a[86270] = anon_sym_BQUOTE;
	v->a[86271] = actions(3456);
	v->a[86272] = 1;
	v->a[86273] = anon_sym_DOLLAR;
	v->a[86274] = actions(3458);
	v->a[86275] = 1;
	v->a[86276] = anon_sym_DQUOTE;
	v->a[86277] = state(1906);
	v->a[86278] = 1;
	v->a[86279] = aux_sym_string_repeat1;
	small_parse_table_4314(v);
}

void	small_parse_table_4314(t_small_parse_table_array *v)
{
	v->a[86280] = state(1959);
	v->a[86281] = 4;
	v->a[86282] = sym_arithmetic_expansion;
	v->a[86283] = sym_simple_expansion;
	v->a[86284] = sym_expansion;
	v->a[86285] = sym_command_substitution;
	v->a[86286] = 10;
	v->a[86287] = actions(3);
	v->a[86288] = 1;
	v->a[86289] = sym_comment;
	v->a[86290] = actions(3414);
	v->a[86291] = 1;
	v->a[86292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86293] = actions(3420);
	v->a[86294] = 1;
	v->a[86295] = sym_string_content;
	v->a[86296] = actions(3422);
	v->a[86297] = 1;
	v->a[86298] = anon_sym_DOLLAR_LBRACE;
	v->a[86299] = actions(3424);
	small_parse_table_4315(v);
}

/* EOF small_parse_table_862.c */
