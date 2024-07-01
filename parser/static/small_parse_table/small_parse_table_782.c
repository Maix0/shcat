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
	v->a[78200] = 1;
	v->a[78201] = anon_sym_DOLLAR_LPAREN;
	v->a[78202] = actions(2808);
	v->a[78203] = 1;
	v->a[78204] = anon_sym_BQUOTE;
	v->a[78205] = actions(2810);
	v->a[78206] = 1;
	v->a[78207] = sym__bare_dollar;
	v->a[78208] = actions(2929);
	v->a[78209] = 1;
	v->a[78210] = anon_sym_DOLLAR;
	v->a[78211] = actions(2796);
	v->a[78212] = 5;
	v->a[78213] = aux_sym_concatenation_token1;
	v->a[78214] = sym_raw_string;
	v->a[78215] = sym_number;
	v->a[78216] = sym__comment_word;
	v->a[78217] = sym_word;
	v->a[78218] = state(1479);
	v->a[78219] = 5;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = sym_arithmetic_expansion;
	v->a[78221] = sym_string;
	v->a[78222] = sym_simple_expansion;
	v->a[78223] = sym_expansion;
	v->a[78224] = sym_command_substitution;
	v->a[78225] = 10;
	v->a[78226] = actions(3);
	v->a[78227] = 1;
	v->a[78228] = sym_comment;
	v->a[78229] = actions(910);
	v->a[78230] = 1;
	v->a[78231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78232] = actions(914);
	v->a[78233] = 1;
	v->a[78234] = anon_sym_DQUOTE;
	v->a[78235] = actions(916);
	v->a[78236] = 1;
	v->a[78237] = anon_sym_DOLLAR_LBRACE;
	v->a[78238] = actions(918);
	v->a[78239] = 1;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = anon_sym_DOLLAR_LPAREN;
	v->a[78241] = actions(920);
	v->a[78242] = 1;
	v->a[78243] = anon_sym_BQUOTE;
	v->a[78244] = actions(2577);
	v->a[78245] = 1;
	v->a[78246] = sym__bare_dollar;
	v->a[78247] = actions(3016);
	v->a[78248] = 1;
	v->a[78249] = anon_sym_DOLLAR;
	v->a[78250] = actions(2573);
	v->a[78251] = 5;
	v->a[78252] = aux_sym_concatenation_token1;
	v->a[78253] = sym_raw_string;
	v->a[78254] = sym_number;
	v->a[78255] = sym__comment_word;
	v->a[78256] = sym_word;
	v->a[78257] = state(1040);
	v->a[78258] = 5;
	v->a[78259] = sym_arithmetic_expansion;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = sym_string;
	v->a[78261] = sym_simple_expansion;
	v->a[78262] = sym_expansion;
	v->a[78263] = sym_command_substitution;
	v->a[78264] = 5;
	v->a[78265] = actions(870);
	v->a[78266] = 1;
	v->a[78267] = sym_comment;
	v->a[78268] = actions(3018);
	v->a[78269] = 1;
	v->a[78270] = sym_variable_name;
	v->a[78271] = state(1533);
	v->a[78272] = 2;
	v->a[78273] = sym_variable_assignment;
	v->a[78274] = aux_sym__variable_assignments_repeat1;
	v->a[78275] = actions(2069);
	v->a[78276] = 6;
	v->a[78277] = anon_sym_PIPE;
	v->a[78278] = anon_sym_LT;
	v->a[78279] = anon_sym_GT;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = anon_sym_LT_AMP;
	v->a[78281] = anon_sym_GT_AMP;
	v->a[78282] = anon_sym_LT_LT;
	v->a[78283] = actions(2067);
	v->a[78284] = 8;
	v->a[78285] = sym_file_descriptor;
	v->a[78286] = anon_sym_AMP_AMP;
	v->a[78287] = anon_sym_PIPE_PIPE;
	v->a[78288] = anon_sym_GT_GT;
	v->a[78289] = anon_sym_GT_PIPE;
	v->a[78290] = anon_sym_LT_AMP_DASH;
	v->a[78291] = anon_sym_GT_AMP_DASH;
	v->a[78292] = anon_sym_LT_LT_DASH;
	v->a[78293] = 10;
	v->a[78294] = actions(3);
	v->a[78295] = 1;
	v->a[78296] = sym_comment;
	v->a[78297] = actions(2685);
	v->a[78298] = 1;
	v->a[78299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
