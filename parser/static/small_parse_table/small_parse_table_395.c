/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_395.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1975(t_small_parse_table_array *v)
{
	v->a[39500] = anon_sym_GT_AMP;
	v->a[39501] = anon_sym_GT_PIPE;
	v->a[39502] = anon_sym_LT_AMP_DASH;
	v->a[39503] = anon_sym_GT_AMP_DASH;
	v->a[39504] = anon_sym_LT_LT;
	v->a[39505] = anon_sym_LT_LT_DASH;
	v->a[39506] = aux_sym_heredoc_redirect_token1;
	v->a[39507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39508] = anon_sym_AMP;
	v->a[39509] = aux_sym_concatenation_token1;
	v->a[39510] = anon_sym_DOLLAR;
	v->a[39511] = anon_sym_DQUOTE;
	v->a[39512] = sym_raw_string;
	v->a[39513] = sym_number;
	v->a[39514] = anon_sym_DOLLAR_LBRACE;
	v->a[39515] = anon_sym_DOLLAR_LPAREN;
	v->a[39516] = anon_sym_BQUOTE;
	v->a[39517] = sym_word;
	v->a[39518] = anon_sym_SEMI;
	v->a[39519] = 17;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = actions(1074);
	v->a[39521] = 1;
	v->a[39522] = sym_comment;
	v->a[39523] = actions(1136);
	v->a[39524] = 1;
	v->a[39525] = anon_sym_PIPE;
	v->a[39526] = actions(1138);
	v->a[39527] = 1;
	v->a[39528] = anon_sym_AMP_AMP;
	v->a[39529] = actions(1140);
	v->a[39530] = 1;
	v->a[39531] = anon_sym_PIPE_PIPE;
	v->a[39532] = actions(1150);
	v->a[39533] = 1;
	v->a[39534] = anon_sym_CARET;
	v->a[39535] = actions(1152);
	v->a[39536] = 1;
	v->a[39537] = anon_sym_AMP;
	v->a[39538] = actions(1239);
	v->a[39539] = 1;
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = anon_sym_EQ;
	v->a[39541] = actions(1241);
	v->a[39542] = 1;
	v->a[39543] = anon_sym_QMARK;
	v->a[39544] = actions(1410);
	v->a[39545] = 1;
	v->a[39546] = anon_sym_RPAREN_RPAREN;
	v->a[39547] = actions(1144);
	v->a[39548] = 2;
	v->a[39549] = anon_sym_LT;
	v->a[39550] = anon_sym_GT;
	v->a[39551] = actions(1146);
	v->a[39552] = 2;
	v->a[39553] = anon_sym_GT_GT;
	v->a[39554] = anon_sym_LT_LT;
	v->a[39555] = actions(1154);
	v->a[39556] = 2;
	v->a[39557] = anon_sym_EQ_EQ;
	v->a[39558] = anon_sym_BANG_EQ;
	v->a[39559] = actions(1156);
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = 2;
	v->a[39561] = anon_sym_LT_EQ;
	v->a[39562] = anon_sym_GT_EQ;
	v->a[39563] = actions(1158);
	v->a[39564] = 2;
	v->a[39565] = anon_sym_PLUS;
	v->a[39566] = anon_sym_DASH;
	v->a[39567] = actions(1162);
	v->a[39568] = 2;
	v->a[39569] = anon_sym_PLUS_PLUS2;
	v->a[39570] = anon_sym_DASH_DASH2;
	v->a[39571] = actions(1160);
	v->a[39572] = 3;
	v->a[39573] = anon_sym_STAR;
	v->a[39574] = anon_sym_SLASH;
	v->a[39575] = anon_sym_PERCENT;
	v->a[39576] = actions(1252);
	v->a[39577] = 10;
	v->a[39578] = anon_sym_PLUS_EQ;
	v->a[39579] = anon_sym_DASH_EQ;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = anon_sym_STAR_EQ;
	v->a[39581] = anon_sym_SLASH_EQ;
	v->a[39582] = anon_sym_PERCENT_EQ;
	v->a[39583] = anon_sym_LT_LT_EQ;
	v->a[39584] = anon_sym_GT_GT_EQ;
	v->a[39585] = anon_sym_AMP_EQ;
	v->a[39586] = anon_sym_CARET_EQ;
	v->a[39587] = anon_sym_PIPE_EQ;
	v->a[39588] = 3;
	v->a[39589] = actions(3);
	v->a[39590] = 1;
	v->a[39591] = sym_comment;
	v->a[39592] = actions(1070);
	v->a[39593] = 3;
	v->a[39594] = sym_file_descriptor;
	v->a[39595] = sym__concat;
	v->a[39596] = sym_variable_name;
	v->a[39597] = actions(1072);
	v->a[39598] = 30;
	v->a[39599] = anon_sym_PIPE;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
