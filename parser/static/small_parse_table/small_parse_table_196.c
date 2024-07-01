/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = anon_sym_LT_LT_DASH;
	v->a[19601] = aux_sym_heredoc_redirect_token1;
	v->a[19602] = anon_sym_AMP;
	v->a[19603] = anon_sym_SEMI;
	v->a[19604] = 15;
	v->a[19605] = actions(3);
	v->a[19606] = 1;
	v->a[19607] = sym_comment;
	v->a[19608] = actions(17);
	v->a[19609] = 1;
	v->a[19610] = anon_sym_LPAREN;
	v->a[19611] = actions(459);
	v->a[19612] = 1;
	v->a[19613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19614] = actions(461);
	v->a[19615] = 1;
	v->a[19616] = anon_sym_DOLLAR;
	v->a[19617] = actions(463);
	v->a[19618] = 1;
	v->a[19619] = anon_sym_DQUOTE;
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = actions(465);
	v->a[19621] = 1;
	v->a[19622] = anon_sym_DOLLAR_LBRACE;
	v->a[19623] = actions(467);
	v->a[19624] = 1;
	v->a[19625] = anon_sym_DOLLAR_LPAREN;
	v->a[19626] = actions(471);
	v->a[19627] = 1;
	v->a[19628] = sym__bare_dollar;
	v->a[19629] = actions(473);
	v->a[19630] = 1;
	v->a[19631] = sym_file_descriptor;
	v->a[19632] = state(225);
	v->a[19633] = 1;
	v->a[19634] = aux_sym_command_repeat2;
	v->a[19635] = state(627);
	v->a[19636] = 1;
	v->a[19637] = sym_concatenation;
	v->a[19638] = state(1116);
	v->a[19639] = 1;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = sym_subshell;
	v->a[19641] = actions(493);
	v->a[19642] = 3;
	v->a[19643] = sym_raw_string;
	v->a[19644] = sym_number;
	v->a[19645] = sym_word;
	v->a[19646] = state(469);
	v->a[19647] = 5;
	v->a[19648] = sym_arithmetic_expansion;
	v->a[19649] = sym_string;
	v->a[19650] = sym_simple_expansion;
	v->a[19651] = sym_expansion;
	v->a[19652] = sym_command_substitution;
	v->a[19653] = actions(475);
	v->a[19654] = 17;
	v->a[19655] = anon_sym_PIPE;
	v->a[19656] = anon_sym_SEMI_SEMI;
	v->a[19657] = anon_sym_AMP_AMP;
	v->a[19658] = anon_sym_PIPE_PIPE;
	v->a[19659] = anon_sym_LT;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = anon_sym_GT;
	v->a[19661] = anon_sym_GT_GT;
	v->a[19662] = anon_sym_LT_AMP;
	v->a[19663] = anon_sym_GT_AMP;
	v->a[19664] = anon_sym_GT_PIPE;
	v->a[19665] = anon_sym_LT_GT;
	v->a[19666] = anon_sym_LT_LT;
	v->a[19667] = anon_sym_LT_LT_DASH;
	v->a[19668] = aux_sym_heredoc_redirect_token1;
	v->a[19669] = anon_sym_AMP;
	v->a[19670] = anon_sym_BQUOTE;
	v->a[19671] = anon_sym_SEMI;
	v->a[19672] = 16;
	v->a[19673] = actions(3);
	v->a[19674] = 1;
	v->a[19675] = sym_comment;
	v->a[19676] = actions(17);
	v->a[19677] = 1;
	v->a[19678] = anon_sym_LPAREN;
	v->a[19679] = actions(437);
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = 1;
	v->a[19681] = sym_file_descriptor;
	v->a[19682] = actions(459);
	v->a[19683] = 1;
	v->a[19684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19685] = actions(461);
	v->a[19686] = 1;
	v->a[19687] = anon_sym_DOLLAR;
	v->a[19688] = actions(463);
	v->a[19689] = 1;
	v->a[19690] = anon_sym_DQUOTE;
	v->a[19691] = actions(465);
	v->a[19692] = 1;
	v->a[19693] = anon_sym_DOLLAR_LBRACE;
	v->a[19694] = actions(467);
	v->a[19695] = 1;
	v->a[19696] = anon_sym_DOLLAR_LPAREN;
	v->a[19697] = actions(469);
	v->a[19698] = 1;
	v->a[19699] = anon_sym_BQUOTE;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
