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
	v->a[21600] = 1;
	v->a[21601] = anon_sym_DOLLAR_BQUOTE;
	v->a[21602] = actions(3417);
	v->a[21603] = 1;
	v->a[21604] = sym__brace_start;
	v->a[21605] = actions(3665);
	v->a[21606] = 1;
	v->a[21607] = sym__special_character;
	v->a[21608] = actions(3667);
	v->a[21609] = 1;
	v->a[21610] = sym_test_operator;
	v->a[21611] = state(2161);
	v->a[21612] = 1;
	v->a[21613] = aux_sym__literal_repeat1;
	v->a[21614] = actions(2096);
	v->a[21615] = 2;
	v->a[21616] = sym_file_descriptor;
	v->a[21617] = aux_sym_heredoc_redirect_token1;
	v->a[21618] = actions(3393);
	v->a[21619] = 2;
	small_parse_table_1081(v);
}

void	small_parse_table_1081(t_small_parse_table_array *v)
{
	v->a[21620] = anon_sym_LPAREN_LPAREN;
	v->a[21621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21622] = actions(3413);
	v->a[21623] = 2;
	v->a[21624] = anon_sym_LT_LPAREN;
	v->a[21625] = anon_sym_GT_LPAREN;
	v->a[21626] = state(715);
	v->a[21627] = 2;
	v->a[21628] = sym_concatenation;
	v->a[21629] = aux_sym_for_statement_repeat1;
	v->a[21630] = actions(3663);
	v->a[21631] = 3;
	v->a[21632] = sym_raw_string;
	v->a[21633] = sym_ansi_c_string;
	v->a[21634] = sym_word;
	v->a[21635] = state(1918);
	v->a[21636] = 9;
	v->a[21637] = sym_arithmetic_expansion;
	v->a[21638] = sym_brace_expression;
	v->a[21639] = sym_string;
	small_parse_table_1082(v);
}

void	small_parse_table_1082(t_small_parse_table_array *v)
{
	v->a[21640] = sym_translated_string;
	v->a[21641] = sym_number;
	v->a[21642] = sym_simple_expansion;
	v->a[21643] = sym_expansion;
	v->a[21644] = sym_command_substitution;
	v->a[21645] = sym_process_substitution;
	v->a[21646] = actions(2094);
	v->a[21647] = 21;
	v->a[21648] = anon_sym_SEMI;
	v->a[21649] = anon_sym_PIPE_PIPE;
	v->a[21650] = anon_sym_AMP_AMP;
	v->a[21651] = anon_sym_PIPE;
	v->a[21652] = anon_sym_AMP;
	v->a[21653] = anon_sym_LT;
	v->a[21654] = anon_sym_GT;
	v->a[21655] = anon_sym_LT_LT;
	v->a[21656] = anon_sym_GT_GT;
	v->a[21657] = anon_sym_SEMI_SEMI;
	v->a[21658] = anon_sym_PIPE_AMP;
	v->a[21659] = anon_sym_AMP_GT;
	small_parse_table_1083(v);
}

void	small_parse_table_1083(t_small_parse_table_array *v)
{
	v->a[21660] = anon_sym_AMP_GT_GT;
	v->a[21661] = anon_sym_LT_AMP;
	v->a[21662] = anon_sym_GT_AMP;
	v->a[21663] = anon_sym_GT_PIPE;
	v->a[21664] = anon_sym_LT_AMP_DASH;
	v->a[21665] = anon_sym_GT_AMP_DASH;
	v->a[21666] = anon_sym_LT_LT_DASH;
	v->a[21667] = anon_sym_LT_LT_LT;
	v->a[21668] = anon_sym_BQUOTE;
	v->a[21669] = 8;
	v->a[21670] = actions(3);
	v->a[21671] = 1;
	v->a[21672] = sym_comment;
	v->a[21673] = actions(2267);
	v->a[21674] = 1;
	v->a[21675] = anon_sym_DQUOTE;
	v->a[21676] = actions(3829);
	v->a[21677] = 1;
	v->a[21678] = sym_variable_name;
	v->a[21679] = state(1595);
	small_parse_table_1084(v);
}

void	small_parse_table_1084(t_small_parse_table_array *v)
{
	v->a[21680] = 1;
	v->a[21681] = sym_string;
	v->a[21682] = actions(3827);
	v->a[21683] = 2;
	v->a[21684] = aux_sym__simple_variable_name_token1;
	v->a[21685] = aux_sym__multiline_variable_name_token1;
	v->a[21686] = actions(1241);
	v->a[21687] = 3;
	v->a[21688] = sym_file_descriptor;
	v->a[21689] = sym_test_operator;
	v->a[21690] = sym__brace_start;
	v->a[21691] = actions(3825);
	v->a[21692] = 9;
	v->a[21693] = anon_sym_DASH;
	v->a[21694] = anon_sym_STAR;
	v->a[21695] = anon_sym_BANG;
	v->a[21696] = anon_sym_QMARK;
	v->a[21697] = anon_sym_DOLLAR;
	v->a[21698] = anon_sym_POUND;
	v->a[21699] = anon_sym_AT2;
	small_parse_table_1085(v);
}

/* EOF small_parse_table_216.c */
