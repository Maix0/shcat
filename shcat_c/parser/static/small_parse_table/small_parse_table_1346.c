/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1346.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6730(t_small_parse_table_array *v)
{
	v->a[134600] = anon_sym_PLUS;
	v->a[134601] = anon_sym_DASH;
	v->a[134602] = anon_sym_STAR;
	v->a[134603] = anon_sym_SLASH;
	v->a[134604] = anon_sym_PERCENT;
	v->a[134605] = anon_sym_STAR_STAR;
	v->a[134606] = actions(1369);
	v->a[134607] = 22;
	v->a[134608] = sym_test_operator;
	v->a[134609] = anon_sym_PLUS_PLUS;
	v->a[134610] = anon_sym_DASH_DASH;
	v->a[134611] = anon_sym_PLUS_EQ;
	v->a[134612] = anon_sym_DASH_EQ;
	v->a[134613] = anon_sym_STAR_EQ;
	v->a[134614] = anon_sym_SLASH_EQ;
	v->a[134615] = anon_sym_PERCENT_EQ;
	v->a[134616] = anon_sym_STAR_STAR_EQ;
	v->a[134617] = anon_sym_LT_LT_EQ;
	v->a[134618] = anon_sym_GT_GT_EQ;
	v->a[134619] = anon_sym_AMP_EQ;
	small_parse_table_6731(v);
}

void	small_parse_table_6731(t_small_parse_table_array *v)
{
	v->a[134620] = anon_sym_CARET_EQ;
	v->a[134621] = anon_sym_PIPE_EQ;
	v->a[134622] = anon_sym_PIPE_PIPE;
	v->a[134623] = anon_sym_AMP_AMP;
	v->a[134624] = anon_sym_EQ_EQ;
	v->a[134625] = anon_sym_BANG_EQ;
	v->a[134626] = anon_sym_LT_EQ;
	v->a[134627] = anon_sym_GT_EQ;
	v->a[134628] = anon_sym_EQ_TILDE;
	v->a[134629] = anon_sym_QMARK;
	v->a[134630] = 6;
	v->a[134631] = actions(71);
	v->a[134632] = 1;
	v->a[134633] = sym_comment;
	v->a[134634] = actions(6656);
	v->a[134635] = 1;
	v->a[134636] = aux_sym_concatenation_token1;
	v->a[134637] = actions(6761);
	v->a[134638] = 1;
	v->a[134639] = sym__concat;
	small_parse_table_6732(v);
}

void	small_parse_table_6732(t_small_parse_table_array *v)
{
	v->a[134640] = state(2548);
	v->a[134641] = 1;
	v->a[134642] = aux_sym_concatenation_repeat1;
	v->a[134643] = actions(1265);
	v->a[134644] = 14;
	v->a[134645] = anon_sym_PIPE;
	v->a[134646] = anon_sym_LT;
	v->a[134647] = anon_sym_GT;
	v->a[134648] = anon_sym_LT_LT;
	v->a[134649] = anon_sym_AMP_GT;
	v->a[134650] = anon_sym_LT_AMP;
	v->a[134651] = anon_sym_GT_AMP;
	v->a[134652] = anon_sym_DOLLAR;
	v->a[134653] = aux_sym_number_token1;
	v->a[134654] = aux_sym_number_token2;
	v->a[134655] = anon_sym_DOLLAR_LPAREN;
	v->a[134656] = anon_sym_BQUOTE;
	v->a[134657] = aux_sym__simple_variable_name_token1;
	v->a[134658] = sym_word;
	v->a[134659] = actions(1267);
	small_parse_table_6733(v);
}

void	small_parse_table_6733(t_small_parse_table_array *v)
{
	v->a[134660] = 23;
	v->a[134661] = sym_file_descriptor;
	v->a[134662] = sym_test_operator;
	v->a[134663] = sym__brace_start;
	v->a[134664] = anon_sym_LPAREN_LPAREN;
	v->a[134665] = anon_sym_PIPE_PIPE;
	v->a[134666] = anon_sym_AMP_AMP;
	v->a[134667] = anon_sym_GT_GT;
	v->a[134668] = anon_sym_PIPE_AMP;
	v->a[134669] = anon_sym_AMP_GT_GT;
	v->a[134670] = anon_sym_GT_PIPE;
	v->a[134671] = anon_sym_LT_AMP_DASH;
	v->a[134672] = anon_sym_GT_AMP_DASH;
	v->a[134673] = anon_sym_LT_LT_DASH;
	v->a[134674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134675] = anon_sym_DOLLAR_LBRACK;
	v->a[134676] = sym__special_character;
	v->a[134677] = anon_sym_DQUOTE;
	v->a[134678] = sym_raw_string;
	v->a[134679] = sym_ansi_c_string;
	small_parse_table_6734(v);
}

void	small_parse_table_6734(t_small_parse_table_array *v)
{
	v->a[134680] = anon_sym_DOLLAR_LBRACE;
	v->a[134681] = anon_sym_DOLLAR_BQUOTE;
	v->a[134682] = anon_sym_LT_LPAREN;
	v->a[134683] = anon_sym_GT_LPAREN;
	v->a[134684] = 3;
	v->a[134685] = actions(71);
	v->a[134686] = 1;
	v->a[134687] = sym_comment;
	v->a[134688] = actions(1300);
	v->a[134689] = 14;
	v->a[134690] = anon_sym_PIPE;
	v->a[134691] = anon_sym_LT;
	v->a[134692] = anon_sym_GT;
	v->a[134693] = anon_sym_LT_LT;
	v->a[134694] = anon_sym_AMP_GT;
	v->a[134695] = anon_sym_LT_AMP;
	v->a[134696] = anon_sym_GT_AMP;
	v->a[134697] = anon_sym_DOLLAR;
	v->a[134698] = aux_sym_number_token1;
	v->a[134699] = aux_sym_number_token2;
	small_parse_table_6735(v);
}

/* EOF small_parse_table_1346.c */
