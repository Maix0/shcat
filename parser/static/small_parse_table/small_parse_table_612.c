/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_612.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3060(t_small_parse_table_array *v)
{
	v->a[61200] = 3;
	v->a[61201] = actions(3);
	v->a[61202] = 1;
	v->a[61203] = sym_comment;
	v->a[61204] = actions(1195);
	v->a[61205] = 2;
	v->a[61206] = sym_file_descriptor;
	v->a[61207] = sym__concat;
	v->a[61208] = actions(1193);
	v->a[61209] = 23;
	v->a[61210] = anon_sym_AMP_AMP;
	v->a[61211] = anon_sym_PIPE_PIPE;
	v->a[61212] = anon_sym_LT;
	v->a[61213] = anon_sym_GT;
	v->a[61214] = anon_sym_GT_GT;
	v->a[61215] = anon_sym_AMP_GT;
	v->a[61216] = anon_sym_AMP_GT_GT;
	v->a[61217] = anon_sym_LT_AMP;
	v->a[61218] = anon_sym_GT_AMP;
	v->a[61219] = anon_sym_GT_PIPE;
	small_parse_table_3061(v);
}

void	small_parse_table_3061(t_small_parse_table_array *v)
{
	v->a[61220] = anon_sym_LT_AMP_DASH;
	v->a[61221] = anon_sym_GT_AMP_DASH;
	v->a[61222] = aux_sym_heredoc_redirect_token1;
	v->a[61223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61224] = aux_sym_concatenation_token1;
	v->a[61225] = anon_sym_DOLLAR;
	v->a[61226] = anon_sym_DQUOTE;
	v->a[61227] = sym_raw_string;
	v->a[61228] = sym_number;
	v->a[61229] = anon_sym_DOLLAR_LBRACE;
	v->a[61230] = anon_sym_DOLLAR_LPAREN;
	v->a[61231] = anon_sym_BQUOTE;
	v->a[61232] = sym_word;
	v->a[61233] = 12;
	v->a[61234] = actions(3);
	v->a[61235] = 1;
	v->a[61236] = sym_comment;
	v->a[61237] = actions(764);
	v->a[61238] = 1;
	v->a[61239] = anon_sym_BQUOTE;
	small_parse_table_3062(v);
}

void	small_parse_table_3062(t_small_parse_table_array *v)
{
	v->a[61240] = actions(766);
	v->a[61241] = 1;
	v->a[61242] = anon_sym_PIPE;
	v->a[61243] = actions(2031);
	v->a[61244] = 1;
	v->a[61245] = aux_sym_heredoc_redirect_token1;
	v->a[61246] = actions(2033);
	v->a[61247] = 1;
	v->a[61248] = sym_file_descriptor;
	v->a[61249] = state(808);
	v->a[61250] = 1;
	v->a[61251] = sym_terminator;
	v->a[61252] = actions(804);
	v->a[61253] = 2;
	v->a[61254] = anon_sym_LT_LT;
	v->a[61255] = anon_sym_LT_LT_DASH;
	v->a[61256] = actions(842);
	v->a[61257] = 2;
	v->a[61258] = anon_sym_AMP_AMP;
	v->a[61259] = anon_sym_PIPE_PIPE;
	small_parse_table_3063(v);
}

void	small_parse_table_3063(t_small_parse_table_array *v)
{
	v->a[61260] = actions(2029);
	v->a[61261] = 2;
	v->a[61262] = anon_sym_LT_AMP_DASH;
	v->a[61263] = anon_sym_GT_AMP_DASH;
	v->a[61264] = actions(800);
	v->a[61265] = 3;
	v->a[61266] = anon_sym_SEMI_SEMI;
	v->a[61267] = anon_sym_AMP;
	v->a[61268] = anon_sym_SEMI;
	v->a[61269] = state(1157);
	v->a[61270] = 3;
	v->a[61271] = sym_file_redirect;
	v->a[61272] = sym_heredoc_redirect;
	v->a[61273] = aux_sym_redirected_statement_repeat1;
	v->a[61274] = actions(2027);
	v->a[61275] = 8;
	v->a[61276] = anon_sym_LT;
	v->a[61277] = anon_sym_GT;
	v->a[61278] = anon_sym_GT_GT;
	v->a[61279] = anon_sym_AMP_GT;
	small_parse_table_3064(v);
}

void	small_parse_table_3064(t_small_parse_table_array *v)
{
	v->a[61280] = anon_sym_AMP_GT_GT;
	v->a[61281] = anon_sym_LT_AMP;
	v->a[61282] = anon_sym_GT_AMP;
	v->a[61283] = anon_sym_GT_PIPE;
	v->a[61284] = 3;
	v->a[61285] = actions(3);
	v->a[61286] = 1;
	v->a[61287] = sym_comment;
	v->a[61288] = actions(1048);
	v->a[61289] = 2;
	v->a[61290] = sym_file_descriptor;
	v->a[61291] = sym__concat;
	v->a[61292] = actions(1046);
	v->a[61293] = 23;
	v->a[61294] = anon_sym_AMP_AMP;
	v->a[61295] = anon_sym_PIPE_PIPE;
	v->a[61296] = anon_sym_LT;
	v->a[61297] = anon_sym_GT;
	v->a[61298] = anon_sym_GT_GT;
	v->a[61299] = anon_sym_AMP_GT;
	small_parse_table_3065(v);
}

/* EOF small_parse_table_612.c */
