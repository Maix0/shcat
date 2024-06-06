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
	v->a[25600] = anon_sym_DOLLAR_LPAREN;
	v->a[25601] = anon_sym_BQUOTE;
	v->a[25602] = anon_sym_DOLLAR_BQUOTE;
	v->a[25603] = sym_word;
	v->a[25604] = anon_sym_SEMI;
	v->a[25605] = 6;
	v->a[25606] = actions(3);
	v->a[25607] = 1;
	v->a[25608] = sym_comment;
	v->a[25609] = actions(3183);
	v->a[25610] = 1;
	v->a[25611] = aux_sym_concatenation_token1;
	v->a[25612] = actions(3186);
	v->a[25613] = 1;
	v->a[25614] = sym__concat;
	v->a[25615] = state(621);
	v->a[25616] = 1;
	v->a[25617] = aux_sym_concatenation_repeat1;
	v->a[25618] = actions(2654);
	v->a[25619] = 4;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = sym_file_descriptor;
	v->a[25621] = sym_test_operator;
	v->a[25622] = sym__brace_start;
	v->a[25623] = aux_sym_heredoc_redirect_token1;
	v->a[25624] = actions(2652);
	v->a[25625] = 34;
	v->a[25626] = anon_sym_esac;
	v->a[25627] = anon_sym_PIPE;
	v->a[25628] = anon_sym_SEMI_SEMI;
	v->a[25629] = anon_sym_SEMI_AMP;
	v->a[25630] = anon_sym_SEMI_SEMI_AMP;
	v->a[25631] = anon_sym_PIPE_AMP;
	v->a[25632] = anon_sym_AMP_AMP;
	v->a[25633] = anon_sym_PIPE_PIPE;
	v->a[25634] = anon_sym_LT;
	v->a[25635] = anon_sym_GT;
	v->a[25636] = anon_sym_GT_GT;
	v->a[25637] = anon_sym_AMP_GT;
	v->a[25638] = anon_sym_AMP_GT_GT;
	v->a[25639] = anon_sym_LT_AMP;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = anon_sym_GT_AMP;
	v->a[25641] = anon_sym_GT_PIPE;
	v->a[25642] = anon_sym_LT_AMP_DASH;
	v->a[25643] = anon_sym_GT_AMP_DASH;
	v->a[25644] = anon_sym_LT_LT;
	v->a[25645] = anon_sym_LT_LT_DASH;
	v->a[25646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25647] = anon_sym_AMP;
	v->a[25648] = anon_sym_DOLLAR;
	v->a[25649] = sym__special_character;
	v->a[25650] = anon_sym_DQUOTE;
	v->a[25651] = sym_raw_string;
	v->a[25652] = aux_sym_number_token1;
	v->a[25653] = aux_sym_number_token2;
	v->a[25654] = anon_sym_DOLLAR_LBRACE;
	v->a[25655] = anon_sym_DOLLAR_LPAREN;
	v->a[25656] = anon_sym_BQUOTE;
	v->a[25657] = anon_sym_DOLLAR_BQUOTE;
	v->a[25658] = sym_word;
	v->a[25659] = anon_sym_SEMI;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = 3;
	v->a[25661] = actions(3);
	v->a[25662] = 1;
	v->a[25663] = sym_comment;
	v->a[25664] = actions(3062);
	v->a[25665] = 6;
	v->a[25666] = sym_file_descriptor;
	v->a[25667] = sym__concat;
	v->a[25668] = sym_test_operator;
	v->a[25669] = sym__bare_dollar;
	v->a[25670] = sym__brace_start;
	v->a[25671] = aux_sym_heredoc_redirect_token1;
	v->a[25672] = actions(3060);
	v->a[25673] = 35;
	v->a[25674] = anon_sym_esac;
	v->a[25675] = anon_sym_PIPE;
	v->a[25676] = anon_sym_SEMI_SEMI;
	v->a[25677] = anon_sym_SEMI_AMP;
	v->a[25678] = anon_sym_SEMI_SEMI_AMP;
	v->a[25679] = anon_sym_PIPE_AMP;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_AMP_AMP;
	v->a[25681] = anon_sym_PIPE_PIPE;
	v->a[25682] = anon_sym_LT;
	v->a[25683] = anon_sym_GT;
	v->a[25684] = anon_sym_GT_GT;
	v->a[25685] = anon_sym_AMP_GT;
	v->a[25686] = anon_sym_AMP_GT_GT;
	v->a[25687] = anon_sym_LT_AMP;
	v->a[25688] = anon_sym_GT_AMP;
	v->a[25689] = anon_sym_GT_PIPE;
	v->a[25690] = anon_sym_LT_AMP_DASH;
	v->a[25691] = anon_sym_GT_AMP_DASH;
	v->a[25692] = anon_sym_LT_LT;
	v->a[25693] = anon_sym_LT_LT_DASH;
	v->a[25694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25695] = anon_sym_AMP;
	v->a[25696] = aux_sym_concatenation_token1;
	v->a[25697] = anon_sym_DOLLAR;
	v->a[25698] = sym__special_character;
	v->a[25699] = anon_sym_DQUOTE;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
