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
	v->a[28600] = 1;
	v->a[28601] = sym_comment;
	v->a[28602] = actions(1044);
	v->a[28603] = 1;
	v->a[28604] = sym_variable_name;
	v->a[28605] = actions(1185);
	v->a[28606] = 1;
	v->a[28607] = ts_builtin_sym_end;
	v->a[28608] = actions(1040);
	v->a[28609] = 20;
	v->a[28610] = anon_sym_for;
	v->a[28611] = anon_sym_while;
	v->a[28612] = anon_sym_until;
	v->a[28613] = anon_sym_if;
	v->a[28614] = anon_sym_case;
	v->a[28615] = anon_sym_LPAREN;
	v->a[28616] = anon_sym_LBRACE;
	v->a[28617] = anon_sym_BANG;
	v->a[28618] = anon_sym_LT;
	v->a[28619] = anon_sym_GT;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = anon_sym_GT_GT;
	v->a[28621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28622] = anon_sym_DOLLAR;
	v->a[28623] = anon_sym_DQUOTE;
	v->a[28624] = sym_raw_string;
	v->a[28625] = sym_number;
	v->a[28626] = anon_sym_DOLLAR_LBRACE;
	v->a[28627] = anon_sym_DOLLAR_LPAREN;
	v->a[28628] = anon_sym_BQUOTE;
	v->a[28629] = sym_word;
	v->a[28630] = 3;
	v->a[28631] = actions(3);
	v->a[28632] = 1;
	v->a[28633] = sym_comment;
	v->a[28634] = actions(1003);
	v->a[28635] = 1;
	v->a[28636] = sym_variable_name;
	v->a[28637] = actions(1001);
	v->a[28638] = 21;
	v->a[28639] = anon_sym_for;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = anon_sym_while;
	v->a[28641] = anon_sym_until;
	v->a[28642] = anon_sym_do;
	v->a[28643] = anon_sym_if;
	v->a[28644] = anon_sym_case;
	v->a[28645] = anon_sym_LPAREN;
	v->a[28646] = anon_sym_LBRACE;
	v->a[28647] = anon_sym_BANG;
	v->a[28648] = anon_sym_LT;
	v->a[28649] = anon_sym_GT;
	v->a[28650] = anon_sym_GT_GT;
	v->a[28651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28652] = anon_sym_DOLLAR;
	v->a[28653] = anon_sym_DQUOTE;
	v->a[28654] = sym_raw_string;
	v->a[28655] = sym_number;
	v->a[28656] = anon_sym_DOLLAR_LBRACE;
	v->a[28657] = anon_sym_DOLLAR_LPAREN;
	v->a[28658] = anon_sym_BQUOTE;
	v->a[28659] = sym_word;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = 5;
	v->a[28661] = actions(3);
	v->a[28662] = 1;
	v->a[28663] = sym_comment;
	v->a[28664] = actions(1183);
	v->a[28665] = 1;
	v->a[28666] = sym_variable_name;
	v->a[28667] = actions(1181);
	v->a[28668] = 2;
	v->a[28669] = aux_sym__simple_variable_name_token1;
	v->a[28670] = aux_sym__multiline_variable_name_token1;
	v->a[28671] = actions(1179);
	v->a[28672] = 8;
	v->a[28673] = anon_sym_BANG;
	v->a[28674] = anon_sym_DASH;
	v->a[28675] = anon_sym_STAR;
	v->a[28676] = anon_sym_QMARK;
	v->a[28677] = anon_sym_DOLLAR;
	v->a[28678] = anon_sym_POUND;
	v->a[28679] = anon_sym_AT;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = anon_sym_0;
	v->a[28681] = actions(343);
	v->a[28682] = 11;
	v->a[28683] = anon_sym_PIPE;
	v->a[28684] = anon_sym_RPAREN;
	v->a[28685] = anon_sym_SEMI_SEMI;
	v->a[28686] = anon_sym_AMP_AMP;
	v->a[28687] = anon_sym_PIPE_PIPE;
	v->a[28688] = anon_sym_LT;
	v->a[28689] = anon_sym_GT;
	v->a[28690] = anon_sym_GT_GT;
	v->a[28691] = anon_sym_LT_LT;
	v->a[28692] = aux_sym_heredoc_redirect_token1;
	v->a[28693] = anon_sym_SEMI;
	v->a[28694] = 4;
	v->a[28695] = actions(3);
	v->a[28696] = 1;
	v->a[28697] = sym_comment;
	v->a[28698] = actions(1044);
	v->a[28699] = 1;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
