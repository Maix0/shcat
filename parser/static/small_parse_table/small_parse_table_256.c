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
	v->a[25600] = actions(483);
	v->a[25601] = 1;
	v->a[25602] = anon_sym_DOLLAR_LBRACE;
	v->a[25603] = actions(485);
	v->a[25604] = 1;
	v->a[25605] = anon_sym_DOLLAR_LPAREN;
	v->a[25606] = actions(487);
	v->a[25607] = 1;
	v->a[25608] = anon_sym_BQUOTE;
	v->a[25609] = actions(489);
	v->a[25610] = 1;
	v->a[25611] = sym__bare_dollar;
	v->a[25612] = actions(491);
	v->a[25613] = 1;
	v->a[25614] = sym_file_descriptor;
	v->a[25615] = state(306);
	v->a[25616] = 1;
	v->a[25617] = aux_sym_command_repeat2;
	v->a[25618] = state(712);
	v->a[25619] = 1;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = sym_concatenation;
	v->a[25621] = state(1263);
	v->a[25622] = 1;
	v->a[25623] = sym_subshell;
	v->a[25624] = actions(891);
	v->a[25625] = 3;
	v->a[25626] = sym_raw_string;
	v->a[25627] = sym_number;
	v->a[25628] = sym_word;
	v->a[25629] = state(796);
	v->a[25630] = 5;
	v->a[25631] = sym_arithmetic_expansion;
	v->a[25632] = sym_string;
	v->a[25633] = sym_simple_expansion;
	v->a[25634] = sym_expansion;
	v->a[25635] = sym_command_substitution;
	v->a[25636] = actions(493);
	v->a[25637] = 16;
	v->a[25638] = anon_sym_PIPE;
	v->a[25639] = anon_sym_AMP_AMP;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = anon_sym_PIPE_PIPE;
	v->a[25641] = anon_sym_LT;
	v->a[25642] = anon_sym_GT;
	v->a[25643] = anon_sym_GT_GT;
	v->a[25644] = anon_sym_AMP_GT;
	v->a[25645] = anon_sym_AMP_GT_GT;
	v->a[25646] = anon_sym_LT_AMP;
	v->a[25647] = anon_sym_GT_AMP;
	v->a[25648] = anon_sym_GT_PIPE;
	v->a[25649] = anon_sym_LT_AMP_DASH;
	v->a[25650] = anon_sym_GT_AMP_DASH;
	v->a[25651] = anon_sym_LT_LT;
	v->a[25652] = anon_sym_LT_LT_DASH;
	v->a[25653] = aux_sym_heredoc_redirect_token1;
	v->a[25654] = 12;
	v->a[25655] = actions(3);
	v->a[25656] = 1;
	v->a[25657] = sym_comment;
	v->a[25658] = actions(760);
	v->a[25659] = 1;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = sym_file_descriptor;
	v->a[25661] = actions(904);
	v->a[25662] = 1;
	v->a[25663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25664] = actions(906);
	v->a[25665] = 1;
	v->a[25666] = anon_sym_DOLLAR;
	v->a[25667] = actions(908);
	v->a[25668] = 1;
	v->a[25669] = anon_sym_DQUOTE;
	v->a[25670] = actions(910);
	v->a[25671] = 1;
	v->a[25672] = anon_sym_DOLLAR_LBRACE;
	v->a[25673] = actions(912);
	v->a[25674] = 1;
	v->a[25675] = anon_sym_DOLLAR_LPAREN;
	v->a[25676] = actions(914);
	v->a[25677] = 1;
	v->a[25678] = anon_sym_BQUOTE;
	v->a[25679] = state(1197);
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = 1;
	v->a[25681] = sym_concatenation;
	v->a[25682] = actions(916);
	v->a[25683] = 3;
	v->a[25684] = sym_raw_string;
	v->a[25685] = sym_number;
	v->a[25686] = sym_word;
	v->a[25687] = state(1111);
	v->a[25688] = 5;
	v->a[25689] = sym_arithmetic_expansion;
	v->a[25690] = sym_string;
	v->a[25691] = sym_simple_expansion;
	v->a[25692] = sym_expansion;
	v->a[25693] = sym_command_substitution;
	v->a[25694] = actions(758);
	v->a[25695] = 20;
	v->a[25696] = anon_sym_PIPE;
	v->a[25697] = anon_sym_RPAREN;
	v->a[25698] = anon_sym_SEMI_SEMI;
	v->a[25699] = anon_sym_AMP_AMP;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
