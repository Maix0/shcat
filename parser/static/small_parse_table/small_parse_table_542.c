/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_542.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2710(t_small_parse_table_array *v)
{
	v->a[54200] = anon_sym_SLASH;
	v->a[54201] = anon_sym_PERCENT;
	v->a[54202] = anon_sym_QMARK;
	v->a[54203] = anon_sym_COLON;
	v->a[54204] = 7;
	v->a[54205] = actions(1436);
	v->a[54206] = 1;
	v->a[54207] = sym_comment;
	v->a[54208] = actions(1936);
	v->a[54209] = 1;
	v->a[54210] = anon_sym_PIPE;
	v->a[54211] = actions(2748);
	v->a[54212] = 1;
	v->a[54213] = anon_sym_GT_GT;
	v->a[54214] = actions(2750);
	v->a[54215] = 1;
	v->a[54216] = anon_sym_LT_LT;
	v->a[54217] = actions(1938);
	v->a[54218] = 2;
	v->a[54219] = anon_sym_AMP_AMP;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = anon_sym_PIPE_PIPE;
	v->a[54221] = actions(2746);
	v->a[54222] = 2;
	v->a[54223] = anon_sym_LT;
	v->a[54224] = anon_sym_GT;
	v->a[54225] = state(1281);
	v->a[54226] = 3;
	v->a[54227] = sym_file_redirect;
	v->a[54228] = sym_heredoc_redirect;
	v->a[54229] = aux_sym_redirected_statement_repeat1;
	v->a[54230] = 3;
	v->a[54231] = actions(1436);
	v->a[54232] = 1;
	v->a[54233] = sym_comment;
	v->a[54234] = actions(1052);
	v->a[54235] = 3;
	v->a[54236] = anon_sym_PIPE;
	v->a[54237] = anon_sym_LT;
	v->a[54238] = anon_sym_GT;
	v->a[54239] = actions(1050);
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = 7;
	v->a[54241] = sym__concat;
	v->a[54242] = sym_variable_name;
	v->a[54243] = anon_sym_AMP_AMP;
	v->a[54244] = anon_sym_PIPE_PIPE;
	v->a[54245] = anon_sym_GT_GT;
	v->a[54246] = anon_sym_LT_LT;
	v->a[54247] = aux_sym_concatenation_token1;
	v->a[54248] = 3;
	v->a[54249] = actions(1436);
	v->a[54250] = 1;
	v->a[54251] = sym_comment;
	v->a[54252] = actions(1048);
	v->a[54253] = 2;
	v->a[54254] = anon_sym_PLUS;
	v->a[54255] = anon_sym_DASH;
	v->a[54256] = actions(1046);
	v->a[54257] = 7;
	v->a[54258] = anon_sym_RPAREN;
	v->a[54259] = anon_sym_STAR;
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = anon_sym_SLASH;
	v->a[54261] = anon_sym_PERCENT;
	v->a[54262] = anon_sym_QMARK;
	v->a[54263] = anon_sym_PLUS_PLUS;
	v->a[54264] = anon_sym_DASH_DASH;
	v->a[54265] = 3;
	v->a[54266] = actions(1436);
	v->a[54267] = 1;
	v->a[54268] = sym_comment;
	v->a[54269] = actions(2736);
	v->a[54270] = 2;
	v->a[54271] = anon_sym_PLUS;
	v->a[54272] = anon_sym_DASH;
	v->a[54273] = actions(2734);
	v->a[54274] = 7;
	v->a[54275] = anon_sym_RPAREN;
	v->a[54276] = anon_sym_STAR;
	v->a[54277] = anon_sym_SLASH;
	v->a[54278] = anon_sym_PERCENT;
	v->a[54279] = anon_sym_QMARK;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = anon_sym_PLUS_PLUS;
	v->a[54281] = anon_sym_DASH_DASH;
	v->a[54282] = 6;
	v->a[54283] = actions(1436);
	v->a[54284] = 1;
	v->a[54285] = sym_comment;
	v->a[54286] = actions(2752);
	v->a[54287] = 1;
	v->a[54288] = anon_sym_RPAREN_RPAREN;
	v->a[54289] = actions(2754);
	v->a[54290] = 1;
	v->a[54291] = anon_sym_QMARK;
	v->a[54292] = actions(2702);
	v->a[54293] = 2;
	v->a[54294] = anon_sym_PLUS;
	v->a[54295] = anon_sym_DASH;
	v->a[54296] = actions(2706);
	v->a[54297] = 2;
	v->a[54298] = anon_sym_PLUS_PLUS;
	v->a[54299] = anon_sym_DASH_DASH;
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
