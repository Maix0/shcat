/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = anon_sym_PERCENT_EQ;
	v->a[25601] = anon_sym_LT_LT_EQ;
	v->a[25602] = anon_sym_GT_GT_EQ;
	v->a[25603] = anon_sym_AMP_EQ;
	v->a[25604] = anon_sym_CARET_EQ;
	v->a[25605] = anon_sym_PIPE_EQ;
	v->a[25606] = 16;
	v->a[25607] = actions(3);
	v->a[25608] = 1;
	v->a[25609] = sym_comment;
	v->a[25610] = actions(17);
	v->a[25611] = 1;
	v->a[25612] = anon_sym_LPAREN;
	v->a[25613] = actions(453);
	v->a[25614] = 1;
	v->a[25615] = sym_file_descriptor;
	v->a[25616] = actions(463);
	v->a[25617] = 1;
	v->a[25618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25619] = actions(465);
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = 1;
	v->a[25621] = anon_sym_DOLLAR;
	v->a[25622] = actions(467);
	v->a[25623] = 1;
	v->a[25624] = anon_sym_DQUOTE;
	v->a[25625] = actions(469);
	v->a[25626] = 1;
	v->a[25627] = anon_sym_DOLLAR_LBRACE;
	v->a[25628] = actions(471);
	v->a[25629] = 1;
	v->a[25630] = anon_sym_DOLLAR_LPAREN;
	v->a[25631] = actions(473);
	v->a[25632] = 1;
	v->a[25633] = anon_sym_BQUOTE;
	v->a[25634] = actions(475);
	v->a[25635] = 1;
	v->a[25636] = sym__bare_dollar;
	v->a[25637] = state(438);
	v->a[25638] = 1;
	v->a[25639] = aux_sym_command_repeat2;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = state(662);
	v->a[25641] = 1;
	v->a[25642] = sym_concatenation;
	v->a[25643] = state(1169);
	v->a[25644] = 1;
	v->a[25645] = sym_subshell;
	v->a[25646] = actions(963);
	v->a[25647] = 3;
	v->a[25648] = sym_raw_string;
	v->a[25649] = sym_number;
	v->a[25650] = sym_word;
	v->a[25651] = state(713);
	v->a[25652] = 5;
	v->a[25653] = sym_arithmetic_expansion;
	v->a[25654] = sym_string;
	v->a[25655] = sym_simple_expansion;
	v->a[25656] = sym_expansion;
	v->a[25657] = sym_command_substitution;
	v->a[25658] = actions(439);
	v->a[25659] = 13;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = anon_sym_PIPE;
	v->a[25661] = anon_sym_AMP_AMP;
	v->a[25662] = anon_sym_PIPE_PIPE;
	v->a[25663] = anon_sym_LT;
	v->a[25664] = anon_sym_GT;
	v->a[25665] = anon_sym_GT_GT;
	v->a[25666] = anon_sym_LT_AMP;
	v->a[25667] = anon_sym_GT_AMP;
	v->a[25668] = anon_sym_GT_PIPE;
	v->a[25669] = anon_sym_LT_GT;
	v->a[25670] = anon_sym_LT_LT;
	v->a[25671] = anon_sym_LT_LT_DASH;
	v->a[25672] = aux_sym_heredoc_redirect_token1;
	v->a[25673] = 3;
	v->a[25674] = actions(680);
	v->a[25675] = 1;
	v->a[25676] = sym_comment;
	v->a[25677] = actions(885);
	v->a[25678] = 13;
	v->a[25679] = anon_sym_PIPE;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_EQ;
	v->a[25681] = anon_sym_LT;
	v->a[25682] = anon_sym_GT;
	v->a[25683] = anon_sym_GT_GT;
	v->a[25684] = anon_sym_LT_LT;
	v->a[25685] = anon_sym_CARET;
	v->a[25686] = anon_sym_AMP;
	v->a[25687] = anon_sym_PLUS;
	v->a[25688] = anon_sym_DASH;
	v->a[25689] = anon_sym_STAR;
	v->a[25690] = anon_sym_SLASH;
	v->a[25691] = anon_sym_PERCENT;
	v->a[25692] = actions(887);
	v->a[25693] = 20;
	v->a[25694] = anon_sym_RPAREN;
	v->a[25695] = anon_sym_AMP_AMP;
	v->a[25696] = anon_sym_PIPE_PIPE;
	v->a[25697] = anon_sym_PLUS_EQ;
	v->a[25698] = anon_sym_DASH_EQ;
	v->a[25699] = anon_sym_STAR_EQ;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
