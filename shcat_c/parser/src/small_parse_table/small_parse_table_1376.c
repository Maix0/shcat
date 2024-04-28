/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1376.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6880(t_small_parse_table_array *v)
{
	v->a[137600] = 3;
	v->a[137601] = actions(71);
	v->a[137602] = 1;
	v->a[137603] = sym_comment;
	v->a[137604] = actions(1344);
	v->a[137605] = 14;
	v->a[137606] = anon_sym_EQ;
	v->a[137607] = anon_sym_PIPE;
	v->a[137608] = anon_sym_CARET;
	v->a[137609] = anon_sym_AMP;
	v->a[137610] = anon_sym_LT;
	v->a[137611] = anon_sym_GT;
	v->a[137612] = anon_sym_LT_LT;
	v->a[137613] = anon_sym_GT_GT;
	v->a[137614] = anon_sym_PLUS;
	v->a[137615] = anon_sym_DASH;
	v->a[137616] = anon_sym_STAR;
	v->a[137617] = anon_sym_SLASH;
	v->a[137618] = anon_sym_PERCENT;
	v->a[137619] = anon_sym_STAR_STAR;
	small_parse_table_6881(v);
}

void	small_parse_table_6881(t_small_parse_table_array *v)
{
	v->a[137620] = actions(1346);
	v->a[137621] = 25;
	v->a[137622] = sym__concat;
	v->a[137623] = sym_test_operator;
	v->a[137624] = anon_sym_PLUS_PLUS;
	v->a[137625] = anon_sym_DASH_DASH;
	v->a[137626] = anon_sym_PLUS_EQ;
	v->a[137627] = anon_sym_DASH_EQ;
	v->a[137628] = anon_sym_STAR_EQ;
	v->a[137629] = anon_sym_SLASH_EQ;
	v->a[137630] = anon_sym_PERCENT_EQ;
	v->a[137631] = anon_sym_STAR_STAR_EQ;
	v->a[137632] = anon_sym_LT_LT_EQ;
	v->a[137633] = anon_sym_GT_GT_EQ;
	v->a[137634] = anon_sym_AMP_EQ;
	v->a[137635] = anon_sym_CARET_EQ;
	v->a[137636] = anon_sym_PIPE_EQ;
	v->a[137637] = anon_sym_PIPE_PIPE;
	v->a[137638] = anon_sym_AMP_AMP;
	v->a[137639] = anon_sym_EQ_EQ;
	small_parse_table_6882(v);
}

void	small_parse_table_6882(t_small_parse_table_array *v)
{
	v->a[137640] = anon_sym_BANG_EQ;
	v->a[137641] = anon_sym_LT_EQ;
	v->a[137642] = anon_sym_GT_EQ;
	v->a[137643] = anon_sym_RPAREN;
	v->a[137644] = anon_sym_EQ_TILDE;
	v->a[137645] = anon_sym_QMARK;
	v->a[137646] = aux_sym_concatenation_token1;
	v->a[137647] = 3;
	v->a[137648] = actions(71);
	v->a[137649] = 1;
	v->a[137650] = sym_comment;
	v->a[137651] = actions(1308);
	v->a[137652] = 14;
	v->a[137653] = anon_sym_PIPE;
	v->a[137654] = anon_sym_LT;
	v->a[137655] = anon_sym_GT;
	v->a[137656] = anon_sym_LT_LT;
	v->a[137657] = anon_sym_AMP_GT;
	v->a[137658] = anon_sym_LT_AMP;
	v->a[137659] = anon_sym_GT_AMP;
	small_parse_table_6883(v);
}

void	small_parse_table_6883(t_small_parse_table_array *v)
{
	v->a[137660] = anon_sym_DOLLAR;
	v->a[137661] = aux_sym_number_token1;
	v->a[137662] = aux_sym_number_token2;
	v->a[137663] = anon_sym_DOLLAR_LPAREN;
	v->a[137664] = anon_sym_BQUOTE;
	v->a[137665] = aux_sym__simple_variable_name_token1;
	v->a[137666] = sym_word;
	v->a[137667] = actions(1310);
	v->a[137668] = 25;
	v->a[137669] = sym_file_descriptor;
	v->a[137670] = sym__concat;
	v->a[137671] = sym_test_operator;
	v->a[137672] = sym__brace_start;
	v->a[137673] = anon_sym_LPAREN_LPAREN;
	v->a[137674] = anon_sym_PIPE_PIPE;
	v->a[137675] = anon_sym_AMP_AMP;
	v->a[137676] = anon_sym_GT_GT;
	v->a[137677] = anon_sym_PIPE_AMP;
	v->a[137678] = anon_sym_AMP_GT_GT;
	v->a[137679] = anon_sym_GT_PIPE;
	small_parse_table_6884(v);
}

void	small_parse_table_6884(t_small_parse_table_array *v)
{
	v->a[137680] = anon_sym_LT_AMP_DASH;
	v->a[137681] = anon_sym_GT_AMP_DASH;
	v->a[137682] = anon_sym_LT_LT_DASH;
	v->a[137683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137684] = anon_sym_DOLLAR_LBRACK;
	v->a[137685] = aux_sym_concatenation_token1;
	v->a[137686] = sym__special_character;
	v->a[137687] = anon_sym_DQUOTE;
	v->a[137688] = sym_raw_string;
	v->a[137689] = sym_ansi_c_string;
	v->a[137690] = anon_sym_DOLLAR_LBRACE;
	v->a[137691] = anon_sym_DOLLAR_BQUOTE;
	v->a[137692] = anon_sym_LT_LPAREN;
	v->a[137693] = anon_sym_GT_LPAREN;
	v->a[137694] = 3;
	v->a[137695] = actions(71);
	v->a[137696] = 1;
	v->a[137697] = sym_comment;
	v->a[137698] = actions(6797);
	v->a[137699] = 14;
	small_parse_table_6885(v);
}

/* EOF small_parse_table_1376.c */
