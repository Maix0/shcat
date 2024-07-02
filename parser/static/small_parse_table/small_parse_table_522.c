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
	v->a[52200] = sym_comment;
	v->a[52201] = actions(361);
	v->a[52202] = 1;
	v->a[52203] = sym_file_descriptor;
	v->a[52204] = actions(1827);
	v->a[52205] = 1;
	v->a[52206] = sym_variable_name;
	v->a[52207] = actions(1825);
	v->a[52208] = 2;
	v->a[52209] = aux_sym__simple_variable_name_token1;
	v->a[52210] = aux_sym__multiline_variable_name_token1;
	v->a[52211] = actions(1823);
	v->a[52212] = 9;
	v->a[52213] = anon_sym_BANG;
	v->a[52214] = anon_sym_DASH;
	v->a[52215] = anon_sym_STAR;
	v->a[52216] = anon_sym_QMARK;
	v->a[52217] = anon_sym_DOLLAR;
	v->a[52218] = anon_sym_POUND;
	v->a[52219] = anon_sym_AT;
	small_parse_table_2611(v);
}

void	small_parse_table_2611(t_small_parse_table_array *v)
{
	v->a[52220] = anon_sym_0;
	v->a[52221] = anon_sym__;
	v->a[52222] = actions(363);
	v->a[52223] = 12;
	v->a[52224] = anon_sym_PIPE;
	v->a[52225] = anon_sym_AMP_AMP;
	v->a[52226] = anon_sym_PIPE_PIPE;
	v->a[52227] = anon_sym_LT;
	v->a[52228] = anon_sym_GT;
	v->a[52229] = anon_sym_GT_GT;
	v->a[52230] = anon_sym_LT_AMP;
	v->a[52231] = anon_sym_GT_AMP;
	v->a[52232] = anon_sym_GT_PIPE;
	v->a[52233] = anon_sym_LT_GT;
	v->a[52234] = anon_sym_LT_LT;
	v->a[52235] = anon_sym_LT_LT_DASH;
	v->a[52236] = 6;
	v->a[52237] = actions(3);
	v->a[52238] = 1;
	v->a[52239] = sym_comment;
	small_parse_table_2612(v);
}

void	small_parse_table_2612(t_small_parse_table_array *v)
{
	v->a[52240] = actions(1194);
	v->a[52241] = 1;
	v->a[52242] = sym_file_descriptor;
	v->a[52243] = actions(1819);
	v->a[52244] = 1;
	v->a[52245] = aux_sym_concatenation_token1;
	v->a[52246] = actions(1829);
	v->a[52247] = 1;
	v->a[52248] = sym__concat;
	v->a[52249] = state(877);
	v->a[52250] = 1;
	v->a[52251] = aux_sym_concatenation_repeat1;
	v->a[52252] = actions(1196);
	v->a[52253] = 21;
	v->a[52254] = anon_sym_PIPE;
	v->a[52255] = anon_sym_AMP_AMP;
	v->a[52256] = anon_sym_PIPE_PIPE;
	v->a[52257] = anon_sym_LT;
	v->a[52258] = anon_sym_GT;
	v->a[52259] = anon_sym_GT_GT;
	small_parse_table_2613(v);
}

void	small_parse_table_2613(t_small_parse_table_array *v)
{
	v->a[52260] = anon_sym_LT_AMP;
	v->a[52261] = anon_sym_GT_AMP;
	v->a[52262] = anon_sym_GT_PIPE;
	v->a[52263] = anon_sym_LT_GT;
	v->a[52264] = anon_sym_LT_LT;
	v->a[52265] = anon_sym_LT_LT_DASH;
	v->a[52266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52267] = anon_sym_DOLLAR;
	v->a[52268] = anon_sym_DQUOTE;
	v->a[52269] = sym_raw_string;
	v->a[52270] = sym_number;
	v->a[52271] = anon_sym_DOLLAR_LBRACE;
	v->a[52272] = anon_sym_DOLLAR_LPAREN;
	v->a[52273] = anon_sym_BQUOTE;
	v->a[52274] = sym_word;
	v->a[52275] = 3;
	v->a[52276] = actions(3);
	v->a[52277] = 1;
	v->a[52278] = sym_comment;
	v->a[52279] = actions(713);
	small_parse_table_2614(v);
}

void	small_parse_table_2614(t_small_parse_table_array *v)
{
	v->a[52280] = 3;
	v->a[52281] = sym_file_descriptor;
	v->a[52282] = sym__concat;
	v->a[52283] = sym__bare_dollar;
	v->a[52284] = actions(711);
	v->a[52285] = 22;
	v->a[52286] = anon_sym_PIPE;
	v->a[52287] = anon_sym_AMP_AMP;
	v->a[52288] = anon_sym_PIPE_PIPE;
	v->a[52289] = anon_sym_LT;
	v->a[52290] = anon_sym_GT;
	v->a[52291] = anon_sym_GT_GT;
	v->a[52292] = anon_sym_LT_AMP;
	v->a[52293] = anon_sym_GT_AMP;
	v->a[52294] = anon_sym_GT_PIPE;
	v->a[52295] = anon_sym_LT_GT;
	v->a[52296] = anon_sym_LT_LT;
	v->a[52297] = anon_sym_LT_LT_DASH;
	v->a[52298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52299] = aux_sym_concatenation_token1;
	small_parse_table_2615(v);
}

/* EOF small_parse_table_522.c */
