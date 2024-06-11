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
	v->a[39500] = aux_sym_concatenation_token1;
	v->a[39501] = anon_sym_DOLLAR;
	v->a[39502] = anon_sym_DQUOTE;
	v->a[39503] = sym_raw_string;
	v->a[39504] = sym_number;
	v->a[39505] = anon_sym_DOLLAR_LBRACE;
	v->a[39506] = anon_sym_DOLLAR_LPAREN;
	v->a[39507] = anon_sym_BQUOTE;
	v->a[39508] = sym_word;
	v->a[39509] = anon_sym_SEMI;
	v->a[39510] = 17;
	v->a[39511] = actions(1094);
	v->a[39512] = 1;
	v->a[39513] = sym_comment;
	v->a[39514] = actions(1108);
	v->a[39515] = 1;
	v->a[39516] = anon_sym_PIPE;
	v->a[39517] = actions(1110);
	v->a[39518] = 1;
	v->a[39519] = anon_sym_AMP_AMP;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = actions(1112);
	v->a[39521] = 1;
	v->a[39522] = anon_sym_CARET;
	v->a[39523] = actions(1114);
	v->a[39524] = 1;
	v->a[39525] = anon_sym_AMP;
	v->a[39526] = actions(1126);
	v->a[39527] = 1;
	v->a[39528] = anon_sym_PIPE_PIPE;
	v->a[39529] = actions(1128);
	v->a[39530] = 1;
	v->a[39531] = anon_sym_QMARK;
	v->a[39532] = actions(1155);
	v->a[39533] = 1;
	v->a[39534] = anon_sym_EQ;
	v->a[39535] = actions(1463);
	v->a[39536] = 1;
	v->a[39537] = anon_sym_RPAREN_RPAREN;
	v->a[39538] = actions(1082);
	v->a[39539] = 2;
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = anon_sym_LT;
	v->a[39541] = anon_sym_GT;
	v->a[39542] = actions(1084);
	v->a[39543] = 2;
	v->a[39544] = anon_sym_GT_GT;
	v->a[39545] = anon_sym_LT_LT;
	v->a[39546] = actions(1086);
	v->a[39547] = 2;
	v->a[39548] = anon_sym_LT_EQ;
	v->a[39549] = anon_sym_GT_EQ;
	v->a[39550] = actions(1088);
	v->a[39551] = 2;
	v->a[39552] = anon_sym_PLUS;
	v->a[39553] = anon_sym_DASH;
	v->a[39554] = actions(1092);
	v->a[39555] = 2;
	v->a[39556] = anon_sym_PLUS_PLUS2;
	v->a[39557] = anon_sym_DASH_DASH2;
	v->a[39558] = actions(1116);
	v->a[39559] = 2;
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = anon_sym_EQ_EQ;
	v->a[39561] = anon_sym_BANG_EQ;
	v->a[39562] = actions(1090);
	v->a[39563] = 3;
	v->a[39564] = anon_sym_STAR;
	v->a[39565] = anon_sym_SLASH;
	v->a[39566] = anon_sym_PERCENT;
	v->a[39567] = actions(1288);
	v->a[39568] = 10;
	v->a[39569] = anon_sym_PLUS_EQ;
	v->a[39570] = anon_sym_DASH_EQ;
	v->a[39571] = anon_sym_STAR_EQ;
	v->a[39572] = anon_sym_SLASH_EQ;
	v->a[39573] = anon_sym_PERCENT_EQ;
	v->a[39574] = anon_sym_LT_LT_EQ;
	v->a[39575] = anon_sym_GT_GT_EQ;
	v->a[39576] = anon_sym_AMP_EQ;
	v->a[39577] = anon_sym_CARET_EQ;
	v->a[39578] = anon_sym_PIPE_EQ;
	v->a[39579] = 3;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = actions(3);
	v->a[39581] = 1;
	v->a[39582] = sym_comment;
	v->a[39583] = actions(1187);
	v->a[39584] = 3;
	v->a[39585] = sym_file_descriptor;
	v->a[39586] = sym__concat;
	v->a[39587] = sym_variable_name;
	v->a[39588] = actions(1185);
	v->a[39589] = 30;
	v->a[39590] = anon_sym_esac;
	v->a[39591] = anon_sym_PIPE;
	v->a[39592] = anon_sym_SEMI_SEMI;
	v->a[39593] = anon_sym_AMP_AMP;
	v->a[39594] = anon_sym_PIPE_PIPE;
	v->a[39595] = anon_sym_LT;
	v->a[39596] = anon_sym_GT;
	v->a[39597] = anon_sym_GT_GT;
	v->a[39598] = anon_sym_AMP_GT;
	v->a[39599] = anon_sym_AMP_GT_GT;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
