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
	v->a[21601] = sym__bare_dollar;
	v->a[21602] = state(192);
	v->a[21603] = 1;
	v->a[21604] = aux_sym_command_repeat2;
	v->a[21605] = state(793);
	v->a[21606] = 1;
	v->a[21607] = sym_concatenation;
	v->a[21608] = actions(513);
	v->a[21609] = 3;
	v->a[21610] = sym_raw_string;
	v->a[21611] = sym_number;
	v->a[21612] = sym_word;
	v->a[21613] = state(361);
	v->a[21614] = 5;
	v->a[21615] = sym_arithmetic_expansion;
	v->a[21616] = sym_string;
	v->a[21617] = sym_simple_expansion;
	v->a[21618] = sym_expansion;
	v->a[21619] = sym_command_substitution;
	small_parse_table_1081(v);
}

void	small_parse_table_1081(t_small_parse_table_array *v)
{
	v->a[21620] = actions(516);
	v->a[21621] = 20;
	v->a[21622] = anon_sym_esac;
	v->a[21623] = anon_sym_PIPE;
	v->a[21624] = anon_sym_SEMI_SEMI;
	v->a[21625] = anon_sym_AMP_AMP;
	v->a[21626] = anon_sym_PIPE_PIPE;
	v->a[21627] = anon_sym_LT;
	v->a[21628] = anon_sym_GT;
	v->a[21629] = anon_sym_GT_GT;
	v->a[21630] = anon_sym_AMP_GT;
	v->a[21631] = anon_sym_AMP_GT_GT;
	v->a[21632] = anon_sym_LT_AMP;
	v->a[21633] = anon_sym_GT_AMP;
	v->a[21634] = anon_sym_GT_PIPE;
	v->a[21635] = anon_sym_LT_AMP_DASH;
	v->a[21636] = anon_sym_GT_AMP_DASH;
	v->a[21637] = anon_sym_LT_LT;
	v->a[21638] = anon_sym_LT_LT_DASH;
	v->a[21639] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1082(v);
}

void	small_parse_table_1082(t_small_parse_table_array *v)
{
	v->a[21640] = anon_sym_AMP;
	v->a[21641] = anon_sym_SEMI;
	v->a[21642] = 5;
	v->a[21643] = actions(3);
	v->a[21644] = 1;
	v->a[21645] = sym_comment;
	v->a[21646] = actions(543);
	v->a[21647] = 2;
	v->a[21648] = sym_file_descriptor;
	v->a[21649] = sym_variable_name;
	v->a[21650] = state(204);
	v->a[21651] = 2;
	v->a[21652] = sym_concatenation;
	v->a[21653] = aux_sym_for_statement_repeat1;
	v->a[21654] = state(400);
	v->a[21655] = 5;
	v->a[21656] = sym_arithmetic_expansion;
	v->a[21657] = sym_string;
	v->a[21658] = sym_simple_expansion;
	v->a[21659] = sym_expansion;
	small_parse_table_1083(v);
}

void	small_parse_table_1083(t_small_parse_table_array *v)
{
	v->a[21660] = sym_command_substitution;
	v->a[21661] = actions(541);
	v->a[21662] = 29;
	v->a[21663] = anon_sym_PIPE;
	v->a[21664] = anon_sym_RPAREN;
	v->a[21665] = anon_sym_SEMI_SEMI;
	v->a[21666] = anon_sym_AMP_AMP;
	v->a[21667] = anon_sym_PIPE_PIPE;
	v->a[21668] = anon_sym_LT;
	v->a[21669] = anon_sym_GT;
	v->a[21670] = anon_sym_GT_GT;
	v->a[21671] = anon_sym_AMP_GT;
	v->a[21672] = anon_sym_AMP_GT_GT;
	v->a[21673] = anon_sym_LT_AMP;
	v->a[21674] = anon_sym_GT_AMP;
	v->a[21675] = anon_sym_GT_PIPE;
	v->a[21676] = anon_sym_LT_AMP_DASH;
	v->a[21677] = anon_sym_GT_AMP_DASH;
	v->a[21678] = anon_sym_LT_LT;
	v->a[21679] = anon_sym_LT_LT_DASH;
	small_parse_table_1084(v);
}

void	small_parse_table_1084(t_small_parse_table_array *v)
{
	v->a[21680] = aux_sym_heredoc_redirect_token1;
	v->a[21681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21682] = anon_sym_AMP;
	v->a[21683] = anon_sym_DOLLAR;
	v->a[21684] = anon_sym_DQUOTE;
	v->a[21685] = sym_raw_string;
	v->a[21686] = sym_number;
	v->a[21687] = anon_sym_DOLLAR_LBRACE;
	v->a[21688] = anon_sym_DOLLAR_LPAREN;
	v->a[21689] = anon_sym_BQUOTE;
	v->a[21690] = sym_word;
	v->a[21691] = anon_sym_SEMI;
	v->a[21692] = 14;
	v->a[21693] = actions(3);
	v->a[21694] = 1;
	v->a[21695] = sym_comment;
	v->a[21696] = actions(497);
	v->a[21697] = 1;
	v->a[21698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21699] = actions(499);
	small_parse_table_1085(v);
}

/* EOF small_parse_table_216.c */
