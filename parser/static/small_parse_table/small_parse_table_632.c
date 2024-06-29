/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_632.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3160(t_small_parse_table_array *v)
{
	v->a[63200] = anon_sym_GT_PIPE;
	v->a[63201] = 12;
	v->a[63202] = actions(3);
	v->a[63203] = 1;
	v->a[63204] = sym_comment;
	v->a[63205] = actions(766);
	v->a[63206] = 1;
	v->a[63207] = anon_sym_PIPE;
	v->a[63208] = actions(840);
	v->a[63209] = 1;
	v->a[63210] = ts_builtin_sym_end;
	v->a[63211] = actions(2017);
	v->a[63212] = 1;
	v->a[63213] = aux_sym_heredoc_redirect_token1;
	v->a[63214] = actions(2019);
	v->a[63215] = 1;
	v->a[63216] = sym_file_descriptor;
	v->a[63217] = state(779);
	v->a[63218] = 1;
	v->a[63219] = sym_terminator;
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = actions(804);
	v->a[63221] = 2;
	v->a[63222] = anon_sym_LT_LT;
	v->a[63223] = anon_sym_LT_LT_DASH;
	v->a[63224] = actions(835);
	v->a[63225] = 2;
	v->a[63226] = anon_sym_AMP_AMP;
	v->a[63227] = anon_sym_PIPE_PIPE;
	v->a[63228] = actions(2015);
	v->a[63229] = 2;
	v->a[63230] = anon_sym_LT_AMP_DASH;
	v->a[63231] = anon_sym_GT_AMP_DASH;
	v->a[63232] = actions(833);
	v->a[63233] = 3;
	v->a[63234] = anon_sym_SEMI_SEMI;
	v->a[63235] = anon_sym_AMP;
	v->a[63236] = anon_sym_SEMI;
	v->a[63237] = state(1133);
	v->a[63238] = 3;
	v->a[63239] = sym_file_redirect;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = sym_heredoc_redirect;
	v->a[63241] = aux_sym_redirected_statement_repeat1;
	v->a[63242] = actions(2013);
	v->a[63243] = 8;
	v->a[63244] = anon_sym_LT;
	v->a[63245] = anon_sym_GT;
	v->a[63246] = anon_sym_GT_GT;
	v->a[63247] = anon_sym_AMP_GT;
	v->a[63248] = anon_sym_AMP_GT_GT;
	v->a[63249] = anon_sym_LT_AMP;
	v->a[63250] = anon_sym_GT_AMP;
	v->a[63251] = anon_sym_GT_PIPE;
	v->a[63252] = 12;
	v->a[63253] = actions(3);
	v->a[63254] = 1;
	v->a[63255] = sym_comment;
	v->a[63256] = actions(764);
	v->a[63257] = 1;
	v->a[63258] = anon_sym_RPAREN;
	v->a[63259] = actions(766);
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = 1;
	v->a[63261] = anon_sym_PIPE;
	v->a[63262] = actions(2031);
	v->a[63263] = 1;
	v->a[63264] = aux_sym_heredoc_redirect_token1;
	v->a[63265] = actions(2043);
	v->a[63266] = 1;
	v->a[63267] = sym_file_descriptor;
	v->a[63268] = state(722);
	v->a[63269] = 1;
	v->a[63270] = sym_terminator;
	v->a[63271] = actions(802);
	v->a[63272] = 2;
	v->a[63273] = anon_sym_AMP_AMP;
	v->a[63274] = anon_sym_PIPE_PIPE;
	v->a[63275] = actions(804);
	v->a[63276] = 2;
	v->a[63277] = anon_sym_LT_LT;
	v->a[63278] = anon_sym_LT_LT_DASH;
	v->a[63279] = actions(2041);
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = 2;
	v->a[63281] = anon_sym_LT_AMP_DASH;
	v->a[63282] = anon_sym_GT_AMP_DASH;
	v->a[63283] = actions(800);
	v->a[63284] = 3;
	v->a[63285] = anon_sym_SEMI_SEMI;
	v->a[63286] = anon_sym_AMP;
	v->a[63287] = anon_sym_SEMI;
	v->a[63288] = state(1137);
	v->a[63289] = 3;
	v->a[63290] = sym_file_redirect;
	v->a[63291] = sym_heredoc_redirect;
	v->a[63292] = aux_sym_redirected_statement_repeat1;
	v->a[63293] = actions(2039);
	v->a[63294] = 8;
	v->a[63295] = anon_sym_LT;
	v->a[63296] = anon_sym_GT;
	v->a[63297] = anon_sym_GT_GT;
	v->a[63298] = anon_sym_AMP_GT;
	v->a[63299] = anon_sym_AMP_GT_GT;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
