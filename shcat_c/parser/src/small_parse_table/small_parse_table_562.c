/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_562.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2810(t_small_parse_table_array *v)
{
	v->a[56200] = actions(5080);
	v->a[56201] = 1;
	v->a[56202] = aux_sym_concatenation_token1;
	v->a[56203] = actions(5082);
	v->a[56204] = 1;
	v->a[56205] = sym__concat;
	v->a[56206] = state(1177);
	v->a[56207] = 1;
	v->a[56208] = aux_sym_concatenation_repeat1;
	v->a[56209] = actions(4469);
	v->a[56210] = 5;
	v->a[56211] = sym_file_descriptor;
	v->a[56212] = sym_test_operator;
	v->a[56213] = sym__bare_dollar;
	v->a[56214] = sym__brace_start;
	v->a[56215] = aux_sym_heredoc_redirect_token1;
	v->a[56216] = actions(4467);
	v->a[56217] = 39;
	v->a[56218] = anon_sym_LPAREN_LPAREN;
	v->a[56219] = anon_sym_SEMI;
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = anon_sym_PIPE_PIPE;
	v->a[56221] = anon_sym_AMP_AMP;
	v->a[56222] = anon_sym_PIPE;
	v->a[56223] = anon_sym_AMP;
	v->a[56224] = anon_sym_EQ_EQ;
	v->a[56225] = anon_sym_LT;
	v->a[56226] = anon_sym_GT;
	v->a[56227] = anon_sym_LT_LT;
	v->a[56228] = anon_sym_GT_GT;
	v->a[56229] = anon_sym_SEMI_SEMI;
	v->a[56230] = anon_sym_PIPE_AMP;
	v->a[56231] = anon_sym_EQ_TILDE;
	v->a[56232] = anon_sym_AMP_GT;
	v->a[56233] = anon_sym_AMP_GT_GT;
	v->a[56234] = anon_sym_LT_AMP;
	v->a[56235] = anon_sym_GT_AMP;
	v->a[56236] = anon_sym_GT_PIPE;
	v->a[56237] = anon_sym_LT_AMP_DASH;
	v->a[56238] = anon_sym_GT_AMP_DASH;
	v->a[56239] = anon_sym_LT_LT_DASH;
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = anon_sym_LT_LT_LT;
	v->a[56241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56242] = anon_sym_DOLLAR_LBRACK;
	v->a[56243] = anon_sym_DOLLAR;
	v->a[56244] = sym__special_character;
	v->a[56245] = anon_sym_DQUOTE;
	v->a[56246] = sym_raw_string;
	v->a[56247] = sym_ansi_c_string;
	v->a[56248] = aux_sym_number_token1;
	v->a[56249] = aux_sym_number_token2;
	v->a[56250] = anon_sym_DOLLAR_LBRACE;
	v->a[56251] = anon_sym_DOLLAR_LPAREN;
	v->a[56252] = anon_sym_BQUOTE;
	v->a[56253] = anon_sym_DOLLAR_BQUOTE;
	v->a[56254] = anon_sym_LT_LPAREN;
	v->a[56255] = anon_sym_GT_LPAREN;
	v->a[56256] = sym_word;
	v->a[56257] = 3;
	v->a[56258] = actions(3);
	v->a[56259] = 1;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = sym_comment;
	v->a[56261] = actions(1318);
	v->a[56262] = 7;
	v->a[56263] = sym_file_descriptor;
	v->a[56264] = sym__concat;
	v->a[56265] = sym_test_operator;
	v->a[56266] = sym__bare_dollar;
	v->a[56267] = sym__brace_start;
	v->a[56268] = ts_builtin_sym_end;
	v->a[56269] = aux_sym_heredoc_redirect_token1;
	v->a[56270] = actions(1316);
	v->a[56271] = 40;
	v->a[56272] = anon_sym_LPAREN_LPAREN;
	v->a[56273] = anon_sym_SEMI;
	v->a[56274] = anon_sym_PIPE_PIPE;
	v->a[56275] = anon_sym_AMP_AMP;
	v->a[56276] = anon_sym_PIPE;
	v->a[56277] = anon_sym_AMP;
	v->a[56278] = anon_sym_EQ_EQ;
	v->a[56279] = anon_sym_LT;
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = anon_sym_GT;
	v->a[56281] = anon_sym_LT_LT;
	v->a[56282] = anon_sym_GT_GT;
	v->a[56283] = anon_sym_SEMI_SEMI;
	v->a[56284] = anon_sym_PIPE_AMP;
	v->a[56285] = anon_sym_EQ_TILDE;
	v->a[56286] = anon_sym_AMP_GT;
	v->a[56287] = anon_sym_AMP_GT_GT;
	v->a[56288] = anon_sym_LT_AMP;
	v->a[56289] = anon_sym_GT_AMP;
	v->a[56290] = anon_sym_GT_PIPE;
	v->a[56291] = anon_sym_LT_AMP_DASH;
	v->a[56292] = anon_sym_GT_AMP_DASH;
	v->a[56293] = anon_sym_LT_LT_DASH;
	v->a[56294] = anon_sym_LT_LT_LT;
	v->a[56295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56296] = anon_sym_DOLLAR_LBRACK;
	v->a[56297] = aux_sym_concatenation_token1;
	v->a[56298] = anon_sym_DOLLAR;
	v->a[56299] = sym__special_character;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
