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
	v->a[25600] = sym_number;
	v->a[25601] = sym_simple_expansion;
	v->a[25602] = sym_expansion;
	v->a[25603] = sym_command_substitution;
	v->a[25604] = actions(748);
	v->a[25605] = 20;
	v->a[25606] = anon_sym_PIPE;
	v->a[25607] = anon_sym_RPAREN;
	v->a[25608] = anon_sym_SEMI_SEMI;
	v->a[25609] = anon_sym_AMP_AMP;
	v->a[25610] = anon_sym_PIPE_PIPE;
	v->a[25611] = anon_sym_LT;
	v->a[25612] = anon_sym_GT;
	v->a[25613] = anon_sym_GT_GT;
	v->a[25614] = anon_sym_AMP_GT;
	v->a[25615] = anon_sym_AMP_GT_GT;
	v->a[25616] = anon_sym_LT_AMP;
	v->a[25617] = anon_sym_GT_AMP;
	v->a[25618] = anon_sym_GT_PIPE;
	v->a[25619] = anon_sym_LT_AMP_DASH;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = anon_sym_GT_AMP_DASH;
	v->a[25621] = anon_sym_LT_LT;
	v->a[25622] = anon_sym_LT_LT_DASH;
	v->a[25623] = aux_sym_heredoc_redirect_token1;
	v->a[25624] = anon_sym_AMP;
	v->a[25625] = anon_sym_SEMI;
	v->a[25626] = 14;
	v->a[25627] = actions(3);
	v->a[25628] = 1;
	v->a[25629] = sym_comment;
	v->a[25630] = actions(555);
	v->a[25631] = 1;
	v->a[25632] = sym_file_descriptor;
	v->a[25633] = actions(761);
	v->a[25634] = 1;
	v->a[25635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25636] = actions(763);
	v->a[25637] = 1;
	v->a[25638] = anon_sym_DOLLAR;
	v->a[25639] = actions(765);
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = 1;
	v->a[25641] = anon_sym_DQUOTE;
	v->a[25642] = actions(767);
	v->a[25643] = 1;
	v->a[25644] = aux_sym_number_token1;
	v->a[25645] = actions(769);
	v->a[25646] = 1;
	v->a[25647] = aux_sym_number_token2;
	v->a[25648] = actions(771);
	v->a[25649] = 1;
	v->a[25650] = anon_sym_DOLLAR_LBRACE;
	v->a[25651] = actions(773);
	v->a[25652] = 1;
	v->a[25653] = anon_sym_DOLLAR_LPAREN;
	v->a[25654] = actions(775);
	v->a[25655] = 1;
	v->a[25656] = anon_sym_BQUOTE;
	v->a[25657] = actions(955);
	v->a[25658] = 2;
	v->a[25659] = sym_raw_string;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = sym_word;
	v->a[25661] = state(245);
	v->a[25662] = 2;
	v->a[25663] = sym_concatenation;
	v->a[25664] = aux_sym_for_statement_repeat1;
	v->a[25665] = state(566);
	v->a[25666] = 6;
	v->a[25667] = sym_arithmetic_expansion;
	v->a[25668] = sym_string;
	v->a[25669] = sym_number;
	v->a[25670] = sym_simple_expansion;
	v->a[25671] = sym_expansion;
	v->a[25672] = sym_command_substitution;
	v->a[25673] = actions(553);
	v->a[25674] = 19;
	v->a[25675] = anon_sym_PIPE;
	v->a[25676] = anon_sym_SEMI_SEMI;
	v->a[25677] = anon_sym_AMP_AMP;
	v->a[25678] = anon_sym_PIPE_PIPE;
	v->a[25679] = anon_sym_LT;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_GT;
	v->a[25681] = anon_sym_GT_GT;
	v->a[25682] = anon_sym_AMP_GT;
	v->a[25683] = anon_sym_AMP_GT_GT;
	v->a[25684] = anon_sym_LT_AMP;
	v->a[25685] = anon_sym_GT_AMP;
	v->a[25686] = anon_sym_GT_PIPE;
	v->a[25687] = anon_sym_LT_AMP_DASH;
	v->a[25688] = anon_sym_GT_AMP_DASH;
	v->a[25689] = anon_sym_LT_LT;
	v->a[25690] = anon_sym_LT_LT_DASH;
	v->a[25691] = aux_sym_heredoc_redirect_token1;
	v->a[25692] = anon_sym_AMP;
	v->a[25693] = anon_sym_SEMI;
	v->a[25694] = 14;
	v->a[25695] = actions(3);
	v->a[25696] = 1;
	v->a[25697] = sym_comment;
	v->a[25698] = actions(905);
	v->a[25699] = 1;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
