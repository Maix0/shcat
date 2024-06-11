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
	v->a[27600] = actions(999);
	v->a[27601] = 29;
	v->a[27602] = anon_sym_LPAREN;
	v->a[27603] = anon_sym_PIPE;
	v->a[27604] = anon_sym_SEMI_SEMI;
	v->a[27605] = anon_sym_AMP_AMP;
	v->a[27606] = anon_sym_PIPE_PIPE;
	v->a[27607] = anon_sym_LT;
	v->a[27608] = anon_sym_GT;
	v->a[27609] = anon_sym_GT_GT;
	v->a[27610] = anon_sym_AMP_GT;
	v->a[27611] = anon_sym_AMP_GT_GT;
	v->a[27612] = anon_sym_LT_AMP;
	v->a[27613] = anon_sym_GT_AMP;
	v->a[27614] = anon_sym_GT_PIPE;
	v->a[27615] = anon_sym_LT_AMP_DASH;
	v->a[27616] = anon_sym_GT_AMP_DASH;
	v->a[27617] = anon_sym_LT_LT;
	v->a[27618] = anon_sym_LT_LT_DASH;
	v->a[27619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27621] = anon_sym_AMP;
	v->a[27622] = anon_sym_DOLLAR;
	v->a[27623] = anon_sym_DQUOTE;
	v->a[27624] = sym_raw_string;
	v->a[27625] = sym_number;
	v->a[27626] = anon_sym_DOLLAR_LBRACE;
	v->a[27627] = anon_sym_DOLLAR_LPAREN;
	v->a[27628] = anon_sym_BQUOTE;
	v->a[27629] = sym_word;
	v->a[27630] = anon_sym_SEMI;
	v->a[27631] = 6;
	v->a[27632] = actions(3);
	v->a[27633] = 1;
	v->a[27634] = sym_comment;
	v->a[27635] = actions(989);
	v->a[27636] = 1;
	v->a[27637] = aux_sym_concatenation_token1;
	v->a[27638] = actions(993);
	v->a[27639] = 1;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = sym__concat;
	v->a[27641] = state(296);
	v->a[27642] = 1;
	v->a[27643] = aux_sym_concatenation_repeat1;
	v->a[27644] = actions(991);
	v->a[27645] = 2;
	v->a[27646] = sym_file_descriptor;
	v->a[27647] = sym__bare_dollar;
	v->a[27648] = actions(984);
	v->a[27649] = 30;
	v->a[27650] = anon_sym_LPAREN;
	v->a[27651] = anon_sym_PIPE;
	v->a[27652] = anon_sym_RPAREN;
	v->a[27653] = anon_sym_SEMI_SEMI;
	v->a[27654] = anon_sym_AMP_AMP;
	v->a[27655] = anon_sym_PIPE_PIPE;
	v->a[27656] = anon_sym_LT;
	v->a[27657] = anon_sym_GT;
	v->a[27658] = anon_sym_GT_GT;
	v->a[27659] = anon_sym_AMP_GT;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = anon_sym_AMP_GT_GT;
	v->a[27661] = anon_sym_LT_AMP;
	v->a[27662] = anon_sym_GT_AMP;
	v->a[27663] = anon_sym_GT_PIPE;
	v->a[27664] = anon_sym_LT_AMP_DASH;
	v->a[27665] = anon_sym_GT_AMP_DASH;
	v->a[27666] = anon_sym_LT_LT;
	v->a[27667] = anon_sym_LT_LT_DASH;
	v->a[27668] = aux_sym_heredoc_redirect_token1;
	v->a[27669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27670] = anon_sym_AMP;
	v->a[27671] = anon_sym_DOLLAR;
	v->a[27672] = anon_sym_DQUOTE;
	v->a[27673] = sym_raw_string;
	v->a[27674] = sym_number;
	v->a[27675] = anon_sym_DOLLAR_LBRACE;
	v->a[27676] = anon_sym_DOLLAR_LPAREN;
	v->a[27677] = anon_sym_BQUOTE;
	v->a[27678] = sym_word;
	v->a[27679] = anon_sym_SEMI;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = 8;
	v->a[27681] = actions(3);
	v->a[27682] = 1;
	v->a[27683] = sym_comment;
	v->a[27684] = actions(807);
	v->a[27685] = 1;
	v->a[27686] = anon_sym_PIPE;
	v->a[27687] = actions(811);
	v->a[27688] = 1;
	v->a[27689] = sym_file_descriptor;
	v->a[27690] = actions(1034);
	v->a[27691] = 1;
	v->a[27692] = sym_variable_name;
	v->a[27693] = state(1199);
	v->a[27694] = 2;
	v->a[27695] = sym_variable_assignment;
	v->a[27696] = aux_sym_variable_assignments_repeat1;
	v->a[27697] = state(1297);
	v->a[27698] = 3;
	v->a[27699] = sym_file_redirect;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
