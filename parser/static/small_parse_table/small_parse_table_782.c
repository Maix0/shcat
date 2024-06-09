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
	v->a[78201] = anon_sym_DOLLAR_LBRACE;
	v->a[78202] = actions(773);
	v->a[78203] = 1;
	v->a[78204] = anon_sym_DOLLAR_LPAREN;
	v->a[78205] = actions(775);
	v->a[78206] = 1;
	v->a[78207] = anon_sym_BQUOTE;
	v->a[78208] = actions(955);
	v->a[78209] = 2;
	v->a[78210] = sym_raw_string;
	v->a[78211] = sym_word;
	v->a[78212] = state(246);
	v->a[78213] = 2;
	v->a[78214] = sym_concatenation;
	v->a[78215] = aux_sym_for_statement_repeat1;
	v->a[78216] = state(566);
	v->a[78217] = 6;
	v->a[78218] = sym_arithmetic_expansion;
	v->a[78219] = sym_string;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = sym_number;
	v->a[78221] = sym_simple_expansion;
	v->a[78222] = sym_expansion;
	v->a[78223] = sym_command_substitution;
	v->a[78224] = 12;
	v->a[78225] = actions(3);
	v->a[78226] = 1;
	v->a[78227] = sym_comment;
	v->a[78228] = actions(3180);
	v->a[78229] = 1;
	v->a[78230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78231] = actions(3182);
	v->a[78232] = 1;
	v->a[78233] = anon_sym_DOLLAR;
	v->a[78234] = actions(3184);
	v->a[78235] = 1;
	v->a[78236] = anon_sym_DQUOTE;
	v->a[78237] = actions(3186);
	v->a[78238] = 1;
	v->a[78239] = aux_sym_number_token1;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = actions(3188);
	v->a[78241] = 1;
	v->a[78242] = aux_sym_number_token2;
	v->a[78243] = actions(3190);
	v->a[78244] = 1;
	v->a[78245] = anon_sym_DOLLAR_LBRACE;
	v->a[78246] = actions(3192);
	v->a[78247] = 1;
	v->a[78248] = anon_sym_DOLLAR_LPAREN;
	v->a[78249] = actions(3194);
	v->a[78250] = 1;
	v->a[78251] = anon_sym_BQUOTE;
	v->a[78252] = actions(3196);
	v->a[78253] = 1;
	v->a[78254] = sym__bare_dollar;
	v->a[78255] = actions(3178);
	v->a[78256] = 3;
	v->a[78257] = sym_raw_string;
	v->a[78258] = sym__comment_word;
	v->a[78259] = sym_word;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = state(1879);
	v->a[78261] = 6;
	v->a[78262] = sym_arithmetic_expansion;
	v->a[78263] = sym_string;
	v->a[78264] = sym_number;
	v->a[78265] = sym_simple_expansion;
	v->a[78266] = sym_expansion;
	v->a[78267] = sym_command_substitution;
	v->a[78268] = 12;
	v->a[78269] = actions(3);
	v->a[78270] = 1;
	v->a[78271] = sym_comment;
	v->a[78272] = actions(2873);
	v->a[78273] = 1;
	v->a[78274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78275] = actions(2877);
	v->a[78276] = 1;
	v->a[78277] = anon_sym_DQUOTE;
	v->a[78278] = actions(2879);
	v->a[78279] = 1;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = aux_sym_number_token1;
	v->a[78281] = actions(2881);
	v->a[78282] = 1;
	v->a[78283] = aux_sym_number_token2;
	v->a[78284] = actions(2883);
	v->a[78285] = 1;
	v->a[78286] = anon_sym_DOLLAR_LBRACE;
	v->a[78287] = actions(2885);
	v->a[78288] = 1;
	v->a[78289] = anon_sym_DOLLAR_LPAREN;
	v->a[78290] = actions(2887);
	v->a[78291] = 1;
	v->a[78292] = anon_sym_BQUOTE;
	v->a[78293] = actions(3073);
	v->a[78294] = 1;
	v->a[78295] = sym__bare_dollar;
	v->a[78296] = actions(3198);
	v->a[78297] = 1;
	v->a[78298] = anon_sym_DOLLAR;
	v->a[78299] = actions(3071);
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
