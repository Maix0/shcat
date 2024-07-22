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
	v->a[68200] = actions(2448);
	v->a[68201] = 1;
	v->a[68202] = sym__bare_dollar;
	v->a[68203] = actions(2721);
	v->a[68204] = 1;
	v->a[68205] = anon_sym_DOLLAR;
	v->a[68206] = actions(2446);
	v->a[68207] = 5;
	v->a[68208] = aux_sym_concatenation_token1;
	v->a[68209] = sym_raw_string;
	v->a[68210] = sym_number;
	v->a[68211] = sym__comment_word;
	v->a[68212] = sym_word;
	v->a[68213] = state(818);
	v->a[68214] = 5;
	v->a[68215] = sym_arithmetic_expansion;
	v->a[68216] = sym_string;
	v->a[68217] = sym_simple_expansion;
	v->a[68218] = sym_expansion;
	v->a[68219] = sym_command_substitution;
	small_parse_table_3411(v);
}

void	small_parse_table_3411(t_small_parse_table_array *v)
{
	v->a[68220] = 11;
	v->a[68221] = actions(3);
	v->a[68222] = 1;
	v->a[68223] = sym_comment;
	v->a[68224] = actions(1724);
	v->a[68225] = 1;
	v->a[68226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68227] = actions(1726);
	v->a[68228] = 1;
	v->a[68229] = anon_sym_DOLLAR;
	v->a[68230] = actions(1728);
	v->a[68231] = 1;
	v->a[68232] = anon_sym_DQUOTE;
	v->a[68233] = actions(1730);
	v->a[68234] = 1;
	v->a[68235] = anon_sym_DOLLAR_LBRACE;
	v->a[68236] = actions(1732);
	v->a[68237] = 1;
	v->a[68238] = anon_sym_DOLLAR_LPAREN;
	v->a[68239] = actions(1734);
	small_parse_table_3412(v);
}

void	small_parse_table_3412(t_small_parse_table_array *v)
{
	v->a[68240] = 1;
	v->a[68241] = anon_sym_BQUOTE;
	v->a[68242] = actions(1736);
	v->a[68243] = 1;
	v->a[68244] = sym_extglob_pattern;
	v->a[68245] = state(1878);
	v->a[68246] = 2;
	v->a[68247] = sym_concatenation;
	v->a[68248] = sym__extglob_blob;
	v->a[68249] = actions(2723);
	v->a[68250] = 3;
	v->a[68251] = sym_raw_string;
	v->a[68252] = sym_number;
	v->a[68253] = sym_word;
	v->a[68254] = state(1792);
	v->a[68255] = 5;
	v->a[68256] = sym_arithmetic_expansion;
	v->a[68257] = sym_string;
	v->a[68258] = sym_simple_expansion;
	v->a[68259] = sym_expansion;
	small_parse_table_3413(v);
}

void	small_parse_table_3413(t_small_parse_table_array *v)
{
	v->a[68260] = sym_command_substitution;
	v->a[68261] = 5;
	v->a[68262] = actions(501);
	v->a[68263] = 1;
	v->a[68264] = sym_comment;
	v->a[68265] = state(1236);
	v->a[68266] = 1;
	v->a[68267] = aux_sym_concatenation_repeat1;
	v->a[68268] = actions(2413);
	v->a[68269] = 2;
	v->a[68270] = sym__concat;
	v->a[68271] = aux_sym_concatenation_token1;
	v->a[68272] = actions(1202);
	v->a[68273] = 4;
	v->a[68274] = anon_sym_PIPE;
	v->a[68275] = anon_sym_LT;
	v->a[68276] = anon_sym_GT;
	v->a[68277] = anon_sym_LT_LT;
	v->a[68278] = actions(1200);
	v->a[68279] = 10;
	small_parse_table_3414(v);
}

void	small_parse_table_3414(t_small_parse_table_array *v)
{
	v->a[68280] = sym_file_descriptor;
	v->a[68281] = sym_variable_name;
	v->a[68282] = anon_sym_AMP_AMP;
	v->a[68283] = anon_sym_PIPE_PIPE;
	v->a[68284] = anon_sym_GT_GT;
	v->a[68285] = anon_sym_LT_AMP;
	v->a[68286] = anon_sym_GT_AMP;
	v->a[68287] = anon_sym_GT_PIPE;
	v->a[68288] = anon_sym_LT_GT;
	v->a[68289] = anon_sym_LT_LT_DASH;
	v->a[68290] = 10;
	v->a[68291] = actions(3);
	v->a[68292] = 1;
	v->a[68293] = sym_comment;
	v->a[68294] = actions(55);
	v->a[68295] = 1;
	v->a[68296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68297] = actions(57);
	v->a[68298] = 1;
	v->a[68299] = anon_sym_DOLLAR;
	small_parse_table_3415(v);
}

/* EOF small_parse_table_682.c */
