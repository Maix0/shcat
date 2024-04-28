/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2412.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12060(t_small_parse_table_array *v)
{
	v->a[241200] = anon_sym_AMP_AMP;
	v->a[241201] = anon_sym_PIPE;
	v->a[241202] = anon_sym_AMP;
	v->a[241203] = anon_sym_LT_LT;
	v->a[241204] = anon_sym_esac;
	v->a[241205] = anon_sym_SEMI_SEMI;
	v->a[241206] = anon_sym_SEMI_AMP;
	v->a[241207] = anon_sym_SEMI_SEMI_AMP;
	v->a[241208] = anon_sym_PIPE_AMP;
	v->a[241209] = anon_sym_LT_LT_DASH;
	v->a[241210] = 6;
	v->a[241211] = actions(3);
	v->a[241212] = 1;
	v->a[241213] = sym_comment;
	v->a[241214] = actions(11276);
	v->a[241215] = 1;
	v->a[241216] = aux_sym_concatenation_token1;
	v->a[241217] = actions(11369);
	v->a[241218] = 1;
	v->a[241219] = sym__concat;
	small_parse_table_12061(v);
}

void	small_parse_table_12061(t_small_parse_table_array *v)
{
	v->a[241220] = state(4256);
	v->a[241221] = 1;
	v->a[241222] = aux_sym_concatenation_repeat1;
	v->a[241223] = actions(1267);
	v->a[241224] = 3;
	v->a[241225] = sym_file_descriptor;
	v->a[241226] = sym_variable_name;
	v->a[241227] = aux_sym_heredoc_redirect_token1;
	v->a[241228] = actions(1265);
	v->a[241229] = 22;
	v->a[241230] = anon_sym_SEMI;
	v->a[241231] = anon_sym_PIPE_PIPE;
	v->a[241232] = anon_sym_AMP_AMP;
	v->a[241233] = anon_sym_PIPE;
	v->a[241234] = anon_sym_AMP;
	v->a[241235] = anon_sym_LT;
	v->a[241236] = anon_sym_GT;
	v->a[241237] = anon_sym_LT_LT;
	v->a[241238] = anon_sym_GT_GT;
	v->a[241239] = anon_sym_esac;
	small_parse_table_12062(v);
}

void	small_parse_table_12062(t_small_parse_table_array *v)
{
	v->a[241240] = anon_sym_SEMI_SEMI;
	v->a[241241] = anon_sym_SEMI_AMP;
	v->a[241242] = anon_sym_SEMI_SEMI_AMP;
	v->a[241243] = anon_sym_PIPE_AMP;
	v->a[241244] = anon_sym_AMP_GT;
	v->a[241245] = anon_sym_AMP_GT_GT;
	v->a[241246] = anon_sym_LT_AMP;
	v->a[241247] = anon_sym_GT_AMP;
	v->a[241248] = anon_sym_GT_PIPE;
	v->a[241249] = anon_sym_LT_AMP_DASH;
	v->a[241250] = anon_sym_GT_AMP_DASH;
	v->a[241251] = anon_sym_LT_LT_DASH;
	v->a[241252] = 6;
	v->a[241253] = actions(3);
	v->a[241254] = 1;
	v->a[241255] = sym_comment;
	v->a[241256] = actions(11272);
	v->a[241257] = 1;
	v->a[241258] = aux_sym_concatenation_token1;
	v->a[241259] = actions(11274);
	small_parse_table_12063(v);
}

void	small_parse_table_12063(t_small_parse_table_array *v)
{
	v->a[241260] = 1;
	v->a[241261] = sym__concat;
	v->a[241262] = state(4248);
	v->a[241263] = 1;
	v->a[241264] = aux_sym_concatenation_repeat1;
	v->a[241265] = actions(5723);
	v->a[241266] = 2;
	v->a[241267] = sym_file_descriptor;
	v->a[241268] = aux_sym_heredoc_redirect_token1;
	v->a[241269] = actions(5721);
	v->a[241270] = 23;
	v->a[241271] = anon_sym_SEMI;
	v->a[241272] = anon_sym_PIPE_PIPE;
	v->a[241273] = anon_sym_AMP_AMP;
	v->a[241274] = anon_sym_PIPE;
	v->a[241275] = anon_sym_AMP;
	v->a[241276] = anon_sym_LT;
	v->a[241277] = anon_sym_GT;
	v->a[241278] = anon_sym_LT_LT;
	v->a[241279] = anon_sym_GT_GT;
	small_parse_table_12064(v);
}

void	small_parse_table_12064(t_small_parse_table_array *v)
{
	v->a[241280] = anon_sym_esac;
	v->a[241281] = anon_sym_SEMI_SEMI;
	v->a[241282] = anon_sym_SEMI_AMP;
	v->a[241283] = anon_sym_SEMI_SEMI_AMP;
	v->a[241284] = anon_sym_PIPE_AMP;
	v->a[241285] = anon_sym_AMP_GT;
	v->a[241286] = anon_sym_AMP_GT_GT;
	v->a[241287] = anon_sym_LT_AMP;
	v->a[241288] = anon_sym_GT_AMP;
	v->a[241289] = anon_sym_GT_PIPE;
	v->a[241290] = anon_sym_LT_AMP_DASH;
	v->a[241291] = anon_sym_GT_AMP_DASH;
	v->a[241292] = anon_sym_LT_LT_DASH;
	v->a[241293] = anon_sym_LT_LT_LT;
	v->a[241294] = 6;
	v->a[241295] = actions(3);
	v->a[241296] = 1;
	v->a[241297] = sym_comment;
	v->a[241298] = actions(11371);
	v->a[241299] = 1;
	small_parse_table_12065(v);
}

/* EOF small_parse_table_2412.c */
