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
	v->a[13600] = 2;
	v->a[13601] = sym_file_descriptor;
	v->a[13602] = aux_sym_heredoc_redirect_token1;
	v->a[13603] = actions(2378);
	v->a[13604] = 2;
	v->a[13605] = sym_raw_string;
	v->a[13606] = sym_word;
	v->a[13607] = state(1356);
	v->a[13608] = 7;
	v->a[13609] = sym_arithmetic_expansion;
	v->a[13610] = sym_brace_expression;
	v->a[13611] = sym_string;
	v->a[13612] = sym_number;
	v->a[13613] = sym_simple_expansion;
	v->a[13614] = sym_expansion;
	v->a[13615] = sym_command_substitution;
	v->a[13616] = actions(757);
	v->a[13617] = 16;
	v->a[13618] = anon_sym_PIPE;
	v->a[13619] = anon_sym_PIPE_AMP;
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = anon_sym_AMP_AMP;
	v->a[13621] = anon_sym_PIPE_PIPE;
	v->a[13622] = anon_sym_LT;
	v->a[13623] = anon_sym_GT;
	v->a[13624] = anon_sym_GT_GT;
	v->a[13625] = anon_sym_AMP_GT;
	v->a[13626] = anon_sym_AMP_GT_GT;
	v->a[13627] = anon_sym_LT_AMP;
	v->a[13628] = anon_sym_GT_AMP;
	v->a[13629] = anon_sym_GT_PIPE;
	v->a[13630] = anon_sym_LT_AMP_DASH;
	v->a[13631] = anon_sym_GT_AMP_DASH;
	v->a[13632] = anon_sym_LT_LT;
	v->a[13633] = anon_sym_LT_LT_DASH;
	v->a[13634] = 6;
	v->a[13635] = actions(3);
	v->a[13636] = 1;
	v->a[13637] = sym_comment;
	v->a[13638] = actions(1178);
	v->a[13639] = 1;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = sym_variable_name;
	v->a[13641] = actions(1176);
	v->a[13642] = 2;
	v->a[13643] = aux_sym__simple_variable_name_token1;
	v->a[13644] = aux_sym__multiline_variable_name_token1;
	v->a[13645] = actions(828);
	v->a[13646] = 4;
	v->a[13647] = sym_file_descriptor;
	v->a[13648] = sym_test_operator;
	v->a[13649] = sym__bare_dollar;
	v->a[13650] = sym__brace_start;
	v->a[13651] = actions(1174);
	v->a[13652] = 9;
	v->a[13653] = anon_sym_BANG;
	v->a[13654] = anon_sym_DASH;
	v->a[13655] = anon_sym_STAR;
	v->a[13656] = anon_sym_QMARK;
	v->a[13657] = anon_sym_DOLLAR;
	v->a[13658] = anon_sym_POUND;
	v->a[13659] = anon_sym_AT;
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = anon_sym_0;
	v->a[13661] = anon_sym__;
	v->a[13662] = actions(826);
	v->a[13663] = 29;
	v->a[13664] = anon_sym_LPAREN;
	v->a[13665] = anon_sym_PIPE;
	v->a[13666] = anon_sym_PIPE_AMP;
	v->a[13667] = anon_sym_AMP_AMP;
	v->a[13668] = anon_sym_PIPE_PIPE;
	v->a[13669] = anon_sym_LT;
	v->a[13670] = anon_sym_GT;
	v->a[13671] = anon_sym_GT_GT;
	v->a[13672] = anon_sym_AMP_GT;
	v->a[13673] = anon_sym_AMP_GT_GT;
	v->a[13674] = anon_sym_LT_AMP;
	v->a[13675] = anon_sym_GT_AMP;
	v->a[13676] = anon_sym_GT_PIPE;
	v->a[13677] = anon_sym_LT_AMP_DASH;
	v->a[13678] = anon_sym_GT_AMP_DASH;
	v->a[13679] = anon_sym_LT_LT;
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = anon_sym_LT_LT_DASH;
	v->a[13681] = aux_sym_heredoc_redirect_token1;
	v->a[13682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13683] = sym__special_character;
	v->a[13684] = anon_sym_DQUOTE;
	v->a[13685] = sym_raw_string;
	v->a[13686] = aux_sym_number_token1;
	v->a[13687] = aux_sym_number_token2;
	v->a[13688] = anon_sym_DOLLAR_LBRACE;
	v->a[13689] = anon_sym_DOLLAR_LPAREN;
	v->a[13690] = anon_sym_BQUOTE;
	v->a[13691] = anon_sym_DOLLAR_BQUOTE;
	v->a[13692] = sym_word;
	v->a[13693] = 19;
	v->a[13694] = actions(3);
	v->a[13695] = 1;
	v->a[13696] = sym_comment;
	v->a[13697] = actions(2152);
	v->a[13698] = 1;
	v->a[13699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
