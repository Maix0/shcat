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
	v->a[78200] = anon_sym_AMP;
	v->a[78201] = anon_sym_LT;
	v->a[78202] = anon_sym_GT;
	v->a[78203] = anon_sym_LT_LT;
	v->a[78204] = anon_sym_GT_GT;
	v->a[78205] = anon_sym_SEMI_SEMI;
	v->a[78206] = anon_sym_SEMI_AMP;
	v->a[78207] = anon_sym_SEMI_SEMI_AMP;
	v->a[78208] = anon_sym_PIPE_AMP;
	v->a[78209] = anon_sym_AMP_GT;
	v->a[78210] = anon_sym_AMP_GT_GT;
	v->a[78211] = anon_sym_LT_AMP;
	v->a[78212] = anon_sym_GT_AMP;
	v->a[78213] = anon_sym_GT_PIPE;
	v->a[78214] = anon_sym_LT_AMP_DASH;
	v->a[78215] = anon_sym_GT_AMP_DASH;
	v->a[78216] = anon_sym_LT_LT_DASH;
	v->a[78217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78218] = anon_sym_DOLLAR_LBRACK;
	v->a[78219] = anon_sym_DOLLAR;
	small_parse_table_3911(v);
}

void	small_parse_table_3911(t_small_parse_table_array *v)
{
	v->a[78220] = sym__special_character;
	v->a[78221] = anon_sym_DQUOTE;
	v->a[78222] = sym_raw_string;
	v->a[78223] = sym_ansi_c_string;
	v->a[78224] = aux_sym_number_token1;
	v->a[78225] = aux_sym_number_token2;
	v->a[78226] = anon_sym_DOLLAR_LBRACE;
	v->a[78227] = anon_sym_DOLLAR_LPAREN;
	v->a[78228] = anon_sym_BQUOTE;
	v->a[78229] = anon_sym_DOLLAR_BQUOTE;
	v->a[78230] = anon_sym_LT_LPAREN;
	v->a[78231] = anon_sym_GT_LPAREN;
	v->a[78232] = sym_word;
	v->a[78233] = 6;
	v->a[78234] = actions(3);
	v->a[78235] = 1;
	v->a[78236] = sym_comment;
	v->a[78237] = actions(5638);
	v->a[78238] = 1;
	v->a[78239] = aux_sym_concatenation_token1;
	small_parse_table_3912(v);
}

void	small_parse_table_3912(t_small_parse_table_array *v)
{
	v->a[78240] = actions(5902);
	v->a[78241] = 1;
	v->a[78242] = sym__concat;
	v->a[78243] = state(1363);
	v->a[78244] = 1;
	v->a[78245] = aux_sym_concatenation_repeat1;
	v->a[78246] = actions(1267);
	v->a[78247] = 5;
	v->a[78248] = sym_file_descriptor;
	v->a[78249] = sym_variable_name;
	v->a[78250] = sym_test_operator;
	v->a[78251] = sym__brace_start;
	v->a[78252] = aux_sym_heredoc_redirect_token1;
	v->a[78253] = actions(1265);
	v->a[78254] = 37;
	v->a[78255] = anon_sym_LPAREN_LPAREN;
	v->a[78256] = anon_sym_SEMI;
	v->a[78257] = anon_sym_PIPE_PIPE;
	v->a[78258] = anon_sym_AMP_AMP;
	v->a[78259] = anon_sym_PIPE;
	small_parse_table_3913(v);
}

void	small_parse_table_3913(t_small_parse_table_array *v)
{
	v->a[78260] = anon_sym_AMP;
	v->a[78261] = anon_sym_LT;
	v->a[78262] = anon_sym_GT;
	v->a[78263] = anon_sym_LT_LT;
	v->a[78264] = anon_sym_GT_GT;
	v->a[78265] = anon_sym_SEMI_SEMI;
	v->a[78266] = anon_sym_PIPE_AMP;
	v->a[78267] = anon_sym_AMP_GT;
	v->a[78268] = anon_sym_AMP_GT_GT;
	v->a[78269] = anon_sym_LT_AMP;
	v->a[78270] = anon_sym_GT_AMP;
	v->a[78271] = anon_sym_GT_PIPE;
	v->a[78272] = anon_sym_LT_AMP_DASH;
	v->a[78273] = anon_sym_GT_AMP_DASH;
	v->a[78274] = anon_sym_LT_LT_DASH;
	v->a[78275] = anon_sym_LT_LT_LT;
	v->a[78276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78277] = anon_sym_DOLLAR_LBRACK;
	v->a[78278] = anon_sym_DOLLAR;
	v->a[78279] = sym__special_character;
	small_parse_table_3914(v);
}

void	small_parse_table_3914(t_small_parse_table_array *v)
{
	v->a[78280] = anon_sym_DQUOTE;
	v->a[78281] = sym_raw_string;
	v->a[78282] = sym_ansi_c_string;
	v->a[78283] = aux_sym_number_token1;
	v->a[78284] = aux_sym_number_token2;
	v->a[78285] = anon_sym_DOLLAR_LBRACE;
	v->a[78286] = anon_sym_DOLLAR_LPAREN;
	v->a[78287] = anon_sym_BQUOTE;
	v->a[78288] = anon_sym_DOLLAR_BQUOTE;
	v->a[78289] = anon_sym_LT_LPAREN;
	v->a[78290] = anon_sym_GT_LPAREN;
	v->a[78291] = sym_word;
	v->a[78292] = 6;
	v->a[78293] = actions(3);
	v->a[78294] = 1;
	v->a[78295] = sym_comment;
	v->a[78296] = actions(5638);
	v->a[78297] = 1;
	v->a[78298] = aux_sym_concatenation_token1;
	v->a[78299] = actions(5904);
	small_parse_table_3915(v);
}

/* EOF small_parse_table_782.c */
