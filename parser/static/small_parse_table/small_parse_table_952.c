/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_952.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4760(t_small_parse_table_array *v)
{
	v->a[95200] = actions(3950);
	v->a[95201] = 2;
	v->a[95202] = anon_sym_LT_AMP_DASH;
	v->a[95203] = anon_sym_GT_AMP_DASH;
	v->a[95204] = actions(3948);
	v->a[95205] = 3;
	v->a[95206] = anon_sym_GT_GT;
	v->a[95207] = anon_sym_AMP_GT_GT;
	v->a[95208] = anon_sym_GT_PIPE;
	v->a[95209] = actions(3946);
	v->a[95210] = 5;
	v->a[95211] = anon_sym_LT;
	v->a[95212] = anon_sym_GT;
	v->a[95213] = anon_sym_AMP_GT;
	v->a[95214] = anon_sym_LT_AMP;
	v->a[95215] = anon_sym_GT_AMP;
	v->a[95216] = 10;
	v->a[95217] = actions(3);
	v->a[95218] = 1;
	v->a[95219] = sym_comment;
	small_parse_table_4761(v);
}

void	small_parse_table_4761(t_small_parse_table_array *v)
{
	v->a[95220] = actions(3856);
	v->a[95221] = 1;
	v->a[95222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95223] = actions(3862);
	v->a[95224] = 1;
	v->a[95225] = sym_string_content;
	v->a[95226] = actions(3864);
	v->a[95227] = 1;
	v->a[95228] = anon_sym_DOLLAR_LBRACE;
	v->a[95229] = actions(3866);
	v->a[95230] = 1;
	v->a[95231] = anon_sym_DOLLAR_LPAREN;
	v->a[95232] = actions(3868);
	v->a[95233] = 1;
	v->a[95234] = anon_sym_BQUOTE;
	v->a[95235] = actions(3956);
	v->a[95236] = 1;
	v->a[95237] = anon_sym_DOLLAR;
	v->a[95238] = actions(3958);
	v->a[95239] = 1;
	small_parse_table_4762(v);
}

void	small_parse_table_4762(t_small_parse_table_array *v)
{
	v->a[95240] = anon_sym_DQUOTE;
	v->a[95241] = state(1987);
	v->a[95242] = 1;
	v->a[95243] = aux_sym_string_repeat1;
	v->a[95244] = state(2107);
	v->a[95245] = 4;
	v->a[95246] = sym_arithmetic_expansion;
	v->a[95247] = sym_simple_expansion;
	v->a[95248] = sym_expansion;
	v->a[95249] = sym_command_substitution;
	v->a[95250] = 10;
	v->a[95251] = actions(3);
	v->a[95252] = 1;
	v->a[95253] = sym_comment;
	v->a[95254] = actions(3856);
	v->a[95255] = 1;
	v->a[95256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95257] = actions(3862);
	v->a[95258] = 1;
	v->a[95259] = sym_string_content;
	small_parse_table_4763(v);
}

void	small_parse_table_4763(t_small_parse_table_array *v)
{
	v->a[95260] = actions(3864);
	v->a[95261] = 1;
	v->a[95262] = anon_sym_DOLLAR_LBRACE;
	v->a[95263] = actions(3866);
	v->a[95264] = 1;
	v->a[95265] = anon_sym_DOLLAR_LPAREN;
	v->a[95266] = actions(3868);
	v->a[95267] = 1;
	v->a[95268] = anon_sym_BQUOTE;
	v->a[95269] = actions(3960);
	v->a[95270] = 1;
	v->a[95271] = anon_sym_DOLLAR;
	v->a[95272] = actions(3962);
	v->a[95273] = 1;
	v->a[95274] = anon_sym_DQUOTE;
	v->a[95275] = state(1972);
	v->a[95276] = 1;
	v->a[95277] = aux_sym_string_repeat1;
	v->a[95278] = state(2107);
	v->a[95279] = 4;
	small_parse_table_4764(v);
}

void	small_parse_table_4764(t_small_parse_table_array *v)
{
	v->a[95280] = sym_arithmetic_expansion;
	v->a[95281] = sym_simple_expansion;
	v->a[95282] = sym_expansion;
	v->a[95283] = sym_command_substitution;
	v->a[95284] = 4;
	v->a[95285] = actions(3);
	v->a[95286] = 1;
	v->a[95287] = sym_comment;
	v->a[95288] = actions(1832);
	v->a[95289] = 1;
	v->a[95290] = sym_variable_name;
	v->a[95291] = actions(1830);
	v->a[95292] = 2;
	v->a[95293] = aux_sym__simple_variable_name_token1;
	v->a[95294] = aux_sym__multiline_variable_name_token1;
	v->a[95295] = actions(1828);
	v->a[95296] = 9;
	v->a[95297] = anon_sym_BANG;
	v->a[95298] = anon_sym_DASH;
	v->a[95299] = anon_sym_STAR;
	small_parse_table_4765(v);
}

/* EOF small_parse_table_952.c */
