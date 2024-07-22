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
	v->a[27600] = anon_sym_GT_AMP;
	v->a[27601] = anon_sym_GT_PIPE;
	v->a[27602] = anon_sym_LT_GT;
	v->a[27603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27604] = anon_sym_DOLLAR;
	v->a[27605] = anon_sym_DQUOTE;
	v->a[27606] = sym_raw_string;
	v->a[27607] = sym_number;
	v->a[27608] = anon_sym_DOLLAR_LBRACE;
	v->a[27609] = anon_sym_DOLLAR_LPAREN;
	v->a[27610] = anon_sym_BQUOTE;
	v->a[27611] = sym_word;
	v->a[27612] = 12;
	v->a[27613] = actions(3);
	v->a[27614] = 1;
	v->a[27615] = sym_comment;
	v->a[27616] = actions(529);
	v->a[27617] = 1;
	v->a[27618] = sym_file_descriptor;
	v->a[27619] = actions(962);
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = 1;
	v->a[27621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27622] = actions(964);
	v->a[27623] = 1;
	v->a[27624] = anon_sym_DOLLAR;
	v->a[27625] = actions(966);
	v->a[27626] = 1;
	v->a[27627] = anon_sym_DQUOTE;
	v->a[27628] = actions(968);
	v->a[27629] = 1;
	v->a[27630] = anon_sym_DOLLAR_LBRACE;
	v->a[27631] = actions(970);
	v->a[27632] = 1;
	v->a[27633] = anon_sym_DOLLAR_LPAREN;
	v->a[27634] = actions(972);
	v->a[27635] = 1;
	v->a[27636] = anon_sym_BQUOTE;
	v->a[27637] = state(332);
	v->a[27638] = 2;
	v->a[27639] = sym_concatenation;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = aux_sym_for_statement_repeat1;
	v->a[27641] = actions(1033);
	v->a[27642] = 3;
	v->a[27643] = sym_raw_string;
	v->a[27644] = sym_number;
	v->a[27645] = sym_word;
	v->a[27646] = state(623);
	v->a[27647] = 5;
	v->a[27648] = sym_arithmetic_expansion;
	v->a[27649] = sym_string;
	v->a[27650] = sym_simple_expansion;
	v->a[27651] = sym_expansion;
	v->a[27652] = sym_command_substitution;
	v->a[27653] = actions(531);
	v->a[27654] = 15;
	v->a[27655] = anon_sym_PIPE;
	v->a[27656] = anon_sym_SEMI_SEMI;
	v->a[27657] = anon_sym_AMP_AMP;
	v->a[27658] = anon_sym_PIPE_PIPE;
	v->a[27659] = anon_sym_LT;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = anon_sym_GT;
	v->a[27661] = anon_sym_GT_GT;
	v->a[27662] = anon_sym_LT_AMP;
	v->a[27663] = anon_sym_GT_AMP;
	v->a[27664] = anon_sym_GT_PIPE;
	v->a[27665] = anon_sym_LT_GT;
	v->a[27666] = anon_sym_LT_LT;
	v->a[27667] = anon_sym_LT_LT_DASH;
	v->a[27668] = aux_sym_heredoc_redirect_token1;
	v->a[27669] = anon_sym_SEMI;
	v->a[27670] = 16;
	v->a[27671] = actions(3);
	v->a[27672] = 1;
	v->a[27673] = sym_comment;
	v->a[27674] = actions(321);
	v->a[27675] = 1;
	v->a[27676] = anon_sym_LPAREN;
	v->a[27677] = actions(473);
	v->a[27678] = 1;
	v->a[27679] = sym_file_descriptor;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = actions(1037);
	v->a[27681] = 1;
	v->a[27682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27683] = actions(1039);
	v->a[27684] = 1;
	v->a[27685] = anon_sym_DOLLAR;
	v->a[27686] = actions(1041);
	v->a[27687] = 1;
	v->a[27688] = anon_sym_DQUOTE;
	v->a[27689] = actions(1043);
	v->a[27690] = 1;
	v->a[27691] = anon_sym_DOLLAR_LBRACE;
	v->a[27692] = actions(1045);
	v->a[27693] = 1;
	v->a[27694] = anon_sym_DOLLAR_LPAREN;
	v->a[27695] = actions(1047);
	v->a[27696] = 1;
	v->a[27697] = anon_sym_BQUOTE;
	v->a[27698] = actions(1049);
	v->a[27699] = 1;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
