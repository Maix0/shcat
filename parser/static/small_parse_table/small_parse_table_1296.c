/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1296.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6480(t_small_parse_table_array *v)
{
	v->a[129600] = anon_sym_LT_LT_EQ;
	v->a[129601] = anon_sym_GT_GT_EQ;
	v->a[129602] = anon_sym_AMP_EQ;
	v->a[129603] = anon_sym_CARET_EQ;
	v->a[129604] = anon_sym_PIPE_EQ;
	v->a[129605] = anon_sym_PIPE_PIPE;
	v->a[129606] = anon_sym_AMP_AMP;
	v->a[129607] = anon_sym_EQ_EQ;
	v->a[129608] = anon_sym_BANG_EQ;
	v->a[129609] = anon_sym_LT_EQ;
	v->a[129610] = anon_sym_GT_EQ;
	v->a[129611] = anon_sym_RPAREN;
	v->a[129612] = anon_sym_EQ_TILDE;
	v->a[129613] = anon_sym_QMARK;
	v->a[129614] = 3;
	v->a[129615] = actions(71);
	v->a[129616] = 1;
	v->a[129617] = sym_comment;
	v->a[129618] = actions(1352);
	v->a[129619] = 14;
	small_parse_table_6481(v);
}

void	small_parse_table_6481(t_small_parse_table_array *v)
{
	v->a[129620] = anon_sym_PIPE;
	v->a[129621] = anon_sym_LT;
	v->a[129622] = anon_sym_GT;
	v->a[129623] = anon_sym_LT_LT;
	v->a[129624] = anon_sym_AMP_GT;
	v->a[129625] = anon_sym_LT_AMP;
	v->a[129626] = anon_sym_GT_AMP;
	v->a[129627] = anon_sym_DOLLAR;
	v->a[129628] = aux_sym_number_token1;
	v->a[129629] = aux_sym_number_token2;
	v->a[129630] = anon_sym_DOLLAR_LPAREN;
	v->a[129631] = anon_sym_BQUOTE;
	v->a[129632] = aux_sym__simple_variable_name_token1;
	v->a[129633] = sym_word;
	v->a[129634] = actions(1354);
	v->a[129635] = 26;
	v->a[129636] = sym_file_descriptor;
	v->a[129637] = sym__concat;
	v->a[129638] = sym_variable_name;
	v->a[129639] = sym_test_operator;
	small_parse_table_6482(v);
}

void	small_parse_table_6482(t_small_parse_table_array *v)
{
	v->a[129640] = sym__brace_start;
	v->a[129641] = anon_sym_LPAREN_LPAREN;
	v->a[129642] = anon_sym_PIPE_PIPE;
	v->a[129643] = anon_sym_AMP_AMP;
	v->a[129644] = anon_sym_GT_GT;
	v->a[129645] = anon_sym_PIPE_AMP;
	v->a[129646] = anon_sym_AMP_GT_GT;
	v->a[129647] = anon_sym_GT_PIPE;
	v->a[129648] = anon_sym_LT_AMP_DASH;
	v->a[129649] = anon_sym_GT_AMP_DASH;
	v->a[129650] = anon_sym_LT_LT_DASH;
	v->a[129651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[129652] = anon_sym_DOLLAR_LBRACK;
	v->a[129653] = aux_sym_concatenation_token1;
	v->a[129654] = sym__special_character;
	v->a[129655] = anon_sym_DQUOTE;
	v->a[129656] = sym_raw_string;
	v->a[129657] = sym_ansi_c_string;
	v->a[129658] = anon_sym_DOLLAR_LBRACE;
	v->a[129659] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6483(v);
}

void	small_parse_table_6483(t_small_parse_table_array *v)
{
	v->a[129660] = anon_sym_LT_LPAREN;
	v->a[129661] = anon_sym_GT_LPAREN;
	v->a[129662] = 6;
	v->a[129663] = actions(71);
	v->a[129664] = 1;
	v->a[129665] = sym_comment;
	v->a[129666] = actions(1143);
	v->a[129667] = 1;
	v->a[129668] = aux_sym_concatenation_token1;
	v->a[129669] = actions(6679);
	v->a[129670] = 1;
	v->a[129671] = sym__concat;
	v->a[129672] = state(2312);
	v->a[129673] = 1;
	v->a[129674] = aux_sym_concatenation_repeat1;
	v->a[129675] = actions(1265);
	v->a[129676] = 14;
	v->a[129677] = anon_sym_EQ;
	v->a[129678] = anon_sym_PIPE;
	v->a[129679] = anon_sym_CARET;
	small_parse_table_6484(v);
}

void	small_parse_table_6484(t_small_parse_table_array *v)
{
	v->a[129680] = anon_sym_AMP;
	v->a[129681] = anon_sym_LT;
	v->a[129682] = anon_sym_GT;
	v->a[129683] = anon_sym_LT_LT;
	v->a[129684] = anon_sym_GT_GT;
	v->a[129685] = anon_sym_PLUS;
	v->a[129686] = anon_sym_DASH;
	v->a[129687] = anon_sym_STAR;
	v->a[129688] = anon_sym_SLASH;
	v->a[129689] = anon_sym_PERCENT;
	v->a[129690] = anon_sym_STAR_STAR;
	v->a[129691] = actions(1267);
	v->a[129692] = 23;
	v->a[129693] = sym_test_operator;
	v->a[129694] = anon_sym_PLUS_PLUS;
	v->a[129695] = anon_sym_DASH_DASH;
	v->a[129696] = anon_sym_PLUS_EQ;
	v->a[129697] = anon_sym_DASH_EQ;
	v->a[129698] = anon_sym_STAR_EQ;
	v->a[129699] = anon_sym_SLASH_EQ;
	small_parse_table_6485(v);
}

/* EOF small_parse_table_1296.c */
