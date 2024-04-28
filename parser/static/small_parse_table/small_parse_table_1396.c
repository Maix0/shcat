/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1396.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6980(t_small_parse_table_array *v)
{
	v->a[139600] = aux_sym__simple_variable_name_token1;
	v->a[139601] = sym_word;
	v->a[139602] = actions(1318);
	v->a[139603] = 25;
	v->a[139604] = sym_file_descriptor;
	v->a[139605] = sym__concat;
	v->a[139606] = sym_test_operator;
	v->a[139607] = sym__brace_start;
	v->a[139608] = anon_sym_LPAREN_LPAREN;
	v->a[139609] = anon_sym_PIPE_PIPE;
	v->a[139610] = anon_sym_AMP_AMP;
	v->a[139611] = anon_sym_GT_GT;
	v->a[139612] = anon_sym_PIPE_AMP;
	v->a[139613] = anon_sym_AMP_GT_GT;
	v->a[139614] = anon_sym_GT_PIPE;
	v->a[139615] = anon_sym_LT_AMP_DASH;
	v->a[139616] = anon_sym_GT_AMP_DASH;
	v->a[139617] = anon_sym_LT_LT_DASH;
	v->a[139618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139619] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6981(v);
}

void	small_parse_table_6981(t_small_parse_table_array *v)
{
	v->a[139620] = aux_sym_concatenation_token1;
	v->a[139621] = sym__special_character;
	v->a[139622] = anon_sym_DQUOTE;
	v->a[139623] = sym_raw_string;
	v->a[139624] = sym_ansi_c_string;
	v->a[139625] = anon_sym_DOLLAR_LBRACE;
	v->a[139626] = anon_sym_DOLLAR_BQUOTE;
	v->a[139627] = anon_sym_LT_LPAREN;
	v->a[139628] = anon_sym_GT_LPAREN;
	v->a[139629] = 3;
	v->a[139630] = actions(71);
	v->a[139631] = 1;
	v->a[139632] = sym_comment;
	v->a[139633] = actions(1308);
	v->a[139634] = 14;
	v->a[139635] = anon_sym_EQ;
	v->a[139636] = anon_sym_PIPE;
	v->a[139637] = anon_sym_CARET;
	v->a[139638] = anon_sym_AMP;
	v->a[139639] = anon_sym_LT;
	small_parse_table_6982(v);
}

void	small_parse_table_6982(t_small_parse_table_array *v)
{
	v->a[139640] = anon_sym_GT;
	v->a[139641] = anon_sym_LT_LT;
	v->a[139642] = anon_sym_GT_GT;
	v->a[139643] = anon_sym_PLUS;
	v->a[139644] = anon_sym_DASH;
	v->a[139645] = anon_sym_STAR;
	v->a[139646] = anon_sym_SLASH;
	v->a[139647] = anon_sym_PERCENT;
	v->a[139648] = anon_sym_STAR_STAR;
	v->a[139649] = actions(1310);
	v->a[139650] = 25;
	v->a[139651] = sym__concat;
	v->a[139652] = sym_test_operator;
	v->a[139653] = sym_extglob_pattern;
	v->a[139654] = anon_sym_PLUS_PLUS;
	v->a[139655] = anon_sym_DASH_DASH;
	v->a[139656] = anon_sym_PLUS_EQ;
	v->a[139657] = anon_sym_DASH_EQ;
	v->a[139658] = anon_sym_STAR_EQ;
	v->a[139659] = anon_sym_SLASH_EQ;
	small_parse_table_6983(v);
}

void	small_parse_table_6983(t_small_parse_table_array *v)
{
	v->a[139660] = anon_sym_PERCENT_EQ;
	v->a[139661] = anon_sym_STAR_STAR_EQ;
	v->a[139662] = anon_sym_LT_LT_EQ;
	v->a[139663] = anon_sym_GT_GT_EQ;
	v->a[139664] = anon_sym_AMP_EQ;
	v->a[139665] = anon_sym_CARET_EQ;
	v->a[139666] = anon_sym_PIPE_EQ;
	v->a[139667] = anon_sym_PIPE_PIPE;
	v->a[139668] = anon_sym_AMP_AMP;
	v->a[139669] = anon_sym_EQ_EQ;
	v->a[139670] = anon_sym_BANG_EQ;
	v->a[139671] = anon_sym_LT_EQ;
	v->a[139672] = anon_sym_GT_EQ;
	v->a[139673] = anon_sym_RBRACK;
	v->a[139674] = anon_sym_EQ_TILDE;
	v->a[139675] = anon_sym_QMARK;
	v->a[139676] = 3;
	v->a[139677] = actions(71);
	v->a[139678] = 1;
	v->a[139679] = sym_comment;
	small_parse_table_6984(v);
}

void	small_parse_table_6984(t_small_parse_table_array *v)
{
	v->a[139680] = actions(1304);
	v->a[139681] = 14;
	v->a[139682] = anon_sym_EQ;
	v->a[139683] = anon_sym_PIPE;
	v->a[139684] = anon_sym_CARET;
	v->a[139685] = anon_sym_AMP;
	v->a[139686] = anon_sym_LT;
	v->a[139687] = anon_sym_GT;
	v->a[139688] = anon_sym_LT_LT;
	v->a[139689] = anon_sym_GT_GT;
	v->a[139690] = anon_sym_PLUS;
	v->a[139691] = anon_sym_DASH;
	v->a[139692] = anon_sym_STAR;
	v->a[139693] = anon_sym_SLASH;
	v->a[139694] = anon_sym_PERCENT;
	v->a[139695] = anon_sym_STAR_STAR;
	v->a[139696] = actions(1306);
	v->a[139697] = 25;
	v->a[139698] = sym__concat;
	v->a[139699] = sym_test_operator;
	small_parse_table_6985(v);
}

/* EOF small_parse_table_1396.c */
