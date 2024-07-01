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
	v->a[63200] = anon_sym_esac;
	v->a[63201] = anon_sym_PIPE;
	v->a[63202] = anon_sym_SEMI_SEMI;
	v->a[63203] = anon_sym_AMP_AMP;
	v->a[63204] = anon_sym_PIPE_PIPE;
	v->a[63205] = anon_sym_LT;
	v->a[63206] = anon_sym_GT;
	v->a[63207] = anon_sym_GT_GT;
	v->a[63208] = anon_sym_LT_AMP;
	v->a[63209] = anon_sym_GT_AMP;
	v->a[63210] = anon_sym_GT_PIPE;
	v->a[63211] = anon_sym_LT_AMP_DASH;
	v->a[63212] = anon_sym_GT_AMP_DASH;
	v->a[63213] = anon_sym_LT_LT;
	v->a[63214] = anon_sym_LT_LT_DASH;
	v->a[63215] = anon_sym_AMP;
	v->a[63216] = aux_sym_concatenation_token1;
	v->a[63217] = anon_sym_SEMI;
	v->a[63218] = 8;
	v->a[63219] = actions(3);
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = 1;
	v->a[63221] = sym_comment;
	v->a[63222] = actions(2087);
	v->a[63223] = 1;
	v->a[63224] = sym_file_descriptor;
	v->a[63225] = actions(2074);
	v->a[63226] = 2;
	v->a[63227] = ts_builtin_sym_end;
	v->a[63228] = aux_sym_heredoc_redirect_token1;
	v->a[63229] = actions(2081);
	v->a[63230] = 2;
	v->a[63231] = anon_sym_LT_AMP_DASH;
	v->a[63232] = anon_sym_GT_AMP_DASH;
	v->a[63233] = actions(2084);
	v->a[63234] = 2;
	v->a[63235] = anon_sym_LT_LT;
	v->a[63236] = anon_sym_LT_LT_DASH;
	v->a[63237] = state(1103);
	v->a[63238] = 3;
	v->a[63239] = sym_file_redirect;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = sym_heredoc_redirect;
	v->a[63241] = aux_sym_redirected_statement_repeat1;
	v->a[63242] = actions(2076);
	v->a[63243] = 6;
	v->a[63244] = anon_sym_PIPE;
	v->a[63245] = anon_sym_SEMI_SEMI;
	v->a[63246] = anon_sym_AMP_AMP;
	v->a[63247] = anon_sym_PIPE_PIPE;
	v->a[63248] = anon_sym_AMP;
	v->a[63249] = anon_sym_SEMI;
	v->a[63250] = actions(2078);
	v->a[63251] = 6;
	v->a[63252] = anon_sym_LT;
	v->a[63253] = anon_sym_GT;
	v->a[63254] = anon_sym_GT_GT;
	v->a[63255] = anon_sym_LT_AMP;
	v->a[63256] = anon_sym_GT_AMP;
	v->a[63257] = anon_sym_GT_PIPE;
	v->a[63258] = 4;
	v->a[63259] = actions(3);
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = 1;
	v->a[63261] = sym_comment;
	v->a[63262] = actions(984);
	v->a[63263] = 3;
	v->a[63264] = sym_file_descriptor;
	v->a[63265] = ts_builtin_sym_end;
	v->a[63266] = aux_sym_heredoc_redirect_token1;
	v->a[63267] = state(1160);
	v->a[63268] = 3;
	v->a[63269] = sym_file_redirect;
	v->a[63270] = sym_heredoc_redirect;
	v->a[63271] = aux_sym_redirected_statement_repeat1;
	v->a[63272] = actions(935);
	v->a[63273] = 16;
	v->a[63274] = anon_sym_PIPE;
	v->a[63275] = anon_sym_SEMI_SEMI;
	v->a[63276] = anon_sym_AMP_AMP;
	v->a[63277] = anon_sym_PIPE_PIPE;
	v->a[63278] = anon_sym_LT;
	v->a[63279] = anon_sym_GT;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = anon_sym_GT_GT;
	v->a[63281] = anon_sym_LT_AMP;
	v->a[63282] = anon_sym_GT_AMP;
	v->a[63283] = anon_sym_GT_PIPE;
	v->a[63284] = anon_sym_LT_AMP_DASH;
	v->a[63285] = anon_sym_GT_AMP_DASH;
	v->a[63286] = anon_sym_LT_LT;
	v->a[63287] = anon_sym_LT_LT_DASH;
	v->a[63288] = anon_sym_AMP;
	v->a[63289] = anon_sym_SEMI;
	v->a[63290] = 5;
	v->a[63291] = actions(3);
	v->a[63292] = 1;
	v->a[63293] = sym_comment;
	v->a[63294] = actions(682);
	v->a[63295] = 1;
	v->a[63296] = anon_sym_PIPE;
	v->a[63297] = actions(984);
	v->a[63298] = 3;
	v->a[63299] = sym_file_descriptor;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
