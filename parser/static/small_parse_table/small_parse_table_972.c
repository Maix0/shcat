/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_972.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4860(t_small_parse_table_array *v)
{
	v->a[97200] = 8;
	v->a[97201] = actions(3);
	v->a[97202] = 1;
	v->a[97203] = sym_comment;
	v->a[97204] = actions(5176);
	v->a[97205] = 1;
	v->a[97206] = aux_sym_heredoc_redirect_token1;
	v->a[97207] = actions(5309);
	v->a[97208] = 1;
	v->a[97209] = sym_file_descriptor;
	v->a[97210] = actions(5303);
	v->a[97211] = 2;
	v->a[97212] = anon_sym_LT_AMP_DASH;
	v->a[97213] = anon_sym_GT_AMP_DASH;
	v->a[97214] = actions(5306);
	v->a[97215] = 2;
	v->a[97216] = anon_sym_LT_LT;
	v->a[97217] = anon_sym_LT_LT_DASH;
	v->a[97218] = state(2016);
	v->a[97219] = 3;
	small_parse_table_4861(v);
}

void	small_parse_table_4861(t_small_parse_table_array *v)
{
	v->a[97220] = sym_file_redirect;
	v->a[97221] = sym_heredoc_redirect;
	v->a[97222] = aux_sym_redirected_statement_repeat1;
	v->a[97223] = actions(5300);
	v->a[97224] = 8;
	v->a[97225] = anon_sym_LT;
	v->a[97226] = anon_sym_GT;
	v->a[97227] = anon_sym_GT_GT;
	v->a[97228] = anon_sym_AMP_GT;
	v->a[97229] = anon_sym_AMP_GT_GT;
	v->a[97230] = anon_sym_LT_AMP;
	v->a[97231] = anon_sym_GT_AMP;
	v->a[97232] = anon_sym_GT_PIPE;
	v->a[97233] = actions(5165);
	v->a[97234] = 9;
	v->a[97235] = anon_sym_PIPE;
	v->a[97236] = anon_sym_SEMI_SEMI;
	v->a[97237] = anon_sym_SEMI_AMP;
	v->a[97238] = anon_sym_SEMI_SEMI_AMP;
	v->a[97239] = anon_sym_PIPE_AMP;
	small_parse_table_4862(v);
}

void	small_parse_table_4862(t_small_parse_table_array *v)
{
	v->a[97240] = anon_sym_AMP_AMP;
	v->a[97241] = anon_sym_PIPE_PIPE;
	v->a[97242] = anon_sym_AMP;
	v->a[97243] = anon_sym_SEMI;
	v->a[97244] = 3;
	v->a[97245] = actions(3);
	v->a[97246] = 1;
	v->a[97247] = sym_comment;
	v->a[97248] = actions(2908);
	v->a[97249] = 3;
	v->a[97250] = sym_file_descriptor;
	v->a[97251] = sym__concat;
	v->a[97252] = aux_sym_heredoc_redirect_token1;
	v->a[97253] = actions(2906);
	v->a[97254] = 23;
	v->a[97255] = anon_sym_esac;
	v->a[97256] = anon_sym_PIPE;
	v->a[97257] = anon_sym_SEMI_SEMI;
	v->a[97258] = anon_sym_SEMI_AMP;
	v->a[97259] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_4863(v);
}

void	small_parse_table_4863(t_small_parse_table_array *v)
{
	v->a[97260] = anon_sym_PIPE_AMP;
	v->a[97261] = anon_sym_AMP_AMP;
	v->a[97262] = anon_sym_PIPE_PIPE;
	v->a[97263] = anon_sym_LT;
	v->a[97264] = anon_sym_GT;
	v->a[97265] = anon_sym_GT_GT;
	v->a[97266] = anon_sym_AMP_GT;
	v->a[97267] = anon_sym_AMP_GT_GT;
	v->a[97268] = anon_sym_LT_AMP;
	v->a[97269] = anon_sym_GT_AMP;
	v->a[97270] = anon_sym_GT_PIPE;
	v->a[97271] = anon_sym_LT_AMP_DASH;
	v->a[97272] = anon_sym_GT_AMP_DASH;
	v->a[97273] = anon_sym_LT_LT;
	v->a[97274] = anon_sym_LT_LT_DASH;
	v->a[97275] = anon_sym_AMP;
	v->a[97276] = aux_sym_concatenation_token1;
	v->a[97277] = anon_sym_SEMI;
	v->a[97278] = 3;
	v->a[97279] = actions(3);
	small_parse_table_4864(v);
}

void	small_parse_table_4864(t_small_parse_table_array *v)
{
	v->a[97280] = 1;
	v->a[97281] = sym_comment;
	v->a[97282] = actions(3066);
	v->a[97283] = 4;
	v->a[97284] = sym_file_descriptor;
	v->a[97285] = sym__concat;
	v->a[97286] = ts_builtin_sym_end;
	v->a[97287] = aux_sym_heredoc_redirect_token1;
	v->a[97288] = actions(3064);
	v->a[97289] = 22;
	v->a[97290] = anon_sym_PIPE;
	v->a[97291] = anon_sym_RPAREN;
	v->a[97292] = anon_sym_SEMI_SEMI;
	v->a[97293] = anon_sym_PIPE_AMP;
	v->a[97294] = anon_sym_AMP_AMP;
	v->a[97295] = anon_sym_PIPE_PIPE;
	v->a[97296] = anon_sym_LT;
	v->a[97297] = anon_sym_GT;
	v->a[97298] = anon_sym_GT_GT;
	v->a[97299] = anon_sym_AMP_GT;
	small_parse_table_4865(v);
}

/* EOF small_parse_table_972.c */
