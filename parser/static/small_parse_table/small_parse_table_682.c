/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_682.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3410(t_small_parse_table_array *v)
{
	v->a[68200] = actions(2544);
	v->a[68201] = 1;
	v->a[68202] = sym__comment_word;
	v->a[68203] = actions(2546);
	v->a[68204] = 1;
	v->a[68205] = sym__empty_value;
	v->a[68206] = state(622);
	v->a[68207] = 1;
	v->a[68208] = sym_concatenation;
	v->a[68209] = actions(2648);
	v->a[68210] = 3;
	v->a[68211] = sym_raw_string;
	v->a[68212] = sym_number;
	v->a[68213] = sym_word;
	v->a[68214] = state(492);
	v->a[68215] = 5;
	v->a[68216] = sym_arithmetic_expansion;
	v->a[68217] = sym_string;
	v->a[68218] = sym_simple_expansion;
	v->a[68219] = sym_expansion;
	small_parse_table_3411(v);
}

void	small_parse_table_3411(t_small_parse_table_array *v)
{
	v->a[68220] = sym_command_substitution;
	v->a[68221] = 10;
	v->a[68222] = actions(3);
	v->a[68223] = 1;
	v->a[68224] = sym_comment;
	v->a[68225] = actions(459);
	v->a[68226] = 1;
	v->a[68227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68228] = actions(463);
	v->a[68229] = 1;
	v->a[68230] = anon_sym_DQUOTE;
	v->a[68231] = actions(465);
	v->a[68232] = 1;
	v->a[68233] = anon_sym_DOLLAR_LBRACE;
	v->a[68234] = actions(467);
	v->a[68235] = 1;
	v->a[68236] = anon_sym_DOLLAR_LPAREN;
	v->a[68237] = actions(469);
	v->a[68238] = 1;
	v->a[68239] = anon_sym_BQUOTE;
	small_parse_table_3412(v);
}

void	small_parse_table_3412(t_small_parse_table_array *v)
{
	v->a[68240] = actions(2518);
	v->a[68241] = 1;
	v->a[68242] = sym__bare_dollar;
	v->a[68243] = actions(2650);
	v->a[68244] = 1;
	v->a[68245] = anon_sym_DOLLAR;
	v->a[68246] = actions(2514);
	v->a[68247] = 5;
	v->a[68248] = aux_sym_concatenation_token1;
	v->a[68249] = sym_raw_string;
	v->a[68250] = sym_number;
	v->a[68251] = sym__comment_word;
	v->a[68252] = sym_word;
	v->a[68253] = state(524);
	v->a[68254] = 5;
	v->a[68255] = sym_arithmetic_expansion;
	v->a[68256] = sym_string;
	v->a[68257] = sym_simple_expansion;
	v->a[68258] = sym_expansion;
	v->a[68259] = sym_command_substitution;
	small_parse_table_3413(v);
}

void	small_parse_table_3413(t_small_parse_table_array *v)
{
	v->a[68260] = 10;
	v->a[68261] = actions(3);
	v->a[68262] = 1;
	v->a[68263] = sym_comment;
	v->a[68264] = actions(2400);
	v->a[68265] = 1;
	v->a[68266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68267] = actions(2404);
	v->a[68268] = 1;
	v->a[68269] = anon_sym_DQUOTE;
	v->a[68270] = actions(2406);
	v->a[68271] = 1;
	v->a[68272] = anon_sym_DOLLAR_LBRACE;
	v->a[68273] = actions(2408);
	v->a[68274] = 1;
	v->a[68275] = anon_sym_DOLLAR_LPAREN;
	v->a[68276] = actions(2410);
	v->a[68277] = 1;
	v->a[68278] = anon_sym_BQUOTE;
	v->a[68279] = actions(2412);
	small_parse_table_3414(v);
}

void	small_parse_table_3414(t_small_parse_table_array *v)
{
	v->a[68280] = 1;
	v->a[68281] = sym__bare_dollar;
	v->a[68282] = actions(2652);
	v->a[68283] = 1;
	v->a[68284] = anon_sym_DOLLAR;
	v->a[68285] = actions(2398);
	v->a[68286] = 5;
	v->a[68287] = aux_sym_concatenation_token1;
	v->a[68288] = sym_raw_string;
	v->a[68289] = sym_number;
	v->a[68290] = sym__comment_word;
	v->a[68291] = sym_word;
	v->a[68292] = state(454);
	v->a[68293] = 5;
	v->a[68294] = sym_arithmetic_expansion;
	v->a[68295] = sym_string;
	v->a[68296] = sym_simple_expansion;
	v->a[68297] = sym_expansion;
	v->a[68298] = sym_command_substitution;
	v->a[68299] = 10;
	small_parse_table_3415(v);
}

/* EOF small_parse_table_682.c */
