/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_866.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4330(t_small_parse_table_array *v)
{
	v->a[86600] = 5;
	v->a[86601] = sym_file_descriptor;
	v->a[86602] = sym__concat;
	v->a[86603] = sym_test_operator;
	v->a[86604] = sym__brace_start;
	v->a[86605] = aux_sym_heredoc_redirect_token1;
	v->a[86606] = actions(1344);
	v->a[86607] = 39;
	v->a[86608] = anon_sym_LPAREN_LPAREN;
	v->a[86609] = anon_sym_SEMI;
	v->a[86610] = anon_sym_PIPE_PIPE;
	v->a[86611] = anon_sym_AMP_AMP;
	v->a[86612] = anon_sym_PIPE;
	v->a[86613] = anon_sym_AMP;
	v->a[86614] = anon_sym_LT;
	v->a[86615] = anon_sym_GT;
	v->a[86616] = anon_sym_LT_LT;
	v->a[86617] = anon_sym_GT_GT;
	v->a[86618] = anon_sym_RPAREN;
	v->a[86619] = anon_sym_SEMI_SEMI;
	small_parse_table_4331(v);
}

void	small_parse_table_4331(t_small_parse_table_array *v)
{
	v->a[86620] = anon_sym_PIPE_AMP;
	v->a[86621] = anon_sym_AMP_GT;
	v->a[86622] = anon_sym_AMP_GT_GT;
	v->a[86623] = anon_sym_LT_AMP;
	v->a[86624] = anon_sym_GT_AMP;
	v->a[86625] = anon_sym_GT_PIPE;
	v->a[86626] = anon_sym_LT_AMP_DASH;
	v->a[86627] = anon_sym_GT_AMP_DASH;
	v->a[86628] = anon_sym_LT_LT_DASH;
	v->a[86629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86630] = anon_sym_DOLLAR_LBRACK;
	v->a[86631] = aux_sym_concatenation_token1;
	v->a[86632] = anon_sym_DOLLAR;
	v->a[86633] = sym__special_character;
	v->a[86634] = anon_sym_DQUOTE;
	v->a[86635] = sym_raw_string;
	v->a[86636] = sym_ansi_c_string;
	v->a[86637] = aux_sym_number_token1;
	v->a[86638] = aux_sym_number_token2;
	v->a[86639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4332(v);
}

void	small_parse_table_4332(t_small_parse_table_array *v)
{
	v->a[86640] = anon_sym_DOLLAR_LPAREN;
	v->a[86641] = anon_sym_BQUOTE;
	v->a[86642] = anon_sym_DOLLAR_BQUOTE;
	v->a[86643] = anon_sym_LT_LPAREN;
	v->a[86644] = anon_sym_GT_LPAREN;
	v->a[86645] = aux_sym__simple_variable_name_token1;
	v->a[86646] = sym_word;
	v->a[86647] = 27;
	v->a[86648] = actions(71);
	v->a[86649] = 1;
	v->a[86650] = sym_comment;
	v->a[86651] = actions(227);
	v->a[86652] = 1;
	v->a[86653] = anon_sym_RPAREN_RPAREN;
	v->a[86654] = actions(1131);
	v->a[86655] = 1;
	v->a[86656] = anon_sym_LPAREN;
	v->a[86657] = actions(1141);
	v->a[86658] = 1;
	v->a[86659] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4333(v);
}

void	small_parse_table_4333(t_small_parse_table_array *v)
{
	v->a[86660] = actions(1145);
	v->a[86661] = 1;
	v->a[86662] = anon_sym_DOLLAR;
	v->a[86663] = actions(1149);
	v->a[86664] = 1;
	v->a[86665] = anon_sym_DQUOTE;
	v->a[86666] = actions(1153);
	v->a[86667] = 1;
	v->a[86668] = aux_sym_number_token1;
	v->a[86669] = actions(1155);
	v->a[86670] = 1;
	v->a[86671] = aux_sym_number_token2;
	v->a[86672] = actions(1157);
	v->a[86673] = 1;
	v->a[86674] = anon_sym_DOLLAR_LBRACE;
	v->a[86675] = actions(1159);
	v->a[86676] = 1;
	v->a[86677] = anon_sym_DOLLAR_LPAREN;
	v->a[86678] = actions(1163);
	v->a[86679] = 1;
	small_parse_table_4334(v);
}

void	small_parse_table_4334(t_small_parse_table_array *v)
{
	v->a[86680] = anon_sym_DOLLAR_BQUOTE;
	v->a[86681] = actions(1169);
	v->a[86682] = 1;
	v->a[86683] = sym__brace_start;
	v->a[86684] = actions(1171);
	v->a[86685] = 1;
	v->a[86686] = sym_word;
	v->a[86687] = actions(1173);
	v->a[86688] = 1;
	v->a[86689] = anon_sym_BANG;
	v->a[86690] = actions(1179);
	v->a[86691] = 1;
	v->a[86692] = anon_sym_TILDE;
	v->a[86693] = actions(1181);
	v->a[86694] = 1;
	v->a[86695] = sym__special_character;
	v->a[86696] = actions(1185);
	v->a[86697] = 1;
	v->a[86698] = sym_test_operator;
	v->a[86699] = actions(3060);
	small_parse_table_4335(v);
}

/* EOF small_parse_table_866.c */
