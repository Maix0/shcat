/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_286.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1430(t_small_parse_table_array *v)
{
	v->a[28600] = aux_sym_number_token1;
	v->a[28601] = aux_sym_number_token2;
	v->a[28602] = anon_sym_DOLLAR_LBRACE;
	v->a[28603] = anon_sym_DOLLAR_LPAREN;
	v->a[28604] = anon_sym_BQUOTE;
	v->a[28605] = anon_sym_DOLLAR_BQUOTE;
	v->a[28606] = anon_sym_LT_LPAREN;
	v->a[28607] = anon_sym_GT_LPAREN;
	v->a[28608] = sym_word;
	v->a[28609] = 8;
	v->a[28610] = actions(3);
	v->a[28611] = 1;
	v->a[28612] = sym_comment;
	v->a[28613] = actions(4397);
	v->a[28614] = 1;
	v->a[28615] = anon_sym_DQUOTE;
	v->a[28616] = actions(4401);
	v->a[28617] = 1;
	v->a[28618] = sym_variable_name;
	v->a[28619] = state(2412);
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = 1;
	v->a[28621] = sym_string;
	v->a[28622] = actions(4399);
	v->a[28623] = 2;
	v->a[28624] = aux_sym__simple_variable_name_token1;
	v->a[28625] = aux_sym__multiline_variable_name_token1;
	v->a[28626] = actions(1241);
	v->a[28627] = 3;
	v->a[28628] = sym_file_descriptor;
	v->a[28629] = sym_test_operator;
	v->a[28630] = sym__brace_start;
	v->a[28631] = actions(4395);
	v->a[28632] = 9;
	v->a[28633] = anon_sym_DASH;
	v->a[28634] = anon_sym_STAR;
	v->a[28635] = anon_sym_BANG;
	v->a[28636] = anon_sym_QMARK;
	v->a[28637] = anon_sym_DOLLAR;
	v->a[28638] = anon_sym_POUND;
	v->a[28639] = anon_sym_AT2;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = anon_sym_0;
	v->a[28641] = anon_sym__;
	v->a[28642] = actions(1239);
	v->a[28643] = 33;
	v->a[28644] = anon_sym_LPAREN_LPAREN;
	v->a[28645] = anon_sym_PIPE_PIPE;
	v->a[28646] = anon_sym_AMP_AMP;
	v->a[28647] = anon_sym_PIPE;
	v->a[28648] = anon_sym_LT;
	v->a[28649] = anon_sym_GT;
	v->a[28650] = anon_sym_LT_LT;
	v->a[28651] = anon_sym_GT_GT;
	v->a[28652] = anon_sym_PIPE_AMP;
	v->a[28653] = anon_sym_RBRACK;
	v->a[28654] = anon_sym_AMP_GT;
	v->a[28655] = anon_sym_AMP_GT_GT;
	v->a[28656] = anon_sym_LT_AMP;
	v->a[28657] = anon_sym_GT_AMP;
	v->a[28658] = anon_sym_GT_PIPE;
	v->a[28659] = anon_sym_LT_AMP_DASH;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = anon_sym_GT_AMP_DASH;
	v->a[28661] = anon_sym_LT_LT_DASH;
	v->a[28662] = anon_sym_LT_LT_LT;
	v->a[28663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28664] = anon_sym_DOLLAR_LBRACK;
	v->a[28665] = sym__special_character;
	v->a[28666] = sym_raw_string;
	v->a[28667] = sym_ansi_c_string;
	v->a[28668] = aux_sym_number_token1;
	v->a[28669] = aux_sym_number_token2;
	v->a[28670] = anon_sym_DOLLAR_LBRACE;
	v->a[28671] = anon_sym_DOLLAR_LPAREN;
	v->a[28672] = anon_sym_BQUOTE;
	v->a[28673] = anon_sym_DOLLAR_BQUOTE;
	v->a[28674] = anon_sym_LT_LPAREN;
	v->a[28675] = anon_sym_GT_LPAREN;
	v->a[28676] = sym_word;
	v->a[28677] = 3;
	v->a[28678] = actions(3);
	v->a[28679] = 1;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = sym_comment;
	v->a[28681] = actions(1322);
	v->a[28682] = 6;
	v->a[28683] = sym_file_descriptor;
	v->a[28684] = sym__concat;
	v->a[28685] = sym_test_operator;
	v->a[28686] = sym__bare_dollar;
	v->a[28687] = sym__brace_start;
	v->a[28688] = aux_sym_heredoc_redirect_token1;
	v->a[28689] = actions(1320);
	v->a[28690] = 44;
	v->a[28691] = anon_sym_LPAREN_LPAREN;
	v->a[28692] = anon_sym_SEMI;
	v->a[28693] = anon_sym_PIPE_PIPE;
	v->a[28694] = anon_sym_AMP_AMP;
	v->a[28695] = anon_sym_PIPE;
	v->a[28696] = anon_sym_AMP;
	v->a[28697] = anon_sym_EQ_EQ;
	v->a[28698] = anon_sym_LT;
	v->a[28699] = anon_sym_GT;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
