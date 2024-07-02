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
	v->a[56201] = sym_file_descriptor;
	v->a[56202] = state(641);
	v->a[56203] = 1;
	v->a[56204] = sym_terminator;
	v->a[56205] = actions(724);
	v->a[56206] = 2;
	v->a[56207] = anon_sym_esac;
	v->a[56208] = anon_sym_SEMI_SEMI;
	v->a[56209] = actions(759);
	v->a[56210] = 2;
	v->a[56211] = anon_sym_AMP_AMP;
	v->a[56212] = anon_sym_PIPE_PIPE;
	v->a[56213] = actions(761);
	v->a[56214] = 2;
	v->a[56215] = anon_sym_LT_LT;
	v->a[56216] = anon_sym_LT_LT_DASH;
	v->a[56217] = actions(763);
	v->a[56218] = 2;
	v->a[56219] = anon_sym_AMP;
	small_parse_table_2811(v);
}

void	small_parse_table_2811(t_small_parse_table_array *v)
{
	v->a[56220] = anon_sym_SEMI;
	v->a[56221] = state(1059);
	v->a[56222] = 3;
	v->a[56223] = sym_file_redirect;
	v->a[56224] = sym_heredoc_redirect;
	v->a[56225] = aux_sym_redirected_statement_repeat1;
	v->a[56226] = actions(1898);
	v->a[56227] = 7;
	v->a[56228] = anon_sym_LT;
	v->a[56229] = anon_sym_GT;
	v->a[56230] = anon_sym_GT_GT;
	v->a[56231] = anon_sym_LT_AMP;
	v->a[56232] = anon_sym_GT_AMP;
	v->a[56233] = anon_sym_GT_PIPE;
	v->a[56234] = anon_sym_LT_GT;
	v->a[56235] = 3;
	v->a[56236] = actions(3);
	v->a[56237] = 1;
	v->a[56238] = sym_comment;
	v->a[56239] = actions(744);
	small_parse_table_2812(v);
}

void	small_parse_table_2812(t_small_parse_table_array *v)
{
	v->a[56240] = 2;
	v->a[56241] = sym_file_descriptor;
	v->a[56242] = sym__concat;
	v->a[56243] = actions(742);
	v->a[56244] = 20;
	v->a[56245] = anon_sym_AMP_AMP;
	v->a[56246] = anon_sym_PIPE_PIPE;
	v->a[56247] = anon_sym_LT;
	v->a[56248] = anon_sym_GT;
	v->a[56249] = anon_sym_GT_GT;
	v->a[56250] = anon_sym_LT_AMP;
	v->a[56251] = anon_sym_GT_AMP;
	v->a[56252] = anon_sym_GT_PIPE;
	v->a[56253] = anon_sym_LT_GT;
	v->a[56254] = aux_sym_heredoc_redirect_token1;
	v->a[56255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56256] = aux_sym_concatenation_token1;
	v->a[56257] = anon_sym_DOLLAR;
	v->a[56258] = anon_sym_DQUOTE;
	v->a[56259] = sym_raw_string;
	small_parse_table_2813(v);
}

void	small_parse_table_2813(t_small_parse_table_array *v)
{
	v->a[56260] = sym_number;
	v->a[56261] = anon_sym_DOLLAR_LBRACE;
	v->a[56262] = anon_sym_DOLLAR_LPAREN;
	v->a[56263] = anon_sym_BQUOTE;
	v->a[56264] = sym_word;
	v->a[56265] = 6;
	v->a[56266] = actions(3);
	v->a[56267] = 1;
	v->a[56268] = sym_comment;
	v->a[56269] = actions(1877);
	v->a[56270] = 1;
	v->a[56271] = aux_sym_concatenation_token1;
	v->a[56272] = actions(1912);
	v->a[56273] = 1;
	v->a[56274] = sym__concat;
	v->a[56275] = state(983);
	v->a[56276] = 1;
	v->a[56277] = aux_sym_concatenation_repeat1;
	v->a[56278] = actions(1043);
	v->a[56279] = 3;
	small_parse_table_2814(v);
}

void	small_parse_table_2814(t_small_parse_table_array *v)
{
	v->a[56280] = sym_file_descriptor;
	v->a[56281] = sym_variable_name;
	v->a[56282] = aux_sym_heredoc_redirect_token1;
	v->a[56283] = actions(1045);
	v->a[56284] = 16;
	v->a[56285] = anon_sym_esac;
	v->a[56286] = anon_sym_PIPE;
	v->a[56287] = anon_sym_SEMI_SEMI;
	v->a[56288] = anon_sym_AMP_AMP;
	v->a[56289] = anon_sym_PIPE_PIPE;
	v->a[56290] = anon_sym_LT;
	v->a[56291] = anon_sym_GT;
	v->a[56292] = anon_sym_GT_GT;
	v->a[56293] = anon_sym_LT_AMP;
	v->a[56294] = anon_sym_GT_AMP;
	v->a[56295] = anon_sym_GT_PIPE;
	v->a[56296] = anon_sym_LT_GT;
	v->a[56297] = anon_sym_LT_LT;
	v->a[56298] = anon_sym_LT_LT_DASH;
	v->a[56299] = anon_sym_AMP;
	small_parse_table_2815(v);
}

/* EOF small_parse_table_562.c */
