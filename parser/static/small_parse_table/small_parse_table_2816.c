/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2816.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14080(t_small_parse_table_array *v)
{
	v->a[281600] = actions(12701);
	v->a[281601] = 6;
	v->a[281602] = anon_sym_LPAREN;
	v->a[281603] = anon_sym_DOLLAR;
	v->a[281604] = aux_sym_number_token1;
	v->a[281605] = aux_sym_number_token2;
	v->a[281606] = anon_sym_DOLLAR_LPAREN;
	v->a[281607] = sym_word;
	v->a[281608] = actions(12703);
	v->a[281609] = 15;
	v->a[281610] = sym_test_operator;
	v->a[281611] = sym_extglob_pattern;
	v->a[281612] = sym__brace_start;
	v->a[281613] = anon_sym_LPAREN_LPAREN;
	v->a[281614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281615] = anon_sym_DOLLAR_LBRACK;
	v->a[281616] = sym__special_character;
	v->a[281617] = anon_sym_DQUOTE;
	v->a[281618] = sym_raw_string;
	v->a[281619] = sym_ansi_c_string;
	small_parse_table_14081(v);
}

void	small_parse_table_14081(t_small_parse_table_array *v)
{
	v->a[281620] = anon_sym_DOLLAR_LBRACE;
	v->a[281621] = anon_sym_BQUOTE;
	v->a[281622] = anon_sym_DOLLAR_BQUOTE;
	v->a[281623] = anon_sym_LT_LPAREN;
	v->a[281624] = anon_sym_GT_LPAREN;
	v->a[281625] = 6;
	v->a[281626] = actions(3);
	v->a[281627] = 1;
	v->a[281628] = sym_comment;
	v->a[281629] = actions(11651);
	v->a[281630] = 1;
	v->a[281631] = aux_sym_concatenation_token1;
	v->a[281632] = actions(11653);
	v->a[281633] = 1;
	v->a[281634] = sym__concat;
	v->a[281635] = state(5392);
	v->a[281636] = 1;
	v->a[281637] = aux_sym_concatenation_repeat1;
	v->a[281638] = actions(4554);
	v->a[281639] = 2;
	small_parse_table_14082(v);
}

void	small_parse_table_14082(t_small_parse_table_array *v)
{
	v->a[281640] = sym_file_descriptor;
	v->a[281641] = aux_sym_heredoc_redirect_token1;
	v->a[281642] = actions(4552);
	v->a[281643] = 16;
	v->a[281644] = anon_sym_PIPE_PIPE;
	v->a[281645] = anon_sym_AMP_AMP;
	v->a[281646] = anon_sym_PIPE;
	v->a[281647] = anon_sym_LT;
	v->a[281648] = anon_sym_GT;
	v->a[281649] = anon_sym_LT_LT;
	v->a[281650] = anon_sym_GT_GT;
	v->a[281651] = anon_sym_PIPE_AMP;
	v->a[281652] = anon_sym_AMP_GT;
	v->a[281653] = anon_sym_AMP_GT_GT;
	v->a[281654] = anon_sym_LT_AMP;
	v->a[281655] = anon_sym_GT_AMP;
	v->a[281656] = anon_sym_GT_PIPE;
	v->a[281657] = anon_sym_LT_AMP_DASH;
	v->a[281658] = anon_sym_GT_AMP_DASH;
	v->a[281659] = anon_sym_LT_LT_DASH;
	small_parse_table_14083(v);
}

void	small_parse_table_14083(t_small_parse_table_array *v)
{
	v->a[281660] = 6;
	v->a[281661] = actions(3);
	v->a[281662] = 1;
	v->a[281663] = sym_comment;
	v->a[281664] = actions(11651);
	v->a[281665] = 1;
	v->a[281666] = aux_sym_concatenation_token1;
	v->a[281667] = actions(11653);
	v->a[281668] = 1;
	v->a[281669] = sym__concat;
	v->a[281670] = state(5393);
	v->a[281671] = 1;
	v->a[281672] = aux_sym_concatenation_repeat1;
	v->a[281673] = actions(4566);
	v->a[281674] = 2;
	v->a[281675] = sym_file_descriptor;
	v->a[281676] = aux_sym_heredoc_redirect_token1;
	v->a[281677] = actions(4564);
	v->a[281678] = 16;
	v->a[281679] = anon_sym_PIPE_PIPE;
	small_parse_table_14084(v);
}

void	small_parse_table_14084(t_small_parse_table_array *v)
{
	v->a[281680] = anon_sym_AMP_AMP;
	v->a[281681] = anon_sym_PIPE;
	v->a[281682] = anon_sym_LT;
	v->a[281683] = anon_sym_GT;
	v->a[281684] = anon_sym_LT_LT;
	v->a[281685] = anon_sym_GT_GT;
	v->a[281686] = anon_sym_PIPE_AMP;
	v->a[281687] = anon_sym_AMP_GT;
	v->a[281688] = anon_sym_AMP_GT_GT;
	v->a[281689] = anon_sym_LT_AMP;
	v->a[281690] = anon_sym_GT_AMP;
	v->a[281691] = anon_sym_GT_PIPE;
	v->a[281692] = anon_sym_LT_AMP_DASH;
	v->a[281693] = anon_sym_GT_AMP_DASH;
	v->a[281694] = anon_sym_LT_LT_DASH;
	v->a[281695] = 3;
	v->a[281696] = actions(71);
	v->a[281697] = 1;
	v->a[281698] = sym_comment;
	v->a[281699] = actions(1352);
	small_parse_table_14085(v);
}

/* EOF small_parse_table_2816.c */
