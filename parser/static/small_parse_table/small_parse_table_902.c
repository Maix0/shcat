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
	v->a[90200] = sym_command_substitution;
	v->a[90201] = 10;
	v->a[90202] = actions(3);
	v->a[90203] = 1;
	v->a[90204] = sym_comment;
	v->a[90205] = actions(884);
	v->a[90206] = 1;
	v->a[90207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90208] = actions(886);
	v->a[90209] = 1;
	v->a[90210] = anon_sym_DOLLAR;
	v->a[90211] = actions(888);
	v->a[90212] = 1;
	v->a[90213] = anon_sym_DQUOTE;
	v->a[90214] = actions(890);
	v->a[90215] = 1;
	v->a[90216] = anon_sym_DOLLAR_LBRACE;
	v->a[90217] = actions(892);
	v->a[90218] = 1;
	v->a[90219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = actions(894);
	v->a[90221] = 1;
	v->a[90222] = anon_sym_BQUOTE;
	v->a[90223] = state(1549);
	v->a[90224] = 2;
	v->a[90225] = sym_concatenation;
	v->a[90226] = aux_sym_for_statement_repeat1;
	v->a[90227] = actions(2924);
	v->a[90228] = 3;
	v->a[90229] = sym_raw_string;
	v->a[90230] = sym_number;
	v->a[90231] = sym_word;
	v->a[90232] = state(1745);
	v->a[90233] = 5;
	v->a[90234] = sym_arithmetic_expansion;
	v->a[90235] = sym_string;
	v->a[90236] = sym_simple_expansion;
	v->a[90237] = sym_expansion;
	v->a[90238] = sym_command_substitution;
	v->a[90239] = 10;
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = actions(3);
	v->a[90241] = 1;
	v->a[90242] = sym_comment;
	v->a[90243] = actions(3266);
	v->a[90244] = 1;
	v->a[90245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90246] = actions(3268);
	v->a[90247] = 1;
	v->a[90248] = anon_sym_DOLLAR;
	v->a[90249] = actions(3270);
	v->a[90250] = 1;
	v->a[90251] = anon_sym_DQUOTE;
	v->a[90252] = actions(3272);
	v->a[90253] = 1;
	v->a[90254] = anon_sym_DOLLAR_LBRACE;
	v->a[90255] = actions(3274);
	v->a[90256] = 1;
	v->a[90257] = anon_sym_DOLLAR_LPAREN;
	v->a[90258] = actions(3276);
	v->a[90259] = 1;
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = anon_sym_BQUOTE;
	v->a[90261] = state(210);
	v->a[90262] = 2;
	v->a[90263] = sym_concatenation;
	v->a[90264] = aux_sym_for_statement_repeat1;
	v->a[90265] = actions(3606);
	v->a[90266] = 3;
	v->a[90267] = sym_raw_string;
	v->a[90268] = sym_number;
	v->a[90269] = sym_word;
	v->a[90270] = state(364);
	v->a[90271] = 5;
	v->a[90272] = sym_arithmetic_expansion;
	v->a[90273] = sym_string;
	v->a[90274] = sym_simple_expansion;
	v->a[90275] = sym_expansion;
	v->a[90276] = sym_command_substitution;
	v->a[90277] = 3;
	v->a[90278] = actions(1094);
	v->a[90279] = 1;
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = sym_comment;
	v->a[90281] = actions(2614);
	v->a[90282] = 7;
	v->a[90283] = anon_sym_PIPE;
	v->a[90284] = anon_sym_LT;
	v->a[90285] = anon_sym_GT;
	v->a[90286] = anon_sym_AMP_GT;
	v->a[90287] = anon_sym_LT_AMP;
	v->a[90288] = anon_sym_GT_AMP;
	v->a[90289] = anon_sym_LT_LT;
	v->a[90290] = actions(2612);
	v->a[90291] = 9;
	v->a[90292] = sym_file_descriptor;
	v->a[90293] = anon_sym_AMP_AMP;
	v->a[90294] = anon_sym_PIPE_PIPE;
	v->a[90295] = anon_sym_GT_GT;
	v->a[90296] = anon_sym_AMP_GT_GT;
	v->a[90297] = anon_sym_GT_PIPE;
	v->a[90298] = anon_sym_LT_AMP_DASH;
	v->a[90299] = anon_sym_GT_AMP_DASH;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
