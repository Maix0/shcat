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
	v->a[27600] = 2;
	v->a[27601] = anon_sym_LT_LT;
	v->a[27602] = anon_sym_LT_LT_DASH;
	v->a[27603] = actions(1079);
	v->a[27604] = 2;
	v->a[27605] = anon_sym_AMP_AMP;
	v->a[27606] = anon_sym_PIPE_PIPE;
	v->a[27607] = state(1030);
	v->a[27608] = 2;
	v->a[27609] = sym_variable_assignment;
	v->a[27610] = aux_sym_variable_assignments_repeat1;
	v->a[27611] = state(1050);
	v->a[27612] = 3;
	v->a[27613] = sym_file_redirect;
	v->a[27614] = sym_heredoc_redirect;
	v->a[27615] = aux_sym_redirected_statement_repeat1;
	v->a[27616] = actions(1077);
	v->a[27617] = 4;
	v->a[27618] = anon_sym_SEMI_SEMI;
	v->a[27619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_AMP;
	v->a[27621] = anon_sym_SEMI;
	v->a[27622] = actions(1000);
	v->a[27623] = 20;
	v->a[27624] = anon_sym_LT;
	v->a[27625] = anon_sym_GT;
	v->a[27626] = anon_sym_GT_GT;
	v->a[27627] = anon_sym_AMP_GT;
	v->a[27628] = anon_sym_AMP_GT_GT;
	v->a[27629] = anon_sym_LT_AMP;
	v->a[27630] = anon_sym_GT_AMP;
	v->a[27631] = anon_sym_GT_PIPE;
	v->a[27632] = anon_sym_LT_AMP_DASH;
	v->a[27633] = anon_sym_GT_AMP_DASH;
	v->a[27634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27635] = anon_sym_DOLLAR;
	v->a[27636] = anon_sym_DQUOTE;
	v->a[27637] = sym_raw_string;
	v->a[27638] = aux_sym_number_token1;
	v->a[27639] = aux_sym_number_token2;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = anon_sym_DOLLAR_LBRACE;
	v->a[27641] = anon_sym_DOLLAR_LPAREN;
	v->a[27642] = anon_sym_BQUOTE;
	v->a[27643] = sym_word;
	v->a[27644] = 18;
	v->a[27645] = actions(3);
	v->a[27646] = 1;
	v->a[27647] = sym_comment;
	v->a[27648] = actions(373);
	v->a[27649] = 1;
	v->a[27650] = anon_sym_LPAREN;
	v->a[27651] = actions(473);
	v->a[27652] = 1;
	v->a[27653] = sym_file_descriptor;
	v->a[27654] = actions(1015);
	v->a[27655] = 1;
	v->a[27656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27657] = actions(1017);
	v->a[27658] = 1;
	v->a[27659] = anon_sym_DOLLAR;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = actions(1019);
	v->a[27661] = 1;
	v->a[27662] = anon_sym_DQUOTE;
	v->a[27663] = actions(1021);
	v->a[27664] = 1;
	v->a[27665] = aux_sym_number_token1;
	v->a[27666] = actions(1023);
	v->a[27667] = 1;
	v->a[27668] = aux_sym_number_token2;
	v->a[27669] = actions(1025);
	v->a[27670] = 1;
	v->a[27671] = anon_sym_DOLLAR_LBRACE;
	v->a[27672] = actions(1027);
	v->a[27673] = 1;
	v->a[27674] = anon_sym_DOLLAR_LPAREN;
	v->a[27675] = actions(1029);
	v->a[27676] = 1;
	v->a[27677] = anon_sym_BQUOTE;
	v->a[27678] = actions(1031);
	v->a[27679] = 1;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = sym__bare_dollar;
	v->a[27681] = state(361);
	v->a[27682] = 1;
	v->a[27683] = aux_sym_command_repeat2;
	v->a[27684] = state(932);
	v->a[27685] = 1;
	v->a[27686] = sym_concatenation;
	v->a[27687] = state(1522);
	v->a[27688] = 1;
	v->a[27689] = sym_subshell;
	v->a[27690] = actions(1013);
	v->a[27691] = 2;
	v->a[27692] = sym_raw_string;
	v->a[27693] = sym_word;
	v->a[27694] = state(800);
	v->a[27695] = 6;
	v->a[27696] = sym_arithmetic_expansion;
	v->a[27697] = sym_string;
	v->a[27698] = sym_number;
	v->a[27699] = sym_simple_expansion;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
