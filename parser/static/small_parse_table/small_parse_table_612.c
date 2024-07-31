/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_612.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3060(t_small_parse_table_array *v)
{
	v->a[61200] = actions(3);
	v->a[61201] = 1;
	v->a[61202] = sym_comment;
	v->a[61203] = actions(2431);
	v->a[61204] = 1;
	v->a[61205] = sym_string_content;
	v->a[61206] = actions(2435);
	v->a[61207] = 1;
	v->a[61208] = sym_variable_name;
	v->a[61209] = actions(2542);
	v->a[61210] = 1;
	v->a[61211] = anon_sym_DQUOTE;
	v->a[61212] = actions(2433);
	v->a[61213] = 2;
	v->a[61214] = aux_sym__simple_variable_name_token1;
	v->a[61215] = aux_sym__multiline_variable_name_token1;
	v->a[61216] = actions(2427);
	v->a[61217] = 8;
	v->a[61218] = anon_sym_BANG;
	v->a[61219] = anon_sym_DASH;
	small_parse_table_3061(v);
}

void	small_parse_table_3061(t_small_parse_table_array *v)
{
	v->a[61220] = anon_sym_STAR;
	v->a[61221] = anon_sym_QMARK;
	v->a[61222] = anon_sym_DOLLAR;
	v->a[61223] = anon_sym_POUND;
	v->a[61224] = anon_sym_AT;
	v->a[61225] = anon_sym_0;
	v->a[61226] = 6;
	v->a[61227] = actions(3);
	v->a[61228] = 1;
	v->a[61229] = sym_comment;
	v->a[61230] = actions(2431);
	v->a[61231] = 1;
	v->a[61232] = sym_string_content;
	v->a[61233] = actions(2435);
	v->a[61234] = 1;
	v->a[61235] = sym_variable_name;
	v->a[61236] = actions(2544);
	v->a[61237] = 1;
	v->a[61238] = anon_sym_DQUOTE;
	v->a[61239] = actions(2433);
	small_parse_table_3062(v);
}

void	small_parse_table_3062(t_small_parse_table_array *v)
{
	v->a[61240] = 2;
	v->a[61241] = aux_sym__simple_variable_name_token1;
	v->a[61242] = aux_sym__multiline_variable_name_token1;
	v->a[61243] = actions(2427);
	v->a[61244] = 8;
	v->a[61245] = anon_sym_BANG;
	v->a[61246] = anon_sym_DASH;
	v->a[61247] = anon_sym_STAR;
	v->a[61248] = anon_sym_QMARK;
	v->a[61249] = anon_sym_DOLLAR;
	v->a[61250] = anon_sym_POUND;
	v->a[61251] = anon_sym_AT;
	v->a[61252] = anon_sym_0;
	v->a[61253] = 5;
	v->a[61254] = actions(407);
	v->a[61255] = 1;
	v->a[61256] = sym_comment;
	v->a[61257] = actions(1714);
	v->a[61258] = 1;
	v->a[61259] = anon_sym_PIPE;
	small_parse_table_3063(v);
}

void	small_parse_table_3063(t_small_parse_table_array *v)
{
	v->a[61260] = state(1269);
	v->a[61261] = 1;
	v->a[61262] = aux_sym_pipeline_repeat1;
	v->a[61263] = actions(1717);
	v->a[61264] = 3;
	v->a[61265] = anon_sym_LT;
	v->a[61266] = anon_sym_GT;
	v->a[61267] = anon_sym_LT_LT;
	v->a[61268] = actions(1712);
	v->a[61269] = 8;
	v->a[61270] = anon_sym_AMP_AMP;
	v->a[61271] = anon_sym_PIPE_PIPE;
	v->a[61272] = anon_sym_GT_GT;
	v->a[61273] = anon_sym_LT_AMP;
	v->a[61274] = anon_sym_GT_AMP;
	v->a[61275] = anon_sym_GT_PIPE;
	v->a[61276] = anon_sym_LT_GT;
	v->a[61277] = anon_sym_LT_LT_DASH;
	v->a[61278] = 6;
	v->a[61279] = actions(3);
	small_parse_table_3064(v);
}

void	small_parse_table_3064(t_small_parse_table_array *v)
{
	v->a[61280] = 1;
	v->a[61281] = sym_comment;
	v->a[61282] = actions(2546);
	v->a[61283] = 1;
	v->a[61284] = aux_sym_heredoc_redirect_token1;
	v->a[61285] = state(1743);
	v->a[61286] = 1;
	v->a[61287] = sym__heredoc_expression;
	v->a[61288] = actions(924);
	v->a[61289] = 2;
	v->a[61290] = anon_sym_AMP_AMP;
	v->a[61291] = anon_sym_PIPE_PIPE;
	v->a[61292] = state(1313);
	v->a[61293] = 2;
	v->a[61294] = sym_file_redirect;
	v->a[61295] = aux_sym_redirected_statement_repeat2;
	v->a[61296] = actions(926);
	v->a[61297] = 7;
	v->a[61298] = anon_sym_LT;
	v->a[61299] = anon_sym_GT;
	small_parse_table_3065(v);
}

/* EOF small_parse_table_612.c */
