/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_136.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_680(t_small_parse_table_array *v)
{
	v->a[13600] = anon_sym_STAR;
	v->a[13601] = anon_sym_BANG;
	v->a[13602] = anon_sym_QMARK;
	v->a[13603] = anon_sym_DOLLAR;
	v->a[13604] = anon_sym_POUND;
	v->a[13605] = anon_sym_AT2;
	v->a[13606] = anon_sym_0;
	v->a[13607] = anon_sym__;
	v->a[13608] = actions(1239);
	v->a[13609] = 37;
	v->a[13610] = anon_sym_LPAREN_LPAREN;
	v->a[13611] = anon_sym_SEMI;
	v->a[13612] = anon_sym_PIPE_PIPE;
	v->a[13613] = anon_sym_AMP_AMP;
	v->a[13614] = anon_sym_PIPE;
	v->a[13615] = anon_sym_AMP;
	v->a[13616] = anon_sym_LT;
	v->a[13617] = anon_sym_GT;
	v->a[13618] = anon_sym_LT_LT;
	v->a[13619] = anon_sym_GT_GT;
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = anon_sym_SEMI_SEMI;
	v->a[13621] = anon_sym_SEMI_AMP;
	v->a[13622] = anon_sym_SEMI_SEMI_AMP;
	v->a[13623] = anon_sym_PIPE_AMP;
	v->a[13624] = anon_sym_AMP_GT;
	v->a[13625] = anon_sym_AMP_GT_GT;
	v->a[13626] = anon_sym_LT_AMP;
	v->a[13627] = anon_sym_GT_AMP;
	v->a[13628] = anon_sym_GT_PIPE;
	v->a[13629] = anon_sym_LT_AMP_DASH;
	v->a[13630] = anon_sym_GT_AMP_DASH;
	v->a[13631] = anon_sym_LT_LT_DASH;
	v->a[13632] = aux_sym_heredoc_redirect_token1;
	v->a[13633] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13634] = anon_sym_DOLLAR_LBRACK;
	v->a[13635] = sym__special_character;
	v->a[13636] = sym_raw_string;
	v->a[13637] = sym_ansi_c_string;
	v->a[13638] = aux_sym_number_token1;
	v->a[13639] = aux_sym_number_token2;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = anon_sym_DOLLAR_LBRACE;
	v->a[13641] = anon_sym_DOLLAR_LPAREN;
	v->a[13642] = anon_sym_BQUOTE;
	v->a[13643] = anon_sym_DOLLAR_BQUOTE;
	v->a[13644] = anon_sym_LT_LPAREN;
	v->a[13645] = anon_sym_GT_LPAREN;
	v->a[13646] = sym_word;
	v->a[13647] = 36;
	v->a[13648] = actions(71);
	v->a[13649] = 1;
	v->a[13650] = sym_comment;
	v->a[13651] = actions(231);
	v->a[13652] = 1;
	v->a[13653] = anon_sym_RPAREN_RPAREN;
	v->a[13654] = actions(1141);
	v->a[13655] = 1;
	v->a[13656] = anon_sym_DOLLAR_LBRACK;
	v->a[13657] = actions(1145);
	v->a[13658] = 1;
	v->a[13659] = anon_sym_DOLLAR;
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = actions(1149);
	v->a[13661] = 1;
	v->a[13662] = anon_sym_DQUOTE;
	v->a[13663] = actions(1153);
	v->a[13664] = 1;
	v->a[13665] = aux_sym_number_token1;
	v->a[13666] = actions(1155);
	v->a[13667] = 1;
	v->a[13668] = aux_sym_number_token2;
	v->a[13669] = actions(1157);
	v->a[13670] = 1;
	v->a[13671] = anon_sym_DOLLAR_LBRACE;
	v->a[13672] = actions(1159);
	v->a[13673] = 1;
	v->a[13674] = anon_sym_DOLLAR_LPAREN;
	v->a[13675] = actions(1163);
	v->a[13676] = 1;
	v->a[13677] = anon_sym_DOLLAR_BQUOTE;
	v->a[13678] = actions(1169);
	v->a[13679] = 1;
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = sym__brace_start;
	v->a[13681] = actions(1171);
	v->a[13682] = 1;
	v->a[13683] = sym_word;
	v->a[13684] = actions(1181);
	v->a[13685] = 1;
	v->a[13686] = sym__special_character;
	v->a[13687] = actions(1185);
	v->a[13688] = 1;
	v->a[13689] = sym_test_operator;
	v->a[13690] = actions(3050);
	v->a[13691] = 1;
	v->a[13692] = anon_sym_LPAREN;
	v->a[13693] = actions(3052);
	v->a[13694] = 1;
	v->a[13695] = anon_sym_BANG;
	v->a[13696] = actions(3058);
	v->a[13697] = 1;
	v->a[13698] = anon_sym_TILDE;
	v->a[13699] = actions(3060);
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
