/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = 21;
	v->a[22601] = anon_sym_AMP_AMP;
	v->a[22602] = anon_sym_PIPE_PIPE;
	v->a[22603] = anon_sym_RPAREN_RPAREN;
	v->a[22604] = anon_sym_PLUS_EQ;
	v->a[22605] = anon_sym_DASH_EQ;
	v->a[22606] = anon_sym_STAR_EQ;
	v->a[22607] = anon_sym_SLASH_EQ;
	v->a[22608] = anon_sym_PERCENT_EQ;
	v->a[22609] = anon_sym_LT_LT_EQ;
	v->a[22610] = anon_sym_GT_GT_EQ;
	v->a[22611] = anon_sym_AMP_EQ;
	v->a[22612] = anon_sym_CARET_EQ;
	v->a[22613] = anon_sym_PIPE_EQ;
	v->a[22614] = anon_sym_EQ_EQ;
	v->a[22615] = anon_sym_BANG_EQ;
	v->a[22616] = anon_sym_LT_EQ;
	v->a[22617] = anon_sym_GT_EQ;
	v->a[22618] = anon_sym_QMARK;
	v->a[22619] = anon_sym_COLON;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_PLUS_PLUS2;
	v->a[22621] = anon_sym_DASH_DASH2;
	v->a[22622] = 6;
	v->a[22623] = actions(3);
	v->a[22624] = 1;
	v->a[22625] = sym_comment;
	v->a[22626] = actions(361);
	v->a[22627] = 1;
	v->a[22628] = sym_file_descriptor;
	v->a[22629] = actions(429);
	v->a[22630] = 1;
	v->a[22631] = sym_variable_name;
	v->a[22632] = actions(427);
	v->a[22633] = 2;
	v->a[22634] = aux_sym__simple_variable_name_token1;
	v->a[22635] = aux_sym__multiline_variable_name_token1;
	v->a[22636] = actions(425);
	v->a[22637] = 9;
	v->a[22638] = anon_sym_BANG;
	v->a[22639] = anon_sym_DASH;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = anon_sym_STAR;
	v->a[22641] = anon_sym_QMARK;
	v->a[22642] = anon_sym_DOLLAR;
	v->a[22643] = anon_sym_POUND;
	v->a[22644] = anon_sym_AT;
	v->a[22645] = anon_sym_0;
	v->a[22646] = anon_sym__;
	v->a[22647] = actions(363);
	v->a[22648] = 21;
	v->a[22649] = anon_sym_PIPE;
	v->a[22650] = anon_sym_AMP_AMP;
	v->a[22651] = anon_sym_PIPE_PIPE;
	v->a[22652] = anon_sym_LT;
	v->a[22653] = anon_sym_GT;
	v->a[22654] = anon_sym_GT_GT;
	v->a[22655] = anon_sym_LT_AMP;
	v->a[22656] = anon_sym_GT_AMP;
	v->a[22657] = anon_sym_GT_PIPE;
	v->a[22658] = anon_sym_LT_GT;
	v->a[22659] = anon_sym_LT_LT;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = anon_sym_LT_LT_DASH;
	v->a[22661] = aux_sym_heredoc_redirect_token1;
	v->a[22662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22663] = anon_sym_DQUOTE;
	v->a[22664] = sym_raw_string;
	v->a[22665] = sym_number;
	v->a[22666] = anon_sym_DOLLAR_LBRACE;
	v->a[22667] = anon_sym_DOLLAR_LPAREN;
	v->a[22668] = anon_sym_BQUOTE;
	v->a[22669] = sym_word;
	v->a[22670] = 3;
	v->a[22671] = actions(680);
	v->a[22672] = 1;
	v->a[22673] = sym_comment;
	v->a[22674] = actions(786);
	v->a[22675] = 13;
	v->a[22676] = anon_sym_PIPE;
	v->a[22677] = anon_sym_EQ;
	v->a[22678] = anon_sym_LT;
	v->a[22679] = anon_sym_GT;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = anon_sym_GT_GT;
	v->a[22681] = anon_sym_LT_LT;
	v->a[22682] = anon_sym_CARET;
	v->a[22683] = anon_sym_AMP;
	v->a[22684] = anon_sym_PLUS;
	v->a[22685] = anon_sym_DASH;
	v->a[22686] = anon_sym_STAR;
	v->a[22687] = anon_sym_SLASH;
	v->a[22688] = anon_sym_PERCENT;
	v->a[22689] = actions(788);
	v->a[22690] = 21;
	v->a[22691] = anon_sym_AMP_AMP;
	v->a[22692] = anon_sym_PIPE_PIPE;
	v->a[22693] = anon_sym_RPAREN_RPAREN;
	v->a[22694] = anon_sym_PLUS_EQ;
	v->a[22695] = anon_sym_DASH_EQ;
	v->a[22696] = anon_sym_STAR_EQ;
	v->a[22697] = anon_sym_SLASH_EQ;
	v->a[22698] = anon_sym_PERCENT_EQ;
	v->a[22699] = anon_sym_LT_LT_EQ;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
