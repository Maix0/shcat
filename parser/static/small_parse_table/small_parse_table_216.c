/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_216.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1080(t_small_parse_table_array *v)
{
	v->a[21600] = anon_sym_SEMI_SEMI;
	v->a[21601] = anon_sym_AMP_AMP;
	v->a[21602] = anon_sym_PIPE_PIPE;
	v->a[21603] = anon_sym_LT;
	v->a[21604] = anon_sym_GT;
	v->a[21605] = anon_sym_GT_GT;
	v->a[21606] = anon_sym_LT_AMP;
	v->a[21607] = anon_sym_GT_AMP;
	v->a[21608] = anon_sym_GT_PIPE;
	v->a[21609] = anon_sym_LT_AMP_DASH;
	v->a[21610] = anon_sym_GT_AMP_DASH;
	v->a[21611] = anon_sym_LT_LT;
	v->a[21612] = anon_sym_LT_LT_DASH;
	v->a[21613] = aux_sym_heredoc_redirect_token1;
	v->a[21614] = anon_sym_AMP;
	v->a[21615] = anon_sym_SEMI;
	v->a[21616] = 6;
	v->a[21617] = actions(3);
	v->a[21618] = 1;
	v->a[21619] = sym_comment;
	small_parse_table_1081(v);
}

void	small_parse_table_1081(t_small_parse_table_array *v)
{
	v->a[21620] = actions(417);
	v->a[21621] = 1;
	v->a[21622] = sym_variable_name;
	v->a[21623] = actions(379);
	v->a[21624] = 2;
	v->a[21625] = sym_file_descriptor;
	v->a[21626] = sym__bare_dollar;
	v->a[21627] = actions(415);
	v->a[21628] = 2;
	v->a[21629] = aux_sym__simple_variable_name_token1;
	v->a[21630] = aux_sym__multiline_variable_name_token1;
	v->a[21631] = actions(413);
	v->a[21632] = 9;
	v->a[21633] = anon_sym_BANG;
	v->a[21634] = anon_sym_DASH;
	v->a[21635] = anon_sym_STAR;
	v->a[21636] = anon_sym_QMARK;
	v->a[21637] = anon_sym_DOLLAR;
	v->a[21638] = anon_sym_POUND;
	v->a[21639] = anon_sym_AT;
	small_parse_table_1082(v);
}

void	small_parse_table_1082(t_small_parse_table_array *v)
{
	v->a[21640] = anon_sym_0;
	v->a[21641] = anon_sym__;
	v->a[21642] = actions(381);
	v->a[21643] = 22;
	v->a[21644] = anon_sym_PIPE;
	v->a[21645] = anon_sym_AMP_AMP;
	v->a[21646] = anon_sym_PIPE_PIPE;
	v->a[21647] = anon_sym_LT;
	v->a[21648] = anon_sym_GT;
	v->a[21649] = anon_sym_GT_GT;
	v->a[21650] = anon_sym_LT_AMP;
	v->a[21651] = anon_sym_GT_AMP;
	v->a[21652] = anon_sym_GT_PIPE;
	v->a[21653] = anon_sym_LT_AMP_DASH;
	v->a[21654] = anon_sym_GT_AMP_DASH;
	v->a[21655] = anon_sym_LT_LT;
	v->a[21656] = anon_sym_LT_LT_DASH;
	v->a[21657] = aux_sym_heredoc_redirect_token1;
	v->a[21658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21659] = anon_sym_DQUOTE;
	small_parse_table_1083(v);
}

void	small_parse_table_1083(t_small_parse_table_array *v)
{
	v->a[21660] = sym_raw_string;
	v->a[21661] = sym_number;
	v->a[21662] = anon_sym_DOLLAR_LBRACE;
	v->a[21663] = anon_sym_DOLLAR_LPAREN;
	v->a[21664] = anon_sym_BQUOTE;
	v->a[21665] = sym_word;
	v->a[21666] = 5;
	v->a[21667] = actions(3);
	v->a[21668] = 1;
	v->a[21669] = sym_comment;
	v->a[21670] = state(198);
	v->a[21671] = 2;
	v->a[21672] = sym_concatenation;
	v->a[21673] = aux_sym_for_statement_repeat1;
	v->a[21674] = actions(602);
	v->a[21675] = 3;
	v->a[21676] = sym_file_descriptor;
	v->a[21677] = sym_variable_name;
	v->a[21678] = ts_builtin_sym_end;
	v->a[21679] = state(456);
	small_parse_table_1084(v);
}

void	small_parse_table_1084(t_small_parse_table_array *v)
{
	v->a[21680] = 5;
	v->a[21681] = sym_arithmetic_expansion;
	v->a[21682] = sym_string;
	v->a[21683] = sym_simple_expansion;
	v->a[21684] = sym_expansion;
	v->a[21685] = sym_command_substitution;
	v->a[21686] = actions(604);
	v->a[21687] = 26;
	v->a[21688] = anon_sym_PIPE;
	v->a[21689] = anon_sym_SEMI_SEMI;
	v->a[21690] = anon_sym_AMP_AMP;
	v->a[21691] = anon_sym_PIPE_PIPE;
	v->a[21692] = anon_sym_LT;
	v->a[21693] = anon_sym_GT;
	v->a[21694] = anon_sym_GT_GT;
	v->a[21695] = anon_sym_LT_AMP;
	v->a[21696] = anon_sym_GT_AMP;
	v->a[21697] = anon_sym_GT_PIPE;
	v->a[21698] = anon_sym_LT_AMP_DASH;
	v->a[21699] = anon_sym_GT_AMP_DASH;
	small_parse_table_1085(v);
}

/* EOF small_parse_table_216.c */
