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
	v->a[63204] = anon_sym_LT_LT;
	v->a[63205] = anon_sym_LT_LT_DASH;
	v->a[63206] = anon_sym_AMP;
	v->a[63207] = anon_sym_BQUOTE;
	v->a[63208] = anon_sym_SEMI;
	v->a[63209] = 5;
	v->a[63210] = actions(3);
	v->a[63211] = 1;
	v->a[63212] = sym_comment;
	v->a[63213] = actions(2248);
	v->a[63214] = 1;
	v->a[63215] = sym_variable_name;
	v->a[63216] = actions(1982);
	v->a[63217] = 2;
	v->a[63218] = sym_file_descriptor;
	v->a[63219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = state(1159);
	v->a[63221] = 2;
	v->a[63222] = sym_variable_assignment;
	v->a[63223] = aux_sym__variable_assignments_repeat1;
	v->a[63224] = actions(1980);
	v->a[63225] = 15;
	v->a[63226] = anon_sym_PIPE;
	v->a[63227] = anon_sym_SEMI_SEMI;
	v->a[63228] = anon_sym_AMP_AMP;
	v->a[63229] = anon_sym_PIPE_PIPE;
	v->a[63230] = anon_sym_LT;
	v->a[63231] = anon_sym_GT;
	v->a[63232] = anon_sym_GT_GT;
	v->a[63233] = anon_sym_LT_AMP;
	v->a[63234] = anon_sym_GT_AMP;
	v->a[63235] = anon_sym_GT_PIPE;
	v->a[63236] = anon_sym_LT_GT;
	v->a[63237] = anon_sym_LT_LT;
	v->a[63238] = anon_sym_LT_LT_DASH;
	v->a[63239] = anon_sym_AMP;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = anon_sym_SEMI;
	v->a[63241] = 3;
	v->a[63242] = actions(3);
	v->a[63243] = 1;
	v->a[63244] = sym_comment;
	v->a[63245] = actions(2250);
	v->a[63246] = 3;
	v->a[63247] = sym_file_descriptor;
	v->a[63248] = ts_builtin_sym_end;
	v->a[63249] = aux_sym_heredoc_redirect_token1;
	v->a[63250] = actions(2252);
	v->a[63251] = 17;
	v->a[63252] = anon_sym_PIPE;
	v->a[63253] = anon_sym_RPAREN;
	v->a[63254] = anon_sym_SEMI_SEMI;
	v->a[63255] = anon_sym_AMP_AMP;
	v->a[63256] = anon_sym_PIPE_PIPE;
	v->a[63257] = anon_sym_LT;
	v->a[63258] = anon_sym_GT;
	v->a[63259] = anon_sym_GT_GT;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = anon_sym_LT_AMP;
	v->a[63261] = anon_sym_GT_AMP;
	v->a[63262] = anon_sym_GT_PIPE;
	v->a[63263] = anon_sym_LT_GT;
	v->a[63264] = anon_sym_LT_LT;
	v->a[63265] = anon_sym_LT_LT_DASH;
	v->a[63266] = anon_sym_AMP;
	v->a[63267] = anon_sym_BQUOTE;
	v->a[63268] = anon_sym_SEMI;
	v->a[63269] = 3;
	v->a[63270] = actions(3);
	v->a[63271] = 1;
	v->a[63272] = sym_comment;
	v->a[63273] = actions(757);
	v->a[63274] = 3;
	v->a[63275] = sym_file_descriptor;
	v->a[63276] = sym__concat;
	v->a[63277] = sym_variable_name;
	v->a[63278] = actions(755);
	v->a[63279] = 17;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = anon_sym_LT;
	v->a[63281] = anon_sym_GT;
	v->a[63282] = anon_sym_GT_GT;
	v->a[63283] = anon_sym_LT_AMP;
	v->a[63284] = anon_sym_GT_AMP;
	v->a[63285] = anon_sym_GT_PIPE;
	v->a[63286] = anon_sym_LT_GT;
	v->a[63287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63288] = aux_sym_concatenation_token1;
	v->a[63289] = anon_sym_DOLLAR;
	v->a[63290] = anon_sym_DQUOTE;
	v->a[63291] = sym_raw_string;
	v->a[63292] = sym_number;
	v->a[63293] = anon_sym_DOLLAR_LBRACE;
	v->a[63294] = anon_sym_DOLLAR_LPAREN;
	v->a[63295] = anon_sym_BQUOTE;
	v->a[63296] = sym_word;
	v->a[63297] = 3;
	v->a[63298] = actions(3);
	v->a[63299] = 1;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
