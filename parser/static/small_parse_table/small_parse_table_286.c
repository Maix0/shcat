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
	v->a[28602] = actions(692);
	v->a[28603] = 1;
	v->a[28604] = anon_sym_PIPE;
	v->a[28605] = actions(702);
	v->a[28606] = 1;
	v->a[28607] = sym_file_descriptor;
	v->a[28608] = actions(916);
	v->a[28609] = 1;
	v->a[28610] = sym_variable_name;
	v->a[28611] = state(576);
	v->a[28612] = 1;
	v->a[28613] = sym_terminator;
	v->a[28614] = actions(700);
	v->a[28615] = 2;
	v->a[28616] = anon_sym_LT_LT;
	v->a[28617] = anon_sym_LT_LT_DASH;
	v->a[28618] = actions(914);
	v->a[28619] = 2;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = anon_sym_AMP_AMP;
	v->a[28621] = anon_sym_PIPE_PIPE;
	v->a[28622] = state(1181);
	v->a[28623] = 2;
	v->a[28624] = sym_variable_assignment;
	v->a[28625] = aux_sym__variable_assignments_repeat1;
	v->a[28626] = state(1134);
	v->a[28627] = 3;
	v->a[28628] = sym_file_redirect;
	v->a[28629] = sym_heredoc_redirect;
	v->a[28630] = aux_sym_redirected_statement_repeat1;
	v->a[28631] = actions(1039);
	v->a[28632] = 4;
	v->a[28633] = anon_sym_SEMI_SEMI;
	v->a[28634] = aux_sym_heredoc_redirect_token1;
	v->a[28635] = anon_sym_AMP;
	v->a[28636] = anon_sym_SEMI;
	v->a[28637] = actions(690);
	v->a[28638] = 16;
	v->a[28639] = anon_sym_LT;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = anon_sym_GT;
	v->a[28641] = anon_sym_GT_GT;
	v->a[28642] = anon_sym_LT_AMP;
	v->a[28643] = anon_sym_GT_AMP;
	v->a[28644] = anon_sym_GT_PIPE;
	v->a[28645] = anon_sym_LT_GT;
	v->a[28646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28647] = anon_sym_DOLLAR;
	v->a[28648] = anon_sym_DQUOTE;
	v->a[28649] = sym_raw_string;
	v->a[28650] = sym_number;
	v->a[28651] = anon_sym_DOLLAR_LBRACE;
	v->a[28652] = anon_sym_DOLLAR_LPAREN;
	v->a[28653] = anon_sym_BQUOTE;
	v->a[28654] = sym_word;
	v->a[28655] = 17;
	v->a[28656] = actions(668);
	v->a[28657] = 1;
	v->a[28658] = anon_sym_AMP;
	v->a[28659] = actions(680);
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = 1;
	v->a[28661] = sym_comment;
	v->a[28662] = actions(730);
	v->a[28663] = 1;
	v->a[28664] = anon_sym_CARET;
	v->a[28665] = actions(732);
	v->a[28666] = 1;
	v->a[28667] = anon_sym_PIPE;
	v->a[28668] = actions(734);
	v->a[28669] = 1;
	v->a[28670] = anon_sym_AMP_AMP;
	v->a[28671] = actions(736);
	v->a[28672] = 1;
	v->a[28673] = anon_sym_PIPE_PIPE;
	v->a[28674] = actions(738);
	v->a[28675] = 1;
	v->a[28676] = anon_sym_QMARK;
	v->a[28677] = actions(740);
	v->a[28678] = 1;
	v->a[28679] = anon_sym_EQ;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = actions(1041);
	v->a[28681] = 1;
	v->a[28682] = anon_sym_RPAREN_RPAREN;
	v->a[28683] = actions(664);
	v->a[28684] = 2;
	v->a[28685] = anon_sym_LT;
	v->a[28686] = anon_sym_GT;
	v->a[28687] = actions(666);
	v->a[28688] = 2;
	v->a[28689] = anon_sym_GT_GT;
	v->a[28690] = anon_sym_LT_LT;
	v->a[28691] = actions(670);
	v->a[28692] = 2;
	v->a[28693] = anon_sym_EQ_EQ;
	v->a[28694] = anon_sym_BANG_EQ;
	v->a[28695] = actions(672);
	v->a[28696] = 2;
	v->a[28697] = anon_sym_LT_EQ;
	v->a[28698] = anon_sym_GT_EQ;
	v->a[28699] = actions(674);
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
