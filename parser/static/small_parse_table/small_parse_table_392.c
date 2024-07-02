/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_392.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1960(t_small_parse_table_array *v)
{
	v->a[39200] = actions(1414);
	v->a[39201] = 1;
	v->a[39202] = sym__concat;
	v->a[39203] = state(474);
	v->a[39204] = 1;
	v->a[39205] = aux_sym_concatenation_repeat1;
	v->a[39206] = actions(1045);
	v->a[39207] = 25;
	v->a[39208] = anon_sym_PIPE;
	v->a[39209] = anon_sym_SEMI_SEMI;
	v->a[39210] = anon_sym_AMP_AMP;
	v->a[39211] = anon_sym_PIPE_PIPE;
	v->a[39212] = anon_sym_LT;
	v->a[39213] = anon_sym_GT;
	v->a[39214] = anon_sym_GT_GT;
	v->a[39215] = anon_sym_LT_AMP;
	v->a[39216] = anon_sym_GT_AMP;
	v->a[39217] = anon_sym_GT_PIPE;
	v->a[39218] = anon_sym_LT_GT;
	v->a[39219] = anon_sym_LT_LT;
	small_parse_table_1961(v);
}

void	small_parse_table_1961(t_small_parse_table_array *v)
{
	v->a[39220] = anon_sym_LT_LT_DASH;
	v->a[39221] = aux_sym_heredoc_redirect_token1;
	v->a[39222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39223] = anon_sym_AMP;
	v->a[39224] = anon_sym_DOLLAR;
	v->a[39225] = anon_sym_DQUOTE;
	v->a[39226] = sym_raw_string;
	v->a[39227] = sym_number;
	v->a[39228] = anon_sym_DOLLAR_LBRACE;
	v->a[39229] = anon_sym_DOLLAR_LPAREN;
	v->a[39230] = anon_sym_BQUOTE;
	v->a[39231] = sym_word;
	v->a[39232] = anon_sym_SEMI;
	v->a[39233] = 3;
	v->a[39234] = actions(3);
	v->a[39235] = 1;
	v->a[39236] = sym_comment;
	v->a[39237] = actions(784);
	v->a[39238] = 3;
	v->a[39239] = sym_file_descriptor;
	small_parse_table_1962(v);
}

void	small_parse_table_1962(t_small_parse_table_array *v)
{
	v->a[39240] = sym__concat;
	v->a[39241] = ts_builtin_sym_end;
	v->a[39242] = actions(782);
	v->a[39243] = 26;
	v->a[39244] = anon_sym_PIPE;
	v->a[39245] = anon_sym_SEMI_SEMI;
	v->a[39246] = anon_sym_AMP_AMP;
	v->a[39247] = anon_sym_PIPE_PIPE;
	v->a[39248] = anon_sym_LT;
	v->a[39249] = anon_sym_GT;
	v->a[39250] = anon_sym_GT_GT;
	v->a[39251] = anon_sym_LT_AMP;
	v->a[39252] = anon_sym_GT_AMP;
	v->a[39253] = anon_sym_GT_PIPE;
	v->a[39254] = anon_sym_LT_GT;
	v->a[39255] = anon_sym_LT_LT;
	v->a[39256] = anon_sym_LT_LT_DASH;
	v->a[39257] = aux_sym_heredoc_redirect_token1;
	v->a[39258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39259] = anon_sym_AMP;
	small_parse_table_1963(v);
}

void	small_parse_table_1963(t_small_parse_table_array *v)
{
	v->a[39260] = aux_sym_concatenation_token1;
	v->a[39261] = anon_sym_DOLLAR;
	v->a[39262] = anon_sym_DQUOTE;
	v->a[39263] = sym_raw_string;
	v->a[39264] = sym_number;
	v->a[39265] = anon_sym_DOLLAR_LBRACE;
	v->a[39266] = anon_sym_DOLLAR_LPAREN;
	v->a[39267] = anon_sym_BQUOTE;
	v->a[39268] = sym_word;
	v->a[39269] = anon_sym_SEMI;
	v->a[39270] = 3;
	v->a[39271] = actions(3);
	v->a[39272] = 1;
	v->a[39273] = sym_comment;
	v->a[39274] = actions(757);
	v->a[39275] = 3;
	v->a[39276] = sym_file_descriptor;
	v->a[39277] = sym__concat;
	v->a[39278] = ts_builtin_sym_end;
	v->a[39279] = actions(755);
	small_parse_table_1964(v);
}

void	small_parse_table_1964(t_small_parse_table_array *v)
{
	v->a[39280] = 26;
	v->a[39281] = anon_sym_PIPE;
	v->a[39282] = anon_sym_SEMI_SEMI;
	v->a[39283] = anon_sym_AMP_AMP;
	v->a[39284] = anon_sym_PIPE_PIPE;
	v->a[39285] = anon_sym_LT;
	v->a[39286] = anon_sym_GT;
	v->a[39287] = anon_sym_GT_GT;
	v->a[39288] = anon_sym_LT_AMP;
	v->a[39289] = anon_sym_GT_AMP;
	v->a[39290] = anon_sym_GT_PIPE;
	v->a[39291] = anon_sym_LT_GT;
	v->a[39292] = anon_sym_LT_LT;
	v->a[39293] = anon_sym_LT_LT_DASH;
	v->a[39294] = aux_sym_heredoc_redirect_token1;
	v->a[39295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39296] = anon_sym_AMP;
	v->a[39297] = aux_sym_concatenation_token1;
	v->a[39298] = anon_sym_DOLLAR;
	v->a[39299] = anon_sym_DQUOTE;
	small_parse_table_1965(v);
}

/* EOF small_parse_table_392.c */
