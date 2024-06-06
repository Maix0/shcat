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
	v->a[78200] = anon_sym_STAR;
	v->a[78201] = anon_sym_SLASH;
	v->a[78202] = anon_sym_PERCENT;
	v->a[78203] = actions(3159);
	v->a[78204] = 20;
	v->a[78205] = anon_sym_RPAREN;
	v->a[78206] = anon_sym_AMP_AMP;
	v->a[78207] = anon_sym_PIPE_PIPE;
	v->a[78208] = anon_sym_PLUS_EQ;
	v->a[78209] = anon_sym_DASH_EQ;
	v->a[78210] = anon_sym_STAR_EQ;
	v->a[78211] = anon_sym_SLASH_EQ;
	v->a[78212] = anon_sym_PERCENT_EQ;
	v->a[78213] = anon_sym_LT_LT_EQ;
	v->a[78214] = anon_sym_GT_GT_EQ;
	v->a[78215] = anon_sym_AMP_EQ;
	v->a[78216] = anon_sym_CARET_EQ;
	v->a[78217] = anon_sym_PIPE_EQ;
	v->a[78218] = anon_sym_EQ_EQ;
	v->a[78219] = anon_sym_BANG_EQ;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = anon_sym_LT_EQ;
	v->a[78221] = anon_sym_GT_EQ;
	v->a[78222] = anon_sym_QMARK;
	v->a[78223] = anon_sym_PLUS_PLUS2;
	v->a[78224] = anon_sym_DASH_DASH2;
	v->a[78225] = 3;
	v->a[78226] = actions(57);
	v->a[78227] = 1;
	v->a[78228] = sym_comment;
	v->a[78229] = actions(3064);
	v->a[78230] = 13;
	v->a[78231] = anon_sym_PIPE;
	v->a[78232] = anon_sym_LT;
	v->a[78233] = anon_sym_GT;
	v->a[78234] = anon_sym_AMP_GT;
	v->a[78235] = anon_sym_LT_AMP;
	v->a[78236] = anon_sym_GT_AMP;
	v->a[78237] = anon_sym_LT_LT;
	v->a[78238] = anon_sym_DOLLAR;
	v->a[78239] = aux_sym_number_token1;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = aux_sym_number_token2;
	v->a[78241] = anon_sym_DOLLAR_LPAREN;
	v->a[78242] = anon_sym_BQUOTE;
	v->a[78243] = sym_word;
	v->a[78244] = actions(3066);
	v->a[78245] = 20;
	v->a[78246] = sym_file_descriptor;
	v->a[78247] = sym__concat;
	v->a[78248] = sym_test_operator;
	v->a[78249] = sym__brace_start;
	v->a[78250] = anon_sym_PIPE_AMP;
	v->a[78251] = anon_sym_AMP_AMP;
	v->a[78252] = anon_sym_PIPE_PIPE;
	v->a[78253] = anon_sym_GT_GT;
	v->a[78254] = anon_sym_AMP_GT_GT;
	v->a[78255] = anon_sym_GT_PIPE;
	v->a[78256] = anon_sym_LT_AMP_DASH;
	v->a[78257] = anon_sym_GT_AMP_DASH;
	v->a[78258] = anon_sym_LT_LT_DASH;
	v->a[78259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = aux_sym_concatenation_token1;
	v->a[78261] = sym__special_character;
	v->a[78262] = anon_sym_DQUOTE;
	v->a[78263] = sym_raw_string;
	v->a[78264] = anon_sym_DOLLAR_LBRACE;
	v->a[78265] = anon_sym_DOLLAR_BQUOTE;
	v->a[78266] = 5;
	v->a[78267] = actions(57);
	v->a[78268] = 1;
	v->a[78269] = sym_comment;
	v->a[78270] = actions(4512);
	v->a[78271] = 1;
	v->a[78272] = sym__special_character;
	v->a[78273] = state(1647);
	v->a[78274] = 1;
	v->a[78275] = aux_sym__literal_repeat1;
	v->a[78276] = actions(3564);
	v->a[78277] = 12;
	v->a[78278] = anon_sym_PIPE;
	v->a[78279] = anon_sym_LT;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = anon_sym_GT;
	v->a[78281] = anon_sym_AMP_GT;
	v->a[78282] = anon_sym_LT_AMP;
	v->a[78283] = anon_sym_GT_AMP;
	v->a[78284] = anon_sym_LT_LT;
	v->a[78285] = anon_sym_DOLLAR;
	v->a[78286] = aux_sym_number_token1;
	v->a[78287] = aux_sym_number_token2;
	v->a[78288] = anon_sym_DOLLAR_LPAREN;
	v->a[78289] = sym_word;
	v->a[78290] = actions(3566);
	v->a[78291] = 19;
	v->a[78292] = sym_file_descriptor;
	v->a[78293] = sym_test_operator;
	v->a[78294] = sym__bare_dollar;
	v->a[78295] = sym__brace_start;
	v->a[78296] = anon_sym_PIPE_AMP;
	v->a[78297] = anon_sym_AMP_AMP;
	v->a[78298] = anon_sym_PIPE_PIPE;
	v->a[78299] = anon_sym_GT_GT;
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
