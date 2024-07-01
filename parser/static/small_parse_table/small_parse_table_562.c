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
	v->a[56200] = 1;
	v->a[56201] = sym_comment;
	v->a[56202] = actions(736);
	v->a[56203] = 1;
	v->a[56204] = anon_sym_PIPE;
	v->a[56205] = actions(804);
	v->a[56206] = 1;
	v->a[56207] = ts_builtin_sym_end;
	v->a[56208] = actions(1839);
	v->a[56209] = 1;
	v->a[56210] = aux_sym_heredoc_redirect_token1;
	v->a[56211] = actions(1841);
	v->a[56212] = 1;
	v->a[56213] = sym_file_descriptor;
	v->a[56214] = state(771);
	v->a[56215] = 1;
	v->a[56216] = sym_terminator;
	v->a[56217] = actions(744);
	v->a[56218] = 2;
	v->a[56219] = anon_sym_LT_LT;
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = anon_sym_LT_LT_DASH;
	v->a[56221] = actions(808);
	v->a[56222] = 2;
	v->a[56223] = anon_sym_AMP_AMP;
	v->a[56224] = anon_sym_PIPE_PIPE;
	v->a[56225] = actions(806);
	v->a[56226] = 3;
	v->a[56227] = anon_sym_SEMI_SEMI;
	v->a[56228] = anon_sym_AMP;
	v->a[56229] = anon_sym_SEMI;
	v->a[56230] = state(1073);
	v->a[56231] = 3;
	v->a[56232] = sym_file_redirect;
	v->a[56233] = sym_heredoc_redirect;
	v->a[56234] = aux_sym_redirected_statement_repeat1;
	v->a[56235] = actions(1837);
	v->a[56236] = 7;
	v->a[56237] = anon_sym_LT;
	v->a[56238] = anon_sym_GT;
	v->a[56239] = anon_sym_GT_GT;
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = anon_sym_LT_AMP;
	v->a[56241] = anon_sym_GT_AMP;
	v->a[56242] = anon_sym_GT_PIPE;
	v->a[56243] = anon_sym_LT_GT;
	v->a[56244] = 6;
	v->a[56245] = actions(3);
	v->a[56246] = 1;
	v->a[56247] = sym_comment;
	v->a[56248] = actions(1845);
	v->a[56249] = 1;
	v->a[56250] = aux_sym_concatenation_token1;
	v->a[56251] = actions(1847);
	v->a[56252] = 1;
	v->a[56253] = sym__concat;
	v->a[56254] = state(990);
	v->a[56255] = 1;
	v->a[56256] = aux_sym_concatenation_repeat1;
	v->a[56257] = actions(1209);
	v->a[56258] = 3;
	v->a[56259] = sym_file_descriptor;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = sym_variable_name;
	v->a[56261] = aux_sym_heredoc_redirect_token1;
	v->a[56262] = actions(1207);
	v->a[56263] = 16;
	v->a[56264] = anon_sym_PIPE;
	v->a[56265] = anon_sym_SEMI_SEMI;
	v->a[56266] = anon_sym_AMP_AMP;
	v->a[56267] = anon_sym_PIPE_PIPE;
	v->a[56268] = anon_sym_LT;
	v->a[56269] = anon_sym_GT;
	v->a[56270] = anon_sym_GT_GT;
	v->a[56271] = anon_sym_LT_AMP;
	v->a[56272] = anon_sym_GT_AMP;
	v->a[56273] = anon_sym_GT_PIPE;
	v->a[56274] = anon_sym_LT_GT;
	v->a[56275] = anon_sym_LT_LT;
	v->a[56276] = anon_sym_LT_LT_DASH;
	v->a[56277] = anon_sym_AMP;
	v->a[56278] = anon_sym_BQUOTE;
	v->a[56279] = anon_sym_SEMI;
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = 6;
	v->a[56281] = actions(3);
	v->a[56282] = 1;
	v->a[56283] = sym_comment;
	v->a[56284] = actions(1845);
	v->a[56285] = 1;
	v->a[56286] = aux_sym_concatenation_token1;
	v->a[56287] = actions(1883);
	v->a[56288] = 1;
	v->a[56289] = sym__concat;
	v->a[56290] = state(899);
	v->a[56291] = 1;
	v->a[56292] = aux_sym_concatenation_repeat1;
	v->a[56293] = actions(1047);
	v->a[56294] = 3;
	v->a[56295] = sym_file_descriptor;
	v->a[56296] = sym_variable_name;
	v->a[56297] = aux_sym_heredoc_redirect_token1;
	v->a[56298] = actions(1043);
	v->a[56299] = 16;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
