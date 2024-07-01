/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_276.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1380(t_small_parse_table_array *v)
{
	v->a[27600] = anon_sym_PIPE;
	v->a[27601] = actions(690);
	v->a[27602] = 1;
	v->a[27603] = sym_file_descriptor;
	v->a[27604] = actions(926);
	v->a[27605] = 1;
	v->a[27606] = sym_variable_name;
	v->a[27607] = state(777);
	v->a[27608] = 1;
	v->a[27609] = sym_terminator;
	v->a[27610] = actions(754);
	v->a[27611] = 2;
	v->a[27612] = anon_sym_LT_LT;
	v->a[27613] = anon_sym_LT_LT_DASH;
	v->a[27614] = actions(924);
	v->a[27615] = 2;
	v->a[27616] = anon_sym_AMP_AMP;
	v->a[27617] = anon_sym_PIPE_PIPE;
	v->a[27618] = state(1298);
	v->a[27619] = 2;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = sym_variable_assignment;
	v->a[27621] = aux_sym__variable_assignments_repeat1;
	v->a[27622] = state(1268);
	v->a[27623] = 3;
	v->a[27624] = sym_file_redirect;
	v->a[27625] = sym_heredoc_redirect;
	v->a[27626] = aux_sym_redirected_statement_repeat1;
	v->a[27627] = actions(1045);
	v->a[27628] = 4;
	v->a[27629] = anon_sym_SEMI_SEMI;
	v->a[27630] = aux_sym_heredoc_redirect_token1;
	v->a[27631] = anon_sym_AMP;
	v->a[27632] = anon_sym_SEMI;
	v->a[27633] = actions(678);
	v->a[27634] = 17;
	v->a[27635] = anon_sym_LT;
	v->a[27636] = anon_sym_GT;
	v->a[27637] = anon_sym_GT_GT;
	v->a[27638] = anon_sym_LT_AMP;
	v->a[27639] = anon_sym_GT_AMP;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = anon_sym_GT_PIPE;
	v->a[27641] = anon_sym_LT_AMP_DASH;
	v->a[27642] = anon_sym_GT_AMP_DASH;
	v->a[27643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27644] = anon_sym_DOLLAR;
	v->a[27645] = anon_sym_DQUOTE;
	v->a[27646] = sym_raw_string;
	v->a[27647] = sym_number;
	v->a[27648] = anon_sym_DOLLAR_LBRACE;
	v->a[27649] = anon_sym_DOLLAR_LPAREN;
	v->a[27650] = anon_sym_BQUOTE;
	v->a[27651] = sym_word;
	v->a[27652] = 16;
	v->a[27653] = actions(3);
	v->a[27654] = 1;
	v->a[27655] = sym_comment;
	v->a[27656] = actions(17);
	v->a[27657] = 1;
	v->a[27658] = anon_sym_LPAREN;
	v->a[27659] = actions(459);
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = 1;
	v->a[27661] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27662] = actions(461);
	v->a[27663] = 1;
	v->a[27664] = anon_sym_DOLLAR;
	v->a[27665] = actions(463);
	v->a[27666] = 1;
	v->a[27667] = anon_sym_DQUOTE;
	v->a[27668] = actions(465);
	v->a[27669] = 1;
	v->a[27670] = anon_sym_DOLLAR_LBRACE;
	v->a[27671] = actions(467);
	v->a[27672] = 1;
	v->a[27673] = anon_sym_DOLLAR_LPAREN;
	v->a[27674] = actions(469);
	v->a[27675] = 1;
	v->a[27676] = anon_sym_BQUOTE;
	v->a[27677] = actions(471);
	v->a[27678] = 1;
	v->a[27679] = sym_file_descriptor;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = actions(473);
	v->a[27681] = 1;
	v->a[27682] = sym__bare_dollar;
	v->a[27683] = state(432);
	v->a[27684] = 1;
	v->a[27685] = aux_sym_command_repeat2;
	v->a[27686] = state(718);
	v->a[27687] = 1;
	v->a[27688] = sym_concatenation;
	v->a[27689] = state(1235);
	v->a[27690] = 1;
	v->a[27691] = sym_subshell;
	v->a[27692] = actions(988);
	v->a[27693] = 3;
	v->a[27694] = sym_raw_string;
	v->a[27695] = sym_number;
	v->a[27696] = sym_word;
	v->a[27697] = state(772);
	v->a[27698] = 5;
	v->a[27699] = sym_arithmetic_expansion;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
