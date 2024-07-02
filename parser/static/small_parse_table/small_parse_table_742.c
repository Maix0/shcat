/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_742.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3710(t_small_parse_table_array *v)
{
	v->a[74200] = actions(2881);
	v->a[74201] = 1;
	v->a[74202] = sym_string_content;
	v->a[74203] = actions(2885);
	v->a[74204] = 1;
	v->a[74205] = sym_variable_name;
	v->a[74206] = actions(3018);
	v->a[74207] = 1;
	v->a[74208] = anon_sym_DQUOTE;
	v->a[74209] = actions(2883);
	v->a[74210] = 2;
	v->a[74211] = aux_sym__simple_variable_name_token1;
	v->a[74212] = aux_sym__multiline_variable_name_token1;
	v->a[74213] = actions(2877);
	v->a[74214] = 9;
	v->a[74215] = anon_sym_BANG;
	v->a[74216] = anon_sym_DASH;
	v->a[74217] = anon_sym_STAR;
	v->a[74218] = anon_sym_QMARK;
	v->a[74219] = anon_sym_DOLLAR;
	small_parse_table_3711(v);
}

void	small_parse_table_3711(t_small_parse_table_array *v)
{
	v->a[74220] = anon_sym_POUND;
	v->a[74221] = anon_sym_AT;
	v->a[74222] = anon_sym_0;
	v->a[74223] = anon_sym__;
	v->a[74224] = 6;
	v->a[74225] = actions(3);
	v->a[74226] = 1;
	v->a[74227] = sym_comment;
	v->a[74228] = actions(2881);
	v->a[74229] = 1;
	v->a[74230] = sym_string_content;
	v->a[74231] = actions(2885);
	v->a[74232] = 1;
	v->a[74233] = sym_variable_name;
	v->a[74234] = actions(3020);
	v->a[74235] = 1;
	v->a[74236] = anon_sym_DQUOTE;
	v->a[74237] = actions(2883);
	v->a[74238] = 2;
	v->a[74239] = aux_sym__simple_variable_name_token1;
	small_parse_table_3712(v);
}

void	small_parse_table_3712(t_small_parse_table_array *v)
{
	v->a[74240] = aux_sym__multiline_variable_name_token1;
	v->a[74241] = actions(2877);
	v->a[74242] = 9;
	v->a[74243] = anon_sym_BANG;
	v->a[74244] = anon_sym_DASH;
	v->a[74245] = anon_sym_STAR;
	v->a[74246] = anon_sym_QMARK;
	v->a[74247] = anon_sym_DOLLAR;
	v->a[74248] = anon_sym_POUND;
	v->a[74249] = anon_sym_AT;
	v->a[74250] = anon_sym_0;
	v->a[74251] = anon_sym__;
	v->a[74252] = 6;
	v->a[74253] = actions(3);
	v->a[74254] = 1;
	v->a[74255] = sym_comment;
	v->a[74256] = actions(2881);
	v->a[74257] = 1;
	v->a[74258] = sym_string_content;
	v->a[74259] = actions(2885);
	small_parse_table_3713(v);
}

void	small_parse_table_3713(t_small_parse_table_array *v)
{
	v->a[74260] = 1;
	v->a[74261] = sym_variable_name;
	v->a[74262] = actions(3022);
	v->a[74263] = 1;
	v->a[74264] = anon_sym_DQUOTE;
	v->a[74265] = actions(2883);
	v->a[74266] = 2;
	v->a[74267] = aux_sym__simple_variable_name_token1;
	v->a[74268] = aux_sym__multiline_variable_name_token1;
	v->a[74269] = actions(2877);
	v->a[74270] = 9;
	v->a[74271] = anon_sym_BANG;
	v->a[74272] = anon_sym_DASH;
	v->a[74273] = anon_sym_STAR;
	v->a[74274] = anon_sym_QMARK;
	v->a[74275] = anon_sym_DOLLAR;
	v->a[74276] = anon_sym_POUND;
	v->a[74277] = anon_sym_AT;
	v->a[74278] = anon_sym_0;
	v->a[74279] = anon_sym__;
	small_parse_table_3714(v);
}

void	small_parse_table_3714(t_small_parse_table_array *v)
{
	v->a[74280] = 7;
	v->a[74281] = actions(3);
	v->a[74282] = 1;
	v->a[74283] = sym_comment;
	v->a[74284] = actions(1079);
	v->a[74285] = 1;
	v->a[74286] = sym_file_descriptor;
	v->a[74287] = actions(3024);
	v->a[74288] = 1;
	v->a[74289] = aux_sym_heredoc_redirect_token1;
	v->a[74290] = state(1954);
	v->a[74291] = 1;
	v->a[74292] = sym__heredoc_expression;
	v->a[74293] = actions(1061);
	v->a[74294] = 2;
	v->a[74295] = anon_sym_AMP_AMP;
	v->a[74296] = anon_sym_PIPE_PIPE;
	v->a[74297] = state(1581);
	v->a[74298] = 2;
	v->a[74299] = sym_file_redirect;
	small_parse_table_3715(v);
}

/* EOF small_parse_table_742.c */
