/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = aux_sym__simple_variable_name_token1;
	v->a[48201] = aux_sym__multiline_variable_name_token1;
	v->a[48202] = actions(2009);
	v->a[48203] = 8;
	v->a[48204] = anon_sym_BANG;
	v->a[48205] = anon_sym_DASH;
	v->a[48206] = anon_sym_STAR;
	v->a[48207] = anon_sym_QMARK;
	v->a[48208] = anon_sym_DOLLAR;
	v->a[48209] = anon_sym_POUND;
	v->a[48210] = anon_sym_AT;
	v->a[48211] = anon_sym_0;
	v->a[48212] = 6;
	v->a[48213] = actions(3);
	v->a[48214] = 1;
	v->a[48215] = sym_comment;
	v->a[48216] = actions(2013);
	v->a[48217] = 1;
	v->a[48218] = sym_string_content;
	v->a[48219] = actions(2017);
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = 1;
	v->a[48221] = sym_variable_name;
	v->a[48222] = actions(2239);
	v->a[48223] = 1;
	v->a[48224] = anon_sym_DQUOTE;
	v->a[48225] = actions(2015);
	v->a[48226] = 2;
	v->a[48227] = aux_sym__simple_variable_name_token1;
	v->a[48228] = aux_sym__multiline_variable_name_token1;
	v->a[48229] = actions(2009);
	v->a[48230] = 8;
	v->a[48231] = anon_sym_BANG;
	v->a[48232] = anon_sym_DASH;
	v->a[48233] = anon_sym_STAR;
	v->a[48234] = anon_sym_QMARK;
	v->a[48235] = anon_sym_DOLLAR;
	v->a[48236] = anon_sym_POUND;
	v->a[48237] = anon_sym_AT;
	v->a[48238] = anon_sym_0;
	v->a[48239] = 6;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = actions(3);
	v->a[48241] = 1;
	v->a[48242] = sym_comment;
	v->a[48243] = actions(2013);
	v->a[48244] = 1;
	v->a[48245] = sym_string_content;
	v->a[48246] = actions(2017);
	v->a[48247] = 1;
	v->a[48248] = sym_variable_name;
	v->a[48249] = actions(2241);
	v->a[48250] = 1;
	v->a[48251] = anon_sym_DQUOTE;
	v->a[48252] = actions(2015);
	v->a[48253] = 2;
	v->a[48254] = aux_sym__simple_variable_name_token1;
	v->a[48255] = aux_sym__multiline_variable_name_token1;
	v->a[48256] = actions(2009);
	v->a[48257] = 8;
	v->a[48258] = anon_sym_BANG;
	v->a[48259] = anon_sym_DASH;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = anon_sym_STAR;
	v->a[48261] = anon_sym_QMARK;
	v->a[48262] = anon_sym_DOLLAR;
	v->a[48263] = anon_sym_POUND;
	v->a[48264] = anon_sym_AT;
	v->a[48265] = anon_sym_0;
	v->a[48266] = 3;
	v->a[48267] = actions(3);
	v->a[48268] = 1;
	v->a[48269] = sym_comment;
	v->a[48270] = actions(2243);
	v->a[48271] = 2;
	v->a[48272] = ts_builtin_sym_end;
	v->a[48273] = aux_sym_heredoc_redirect_token1;
	v->a[48274] = actions(2245);
	v->a[48275] = 11;
	v->a[48276] = anon_sym_PIPE;
	v->a[48277] = anon_sym_RPAREN;
	v->a[48278] = anon_sym_SEMI_SEMI;
	v->a[48279] = anon_sym_AMP_AMP;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = anon_sym_PIPE_PIPE;
	v->a[48281] = anon_sym_LT;
	v->a[48282] = anon_sym_GT;
	v->a[48283] = anon_sym_GT_GT;
	v->a[48284] = anon_sym_LT_LT;
	v->a[48285] = anon_sym_BQUOTE;
	v->a[48286] = anon_sym_SEMI;
	v->a[48287] = 6;
	v->a[48288] = actions(3);
	v->a[48289] = 1;
	v->a[48290] = sym_comment;
	v->a[48291] = actions(2013);
	v->a[48292] = 1;
	v->a[48293] = sym_string_content;
	v->a[48294] = actions(2017);
	v->a[48295] = 1;
	v->a[48296] = sym_variable_name;
	v->a[48297] = actions(2247);
	v->a[48298] = 1;
	v->a[48299] = anon_sym_DQUOTE;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
