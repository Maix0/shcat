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
	v->a[27600] = sym_number;
	v->a[27601] = sym_word;
	v->a[27602] = state(632);
	v->a[27603] = 5;
	v->a[27604] = sym_arithmetic_expansion;
	v->a[27605] = sym_string;
	v->a[27606] = sym_simple_expansion;
	v->a[27607] = sym_expansion;
	v->a[27608] = sym_command_substitution;
	v->a[27609] = actions(618);
	v->a[27610] = 13;
	v->a[27611] = anon_sym_PIPE;
	v->a[27612] = anon_sym_AMP_AMP;
	v->a[27613] = anon_sym_PIPE_PIPE;
	v->a[27614] = anon_sym_LT;
	v->a[27615] = anon_sym_GT;
	v->a[27616] = anon_sym_GT_GT;
	v->a[27617] = anon_sym_LT_AMP;
	v->a[27618] = anon_sym_GT_AMP;
	v->a[27619] = anon_sym_GT_PIPE;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_LT_GT;
	v->a[27621] = anon_sym_LT_LT;
	v->a[27622] = anon_sym_LT_LT_DASH;
	v->a[27623] = aux_sym_heredoc_redirect_token1;
	v->a[27624] = 6;
	v->a[27625] = actions(3);
	v->a[27626] = 1;
	v->a[27627] = sym_comment;
	v->a[27628] = actions(971);
	v->a[27629] = 1;
	v->a[27630] = aux_sym_concatenation_token1;
	v->a[27631] = actions(973);
	v->a[27632] = 1;
	v->a[27633] = sym__concat;
	v->a[27634] = actions(1077);
	v->a[27635] = 1;
	v->a[27636] = sym__bare_dollar;
	v->a[27637] = state(334);
	v->a[27638] = 1;
	v->a[27639] = aux_sym_concatenation_repeat1;
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = actions(1079);
	v->a[27641] = 25;
	v->a[27642] = anon_sym_esac;
	v->a[27643] = anon_sym_PIPE;
	v->a[27644] = anon_sym_SEMI_SEMI;
	v->a[27645] = anon_sym_AMP_AMP;
	v->a[27646] = anon_sym_PIPE_PIPE;
	v->a[27647] = anon_sym_LT;
	v->a[27648] = anon_sym_GT;
	v->a[27649] = anon_sym_GT_GT;
	v->a[27650] = anon_sym_LT_AMP;
	v->a[27651] = anon_sym_GT_AMP;
	v->a[27652] = anon_sym_GT_PIPE;
	v->a[27653] = anon_sym_LT_GT;
	v->a[27654] = anon_sym_LT_LT;
	v->a[27655] = anon_sym_LT_LT_DASH;
	v->a[27656] = aux_sym_heredoc_redirect_token1;
	v->a[27657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27658] = anon_sym_DOLLAR;
	v->a[27659] = anon_sym_DQUOTE;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = sym_raw_string;
	v->a[27661] = sym_number;
	v->a[27662] = anon_sym_DOLLAR_LBRACE;
	v->a[27663] = anon_sym_DOLLAR_LPAREN;
	v->a[27664] = anon_sym_BQUOTE;
	v->a[27665] = sym_word;
	v->a[27666] = anon_sym_SEMI;
	v->a[27667] = 6;
	v->a[27668] = actions(3);
	v->a[27669] = 1;
	v->a[27670] = sym_comment;
	v->a[27671] = actions(1011);
	v->a[27672] = 1;
	v->a[27673] = sym__bare_dollar;
	v->a[27674] = actions(1137);
	v->a[27675] = 1;
	v->a[27676] = aux_sym_concatenation_token1;
	v->a[27677] = actions(1140);
	v->a[27678] = 1;
	v->a[27679] = sym__concat;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = state(358);
	v->a[27681] = 1;
	v->a[27682] = aux_sym_concatenation_repeat1;
	v->a[27683] = actions(1003);
	v->a[27684] = 25;
	v->a[27685] = anon_sym_PIPE;
	v->a[27686] = anon_sym_RPAREN;
	v->a[27687] = anon_sym_SEMI_SEMI;
	v->a[27688] = anon_sym_AMP_AMP;
	v->a[27689] = anon_sym_PIPE_PIPE;
	v->a[27690] = anon_sym_LT;
	v->a[27691] = anon_sym_GT;
	v->a[27692] = anon_sym_GT_GT;
	v->a[27693] = anon_sym_LT_AMP;
	v->a[27694] = anon_sym_GT_AMP;
	v->a[27695] = anon_sym_GT_PIPE;
	v->a[27696] = anon_sym_LT_GT;
	v->a[27697] = anon_sym_LT_LT;
	v->a[27698] = anon_sym_LT_LT_DASH;
	v->a[27699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
