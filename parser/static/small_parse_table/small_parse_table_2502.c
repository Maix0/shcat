/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2502.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12510(t_small_parse_table_array *v)
{
	v->a[250200] = 1;
	v->a[250201] = sym_comment;
	v->a[250202] = actions(11614);
	v->a[250203] = 1;
	v->a[250204] = sym__special_character;
	v->a[250205] = state(4485);
	v->a[250206] = 1;
	v->a[250207] = aux_sym__literal_repeat1;
	v->a[250208] = actions(1364);
	v->a[250209] = 3;
	v->a[250210] = sym_file_descriptor;
	v->a[250211] = ts_builtin_sym_end;
	v->a[250212] = aux_sym_heredoc_redirect_token1;
	v->a[250213] = actions(1362);
	v->a[250214] = 21;
	v->a[250215] = anon_sym_SEMI;
	v->a[250216] = anon_sym_PIPE_PIPE;
	v->a[250217] = anon_sym_AMP_AMP;
	v->a[250218] = anon_sym_PIPE;
	v->a[250219] = anon_sym_AMP;
	small_parse_table_12511(v);
}

void	small_parse_table_12511(t_small_parse_table_array *v)
{
	v->a[250220] = anon_sym_LT;
	v->a[250221] = anon_sym_GT;
	v->a[250222] = anon_sym_LT_LT;
	v->a[250223] = anon_sym_GT_GT;
	v->a[250224] = anon_sym_RPAREN;
	v->a[250225] = anon_sym_SEMI_SEMI;
	v->a[250226] = anon_sym_PIPE_AMP;
	v->a[250227] = anon_sym_AMP_GT;
	v->a[250228] = anon_sym_AMP_GT_GT;
	v->a[250229] = anon_sym_LT_AMP;
	v->a[250230] = anon_sym_GT_AMP;
	v->a[250231] = anon_sym_GT_PIPE;
	v->a[250232] = anon_sym_LT_AMP_DASH;
	v->a[250233] = anon_sym_GT_AMP_DASH;
	v->a[250234] = anon_sym_LT_LT_DASH;
	v->a[250235] = anon_sym_BQUOTE;
	v->a[250236] = 6;
	v->a[250237] = actions(3);
	v->a[250238] = 1;
	v->a[250239] = sym_comment;
	small_parse_table_12512(v);
}

void	small_parse_table_12512(t_small_parse_table_array *v)
{
	v->a[250240] = actions(11512);
	v->a[250241] = 1;
	v->a[250242] = aux_sym_concatenation_token1;
	v->a[250243] = actions(11514);
	v->a[250244] = 1;
	v->a[250245] = sym__concat;
	v->a[250246] = state(4510);
	v->a[250247] = 1;
	v->a[250248] = aux_sym_concatenation_repeat1;
	v->a[250249] = actions(2096);
	v->a[250250] = 3;
	v->a[250251] = sym_file_descriptor;
	v->a[250252] = ts_builtin_sym_end;
	v->a[250253] = aux_sym_heredoc_redirect_token1;
	v->a[250254] = actions(2094);
	v->a[250255] = 20;
	v->a[250256] = anon_sym_SEMI;
	v->a[250257] = anon_sym_PIPE_PIPE;
	v->a[250258] = anon_sym_AMP_AMP;
	v->a[250259] = anon_sym_PIPE;
	small_parse_table_12513(v);
}

void	small_parse_table_12513(t_small_parse_table_array *v)
{
	v->a[250260] = anon_sym_AMP;
	v->a[250261] = anon_sym_LT;
	v->a[250262] = anon_sym_GT;
	v->a[250263] = anon_sym_LT_LT;
	v->a[250264] = anon_sym_GT_GT;
	v->a[250265] = anon_sym_SEMI_SEMI;
	v->a[250266] = anon_sym_PIPE_AMP;
	v->a[250267] = anon_sym_AMP_GT;
	v->a[250268] = anon_sym_AMP_GT_GT;
	v->a[250269] = anon_sym_LT_AMP;
	v->a[250270] = anon_sym_GT_AMP;
	v->a[250271] = anon_sym_GT_PIPE;
	v->a[250272] = anon_sym_LT_AMP_DASH;
	v->a[250273] = anon_sym_GT_AMP_DASH;
	v->a[250274] = anon_sym_LT_LT_DASH;
	v->a[250275] = anon_sym_LT_LT_LT;
	v->a[250276] = 6;
	v->a[250277] = actions(3);
	v->a[250278] = 1;
	v->a[250279] = sym_comment;
	small_parse_table_12514(v);
}

void	small_parse_table_12514(t_small_parse_table_array *v)
{
	v->a[250280] = actions(11500);
	v->a[250281] = 1;
	v->a[250282] = aux_sym_concatenation_token1;
	v->a[250283] = actions(11502);
	v->a[250284] = 1;
	v->a[250285] = sym__concat;
	v->a[250286] = state(4781);
	v->a[250287] = 1;
	v->a[250288] = aux_sym_concatenation_repeat1;
	v->a[250289] = actions(1263);
	v->a[250290] = 3;
	v->a[250291] = sym_file_descriptor;
	v->a[250292] = sym_variable_name;
	v->a[250293] = aux_sym_heredoc_redirect_token1;
	v->a[250294] = actions(1261);
	v->a[250295] = 20;
	v->a[250296] = anon_sym_SEMI;
	v->a[250297] = anon_sym_PIPE_PIPE;
	v->a[250298] = anon_sym_AMP_AMP;
	v->a[250299] = anon_sym_PIPE;
	small_parse_table_12515(v);
}

/* EOF small_parse_table_2502.c */
