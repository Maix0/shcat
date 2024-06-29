/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_902.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4510(t_small_parse_table_array *v)
{
	v->a[90200] = sym_arithmetic_expansion;
	v->a[90201] = sym_simple_expansion;
	v->a[90202] = sym_expansion;
	v->a[90203] = sym_command_substitution;
	v->a[90204] = 10;
	v->a[90205] = actions(3);
	v->a[90206] = 1;
	v->a[90207] = sym_comment;
	v->a[90208] = actions(3414);
	v->a[90209] = 1;
	v->a[90210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90211] = actions(3420);
	v->a[90212] = 1;
	v->a[90213] = sym_string_content;
	v->a[90214] = actions(3422);
	v->a[90215] = 1;
	v->a[90216] = anon_sym_DOLLAR_LBRACE;
	v->a[90217] = actions(3424);
	v->a[90218] = 1;
	v->a[90219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = actions(3426);
	v->a[90221] = 1;
	v->a[90222] = anon_sym_BQUOTE;
	v->a[90223] = actions(3604);
	v->a[90224] = 1;
	v->a[90225] = anon_sym_DOLLAR;
	v->a[90226] = actions(3606);
	v->a[90227] = 1;
	v->a[90228] = anon_sym_DQUOTE;
	v->a[90229] = state(1878);
	v->a[90230] = 1;
	v->a[90231] = aux_sym_string_repeat1;
	v->a[90232] = state(1963);
	v->a[90233] = 4;
	v->a[90234] = sym_arithmetic_expansion;
	v->a[90235] = sym_simple_expansion;
	v->a[90236] = sym_expansion;
	v->a[90237] = sym_command_substitution;
	v->a[90238] = 10;
	v->a[90239] = actions(3);
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = 1;
	v->a[90241] = sym_comment;
	v->a[90242] = actions(3414);
	v->a[90243] = 1;
	v->a[90244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90245] = actions(3420);
	v->a[90246] = 1;
	v->a[90247] = sym_string_content;
	v->a[90248] = actions(3422);
	v->a[90249] = 1;
	v->a[90250] = anon_sym_DOLLAR_LBRACE;
	v->a[90251] = actions(3424);
	v->a[90252] = 1;
	v->a[90253] = anon_sym_DOLLAR_LPAREN;
	v->a[90254] = actions(3426);
	v->a[90255] = 1;
	v->a[90256] = anon_sym_BQUOTE;
	v->a[90257] = actions(3608);
	v->a[90258] = 1;
	v->a[90259] = anon_sym_DOLLAR;
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = actions(3610);
	v->a[90261] = 1;
	v->a[90262] = anon_sym_DQUOTE;
	v->a[90263] = state(1863);
	v->a[90264] = 1;
	v->a[90265] = aux_sym_string_repeat1;
	v->a[90266] = state(1963);
	v->a[90267] = 4;
	v->a[90268] = sym_arithmetic_expansion;
	v->a[90269] = sym_simple_expansion;
	v->a[90270] = sym_expansion;
	v->a[90271] = sym_command_substitution;
	v->a[90272] = 10;
	v->a[90273] = actions(3);
	v->a[90274] = 1;
	v->a[90275] = sym_comment;
	v->a[90276] = actions(3612);
	v->a[90277] = 1;
	v->a[90278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90279] = actions(3615);
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = 1;
	v->a[90281] = anon_sym_DOLLAR;
	v->a[90282] = actions(3618);
	v->a[90283] = 1;
	v->a[90284] = anon_sym_DQUOTE;
	v->a[90285] = actions(3620);
	v->a[90286] = 1;
	v->a[90287] = sym_string_content;
	v->a[90288] = actions(3623);
	v->a[90289] = 1;
	v->a[90290] = anon_sym_DOLLAR_LBRACE;
	v->a[90291] = actions(3626);
	v->a[90292] = 1;
	v->a[90293] = anon_sym_DOLLAR_LPAREN;
	v->a[90294] = actions(3629);
	v->a[90295] = 1;
	v->a[90296] = anon_sym_BQUOTE;
	v->a[90297] = state(1863);
	v->a[90298] = 1;
	v->a[90299] = aux_sym_string_repeat1;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
