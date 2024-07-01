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
	v->a[25600] = anon_sym_LT_LT_DASH;
	v->a[25601] = aux_sym_heredoc_redirect_token1;
	v->a[25602] = 12;
	v->a[25603] = actions(3);
	v->a[25604] = 1;
	v->a[25605] = sym_comment;
	v->a[25606] = actions(910);
	v->a[25607] = 1;
	v->a[25608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25609] = actions(912);
	v->a[25610] = 1;
	v->a[25611] = anon_sym_DOLLAR;
	v->a[25612] = actions(914);
	v->a[25613] = 1;
	v->a[25614] = anon_sym_DQUOTE;
	v->a[25615] = actions(916);
	v->a[25616] = 1;
	v->a[25617] = anon_sym_DOLLAR_LBRACE;
	v->a[25618] = actions(918);
	v->a[25619] = 1;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = anon_sym_DOLLAR_LPAREN;
	v->a[25621] = actions(920);
	v->a[25622] = 1;
	v->a[25623] = anon_sym_BQUOTE;
	v->a[25624] = state(1276);
	v->a[25625] = 1;
	v->a[25626] = sym_concatenation;
	v->a[25627] = actions(790);
	v->a[25628] = 2;
	v->a[25629] = sym_file_descriptor;
	v->a[25630] = ts_builtin_sym_end;
	v->a[25631] = actions(990);
	v->a[25632] = 3;
	v->a[25633] = sym_raw_string;
	v->a[25634] = sym_number;
	v->a[25635] = sym_word;
	v->a[25636] = state(1124);
	v->a[25637] = 5;
	v->a[25638] = sym_arithmetic_expansion;
	v->a[25639] = sym_string;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = sym_simple_expansion;
	v->a[25641] = sym_expansion;
	v->a[25642] = sym_command_substitution;
	v->a[25643] = actions(788);
	v->a[25644] = 17;
	v->a[25645] = anon_sym_PIPE;
	v->a[25646] = anon_sym_SEMI_SEMI;
	v->a[25647] = anon_sym_AMP_AMP;
	v->a[25648] = anon_sym_PIPE_PIPE;
	v->a[25649] = anon_sym_LT;
	v->a[25650] = anon_sym_GT;
	v->a[25651] = anon_sym_GT_GT;
	v->a[25652] = anon_sym_LT_AMP;
	v->a[25653] = anon_sym_GT_AMP;
	v->a[25654] = anon_sym_GT_PIPE;
	v->a[25655] = anon_sym_LT_AMP_DASH;
	v->a[25656] = anon_sym_GT_AMP_DASH;
	v->a[25657] = anon_sym_LT_LT;
	v->a[25658] = anon_sym_LT_LT_DASH;
	v->a[25659] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = anon_sym_AMP;
	v->a[25661] = anon_sym_SEMI;
	v->a[25662] = 3;
	v->a[25663] = actions(870);
	v->a[25664] = 1;
	v->a[25665] = sym_comment;
	v->a[25666] = actions(992);
	v->a[25667] = 13;
	v->a[25668] = anon_sym_PIPE;
	v->a[25669] = anon_sym_EQ;
	v->a[25670] = anon_sym_LT;
	v->a[25671] = anon_sym_GT;
	v->a[25672] = anon_sym_GT_GT;
	v->a[25673] = anon_sym_LT_LT;
	v->a[25674] = anon_sym_CARET;
	v->a[25675] = anon_sym_AMP;
	v->a[25676] = anon_sym_PLUS;
	v->a[25677] = anon_sym_DASH;
	v->a[25678] = anon_sym_STAR;
	v->a[25679] = anon_sym_SLASH;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_PERCENT;
	v->a[25681] = actions(994);
	v->a[25682] = 21;
	v->a[25683] = anon_sym_AMP_AMP;
	v->a[25684] = anon_sym_PIPE_PIPE;
	v->a[25685] = anon_sym_RPAREN_RPAREN;
	v->a[25686] = anon_sym_PLUS_EQ;
	v->a[25687] = anon_sym_DASH_EQ;
	v->a[25688] = anon_sym_STAR_EQ;
	v->a[25689] = anon_sym_SLASH_EQ;
	v->a[25690] = anon_sym_PERCENT_EQ;
	v->a[25691] = anon_sym_LT_LT_EQ;
	v->a[25692] = anon_sym_GT_GT_EQ;
	v->a[25693] = anon_sym_AMP_EQ;
	v->a[25694] = anon_sym_CARET_EQ;
	v->a[25695] = anon_sym_PIPE_EQ;
	v->a[25696] = anon_sym_EQ_EQ;
	v->a[25697] = anon_sym_BANG_EQ;
	v->a[25698] = anon_sym_LT_EQ;
	v->a[25699] = anon_sym_GT_EQ;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
