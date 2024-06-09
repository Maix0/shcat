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
	v->a[90200] = anon_sym_LT_LT_DASH;
	v->a[90201] = actions(3950);
	v->a[90202] = 2;
	v->a[90203] = anon_sym_LT_AMP_DASH;
	v->a[90204] = anon_sym_GT_AMP_DASH;
	v->a[90205] = actions(3948);
	v->a[90206] = 3;
	v->a[90207] = anon_sym_GT_GT;
	v->a[90208] = anon_sym_AMP_GT_GT;
	v->a[90209] = anon_sym_GT_PIPE;
	v->a[90210] = actions(3946);
	v->a[90211] = 5;
	v->a[90212] = anon_sym_LT;
	v->a[90213] = anon_sym_GT;
	v->a[90214] = anon_sym_AMP_GT;
	v->a[90215] = anon_sym_LT_AMP;
	v->a[90216] = anon_sym_GT_AMP;
	v->a[90217] = 10;
	v->a[90218] = actions(3);
	v->a[90219] = 1;
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = sym_comment;
	v->a[90221] = actions(3474);
	v->a[90222] = 1;
	v->a[90223] = anon_sym_DQUOTE;
	v->a[90224] = actions(3712);
	v->a[90225] = 1;
	v->a[90226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90227] = actions(3716);
	v->a[90228] = 1;
	v->a[90229] = sym_string_content;
	v->a[90230] = actions(3718);
	v->a[90231] = 1;
	v->a[90232] = anon_sym_DOLLAR_LBRACE;
	v->a[90233] = actions(3720);
	v->a[90234] = 1;
	v->a[90235] = anon_sym_DOLLAR_LPAREN;
	v->a[90236] = actions(3722);
	v->a[90237] = 1;
	v->a[90238] = anon_sym_BQUOTE;
	v->a[90239] = actions(3956);
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = 1;
	v->a[90241] = anon_sym_DOLLAR;
	v->a[90242] = state(1738);
	v->a[90243] = 1;
	v->a[90244] = aux_sym_string_repeat1;
	v->a[90245] = state(1869);
	v->a[90246] = 4;
	v->a[90247] = sym_arithmetic_expansion;
	v->a[90248] = sym_simple_expansion;
	v->a[90249] = sym_expansion;
	v->a[90250] = sym_command_substitution;
	v->a[90251] = 4;
	v->a[90252] = actions(3);
	v->a[90253] = 1;
	v->a[90254] = sym_comment;
	v->a[90255] = actions(439);
	v->a[90256] = 1;
	v->a[90257] = sym_variable_name;
	v->a[90258] = actions(437);
	v->a[90259] = 2;
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = aux_sym__simple_variable_name_token1;
	v->a[90261] = aux_sym__multiline_variable_name_token1;
	v->a[90262] = actions(435);
	v->a[90263] = 9;
	v->a[90264] = anon_sym_BANG;
	v->a[90265] = anon_sym_DASH;
	v->a[90266] = anon_sym_STAR;
	v->a[90267] = anon_sym_QMARK;
	v->a[90268] = anon_sym_DOLLAR;
	v->a[90269] = anon_sym_POUND;
	v->a[90270] = anon_sym_AT;
	v->a[90271] = anon_sym_0;
	v->a[90272] = anon_sym__;
	v->a[90273] = 10;
	v->a[90274] = actions(3);
	v->a[90275] = 1;
	v->a[90276] = sym_comment;
	v->a[90277] = actions(3712);
	v->a[90278] = 1;
	v->a[90279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = actions(3716);
	v->a[90281] = 1;
	v->a[90282] = sym_string_content;
	v->a[90283] = actions(3718);
	v->a[90284] = 1;
	v->a[90285] = anon_sym_DOLLAR_LBRACE;
	v->a[90286] = actions(3720);
	v->a[90287] = 1;
	v->a[90288] = anon_sym_DOLLAR_LPAREN;
	v->a[90289] = actions(3722);
	v->a[90290] = 1;
	v->a[90291] = anon_sym_BQUOTE;
	v->a[90292] = actions(3958);
	v->a[90293] = 1;
	v->a[90294] = anon_sym_DOLLAR;
	v->a[90295] = actions(3960);
	v->a[90296] = 1;
	v->a[90297] = anon_sym_DQUOTE;
	v->a[90298] = state(1818);
	v->a[90299] = 1;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
