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
	v->a[78200] = sym_arithmetic_expansion;
	v->a[78201] = sym_string;
	v->a[78202] = sym_simple_expansion;
	v->a[78203] = sym_expansion;
	v->a[78204] = sym_command_substitution;
	v->a[78205] = 10;
	v->a[78206] = actions(3);
	v->a[78207] = 1;
	v->a[78208] = sym_comment;
	v->a[78209] = actions(2719);
	v->a[78210] = 1;
	v->a[78211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78212] = actions(2721);
	v->a[78213] = 1;
	v->a[78214] = anon_sym_DOLLAR;
	v->a[78215] = actions(2723);
	v->a[78216] = 1;
	v->a[78217] = anon_sym_DQUOTE;
	v->a[78218] = actions(2725);
	v->a[78219] = 1;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = anon_sym_DOLLAR_LBRACE;
	v->a[78221] = actions(2727);
	v->a[78222] = 1;
	v->a[78223] = anon_sym_DOLLAR_LPAREN;
	v->a[78224] = actions(2729);
	v->a[78225] = 1;
	v->a[78226] = anon_sym_BQUOTE;
	v->a[78227] = actions(2765);
	v->a[78228] = 1;
	v->a[78229] = sym__bare_dollar;
	v->a[78230] = actions(2763);
	v->a[78231] = 5;
	v->a[78232] = aux_sym_concatenation_token1;
	v->a[78233] = sym_raw_string;
	v->a[78234] = sym_number;
	v->a[78235] = sym__comment_word;
	v->a[78236] = sym_word;
	v->a[78237] = state(524);
	v->a[78238] = 5;
	v->a[78239] = sym_arithmetic_expansion;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = sym_string;
	v->a[78241] = sym_simple_expansion;
	v->a[78242] = sym_expansion;
	v->a[78243] = sym_command_substitution;
	v->a[78244] = 10;
	v->a[78245] = actions(3);
	v->a[78246] = 1;
	v->a[78247] = sym_comment;
	v->a[78248] = actions(59);
	v->a[78249] = 1;
	v->a[78250] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78251] = actions(61);
	v->a[78252] = 1;
	v->a[78253] = anon_sym_DOLLAR;
	v->a[78254] = actions(63);
	v->a[78255] = 1;
	v->a[78256] = anon_sym_DQUOTE;
	v->a[78257] = actions(67);
	v->a[78258] = 1;
	v->a[78259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = actions(69);
	v->a[78261] = 1;
	v->a[78262] = anon_sym_DOLLAR_LPAREN;
	v->a[78263] = actions(71);
	v->a[78264] = 1;
	v->a[78265] = anon_sym_BQUOTE;
	v->a[78266] = actions(2769);
	v->a[78267] = 1;
	v->a[78268] = sym__bare_dollar;
	v->a[78269] = actions(2767);
	v->a[78270] = 5;
	v->a[78271] = aux_sym_concatenation_token1;
	v->a[78272] = sym_raw_string;
	v->a[78273] = sym_number;
	v->a[78274] = sym__comment_word;
	v->a[78275] = sym_word;
	v->a[78276] = state(380);
	v->a[78277] = 5;
	v->a[78278] = sym_arithmetic_expansion;
	v->a[78279] = sym_string;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = sym_simple_expansion;
	v->a[78281] = sym_expansion;
	v->a[78282] = sym_command_substitution;
	v->a[78283] = 10;
	v->a[78284] = actions(3);
	v->a[78285] = 1;
	v->a[78286] = sym_comment;
	v->a[78287] = actions(2773);
	v->a[78288] = 1;
	v->a[78289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78290] = actions(2775);
	v->a[78291] = 1;
	v->a[78292] = anon_sym_DOLLAR;
	v->a[78293] = actions(2777);
	v->a[78294] = 1;
	v->a[78295] = anon_sym_DQUOTE;
	v->a[78296] = actions(2779);
	v->a[78297] = 1;
	v->a[78298] = anon_sym_DOLLAR_LBRACE;
	v->a[78299] = actions(2781);
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
