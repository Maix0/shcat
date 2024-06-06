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
	v->a[21600] = aux_sym_number_token1;
	v->a[21601] = actions(2498);
	v->a[21602] = 1;
	v->a[21603] = aux_sym_number_token2;
	v->a[21604] = actions(2500);
	v->a[21605] = 1;
	v->a[21606] = anon_sym_DOLLAR_LBRACE;
	v->a[21607] = actions(2502);
	v->a[21608] = 1;
	v->a[21609] = anon_sym_DOLLAR_LPAREN;
	v->a[21610] = actions(2504);
	v->a[21611] = 1;
	v->a[21612] = anon_sym_BQUOTE;
	v->a[21613] = actions(2506);
	v->a[21614] = 1;
	v->a[21615] = anon_sym_DOLLAR_BQUOTE;
	v->a[21616] = actions(2508);
	v->a[21617] = 1;
	v->a[21618] = sym__bare_dollar;
	v->a[21619] = actions(2510);
	small_parse_table_1081(v);
}

void	small_parse_table_1081(t_small_parse_table_array *v)
{
	v->a[21620] = 1;
	v->a[21621] = sym__brace_start;
	v->a[21622] = state(511);
	v->a[21623] = 1;
	v->a[21624] = aux_sym_command_repeat2;
	v->a[21625] = state(1645);
	v->a[21626] = 1;
	v->a[21627] = aux_sym__literal_repeat1;
	v->a[21628] = state(1676);
	v->a[21629] = 1;
	v->a[21630] = sym_concatenation;
	v->a[21631] = actions(2494);
	v->a[21632] = 2;
	v->a[21633] = sym_test_operator;
	v->a[21634] = sym_raw_string;
	v->a[21635] = actions(1278);
	v->a[21636] = 7;
	v->a[21637] = anon_sym_PIPE;
	v->a[21638] = anon_sym_LT;
	v->a[21639] = anon_sym_GT;
	small_parse_table_1082(v);
}

void	small_parse_table_1082(t_small_parse_table_array *v)
{
	v->a[21640] = anon_sym_AMP_GT;
	v->a[21641] = anon_sym_LT_AMP;
	v->a[21642] = anon_sym_GT_AMP;
	v->a[21643] = anon_sym_LT_LT;
	v->a[21644] = state(1452);
	v->a[21645] = 7;
	v->a[21646] = sym_arithmetic_expansion;
	v->a[21647] = sym_brace_expression;
	v->a[21648] = sym_string;
	v->a[21649] = sym_number;
	v->a[21650] = sym_simple_expansion;
	v->a[21651] = sym_expansion;
	v->a[21652] = sym_command_substitution;
	v->a[21653] = actions(1280);
	v->a[21654] = 10;
	v->a[21655] = sym_file_descriptor;
	v->a[21656] = anon_sym_PIPE_AMP;
	v->a[21657] = anon_sym_AMP_AMP;
	v->a[21658] = anon_sym_PIPE_PIPE;
	v->a[21659] = anon_sym_GT_GT;
	small_parse_table_1083(v);
}

void	small_parse_table_1083(t_small_parse_table_array *v)
{
	v->a[21660] = anon_sym_AMP_GT_GT;
	v->a[21661] = anon_sym_GT_PIPE;
	v->a[21662] = anon_sym_LT_AMP_DASH;
	v->a[21663] = anon_sym_GT_AMP_DASH;
	v->a[21664] = anon_sym_LT_LT_DASH;
	v->a[21665] = 3;
	v->a[21666] = actions(3);
	v->a[21667] = 1;
	v->a[21668] = sym_comment;
	v->a[21669] = actions(3034);
	v->a[21670] = 6;
	v->a[21671] = sym_file_descriptor;
	v->a[21672] = sym__concat;
	v->a[21673] = sym_variable_name;
	v->a[21674] = sym_test_operator;
	v->a[21675] = sym__brace_start;
	v->a[21676] = aux_sym_heredoc_redirect_token1;
	v->a[21677] = actions(3032);
	v->a[21678] = 36;
	v->a[21679] = anon_sym_esac;
	small_parse_table_1084(v);
}

void	small_parse_table_1084(t_small_parse_table_array *v)
{
	v->a[21680] = anon_sym_PIPE;
	v->a[21681] = anon_sym_SEMI_SEMI;
	v->a[21682] = anon_sym_SEMI_AMP;
	v->a[21683] = anon_sym_SEMI_SEMI_AMP;
	v->a[21684] = anon_sym_PIPE_AMP;
	v->a[21685] = anon_sym_AMP_AMP;
	v->a[21686] = anon_sym_PIPE_PIPE;
	v->a[21687] = anon_sym_LT;
	v->a[21688] = anon_sym_GT;
	v->a[21689] = anon_sym_GT_GT;
	v->a[21690] = anon_sym_AMP_GT;
	v->a[21691] = anon_sym_AMP_GT_GT;
	v->a[21692] = anon_sym_LT_AMP;
	v->a[21693] = anon_sym_GT_AMP;
	v->a[21694] = anon_sym_GT_PIPE;
	v->a[21695] = anon_sym_LT_AMP_DASH;
	v->a[21696] = anon_sym_GT_AMP_DASH;
	v->a[21697] = anon_sym_LT_LT;
	v->a[21698] = anon_sym_LT_LT_DASH;
	v->a[21699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1085(v);
}

/* EOF small_parse_table_216.c */
