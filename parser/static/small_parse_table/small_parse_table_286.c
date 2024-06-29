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
	v->a[28600] = actions(111);
	v->a[28601] = 1;
	v->a[28602] = anon_sym_DOLLAR;
	v->a[28603] = actions(113);
	v->a[28604] = 1;
	v->a[28605] = anon_sym_DQUOTE;
	v->a[28606] = actions(117);
	v->a[28607] = 1;
	v->a[28608] = anon_sym_DOLLAR_LBRACE;
	v->a[28609] = actions(119);
	v->a[28610] = 1;
	v->a[28611] = anon_sym_DOLLAR_LPAREN;
	v->a[28612] = actions(121);
	v->a[28613] = 1;
	v->a[28614] = anon_sym_BQUOTE;
	v->a[28615] = actions(125);
	v->a[28616] = 1;
	v->a[28617] = sym_variable_name;
	v->a[28618] = actions(1068);
	v->a[28619] = 1;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = sym_file_descriptor;
	v->a[28621] = state(184);
	v->a[28622] = 1;
	v->a[28623] = sym_command_name;
	v->a[28624] = state(622);
	v->a[28625] = 1;
	v->a[28626] = sym_concatenation;
	v->a[28627] = state(727);
	v->a[28628] = 1;
	v->a[28629] = aux_sym_command_repeat1;
	v->a[28630] = state(742);
	v->a[28631] = 1;
	v->a[28632] = sym_variable_assignment;
	v->a[28633] = state(1339);
	v->a[28634] = 1;
	v->a[28635] = sym_command;
	v->a[28636] = state(1340);
	v->a[28637] = 1;
	v->a[28638] = sym_subshell;
	v->a[28639] = state(1343);
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = 1;
	v->a[28641] = sym_file_redirect;
	v->a[28642] = actions(1066);
	v->a[28643] = 2;
	v->a[28644] = anon_sym_LT_AMP_DASH;
	v->a[28645] = anon_sym_GT_AMP_DASH;
	v->a[28646] = actions(115);
	v->a[28647] = 3;
	v->a[28648] = sym_raw_string;
	v->a[28649] = sym_number;
	v->a[28650] = sym_word;
	v->a[28651] = state(289);
	v->a[28652] = 5;
	v->a[28653] = sym_arithmetic_expansion;
	v->a[28654] = sym_string;
	v->a[28655] = sym_simple_expansion;
	v->a[28656] = sym_expansion;
	v->a[28657] = sym_command_substitution;
	v->a[28658] = actions(1064);
	v->a[28659] = 8;
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = anon_sym_LT;
	v->a[28661] = anon_sym_GT;
	v->a[28662] = anon_sym_GT_GT;
	v->a[28663] = anon_sym_AMP_GT;
	v->a[28664] = anon_sym_AMP_GT_GT;
	v->a[28665] = anon_sym_LT_AMP;
	v->a[28666] = anon_sym_GT_AMP;
	v->a[28667] = anon_sym_GT_PIPE;
	v->a[28668] = 3;
	v->a[28669] = actions(3);
	v->a[28670] = 1;
	v->a[28671] = sym_comment;
	v->a[28672] = actions(1044);
	v->a[28673] = 4;
	v->a[28674] = sym_file_descriptor;
	v->a[28675] = sym__concat;
	v->a[28676] = sym__bare_dollar;
	v->a[28677] = ts_builtin_sym_end;
	v->a[28678] = actions(1042);
	v->a[28679] = 30;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = anon_sym_LPAREN;
	v->a[28681] = anon_sym_PIPE;
	v->a[28682] = anon_sym_SEMI_SEMI;
	v->a[28683] = anon_sym_AMP_AMP;
	v->a[28684] = anon_sym_PIPE_PIPE;
	v->a[28685] = anon_sym_LT;
	v->a[28686] = anon_sym_GT;
	v->a[28687] = anon_sym_GT_GT;
	v->a[28688] = anon_sym_AMP_GT;
	v->a[28689] = anon_sym_AMP_GT_GT;
	v->a[28690] = anon_sym_LT_AMP;
	v->a[28691] = anon_sym_GT_AMP;
	v->a[28692] = anon_sym_GT_PIPE;
	v->a[28693] = anon_sym_LT_AMP_DASH;
	v->a[28694] = anon_sym_GT_AMP_DASH;
	v->a[28695] = anon_sym_LT_LT;
	v->a[28696] = anon_sym_LT_LT_DASH;
	v->a[28697] = aux_sym_heredoc_redirect_token1;
	v->a[28698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28699] = anon_sym_AMP;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
