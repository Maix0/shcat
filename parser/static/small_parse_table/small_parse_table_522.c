/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_522.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2610(t_small_parse_table_array *v)
{
	v->a[52200] = anon_sym_AT;
	v->a[52201] = anon_sym_0;
	v->a[52202] = 5;
	v->a[52203] = actions(3);
	v->a[52204] = 1;
	v->a[52205] = sym_comment;
	v->a[52206] = actions(1974);
	v->a[52207] = 1;
	v->a[52208] = aux_sym_heredoc_redirect_token1;
	v->a[52209] = actions(2630);
	v->a[52210] = 1;
	v->a[52211] = anon_sym_PIPE;
	v->a[52212] = state(1220);
	v->a[52213] = 1;
	v->a[52214] = aux_sym_pipeline_repeat1;
	v->a[52215] = actions(1979);
	v->a[52216] = 8;
	v->a[52217] = anon_sym_SEMI_SEMI;
	v->a[52218] = anon_sym_AMP_AMP;
	v->a[52219] = anon_sym_PIPE_PIPE;
	small_parse_table_2611(v);
}

void	small_parse_table_2611(t_small_parse_table_array *v)
{
	v->a[52220] = anon_sym_LT;
	v->a[52221] = anon_sym_GT;
	v->a[52222] = anon_sym_GT_GT;
	v->a[52223] = anon_sym_LT_LT;
	v->a[52224] = anon_sym_SEMI;
	v->a[52225] = 7;
	v->a[52226] = actions(3);
	v->a[52227] = 1;
	v->a[52228] = sym_comment;
	v->a[52229] = actions(580);
	v->a[52230] = 1;
	v->a[52231] = anon_sym_PIPE;
	v->a[52232] = actions(597);
	v->a[52233] = 1;
	v->a[52234] = anon_sym_LT_LT;
	v->a[52235] = actions(2635);
	v->a[52236] = 1;
	v->a[52237] = aux_sym_heredoc_redirect_token1;
	v->a[52238] = actions(1033);
	v->a[52239] = 2;
	small_parse_table_2612(v);
}

void	small_parse_table_2612(t_small_parse_table_array *v)
{
	v->a[52240] = anon_sym_AMP_AMP;
	v->a[52241] = anon_sym_PIPE_PIPE;
	v->a[52242] = actions(2633);
	v->a[52243] = 3;
	v->a[52244] = anon_sym_LT;
	v->a[52245] = anon_sym_GT;
	v->a[52246] = anon_sym_GT_GT;
	v->a[52247] = state(1225);
	v->a[52248] = 3;
	v->a[52249] = sym_file_redirect;
	v->a[52250] = sym_heredoc_redirect;
	v->a[52251] = aux_sym_redirected_statement_repeat1;
	v->a[52252] = 7;
	v->a[52253] = actions(3);
	v->a[52254] = 1;
	v->a[52255] = sym_comment;
	v->a[52256] = actions(580);
	v->a[52257] = 1;
	v->a[52258] = anon_sym_PIPE;
	v->a[52259] = actions(597);
	small_parse_table_2613(v);
}

void	small_parse_table_2613(t_small_parse_table_array *v)
{
	v->a[52260] = 1;
	v->a[52261] = anon_sym_LT_LT;
	v->a[52262] = actions(2637);
	v->a[52263] = 1;
	v->a[52264] = aux_sym_heredoc_redirect_token1;
	v->a[52265] = actions(1033);
	v->a[52266] = 2;
	v->a[52267] = anon_sym_AMP_AMP;
	v->a[52268] = anon_sym_PIPE_PIPE;
	v->a[52269] = actions(2633);
	v->a[52270] = 3;
	v->a[52271] = anon_sym_LT;
	v->a[52272] = anon_sym_GT;
	v->a[52273] = anon_sym_GT_GT;
	v->a[52274] = state(1225);
	v->a[52275] = 3;
	v->a[52276] = sym_file_redirect;
	v->a[52277] = sym_heredoc_redirect;
	v->a[52278] = aux_sym_redirected_statement_repeat1;
	v->a[52279] = 5;
	small_parse_table_2614(v);
}

void	small_parse_table_2614(t_small_parse_table_array *v)
{
	v->a[52280] = actions(1436);
	v->a[52281] = 1;
	v->a[52282] = sym_comment;
	v->a[52283] = state(1223);
	v->a[52284] = 1;
	v->a[52285] = aux_sym_concatenation_repeat1;
	v->a[52286] = actions(2639);
	v->a[52287] = 2;
	v->a[52288] = sym__concat;
	v->a[52289] = aux_sym_concatenation_token1;
	v->a[52290] = actions(973);
	v->a[52291] = 3;
	v->a[52292] = anon_sym_PIPE;
	v->a[52293] = anon_sym_LT;
	v->a[52294] = anon_sym_GT;
	v->a[52295] = actions(981);
	v->a[52296] = 5;
	v->a[52297] = sym_variable_name;
	v->a[52298] = anon_sym_AMP_AMP;
	v->a[52299] = anon_sym_PIPE_PIPE;
	small_parse_table_2615(v);
}

/* EOF small_parse_table_522.c */
