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
	v->a[19600] = sym_subshell;
	v->a[19601] = actions(493);
	v->a[19602] = 3;
	v->a[19603] = sym_raw_string;
	v->a[19604] = sym_number;
	v->a[19605] = sym_word;
	v->a[19606] = state(495);
	v->a[19607] = 5;
	v->a[19608] = sym_arithmetic_expansion;
	v->a[19609] = sym_string;
	v->a[19610] = sym_simple_expansion;
	v->a[19611] = sym_expansion;
	v->a[19612] = sym_command_substitution;
	v->a[19613] = actions(403);
	v->a[19614] = 15;
	v->a[19615] = anon_sym_PIPE;
	v->a[19616] = anon_sym_SEMI_SEMI;
	v->a[19617] = anon_sym_AMP_AMP;
	v->a[19618] = anon_sym_PIPE_PIPE;
	v->a[19619] = anon_sym_LT;
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = anon_sym_GT;
	v->a[19621] = anon_sym_GT_GT;
	v->a[19622] = anon_sym_LT_AMP;
	v->a[19623] = anon_sym_GT_AMP;
	v->a[19624] = anon_sym_GT_PIPE;
	v->a[19625] = anon_sym_LT_GT;
	v->a[19626] = anon_sym_LT_LT;
	v->a[19627] = anon_sym_LT_LT_DASH;
	v->a[19628] = aux_sym_heredoc_redirect_token1;
	v->a[19629] = anon_sym_SEMI;
	v->a[19630] = 16;
	v->a[19631] = actions(3);
	v->a[19632] = 1;
	v->a[19633] = sym_comment;
	v->a[19634] = actions(17);
	v->a[19635] = 1;
	v->a[19636] = anon_sym_LPAREN;
	v->a[19637] = actions(405);
	v->a[19638] = 1;
	v->a[19639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = actions(407);
	v->a[19641] = 1;
	v->a[19642] = anon_sym_DOLLAR;
	v->a[19643] = actions(409);
	v->a[19644] = 1;
	v->a[19645] = anon_sym_DQUOTE;
	v->a[19646] = actions(411);
	v->a[19647] = 1;
	v->a[19648] = anon_sym_DOLLAR_LBRACE;
	v->a[19649] = actions(413);
	v->a[19650] = 1;
	v->a[19651] = anon_sym_DOLLAR_LPAREN;
	v->a[19652] = actions(415);
	v->a[19653] = 1;
	v->a[19654] = anon_sym_BQUOTE;
	v->a[19655] = actions(419);
	v->a[19656] = 1;
	v->a[19657] = sym__bare_dollar;
	v->a[19658] = actions(473);
	v->a[19659] = 1;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = sym_file_descriptor;
	v->a[19661] = state(240);
	v->a[19662] = 1;
	v->a[19663] = aux_sym_command_repeat2;
	v->a[19664] = state(674);
	v->a[19665] = 1;
	v->a[19666] = sym_concatenation;
	v->a[19667] = state(1157);
	v->a[19668] = 1;
	v->a[19669] = sym_subshell;
	v->a[19670] = actions(493);
	v->a[19671] = 3;
	v->a[19672] = sym_raw_string;
	v->a[19673] = sym_number;
	v->a[19674] = sym_word;
	v->a[19675] = state(495);
	v->a[19676] = 5;
	v->a[19677] = sym_arithmetic_expansion;
	v->a[19678] = sym_string;
	v->a[19679] = sym_simple_expansion;
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = sym_expansion;
	v->a[19681] = sym_command_substitution;
	v->a[19682] = actions(471);
	v->a[19683] = 15;
	v->a[19684] = anon_sym_PIPE;
	v->a[19685] = anon_sym_SEMI_SEMI;
	v->a[19686] = anon_sym_AMP_AMP;
	v->a[19687] = anon_sym_PIPE_PIPE;
	v->a[19688] = anon_sym_LT;
	v->a[19689] = anon_sym_GT;
	v->a[19690] = anon_sym_GT_GT;
	v->a[19691] = anon_sym_LT_AMP;
	v->a[19692] = anon_sym_GT_AMP;
	v->a[19693] = anon_sym_GT_PIPE;
	v->a[19694] = anon_sym_LT_GT;
	v->a[19695] = anon_sym_LT_LT;
	v->a[19696] = anon_sym_LT_LT_DASH;
	v->a[19697] = aux_sym_heredoc_redirect_token1;
	v->a[19698] = anon_sym_SEMI;
	v->a[19699] = 4;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
