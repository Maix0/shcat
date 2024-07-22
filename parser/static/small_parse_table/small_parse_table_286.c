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
	v->a[28600] = anon_sym_GT_GT;
	v->a[28601] = anon_sym_LT_AMP;
	v->a[28602] = anon_sym_GT_AMP;
	v->a[28603] = anon_sym_GT_PIPE;
	v->a[28604] = anon_sym_LT_GT;
	v->a[28605] = anon_sym_LT_LT;
	v->a[28606] = anon_sym_LT_LT_DASH;
	v->a[28607] = aux_sym_heredoc_redirect_token1;
	v->a[28608] = anon_sym_BQUOTE;
	v->a[28609] = anon_sym_SEMI;
	v->a[28610] = 11;
	v->a[28611] = actions(3);
	v->a[28612] = 1;
	v->a[28613] = sym_comment;
	v->a[28614] = actions(782);
	v->a[28615] = 1;
	v->a[28616] = anon_sym_PIPE;
	v->a[28617] = actions(792);
	v->a[28618] = 1;
	v->a[28619] = sym_file_descriptor;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = actions(1030);
	v->a[28621] = 1;
	v->a[28622] = sym_variable_name;
	v->a[28623] = state(549);
	v->a[28624] = 1;
	v->a[28625] = sym_terminator;
	v->a[28626] = actions(790);
	v->a[28627] = 2;
	v->a[28628] = anon_sym_LT_LT;
	v->a[28629] = anon_sym_LT_LT_DASH;
	v->a[28630] = actions(1028);
	v->a[28631] = 2;
	v->a[28632] = anon_sym_AMP_AMP;
	v->a[28633] = anon_sym_PIPE_PIPE;
	v->a[28634] = state(1137);
	v->a[28635] = 2;
	v->a[28636] = sym_variable_assignment;
	v->a[28637] = aux_sym__variable_assignments_repeat1;
	v->a[28638] = actions(1085);
	v->a[28639] = 3;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = anon_sym_SEMI_SEMI;
	v->a[28641] = aux_sym_heredoc_redirect_token1;
	v->a[28642] = anon_sym_SEMI;
	v->a[28643] = state(1194);
	v->a[28644] = 3;
	v->a[28645] = sym_file_redirect;
	v->a[28646] = sym_heredoc_redirect;
	v->a[28647] = aux_sym_redirected_statement_repeat1;
	v->a[28648] = actions(780);
	v->a[28649] = 16;
	v->a[28650] = anon_sym_LT;
	v->a[28651] = anon_sym_GT;
	v->a[28652] = anon_sym_GT_GT;
	v->a[28653] = anon_sym_LT_AMP;
	v->a[28654] = anon_sym_GT_AMP;
	v->a[28655] = anon_sym_GT_PIPE;
	v->a[28656] = anon_sym_LT_GT;
	v->a[28657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28658] = anon_sym_DOLLAR;
	v->a[28659] = anon_sym_DQUOTE;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = sym_raw_string;
	v->a[28661] = sym_number;
	v->a[28662] = anon_sym_DOLLAR_LBRACE;
	v->a[28663] = anon_sym_DOLLAR_LPAREN;
	v->a[28664] = anon_sym_BQUOTE;
	v->a[28665] = sym_word;
	v->a[28666] = 11;
	v->a[28667] = actions(3);
	v->a[28668] = 1;
	v->a[28669] = sym_comment;
	v->a[28670] = actions(529);
	v->a[28671] = 1;
	v->a[28672] = sym_file_descriptor;
	v->a[28673] = actions(962);
	v->a[28674] = 1;
	v->a[28675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28676] = actions(964);
	v->a[28677] = 1;
	v->a[28678] = anon_sym_DOLLAR;
	v->a[28679] = actions(966);
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = 1;
	v->a[28681] = anon_sym_DQUOTE;
	v->a[28682] = actions(968);
	v->a[28683] = 1;
	v->a[28684] = anon_sym_DOLLAR_LBRACE;
	v->a[28685] = actions(970);
	v->a[28686] = 1;
	v->a[28687] = anon_sym_DOLLAR_LPAREN;
	v->a[28688] = state(332);
	v->a[28689] = 2;
	v->a[28690] = sym_concatenation;
	v->a[28691] = aux_sym_for_statement_repeat1;
	v->a[28692] = actions(1033);
	v->a[28693] = 3;
	v->a[28694] = sym_raw_string;
	v->a[28695] = sym_number;
	v->a[28696] = sym_word;
	v->a[28697] = state(623);
	v->a[28698] = 5;
	v->a[28699] = sym_arithmetic_expansion;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
