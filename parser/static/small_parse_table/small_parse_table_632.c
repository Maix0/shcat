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
	v->a[63200] = anon_sym_LT_AMP;
	v->a[63201] = anon_sym_GT_AMP;
	v->a[63202] = anon_sym_GT_PIPE;
	v->a[63203] = anon_sym_LT_GT;
	v->a[63204] = actions(2059);
	v->a[63205] = 7;
	v->a[63206] = anon_sym_PIPE;
	v->a[63207] = anon_sym_SEMI_SEMI;
	v->a[63208] = anon_sym_AMP_AMP;
	v->a[63209] = anon_sym_PIPE_PIPE;
	v->a[63210] = anon_sym_LT_LT;
	v->a[63211] = anon_sym_LT_LT_DASH;
	v->a[63212] = anon_sym_SEMI;
	v->a[63213] = 5;
	v->a[63214] = actions(3);
	v->a[63215] = 1;
	v->a[63216] = sym_comment;
	v->a[63217] = actions(2035);
	v->a[63218] = 1;
	v->a[63219] = anon_sym_PIPE;
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = state(1446);
	v->a[63221] = 1;
	v->a[63222] = aux_sym_pipeline_repeat1;
	v->a[63223] = actions(2033);
	v->a[63224] = 2;
	v->a[63225] = sym_file_descriptor;
	v->a[63226] = aux_sym_heredoc_redirect_token1;
	v->a[63227] = actions(2038);
	v->a[63228] = 14;
	v->a[63229] = anon_sym_esac;
	v->a[63230] = anon_sym_SEMI_SEMI;
	v->a[63231] = anon_sym_AMP_AMP;
	v->a[63232] = anon_sym_PIPE_PIPE;
	v->a[63233] = anon_sym_LT;
	v->a[63234] = anon_sym_GT;
	v->a[63235] = anon_sym_GT_GT;
	v->a[63236] = anon_sym_LT_AMP;
	v->a[63237] = anon_sym_GT_AMP;
	v->a[63238] = anon_sym_GT_PIPE;
	v->a[63239] = anon_sym_LT_GT;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = anon_sym_LT_LT;
	v->a[63241] = anon_sym_LT_LT_DASH;
	v->a[63242] = anon_sym_SEMI;
	v->a[63243] = 3;
	v->a[63244] = actions(3);
	v->a[63245] = 1;
	v->a[63246] = sym_comment;
	v->a[63247] = actions(1460);
	v->a[63248] = 2;
	v->a[63249] = sym_file_descriptor;
	v->a[63250] = sym_variable_name;
	v->a[63251] = actions(1447);
	v->a[63252] = 16;
	v->a[63253] = anon_sym_LT;
	v->a[63254] = anon_sym_GT;
	v->a[63255] = anon_sym_GT_GT;
	v->a[63256] = anon_sym_LT_AMP;
	v->a[63257] = anon_sym_GT_AMP;
	v->a[63258] = anon_sym_GT_PIPE;
	v->a[63259] = anon_sym_LT_GT;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63261] = anon_sym_DOLLAR;
	v->a[63262] = anon_sym_DQUOTE;
	v->a[63263] = sym_raw_string;
	v->a[63264] = sym_number;
	v->a[63265] = anon_sym_DOLLAR_LBRACE;
	v->a[63266] = anon_sym_DOLLAR_LPAREN;
	v->a[63267] = anon_sym_BQUOTE;
	v->a[63268] = sym_word;
	v->a[63269] = 5;
	v->a[63270] = actions(3);
	v->a[63271] = 1;
	v->a[63272] = sym_comment;
	v->a[63273] = actions(2308);
	v->a[63274] = 1;
	v->a[63275] = anon_sym_PIPE;
	v->a[63276] = state(1200);
	v->a[63277] = 1;
	v->a[63278] = aux_sym_pipeline_repeat1;
	v->a[63279] = actions(2306);
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = 3;
	v->a[63281] = sym_file_descriptor;
	v->a[63282] = ts_builtin_sym_end;
	v->a[63283] = aux_sym_heredoc_redirect_token1;
	v->a[63284] = actions(2310);
	v->a[63285] = 13;
	v->a[63286] = anon_sym_SEMI_SEMI;
	v->a[63287] = anon_sym_AMP_AMP;
	v->a[63288] = anon_sym_PIPE_PIPE;
	v->a[63289] = anon_sym_LT;
	v->a[63290] = anon_sym_GT;
	v->a[63291] = anon_sym_GT_GT;
	v->a[63292] = anon_sym_LT_AMP;
	v->a[63293] = anon_sym_GT_AMP;
	v->a[63294] = anon_sym_GT_PIPE;
	v->a[63295] = anon_sym_LT_GT;
	v->a[63296] = anon_sym_LT_LT;
	v->a[63297] = anon_sym_LT_LT_DASH;
	v->a[63298] = anon_sym_SEMI;
	v->a[63299] = 5;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
