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
	v->a[27600] = actions(706);
	v->a[27601] = 2;
	v->a[27602] = anon_sym_EQ_EQ;
	v->a[27603] = anon_sym_BANG_EQ;
	v->a[27604] = actions(708);
	v->a[27605] = 2;
	v->a[27606] = anon_sym_LT_EQ;
	v->a[27607] = anon_sym_GT_EQ;
	v->a[27608] = actions(688);
	v->a[27609] = 3;
	v->a[27610] = anon_sym_STAR;
	v->a[27611] = anon_sym_SLASH;
	v->a[27612] = anon_sym_PERCENT;
	v->a[27613] = actions(953);
	v->a[27614] = 10;
	v->a[27615] = anon_sym_PLUS_EQ;
	v->a[27616] = anon_sym_DASH_EQ;
	v->a[27617] = anon_sym_STAR_EQ;
	v->a[27618] = anon_sym_SLASH_EQ;
	v->a[27619] = anon_sym_PERCENT_EQ;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_LT_LT_EQ;
	v->a[27621] = anon_sym_GT_GT_EQ;
	v->a[27622] = anon_sym_AMP_EQ;
	v->a[27623] = anon_sym_CARET_EQ;
	v->a[27624] = anon_sym_PIPE_EQ;
	v->a[27625] = 11;
	v->a[27626] = actions(3);
	v->a[27627] = 1;
	v->a[27628] = sym_comment;
	v->a[27629] = actions(736);
	v->a[27630] = 1;
	v->a[27631] = anon_sym_PIPE;
	v->a[27632] = actions(746);
	v->a[27633] = 1;
	v->a[27634] = sym_file_descriptor;
	v->a[27635] = actions(957);
	v->a[27636] = 1;
	v->a[27637] = sym_variable_name;
	v->a[27638] = state(745);
	v->a[27639] = 1;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = sym_terminator;
	v->a[27641] = actions(744);
	v->a[27642] = 2;
	v->a[27643] = anon_sym_LT_LT;
	v->a[27644] = anon_sym_LT_LT_DASH;
	v->a[27645] = actions(955);
	v->a[27646] = 2;
	v->a[27647] = anon_sym_AMP_AMP;
	v->a[27648] = anon_sym_PIPE_PIPE;
	v->a[27649] = state(1134);
	v->a[27650] = 2;
	v->a[27651] = sym_variable_assignment;
	v->a[27652] = aux_sym__variable_assignments_repeat1;
	v->a[27653] = state(1194);
	v->a[27654] = 3;
	v->a[27655] = sym_file_redirect;
	v->a[27656] = sym_heredoc_redirect;
	v->a[27657] = aux_sym_redirected_statement_repeat1;
	v->a[27658] = actions(1013);
	v->a[27659] = 4;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = anon_sym_SEMI_SEMI;
	v->a[27661] = aux_sym_heredoc_redirect_token1;
	v->a[27662] = anon_sym_AMP;
	v->a[27663] = anon_sym_SEMI;
	v->a[27664] = actions(734);
	v->a[27665] = 16;
	v->a[27666] = anon_sym_LT;
	v->a[27667] = anon_sym_GT;
	v->a[27668] = anon_sym_GT_GT;
	v->a[27669] = anon_sym_LT_AMP;
	v->a[27670] = anon_sym_GT_AMP;
	v->a[27671] = anon_sym_GT_PIPE;
	v->a[27672] = anon_sym_LT_GT;
	v->a[27673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27674] = anon_sym_DOLLAR;
	v->a[27675] = anon_sym_DQUOTE;
	v->a[27676] = sym_raw_string;
	v->a[27677] = sym_number;
	v->a[27678] = anon_sym_DOLLAR_LBRACE;
	v->a[27679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = anon_sym_BQUOTE;
	v->a[27681] = sym_word;
	v->a[27682] = 17;
	v->a[27683] = actions(664);
	v->a[27684] = 1;
	v->a[27685] = sym_comment;
	v->a[27686] = actions(702);
	v->a[27687] = 1;
	v->a[27688] = anon_sym_CARET;
	v->a[27689] = actions(704);
	v->a[27690] = 1;
	v->a[27691] = anon_sym_AMP;
	v->a[27692] = actions(710);
	v->a[27693] = 1;
	v->a[27694] = anon_sym_PIPE;
	v->a[27695] = actions(712);
	v->a[27696] = 1;
	v->a[27697] = anon_sym_AMP_AMP;
	v->a[27698] = actions(714);
	v->a[27699] = 1;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
