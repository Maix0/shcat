/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1326.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6630(t_small_parse_table_array *v)
{
	v->a[132600] = anon_sym_LT;
	v->a[132601] = anon_sym_GT;
	v->a[132602] = anon_sym_LT_LT;
	v->a[132603] = anon_sym_GT_GT;
	v->a[132604] = anon_sym_PLUS;
	v->a[132605] = anon_sym_DASH;
	v->a[132606] = anon_sym_STAR;
	v->a[132607] = anon_sym_SLASH;
	v->a[132608] = anon_sym_PERCENT;
	v->a[132609] = anon_sym_STAR_STAR;
	v->a[132610] = actions(1354);
	v->a[132611] = 26;
	v->a[132612] = sym_test_operator;
	v->a[132613] = sym_extglob_pattern;
	v->a[132614] = anon_sym_RPAREN_RPAREN;
	v->a[132615] = anon_sym_PLUS_PLUS;
	v->a[132616] = anon_sym_DASH_DASH;
	v->a[132617] = anon_sym_PLUS_EQ;
	v->a[132618] = anon_sym_DASH_EQ;
	v->a[132619] = anon_sym_STAR_EQ;
	small_parse_table_6631(v);
}

void	small_parse_table_6631(t_small_parse_table_array *v)
{
	v->a[132620] = anon_sym_SLASH_EQ;
	v->a[132621] = anon_sym_PERCENT_EQ;
	v->a[132622] = anon_sym_STAR_STAR_EQ;
	v->a[132623] = anon_sym_LT_LT_EQ;
	v->a[132624] = anon_sym_GT_GT_EQ;
	v->a[132625] = anon_sym_AMP_EQ;
	v->a[132626] = anon_sym_CARET_EQ;
	v->a[132627] = anon_sym_PIPE_EQ;
	v->a[132628] = anon_sym_PIPE_PIPE;
	v->a[132629] = anon_sym_AMP_AMP;
	v->a[132630] = anon_sym_EQ_EQ;
	v->a[132631] = anon_sym_BANG_EQ;
	v->a[132632] = anon_sym_LT_EQ;
	v->a[132633] = anon_sym_GT_EQ;
	v->a[132634] = anon_sym_RBRACK_RBRACK;
	v->a[132635] = anon_sym_EQ_TILDE;
	v->a[132636] = anon_sym_QMARK;
	v->a[132637] = anon_sym_COLON;
	v->a[132638] = 3;
	v->a[132639] = actions(71);
	small_parse_table_6632(v);
}

void	small_parse_table_6632(t_small_parse_table_array *v)
{
	v->a[132640] = 1;
	v->a[132641] = sym_comment;
	v->a[132642] = actions(1348);
	v->a[132643] = 13;
	v->a[132644] = anon_sym_PIPE;
	v->a[132645] = anon_sym_LT;
	v->a[132646] = anon_sym_GT;
	v->a[132647] = anon_sym_LT_LT;
	v->a[132648] = anon_sym_AMP_GT;
	v->a[132649] = anon_sym_LT_AMP;
	v->a[132650] = anon_sym_GT_AMP;
	v->a[132651] = anon_sym_DOLLAR;
	v->a[132652] = aux_sym_number_token1;
	v->a[132653] = aux_sym_number_token2;
	v->a[132654] = anon_sym_DOLLAR_LPAREN;
	v->a[132655] = anon_sym_BQUOTE;
	v->a[132656] = sym_word;
	v->a[132657] = actions(1350);
	v->a[132658] = 27;
	v->a[132659] = sym_file_descriptor;
	small_parse_table_6633(v);
}

void	small_parse_table_6633(t_small_parse_table_array *v)
{
	v->a[132660] = sym__concat;
	v->a[132661] = sym_variable_name;
	v->a[132662] = sym_test_operator;
	v->a[132663] = sym__brace_start;
	v->a[132664] = anon_sym_LPAREN_LPAREN;
	v->a[132665] = anon_sym_PIPE_PIPE;
	v->a[132666] = anon_sym_AMP_AMP;
	v->a[132667] = anon_sym_GT_GT;
	v->a[132668] = anon_sym_PIPE_AMP;
	v->a[132669] = anon_sym_AMP_GT_GT;
	v->a[132670] = anon_sym_GT_PIPE;
	v->a[132671] = anon_sym_LT_AMP_DASH;
	v->a[132672] = anon_sym_GT_AMP_DASH;
	v->a[132673] = anon_sym_LT_LT_DASH;
	v->a[132674] = anon_sym_LT_LT_LT;
	v->a[132675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[132676] = anon_sym_DOLLAR_LBRACK;
	v->a[132677] = aux_sym_concatenation_token1;
	v->a[132678] = sym__special_character;
	v->a[132679] = anon_sym_DQUOTE;
	small_parse_table_6634(v);
}

void	small_parse_table_6634(t_small_parse_table_array *v)
{
	v->a[132680] = sym_raw_string;
	v->a[132681] = sym_ansi_c_string;
	v->a[132682] = anon_sym_DOLLAR_LBRACE;
	v->a[132683] = anon_sym_DOLLAR_BQUOTE;
	v->a[132684] = anon_sym_LT_LPAREN;
	v->a[132685] = anon_sym_GT_LPAREN;
	v->a[132686] = 3;
	v->a[132687] = actions(71);
	v->a[132688] = 1;
	v->a[132689] = sym_comment;
	v->a[132690] = actions(1308);
	v->a[132691] = 14;
	v->a[132692] = anon_sym_PIPE;
	v->a[132693] = anon_sym_LT;
	v->a[132694] = anon_sym_GT;
	v->a[132695] = anon_sym_LT_LT;
	v->a[132696] = anon_sym_AMP_GT;
	v->a[132697] = anon_sym_LT_AMP;
	v->a[132698] = anon_sym_GT_AMP;
	v->a[132699] = anon_sym_DOLLAR;
	small_parse_table_6635(v);
}

/* EOF small_parse_table_1326.c */
