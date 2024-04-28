/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1356.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6780(t_small_parse_table_array *v)
{
	v->a[135600] = anon_sym_DOLLAR_LPAREN;
	v->a[135601] = anon_sym_BQUOTE;
	v->a[135602] = sym_word;
	v->a[135603] = actions(1330);
	v->a[135604] = 26;
	v->a[135605] = sym_file_descriptor;
	v->a[135606] = sym__concat;
	v->a[135607] = sym_test_operator;
	v->a[135608] = sym__brace_start;
	v->a[135609] = anon_sym_LPAREN_LPAREN;
	v->a[135610] = anon_sym_PIPE_PIPE;
	v->a[135611] = anon_sym_AMP_AMP;
	v->a[135612] = anon_sym_GT_GT;
	v->a[135613] = anon_sym_PIPE_AMP;
	v->a[135614] = anon_sym_AMP_GT_GT;
	v->a[135615] = anon_sym_GT_PIPE;
	v->a[135616] = anon_sym_LT_AMP_DASH;
	v->a[135617] = anon_sym_GT_AMP_DASH;
	v->a[135618] = anon_sym_LT_LT_DASH;
	v->a[135619] = anon_sym_LT_LT_LT;
	small_parse_table_6781(v);
}

void	small_parse_table_6781(t_small_parse_table_array *v)
{
	v->a[135620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135621] = anon_sym_DOLLAR_LBRACK;
	v->a[135622] = aux_sym_concatenation_token1;
	v->a[135623] = sym__special_character;
	v->a[135624] = anon_sym_DQUOTE;
	v->a[135625] = sym_raw_string;
	v->a[135626] = sym_ansi_c_string;
	v->a[135627] = anon_sym_DOLLAR_LBRACE;
	v->a[135628] = anon_sym_DOLLAR_BQUOTE;
	v->a[135629] = anon_sym_LT_LPAREN;
	v->a[135630] = anon_sym_GT_LPAREN;
	v->a[135631] = 3;
	v->a[135632] = actions(71);
	v->a[135633] = 1;
	v->a[135634] = sym_comment;
	v->a[135635] = actions(1261);
	v->a[135636] = 15;
	v->a[135637] = anon_sym_EQ;
	v->a[135638] = anon_sym_PIPE;
	v->a[135639] = anon_sym_CARET;
	small_parse_table_6782(v);
}

void	small_parse_table_6782(t_small_parse_table_array *v)
{
	v->a[135640] = anon_sym_AMP;
	v->a[135641] = anon_sym_LT;
	v->a[135642] = anon_sym_GT;
	v->a[135643] = anon_sym_LT_LT;
	v->a[135644] = anon_sym_GT_GT;
	v->a[135645] = anon_sym_PLUS;
	v->a[135646] = anon_sym_DASH;
	v->a[135647] = anon_sym_STAR;
	v->a[135648] = anon_sym_SLASH;
	v->a[135649] = anon_sym_PERCENT;
	v->a[135650] = anon_sym_STAR_STAR;
	v->a[135651] = sym__special_character;
	v->a[135652] = actions(1263);
	v->a[135653] = 24;
	v->a[135654] = sym__concat;
	v->a[135655] = sym_test_operator;
	v->a[135656] = anon_sym_PLUS_PLUS;
	v->a[135657] = anon_sym_DASH_DASH;
	v->a[135658] = anon_sym_PLUS_EQ;
	v->a[135659] = anon_sym_DASH_EQ;
	small_parse_table_6783(v);
}

void	small_parse_table_6783(t_small_parse_table_array *v)
{
	v->a[135660] = anon_sym_STAR_EQ;
	v->a[135661] = anon_sym_SLASH_EQ;
	v->a[135662] = anon_sym_PERCENT_EQ;
	v->a[135663] = anon_sym_STAR_STAR_EQ;
	v->a[135664] = anon_sym_LT_LT_EQ;
	v->a[135665] = anon_sym_GT_GT_EQ;
	v->a[135666] = anon_sym_AMP_EQ;
	v->a[135667] = anon_sym_CARET_EQ;
	v->a[135668] = anon_sym_PIPE_EQ;
	v->a[135669] = anon_sym_PIPE_PIPE;
	v->a[135670] = anon_sym_AMP_AMP;
	v->a[135671] = anon_sym_EQ_EQ;
	v->a[135672] = anon_sym_BANG_EQ;
	v->a[135673] = anon_sym_LT_EQ;
	v->a[135674] = anon_sym_GT_EQ;
	v->a[135675] = anon_sym_RBRACK;
	v->a[135676] = anon_sym_EQ_TILDE;
	v->a[135677] = anon_sym_QMARK;
	v->a[135678] = 3;
	v->a[135679] = actions(71);
	small_parse_table_6784(v);
}

void	small_parse_table_6784(t_small_parse_table_array *v)
{
	v->a[135680] = 1;
	v->a[135681] = sym_comment;
	v->a[135682] = actions(1348);
	v->a[135683] = 14;
	v->a[135684] = anon_sym_PIPE;
	v->a[135685] = anon_sym_LT;
	v->a[135686] = anon_sym_GT;
	v->a[135687] = anon_sym_LT_LT;
	v->a[135688] = anon_sym_AMP_GT;
	v->a[135689] = anon_sym_LT_AMP;
	v->a[135690] = anon_sym_GT_AMP;
	v->a[135691] = anon_sym_DOLLAR;
	v->a[135692] = sym__special_character;
	v->a[135693] = aux_sym_number_token1;
	v->a[135694] = aux_sym_number_token2;
	v->a[135695] = anon_sym_DOLLAR_LPAREN;
	v->a[135696] = anon_sym_BQUOTE;
	v->a[135697] = sym_word;
	v->a[135698] = actions(1350);
	v->a[135699] = 25;
	small_parse_table_6785(v);
}

/* EOF small_parse_table_1356.c */
