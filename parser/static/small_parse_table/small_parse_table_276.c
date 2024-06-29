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
	v->a[27600] = sym__bare_dollar;
	v->a[27601] = ts_builtin_sym_end;
	v->a[27602] = actions(993);
	v->a[27603] = 28;
	v->a[27604] = anon_sym_PIPE;
	v->a[27605] = anon_sym_SEMI_SEMI;
	v->a[27606] = anon_sym_AMP_AMP;
	v->a[27607] = anon_sym_PIPE_PIPE;
	v->a[27608] = anon_sym_LT;
	v->a[27609] = anon_sym_GT;
	v->a[27610] = anon_sym_GT_GT;
	v->a[27611] = anon_sym_AMP_GT;
	v->a[27612] = anon_sym_AMP_GT_GT;
	v->a[27613] = anon_sym_LT_AMP;
	v->a[27614] = anon_sym_GT_AMP;
	v->a[27615] = anon_sym_GT_PIPE;
	v->a[27616] = anon_sym_LT_AMP_DASH;
	v->a[27617] = anon_sym_GT_AMP_DASH;
	v->a[27618] = anon_sym_LT_LT;
	v->a[27619] = anon_sym_LT_LT_DASH;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = aux_sym_heredoc_redirect_token1;
	v->a[27621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27622] = anon_sym_AMP;
	v->a[27623] = anon_sym_DOLLAR;
	v->a[27624] = anon_sym_DQUOTE;
	v->a[27625] = sym_raw_string;
	v->a[27626] = sym_number;
	v->a[27627] = anon_sym_DOLLAR_LBRACE;
	v->a[27628] = anon_sym_DOLLAR_LPAREN;
	v->a[27629] = anon_sym_BQUOTE;
	v->a[27630] = sym_word;
	v->a[27631] = anon_sym_SEMI;
	v->a[27632] = 6;
	v->a[27633] = actions(3);
	v->a[27634] = 1;
	v->a[27635] = sym_comment;
	v->a[27636] = actions(1013);
	v->a[27637] = 1;
	v->a[27638] = aux_sym_concatenation_token1;
	v->a[27639] = actions(1016);
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = 1;
	v->a[27641] = sym__concat;
	v->a[27642] = state(293);
	v->a[27643] = 1;
	v->a[27644] = aux_sym_concatenation_repeat1;
	v->a[27645] = actions(988);
	v->a[27646] = 2;
	v->a[27647] = sym_file_descriptor;
	v->a[27648] = sym__bare_dollar;
	v->a[27649] = actions(983);
	v->a[27650] = 30;
	v->a[27651] = anon_sym_LPAREN;
	v->a[27652] = anon_sym_PIPE;
	v->a[27653] = anon_sym_RPAREN;
	v->a[27654] = anon_sym_SEMI_SEMI;
	v->a[27655] = anon_sym_AMP_AMP;
	v->a[27656] = anon_sym_PIPE_PIPE;
	v->a[27657] = anon_sym_LT;
	v->a[27658] = anon_sym_GT;
	v->a[27659] = anon_sym_GT_GT;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = anon_sym_AMP_GT;
	v->a[27661] = anon_sym_AMP_GT_GT;
	v->a[27662] = anon_sym_LT_AMP;
	v->a[27663] = anon_sym_GT_AMP;
	v->a[27664] = anon_sym_GT_PIPE;
	v->a[27665] = anon_sym_LT_AMP_DASH;
	v->a[27666] = anon_sym_GT_AMP_DASH;
	v->a[27667] = anon_sym_LT_LT;
	v->a[27668] = anon_sym_LT_LT_DASH;
	v->a[27669] = aux_sym_heredoc_redirect_token1;
	v->a[27670] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27671] = anon_sym_AMP;
	v->a[27672] = anon_sym_DOLLAR;
	v->a[27673] = anon_sym_DQUOTE;
	v->a[27674] = sym_raw_string;
	v->a[27675] = sym_number;
	v->a[27676] = anon_sym_DOLLAR_LBRACE;
	v->a[27677] = anon_sym_DOLLAR_LPAREN;
	v->a[27678] = anon_sym_BQUOTE;
	v->a[27679] = sym_word;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = anon_sym_SEMI;
	v->a[27681] = 6;
	v->a[27682] = actions(3);
	v->a[27683] = 1;
	v->a[27684] = sym_comment;
	v->a[27685] = actions(1019);
	v->a[27686] = 1;
	v->a[27687] = aux_sym_concatenation_token1;
	v->a[27688] = actions(1022);
	v->a[27689] = 1;
	v->a[27690] = sym__concat;
	v->a[27691] = state(294);
	v->a[27692] = 1;
	v->a[27693] = aux_sym_concatenation_repeat1;
	v->a[27694] = actions(988);
	v->a[27695] = 3;
	v->a[27696] = sym_file_descriptor;
	v->a[27697] = sym__bare_dollar;
	v->a[27698] = ts_builtin_sym_end;
	v->a[27699] = actions(983);
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
