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
	v->a[86201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86202] = actions(1967);
	v->a[86203] = 1;
	v->a[86204] = anon_sym_DQUOTE;
	v->a[86205] = actions(1969);
	v->a[86206] = 1;
	v->a[86207] = anon_sym_DOLLAR_LBRACE;
	v->a[86208] = actions(1971);
	v->a[86209] = 1;
	v->a[86210] = anon_sym_DOLLAR_LPAREN;
	v->a[86211] = actions(1973);
	v->a[86212] = 1;
	v->a[86213] = anon_sym_BQUOTE;
	v->a[86214] = actions(3334);
	v->a[86215] = 1;
	v->a[86216] = sym__bare_dollar;
	v->a[86217] = actions(3479);
	v->a[86218] = 1;
	v->a[86219] = anon_sym_DOLLAR;
	small_parse_table_4311(v);
}

void	small_parse_table_4311(t_small_parse_table_array *v)
{
	v->a[86220] = actions(3332);
	v->a[86221] = 5;
	v->a[86222] = aux_sym_concatenation_token1;
	v->a[86223] = sym_raw_string;
	v->a[86224] = sym_number;
	v->a[86225] = sym__comment_word;
	v->a[86226] = sym_word;
	v->a[86227] = state(2219);
	v->a[86228] = 5;
	v->a[86229] = sym_arithmetic_expansion;
	v->a[86230] = sym_string;
	v->a[86231] = sym_simple_expansion;
	v->a[86232] = sym_expansion;
	v->a[86233] = sym_command_substitution;
	v->a[86234] = 12;
	v->a[86235] = actions(3);
	v->a[86236] = 1;
	v->a[86237] = sym_comment;
	v->a[86238] = actions(3156);
	v->a[86239] = 1;
	small_parse_table_4312(v);
}

void	small_parse_table_4312(t_small_parse_table_array *v)
{
	v->a[86240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86241] = actions(3160);
	v->a[86242] = 1;
	v->a[86243] = anon_sym_DQUOTE;
	v->a[86244] = actions(3162);
	v->a[86245] = 1;
	v->a[86246] = anon_sym_DOLLAR_LBRACE;
	v->a[86247] = actions(3164);
	v->a[86248] = 1;
	v->a[86249] = anon_sym_DOLLAR_LPAREN;
	v->a[86250] = actions(3166);
	v->a[86251] = 1;
	v->a[86252] = anon_sym_BQUOTE;
	v->a[86253] = actions(3252);
	v->a[86254] = 1;
	v->a[86255] = anon_sym_DOLLAR;
	v->a[86256] = actions(3254);
	v->a[86257] = 1;
	v->a[86258] = sym__comment_word;
	v->a[86259] = actions(3256);
	small_parse_table_4313(v);
}

void	small_parse_table_4313(t_small_parse_table_array *v)
{
	v->a[86260] = 1;
	v->a[86261] = sym__empty_value;
	v->a[86262] = state(1236);
	v->a[86263] = 1;
	v->a[86264] = sym_concatenation;
	v->a[86265] = actions(3481);
	v->a[86266] = 3;
	v->a[86267] = sym_raw_string;
	v->a[86268] = sym_number;
	v->a[86269] = sym_word;
	v->a[86270] = state(1172);
	v->a[86271] = 5;
	v->a[86272] = sym_arithmetic_expansion;
	v->a[86273] = sym_string;
	v->a[86274] = sym_simple_expansion;
	v->a[86275] = sym_expansion;
	v->a[86276] = sym_command_substitution;
	v->a[86277] = 12;
	v->a[86278] = actions(3);
	v->a[86279] = 1;
	small_parse_table_4314(v);
}

void	small_parse_table_4314(t_small_parse_table_array *v)
{
	v->a[86280] = sym_comment;
	v->a[86281] = actions(3156);
	v->a[86282] = 1;
	v->a[86283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86284] = actions(3160);
	v->a[86285] = 1;
	v->a[86286] = anon_sym_DQUOTE;
	v->a[86287] = actions(3162);
	v->a[86288] = 1;
	v->a[86289] = anon_sym_DOLLAR_LBRACE;
	v->a[86290] = actions(3164);
	v->a[86291] = 1;
	v->a[86292] = anon_sym_DOLLAR_LPAREN;
	v->a[86293] = actions(3166);
	v->a[86294] = 1;
	v->a[86295] = anon_sym_BQUOTE;
	v->a[86296] = actions(3252);
	v->a[86297] = 1;
	v->a[86298] = anon_sym_DOLLAR;
	v->a[86299] = actions(3254);
	small_parse_table_4315(v);
}

/* EOF small_parse_table_862.c */
