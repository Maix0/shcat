/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1066.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5330(t_small_parse_table_array *v)
{
	v->a[106600] = actions(385);
	v->a[106601] = 1;
	v->a[106602] = anon_sym_DOLLAR_BQUOTE;
	v->a[106603] = actions(389);
	v->a[106604] = 1;
	v->a[106605] = sym_test_operator;
	v->a[106606] = actions(391);
	v->a[106607] = 1;
	v->a[106608] = sym__brace_start;
	v->a[106609] = actions(5807);
	v->a[106610] = 1;
	v->a[106611] = sym__special_character;
	v->a[106612] = actions(5809);
	v->a[106613] = 1;
	v->a[106614] = anon_sym_BQUOTE;
	v->a[106615] = state(2641);
	v->a[106616] = 1;
	v->a[106617] = aux_sym__literal_repeat1;
	v->a[106618] = state(2951);
	v->a[106619] = 1;
	small_parse_table_5331(v);
}

void	small_parse_table_5331(t_small_parse_table_array *v)
{
	v->a[106620] = sym__expression;
	v->a[106621] = actions(183);
	v->a[106622] = 2;
	v->a[106623] = anon_sym_PLUS_PLUS2;
	v->a[106624] = anon_sym_DASH_DASH2;
	v->a[106625] = actions(185);
	v->a[106626] = 2;
	v->a[106627] = anon_sym_DASH2;
	v->a[106628] = anon_sym_PLUS2;
	v->a[106629] = actions(352);
	v->a[106630] = 2;
	v->a[106631] = anon_sym_LPAREN_LPAREN;
	v->a[106632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106633] = actions(373);
	v->a[106634] = 2;
	v->a[106635] = sym_raw_string;
	v->a[106636] = sym_ansi_c_string;
	v->a[106637] = actions(387);
	v->a[106638] = 2;
	v->a[106639] = anon_sym_LT_LPAREN;
	small_parse_table_5332(v);
}

void	small_parse_table_5332(t_small_parse_table_array *v)
{
	v->a[106640] = anon_sym_GT_LPAREN;
	v->a[106641] = state(3071);
	v->a[106642] = 6;
	v->a[106643] = sym_binary_expression;
	v->a[106644] = sym_ternary_expression;
	v->a[106645] = sym_unary_expression;
	v->a[106646] = sym_postfix_expression;
	v->a[106647] = sym_parenthesized_expression;
	v->a[106648] = sym_concatenation;
	v->a[106649] = state(2521);
	v->a[106650] = 9;
	v->a[106651] = sym_arithmetic_expansion;
	v->a[106652] = sym_brace_expression;
	v->a[106653] = sym_string;
	v->a[106654] = sym_translated_string;
	v->a[106655] = sym_number;
	v->a[106656] = sym_simple_expansion;
	v->a[106657] = sym_expansion;
	v->a[106658] = sym_command_substitution;
	v->a[106659] = sym_process_substitution;
	small_parse_table_5333(v);
}

void	small_parse_table_5333(t_small_parse_table_array *v)
{
	v->a[106660] = 3;
	v->a[106661] = actions(71);
	v->a[106662] = 1;
	v->a[106663] = sym_comment;
	v->a[106664] = actions(1348);
	v->a[106665] = 16;
	v->a[106666] = anon_sym_PIPE;
	v->a[106667] = anon_sym_EQ_EQ;
	v->a[106668] = anon_sym_LT;
	v->a[106669] = anon_sym_GT;
	v->a[106670] = anon_sym_LT_LT;
	v->a[106671] = anon_sym_LPAREN;
	v->a[106672] = anon_sym_EQ_TILDE;
	v->a[106673] = anon_sym_AMP_GT;
	v->a[106674] = anon_sym_LT_AMP;
	v->a[106675] = anon_sym_GT_AMP;
	v->a[106676] = anon_sym_DOLLAR;
	v->a[106677] = aux_sym_number_token1;
	v->a[106678] = aux_sym_number_token2;
	v->a[106679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5334(v);
}

void	small_parse_table_5334(t_small_parse_table_array *v)
{
	v->a[106680] = anon_sym_BQUOTE;
	v->a[106681] = sym_word;
	v->a[106682] = actions(1350);
	v->a[106683] = 27;
	v->a[106684] = sym_file_descriptor;
	v->a[106685] = sym__concat;
	v->a[106686] = sym_test_operator;
	v->a[106687] = sym__bare_dollar;
	v->a[106688] = sym__brace_start;
	v->a[106689] = anon_sym_LPAREN_LPAREN;
	v->a[106690] = anon_sym_PIPE_PIPE;
	v->a[106691] = anon_sym_AMP_AMP;
	v->a[106692] = anon_sym_GT_GT;
	v->a[106693] = anon_sym_PIPE_AMP;
	v->a[106694] = anon_sym_AMP_GT_GT;
	v->a[106695] = anon_sym_GT_PIPE;
	v->a[106696] = anon_sym_LT_AMP_DASH;
	v->a[106697] = anon_sym_GT_AMP_DASH;
	v->a[106698] = anon_sym_LT_LT_DASH;
	v->a[106699] = anon_sym_LT_LT_LT;
	small_parse_table_5335(v);
}

/* EOF small_parse_table_1066.c */
