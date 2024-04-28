/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3072.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15360(t_small_parse_table_array *v)
{
	v->a[307200] = anon_sym_LPAREN_LPAREN;
	v->a[307201] = anon_sym_LPAREN;
	v->a[307202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[307203] = anon_sym_DOLLAR_LBRACK;
	v->a[307204] = aux_sym_number_token1;
	v->a[307205] = aux_sym_number_token2;
	v->a[307206] = anon_sym_DOLLAR_LBRACE;
	v->a[307207] = anon_sym_RBRACE3;
	v->a[307208] = anon_sym_DOLLAR_LPAREN;
	v->a[307209] = anon_sym_BQUOTE;
	v->a[307210] = anon_sym_DOLLAR_BQUOTE;
	v->a[307211] = aux_sym__simple_variable_name_token1;
	v->a[307212] = 3;
	v->a[307213] = actions(3);
	v->a[307214] = 1;
	v->a[307215] = sym_comment;
	v->a[307216] = actions(1358);
	v->a[307217] = 1;
	v->a[307218] = aux_sym_heredoc_redirect_token1;
	v->a[307219] = actions(1356);
	small_parse_table_15361(v);
}

void	small_parse_table_15361(t_small_parse_table_array *v)
{
	v->a[307220] = 12;
	v->a[307221] = anon_sym_LPAREN_LPAREN;
	v->a[307222] = anon_sym_LPAREN;
	v->a[307223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[307224] = anon_sym_DOLLAR_LBRACK;
	v->a[307225] = aux_sym_number_token1;
	v->a[307226] = aux_sym_number_token2;
	v->a[307227] = anon_sym_DOLLAR_LBRACE;
	v->a[307228] = anon_sym_RBRACE3;
	v->a[307229] = anon_sym_DOLLAR_LPAREN;
	v->a[307230] = anon_sym_BQUOTE;
	v->a[307231] = anon_sym_DOLLAR_BQUOTE;
	v->a[307232] = aux_sym__simple_variable_name_token1;
	v->a[307233] = 7;
	v->a[307234] = actions(71);
	v->a[307235] = 1;
	v->a[307236] = sym_comment;
	v->a[307237] = actions(13974);
	v->a[307238] = 1;
	v->a[307239] = anon_sym_LT_LT;
	small_parse_table_15362(v);
}

void	small_parse_table_15362(t_small_parse_table_array *v)
{
	v->a[307240] = actions(13980);
	v->a[307241] = 1;
	v->a[307242] = anon_sym_LT_LT_DASH;
	v->a[307243] = actions(13982);
	v->a[307244] = 1;
	v->a[307245] = anon_sym_LT_LT_LT;
	v->a[307246] = actions(13978);
	v->a[307247] = 2;
	v->a[307248] = anon_sym_LT_AMP_DASH;
	v->a[307249] = anon_sym_GT_AMP_DASH;
	v->a[307250] = actions(13976);
	v->a[307251] = 3;
	v->a[307252] = anon_sym_GT_GT;
	v->a[307253] = anon_sym_AMP_GT_GT;
	v->a[307254] = anon_sym_GT_PIPE;
	v->a[307255] = actions(13972);
	v->a[307256] = 5;
	v->a[307257] = anon_sym_LT;
	v->a[307258] = anon_sym_GT;
	v->a[307259] = anon_sym_AMP_GT;
	small_parse_table_15363(v);
}

void	small_parse_table_15363(t_small_parse_table_array *v)
{
	v->a[307260] = anon_sym_LT_AMP;
	v->a[307261] = anon_sym_GT_AMP;
	v->a[307262] = 5;
	v->a[307263] = actions(3);
	v->a[307264] = 1;
	v->a[307265] = sym_comment;
	v->a[307266] = actions(13732);
	v->a[307267] = 1;
	v->a[307268] = sym_string_content;
	v->a[307269] = actions(13736);
	v->a[307270] = 1;
	v->a[307271] = sym_variable_name;
	v->a[307272] = actions(13734);
	v->a[307273] = 2;
	v->a[307274] = aux_sym__simple_variable_name_token1;
	v->a[307275] = aux_sym__multiline_variable_name_token1;
	v->a[307276] = actions(13730);
	v->a[307277] = 9;
	v->a[307278] = anon_sym_DASH;
	v->a[307279] = anon_sym_STAR;
	small_parse_table_15364(v);
}

void	small_parse_table_15364(t_small_parse_table_array *v)
{
	v->a[307280] = anon_sym_BANG;
	v->a[307281] = anon_sym_QMARK;
	v->a[307282] = anon_sym_DOLLAR;
	v->a[307283] = anon_sym_POUND;
	v->a[307284] = anon_sym_AT2;
	v->a[307285] = anon_sym_0;
	v->a[307286] = anon_sym__;
	v->a[307287] = 4;
	v->a[307288] = actions(3);
	v->a[307289] = 1;
	v->a[307290] = sym_comment;
	v->a[307291] = actions(13988);
	v->a[307292] = 1;
	v->a[307293] = sym_variable_name;
	v->a[307294] = actions(13986);
	v->a[307295] = 2;
	v->a[307296] = aux_sym__simple_variable_name_token1;
	v->a[307297] = aux_sym__multiline_variable_name_token1;
	v->a[307298] = actions(13984);
	v->a[307299] = 9;
	small_parse_table_15365(v);
}

/* EOF small_parse_table_3072.c */
