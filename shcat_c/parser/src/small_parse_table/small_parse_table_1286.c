/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1286.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6430(t_small_parse_table_array *v)
{
	v->a[128600] = sym__concat;
	v->a[128601] = state(2474);
	v->a[128602] = 1;
	v->a[128603] = aux_sym__literal_repeat1;
	v->a[128604] = actions(243);
	v->a[128605] = 14;
	v->a[128606] = anon_sym_EQ;
	v->a[128607] = anon_sym_PIPE;
	v->a[128608] = anon_sym_CARET;
	v->a[128609] = anon_sym_AMP;
	v->a[128610] = anon_sym_LT;
	v->a[128611] = anon_sym_GT;
	v->a[128612] = anon_sym_LT_LT;
	v->a[128613] = anon_sym_GT_GT;
	v->a[128614] = anon_sym_PLUS;
	v->a[128615] = anon_sym_DASH;
	v->a[128616] = anon_sym_STAR;
	v->a[128617] = anon_sym_SLASH;
	v->a[128618] = anon_sym_PERCENT;
	v->a[128619] = anon_sym_STAR_STAR;
	small_parse_table_6431(v);
}

void	small_parse_table_6431(t_small_parse_table_array *v)
{
	v->a[128620] = actions(354);
	v->a[128621] = 22;
	v->a[128622] = sym_test_operator;
	v->a[128623] = anon_sym_PLUS_PLUS;
	v->a[128624] = anon_sym_DASH_DASH;
	v->a[128625] = anon_sym_PLUS_EQ;
	v->a[128626] = anon_sym_DASH_EQ;
	v->a[128627] = anon_sym_STAR_EQ;
	v->a[128628] = anon_sym_SLASH_EQ;
	v->a[128629] = anon_sym_PERCENT_EQ;
	v->a[128630] = anon_sym_STAR_STAR_EQ;
	v->a[128631] = anon_sym_LT_LT_EQ;
	v->a[128632] = anon_sym_GT_GT_EQ;
	v->a[128633] = anon_sym_AMP_EQ;
	v->a[128634] = anon_sym_CARET_EQ;
	v->a[128635] = anon_sym_PIPE_EQ;
	v->a[128636] = anon_sym_PIPE_PIPE;
	v->a[128637] = anon_sym_AMP_AMP;
	v->a[128638] = anon_sym_EQ_EQ;
	v->a[128639] = anon_sym_BANG_EQ;
	small_parse_table_6432(v);
}

void	small_parse_table_6432(t_small_parse_table_array *v)
{
	v->a[128640] = anon_sym_LT_EQ;
	v->a[128641] = anon_sym_GT_EQ;
	v->a[128642] = anon_sym_EQ_TILDE;
	v->a[128643] = anon_sym_QMARK;
	v->a[128644] = 3;
	v->a[128645] = actions(71);
	v->a[128646] = 1;
	v->a[128647] = sym_comment;
	v->a[128648] = actions(1308);
	v->a[128649] = 14;
	v->a[128650] = anon_sym_PIPE;
	v->a[128651] = anon_sym_LT;
	v->a[128652] = anon_sym_GT;
	v->a[128653] = anon_sym_LT_LT;
	v->a[128654] = anon_sym_AMP_GT;
	v->a[128655] = anon_sym_LT_AMP;
	v->a[128656] = anon_sym_GT_AMP;
	v->a[128657] = anon_sym_DOLLAR;
	v->a[128658] = sym__special_character;
	v->a[128659] = aux_sym_number_token1;
	small_parse_table_6433(v);
}

void	small_parse_table_6433(t_small_parse_table_array *v)
{
	v->a[128660] = aux_sym_number_token2;
	v->a[128661] = anon_sym_DOLLAR_LPAREN;
	v->a[128662] = anon_sym_BQUOTE;
	v->a[128663] = sym_word;
	v->a[128664] = actions(1310);
	v->a[128665] = 26;
	v->a[128666] = sym_file_descriptor;
	v->a[128667] = sym__concat;
	v->a[128668] = sym_test_operator;
	v->a[128669] = sym__brace_start;
	v->a[128670] = anon_sym_LPAREN_LPAREN;
	v->a[128671] = anon_sym_PIPE_PIPE;
	v->a[128672] = anon_sym_AMP_AMP;
	v->a[128673] = anon_sym_GT_GT;
	v->a[128674] = anon_sym_PIPE_AMP;
	v->a[128675] = anon_sym_RBRACK;
	v->a[128676] = anon_sym_AMP_GT_GT;
	v->a[128677] = anon_sym_GT_PIPE;
	v->a[128678] = anon_sym_LT_AMP_DASH;
	v->a[128679] = anon_sym_GT_AMP_DASH;
	small_parse_table_6434(v);
}

void	small_parse_table_6434(t_small_parse_table_array *v)
{
	v->a[128680] = anon_sym_LT_LT_DASH;
	v->a[128681] = anon_sym_LT_LT_LT;
	v->a[128682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128683] = anon_sym_DOLLAR_LBRACK;
	v->a[128684] = aux_sym_concatenation_token1;
	v->a[128685] = anon_sym_DQUOTE;
	v->a[128686] = sym_raw_string;
	v->a[128687] = sym_ansi_c_string;
	v->a[128688] = anon_sym_DOLLAR_LBRACE;
	v->a[128689] = anon_sym_DOLLAR_BQUOTE;
	v->a[128690] = anon_sym_LT_LPAREN;
	v->a[128691] = anon_sym_GT_LPAREN;
	v->a[128692] = 3;
	v->a[128693] = actions(71);
	v->a[128694] = 1;
	v->a[128695] = sym_comment;
	v->a[128696] = actions(1348);
	v->a[128697] = 14;
	v->a[128698] = anon_sym_PIPE;
	v->a[128699] = anon_sym_LT;
	small_parse_table_6435(v);
}

/* EOF small_parse_table_1286.c */
