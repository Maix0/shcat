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
	v->a[28600] = actions(3);
	v->a[28601] = 1;
	v->a[28602] = sym_comment;
	v->a[28603] = actions(682);
	v->a[28604] = 1;
	v->a[28605] = anon_sym_PIPE;
	v->a[28606] = actions(690);
	v->a[28607] = 1;
	v->a[28608] = sym_file_descriptor;
	v->a[28609] = actions(965);
	v->a[28610] = 1;
	v->a[28611] = sym_variable_name;
	v->a[28612] = state(1181);
	v->a[28613] = 2;
	v->a[28614] = sym_variable_assignment;
	v->a[28615] = aux_sym__variable_assignments_repeat1;
	v->a[28616] = state(1165);
	v->a[28617] = 3;
	v->a[28618] = sym_file_redirect;
	v->a[28619] = sym_heredoc_redirect;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = aux_sym_redirected_statement_repeat1;
	v->a[28621] = actions(935);
	v->a[28622] = 8;
	v->a[28623] = anon_sym_SEMI_SEMI;
	v->a[28624] = anon_sym_AMP_AMP;
	v->a[28625] = anon_sym_PIPE_PIPE;
	v->a[28626] = anon_sym_LT_LT;
	v->a[28627] = anon_sym_LT_LT_DASH;
	v->a[28628] = aux_sym_heredoc_redirect_token1;
	v->a[28629] = anon_sym_AMP;
	v->a[28630] = anon_sym_SEMI;
	v->a[28631] = actions(678);
	v->a[28632] = 17;
	v->a[28633] = anon_sym_LT;
	v->a[28634] = anon_sym_GT;
	v->a[28635] = anon_sym_GT_GT;
	v->a[28636] = anon_sym_LT_AMP;
	v->a[28637] = anon_sym_GT_AMP;
	v->a[28638] = anon_sym_GT_PIPE;
	v->a[28639] = anon_sym_LT_AMP_DASH;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = anon_sym_GT_AMP_DASH;
	v->a[28641] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28642] = anon_sym_DOLLAR;
	v->a[28643] = anon_sym_DQUOTE;
	v->a[28644] = sym_raw_string;
	v->a[28645] = sym_number;
	v->a[28646] = anon_sym_DOLLAR_LBRACE;
	v->a[28647] = anon_sym_DOLLAR_LPAREN;
	v->a[28648] = anon_sym_BQUOTE;
	v->a[28649] = sym_word;
	v->a[28650] = 17;
	v->a[28651] = actions(842);
	v->a[28652] = 1;
	v->a[28653] = anon_sym_PIPE;
	v->a[28654] = actions(844);
	v->a[28655] = 1;
	v->a[28656] = anon_sym_AMP_AMP;
	v->a[28657] = actions(846);
	v->a[28658] = 1;
	v->a[28659] = anon_sym_PIPE_PIPE;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = actions(856);
	v->a[28661] = 1;
	v->a[28662] = anon_sym_CARET;
	v->a[28663] = actions(858);
	v->a[28664] = 1;
	v->a[28665] = anon_sym_AMP;
	v->a[28666] = actions(870);
	v->a[28667] = 1;
	v->a[28668] = sym_comment;
	v->a[28669] = actions(1021);
	v->a[28670] = 1;
	v->a[28671] = anon_sym_EQ;
	v->a[28672] = actions(1023);
	v->a[28673] = 1;
	v->a[28674] = anon_sym_QMARK;
	v->a[28675] = actions(1103);
	v->a[28676] = 1;
	v->a[28677] = anon_sym_RPAREN_RPAREN;
	v->a[28678] = actions(850);
	v->a[28679] = 2;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = anon_sym_LT;
	v->a[28681] = anon_sym_GT;
	v->a[28682] = actions(852);
	v->a[28683] = 2;
	v->a[28684] = anon_sym_GT_GT;
	v->a[28685] = anon_sym_LT_LT;
	v->a[28686] = actions(860);
	v->a[28687] = 2;
	v->a[28688] = anon_sym_EQ_EQ;
	v->a[28689] = anon_sym_BANG_EQ;
	v->a[28690] = actions(862);
	v->a[28691] = 2;
	v->a[28692] = anon_sym_LT_EQ;
	v->a[28693] = anon_sym_GT_EQ;
	v->a[28694] = actions(864);
	v->a[28695] = 2;
	v->a[28696] = anon_sym_PLUS;
	v->a[28697] = anon_sym_DASH;
	v->a[28698] = actions(868);
	v->a[28699] = 2;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
