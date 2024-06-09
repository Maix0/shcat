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
	v->a[28600] = actions(1131);
	v->a[28601] = 1;
	v->a[28602] = aux_sym_concatenation_token1;
	v->a[28603] = actions(1133);
	v->a[28604] = 1;
	v->a[28605] = sym__concat;
	v->a[28606] = state(284);
	v->a[28607] = 1;
	v->a[28608] = aux_sym_concatenation_repeat1;
	v->a[28609] = actions(1127);
	v->a[28610] = 3;
	v->a[28611] = sym_file_descriptor;
	v->a[28612] = sym__bare_dollar;
	v->a[28613] = ts_builtin_sym_end;
	v->a[28614] = actions(1129);
	v->a[28615] = 30;
	v->a[28616] = anon_sym_LPAREN;
	v->a[28617] = anon_sym_PIPE;
	v->a[28618] = anon_sym_SEMI_SEMI;
	v->a[28619] = anon_sym_AMP_AMP;
	small_parse_table_1431(v);
}

void	small_parse_table_1431(t_small_parse_table_array *v)
{
	v->a[28620] = anon_sym_PIPE_PIPE;
	v->a[28621] = anon_sym_LT;
	v->a[28622] = anon_sym_GT;
	v->a[28623] = anon_sym_GT_GT;
	v->a[28624] = anon_sym_AMP_GT;
	v->a[28625] = anon_sym_AMP_GT_GT;
	v->a[28626] = anon_sym_LT_AMP;
	v->a[28627] = anon_sym_GT_AMP;
	v->a[28628] = anon_sym_GT_PIPE;
	v->a[28629] = anon_sym_LT_AMP_DASH;
	v->a[28630] = anon_sym_GT_AMP_DASH;
	v->a[28631] = anon_sym_LT_LT;
	v->a[28632] = anon_sym_LT_LT_DASH;
	v->a[28633] = aux_sym_heredoc_redirect_token1;
	v->a[28634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28635] = anon_sym_AMP;
	v->a[28636] = anon_sym_DOLLAR;
	v->a[28637] = anon_sym_DQUOTE;
	v->a[28638] = sym_raw_string;
	v->a[28639] = aux_sym_number_token1;
	small_parse_table_1432(v);
}

void	small_parse_table_1432(t_small_parse_table_array *v)
{
	v->a[28640] = aux_sym_number_token2;
	v->a[28641] = anon_sym_DOLLAR_LBRACE;
	v->a[28642] = anon_sym_DOLLAR_LPAREN;
	v->a[28643] = anon_sym_BQUOTE;
	v->a[28644] = sym_word;
	v->a[28645] = anon_sym_SEMI;
	v->a[28646] = 23;
	v->a[28647] = actions(3);
	v->a[28648] = 1;
	v->a[28649] = sym_comment;
	v->a[28650] = actions(17);
	v->a[28651] = 1;
	v->a[28652] = anon_sym_LPAREN;
	v->a[28653] = actions(63);
	v->a[28654] = 1;
	v->a[28655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28656] = actions(65);
	v->a[28657] = 1;
	v->a[28658] = anon_sym_DOLLAR;
	v->a[28659] = actions(67);
	small_parse_table_1433(v);
}

void	small_parse_table_1433(t_small_parse_table_array *v)
{
	v->a[28660] = 1;
	v->a[28661] = anon_sym_DQUOTE;
	v->a[28662] = actions(71);
	v->a[28663] = 1;
	v->a[28664] = aux_sym_number_token1;
	v->a[28665] = actions(73);
	v->a[28666] = 1;
	v->a[28667] = aux_sym_number_token2;
	v->a[28668] = actions(75);
	v->a[28669] = 1;
	v->a[28670] = anon_sym_DOLLAR_LBRACE;
	v->a[28671] = actions(77);
	v->a[28672] = 1;
	v->a[28673] = anon_sym_DOLLAR_LPAREN;
	v->a[28674] = actions(79);
	v->a[28675] = 1;
	v->a[28676] = anon_sym_BQUOTE;
	v->a[28677] = actions(260);
	v->a[28678] = 1;
	v->a[28679] = sym_variable_name;
	small_parse_table_1434(v);
}

void	small_parse_table_1434(t_small_parse_table_array *v)
{
	v->a[28680] = actions(1102);
	v->a[28681] = 1;
	v->a[28682] = sym_file_descriptor;
	v->a[28683] = state(175);
	v->a[28684] = 1;
	v->a[28685] = sym_command_name;
	v->a[28686] = state(567);
	v->a[28687] = 1;
	v->a[28688] = aux_sym_command_repeat1;
	v->a[28689] = state(582);
	v->a[28690] = 1;
	v->a[28691] = sym_concatenation;
	v->a[28692] = state(724);
	v->a[28693] = 1;
	v->a[28694] = sym_variable_assignment;
	v->a[28695] = state(1175);
	v->a[28696] = 1;
	v->a[28697] = sym_subshell;
	v->a[28698] = state(1179);
	v->a[28699] = 1;
	small_parse_table_1435(v);
}

/* EOF small_parse_table_286.c */
