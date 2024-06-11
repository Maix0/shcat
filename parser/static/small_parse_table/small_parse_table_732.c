/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_732.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3660(t_small_parse_table_array *v)
{
	v->a[73200] = actions(3);
	v->a[73201] = 1;
	v->a[73202] = sym_comment;
	v->a[73203] = actions(1147);
	v->a[73204] = 3;
	v->a[73205] = sym_file_descriptor;
	v->a[73206] = sym__concat;
	v->a[73207] = sym_variable_name;
	v->a[73208] = actions(1149);
	v->a[73209] = 20;
	v->a[73210] = anon_sym_LT;
	v->a[73211] = anon_sym_GT;
	v->a[73212] = anon_sym_GT_GT;
	v->a[73213] = anon_sym_AMP_GT;
	v->a[73214] = anon_sym_AMP_GT_GT;
	v->a[73215] = anon_sym_LT_AMP;
	v->a[73216] = anon_sym_GT_AMP;
	v->a[73217] = anon_sym_GT_PIPE;
	v->a[73218] = anon_sym_LT_AMP_DASH;
	v->a[73219] = anon_sym_GT_AMP_DASH;
	small_parse_table_3661(v);
}

void	small_parse_table_3661(t_small_parse_table_array *v)
{
	v->a[73220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73221] = aux_sym_concatenation_token1;
	v->a[73222] = anon_sym_DOLLAR;
	v->a[73223] = anon_sym_DQUOTE;
	v->a[73224] = sym_raw_string;
	v->a[73225] = sym_number;
	v->a[73226] = anon_sym_DOLLAR_LBRACE;
	v->a[73227] = anon_sym_DOLLAR_LPAREN;
	v->a[73228] = anon_sym_BQUOTE;
	v->a[73229] = sym_word;
	v->a[73230] = 10;
	v->a[73231] = actions(3);
	v->a[73232] = 1;
	v->a[73233] = sym_comment;
	v->a[73234] = actions(943);
	v->a[73235] = 1;
	v->a[73236] = anon_sym_RPAREN;
	v->a[73237] = actions(2081);
	v->a[73238] = 1;
	v->a[73239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3662(v);
}

void	small_parse_table_3662(t_small_parse_table_array *v)
{
	v->a[73240] = actions(2083);
	v->a[73241] = 1;
	v->a[73242] = sym_file_descriptor;
	v->a[73243] = actions(859);
	v->a[73244] = 2;
	v->a[73245] = anon_sym_AMP_AMP;
	v->a[73246] = anon_sym_PIPE_PIPE;
	v->a[73247] = actions(861);
	v->a[73248] = 2;
	v->a[73249] = anon_sym_LT_LT;
	v->a[73250] = anon_sym_LT_LT_DASH;
	v->a[73251] = actions(2079);
	v->a[73252] = 2;
	v->a[73253] = anon_sym_LT_AMP_DASH;
	v->a[73254] = anon_sym_GT_AMP_DASH;
	v->a[73255] = actions(945);
	v->a[73256] = 3;
	v->a[73257] = anon_sym_SEMI_SEMI;
	v->a[73258] = anon_sym_AMP;
	v->a[73259] = anon_sym_SEMI;
	small_parse_table_3663(v);
}

void	small_parse_table_3663(t_small_parse_table_array *v)
{
	v->a[73260] = state(1283);
	v->a[73261] = 3;
	v->a[73262] = sym_file_redirect;
	v->a[73263] = sym_heredoc_redirect;
	v->a[73264] = aux_sym_redirected_statement_repeat1;
	v->a[73265] = actions(2077);
	v->a[73266] = 8;
	v->a[73267] = anon_sym_LT;
	v->a[73268] = anon_sym_GT;
	v->a[73269] = anon_sym_GT_GT;
	v->a[73270] = anon_sym_AMP_GT;
	v->a[73271] = anon_sym_AMP_GT_GT;
	v->a[73272] = anon_sym_LT_AMP;
	v->a[73273] = anon_sym_GT_AMP;
	v->a[73274] = anon_sym_GT_PIPE;
	v->a[73275] = 3;
	v->a[73276] = actions(3);
	v->a[73277] = 1;
	v->a[73278] = sym_comment;
	v->a[73279] = actions(2632);
	small_parse_table_3664(v);
}

void	small_parse_table_3664(t_small_parse_table_array *v)
{
	v->a[73280] = 3;
	v->a[73281] = sym_file_descriptor;
	v->a[73282] = ts_builtin_sym_end;
	v->a[73283] = aux_sym_heredoc_redirect_token1;
	v->a[73284] = actions(2634);
	v->a[73285] = 20;
	v->a[73286] = anon_sym_PIPE;
	v->a[73287] = anon_sym_RPAREN;
	v->a[73288] = anon_sym_SEMI_SEMI;
	v->a[73289] = anon_sym_AMP_AMP;
	v->a[73290] = anon_sym_PIPE_PIPE;
	v->a[73291] = anon_sym_LT;
	v->a[73292] = anon_sym_GT;
	v->a[73293] = anon_sym_GT_GT;
	v->a[73294] = anon_sym_AMP_GT;
	v->a[73295] = anon_sym_AMP_GT_GT;
	v->a[73296] = anon_sym_LT_AMP;
	v->a[73297] = anon_sym_GT_AMP;
	v->a[73298] = anon_sym_GT_PIPE;
	v->a[73299] = anon_sym_LT_AMP_DASH;
	small_parse_table_3665(v);
}

/* EOF small_parse_table_732.c */
