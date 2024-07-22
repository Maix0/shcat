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
	v->a[56200] = 11;
	v->a[56201] = actions(3);
	v->a[56202] = 1;
	v->a[56203] = sym_comment;
	v->a[56204] = actions(782);
	v->a[56205] = 1;
	v->a[56206] = anon_sym_PIPE;
	v->a[56207] = actions(950);
	v->a[56208] = 1;
	v->a[56209] = ts_builtin_sym_end;
	v->a[56210] = actions(1882);
	v->a[56211] = 1;
	v->a[56212] = aux_sym_heredoc_redirect_token1;
	v->a[56213] = actions(1884);
	v->a[56214] = 1;
	v->a[56215] = sym_file_descriptor;
	v->a[56216] = state(721);
	v->a[56217] = 1;
	v->a[56218] = sym_terminator;
	v->a[56219] = actions(790);
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = 2;
	v->a[56221] = anon_sym_LT_LT;
	v->a[56222] = anon_sym_LT_LT_DASH;
	v->a[56223] = actions(808);
	v->a[56224] = 2;
	v->a[56225] = anon_sym_SEMI_SEMI;
	v->a[56226] = anon_sym_SEMI;
	v->a[56227] = actions(810);
	v->a[56228] = 2;
	v->a[56229] = anon_sym_AMP_AMP;
	v->a[56230] = anon_sym_PIPE_PIPE;
	v->a[56231] = state(1046);
	v->a[56232] = 3;
	v->a[56233] = sym_file_redirect;
	v->a[56234] = sym_heredoc_redirect;
	v->a[56235] = aux_sym_redirected_statement_repeat1;
	v->a[56236] = actions(1880);
	v->a[56237] = 7;
	v->a[56238] = anon_sym_LT;
	v->a[56239] = anon_sym_GT;
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = anon_sym_GT_GT;
	v->a[56241] = anon_sym_LT_AMP;
	v->a[56242] = anon_sym_GT_AMP;
	v->a[56243] = anon_sym_GT_PIPE;
	v->a[56244] = anon_sym_LT_GT;
	v->a[56245] = 11;
	v->a[56246] = actions(3);
	v->a[56247] = 1;
	v->a[56248] = sym_comment;
	v->a[56249] = actions(782);
	v->a[56250] = 1;
	v->a[56251] = anon_sym_PIPE;
	v->a[56252] = actions(784);
	v->a[56253] = 1;
	v->a[56254] = anon_sym_RPAREN;
	v->a[56255] = actions(1888);
	v->a[56256] = 1;
	v->a[56257] = aux_sym_heredoc_redirect_token1;
	v->a[56258] = actions(1933);
	v->a[56259] = 1;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = sym_file_descriptor;
	v->a[56261] = state(577);
	v->a[56262] = 1;
	v->a[56263] = sym_terminator;
	v->a[56264] = actions(786);
	v->a[56265] = 2;
	v->a[56266] = anon_sym_SEMI_SEMI;
	v->a[56267] = anon_sym_SEMI;
	v->a[56268] = actions(788);
	v->a[56269] = 2;
	v->a[56270] = anon_sym_AMP_AMP;
	v->a[56271] = anon_sym_PIPE_PIPE;
	v->a[56272] = actions(790);
	v->a[56273] = 2;
	v->a[56274] = anon_sym_LT_LT;
	v->a[56275] = anon_sym_LT_LT_DASH;
	v->a[56276] = state(1034);
	v->a[56277] = 3;
	v->a[56278] = sym_file_redirect;
	v->a[56279] = sym_heredoc_redirect;
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = aux_sym_redirected_statement_repeat1;
	v->a[56281] = actions(1931);
	v->a[56282] = 7;
	v->a[56283] = anon_sym_LT;
	v->a[56284] = anon_sym_GT;
	v->a[56285] = anon_sym_GT_GT;
	v->a[56286] = anon_sym_LT_AMP;
	v->a[56287] = anon_sym_GT_AMP;
	v->a[56288] = anon_sym_GT_PIPE;
	v->a[56289] = anon_sym_LT_GT;
	v->a[56290] = 11;
	v->a[56291] = actions(3);
	v->a[56292] = 1;
	v->a[56293] = sym_comment;
	v->a[56294] = actions(782);
	v->a[56295] = 1;
	v->a[56296] = anon_sym_PIPE;
	v->a[56297] = actions(784);
	v->a[56298] = 1;
	v->a[56299] = anon_sym_RPAREN;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
