/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1276.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6380(t_small_parse_table_array *v)
{
	v->a[127600] = sym__special_character;
	v->a[127601] = anon_sym_DQUOTE;
	v->a[127602] = sym_raw_string;
	v->a[127603] = sym_ansi_c_string;
	v->a[127604] = anon_sym_DOLLAR_LBRACE;
	v->a[127605] = anon_sym_DOLLAR_BQUOTE;
	v->a[127606] = anon_sym_LT_LPAREN;
	v->a[127607] = anon_sym_GT_LPAREN;
	v->a[127608] = 5;
	v->a[127609] = actions(71);
	v->a[127610] = 1;
	v->a[127611] = sym_comment;
	v->a[127612] = state(2350);
	v->a[127613] = 1;
	v->a[127614] = aux_sym_concatenation_repeat1;
	v->a[127615] = actions(6514);
	v->a[127616] = 2;
	v->a[127617] = sym__concat;
	v->a[127618] = aux_sym_concatenation_token1;
	v->a[127619] = actions(2072);
	small_parse_table_6381(v);
}

void	small_parse_table_6381(t_small_parse_table_array *v)
{
	v->a[127620] = 13;
	v->a[127621] = anon_sym_PIPE;
	v->a[127622] = anon_sym_LT;
	v->a[127623] = anon_sym_GT;
	v->a[127624] = anon_sym_LT_LT;
	v->a[127625] = anon_sym_AMP_GT;
	v->a[127626] = anon_sym_LT_AMP;
	v->a[127627] = anon_sym_GT_AMP;
	v->a[127628] = anon_sym_DOLLAR;
	v->a[127629] = aux_sym_number_token1;
	v->a[127630] = aux_sym_number_token2;
	v->a[127631] = anon_sym_DOLLAR_LPAREN;
	v->a[127632] = anon_sym_BQUOTE;
	v->a[127633] = sym_word;
	v->a[127634] = actions(2074);
	v->a[127635] = 25;
	v->a[127636] = sym_file_descriptor;
	v->a[127637] = sym_variable_name;
	v->a[127638] = sym_test_operator;
	v->a[127639] = sym__brace_start;
	small_parse_table_6382(v);
}

void	small_parse_table_6382(t_small_parse_table_array *v)
{
	v->a[127640] = anon_sym_LPAREN_LPAREN;
	v->a[127641] = anon_sym_PIPE_PIPE;
	v->a[127642] = anon_sym_AMP_AMP;
	v->a[127643] = anon_sym_GT_GT;
	v->a[127644] = anon_sym_PIPE_AMP;
	v->a[127645] = anon_sym_AMP_GT_GT;
	v->a[127646] = anon_sym_GT_PIPE;
	v->a[127647] = anon_sym_LT_AMP_DASH;
	v->a[127648] = anon_sym_GT_AMP_DASH;
	v->a[127649] = anon_sym_LT_LT_DASH;
	v->a[127650] = anon_sym_LT_LT_LT;
	v->a[127651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127652] = anon_sym_DOLLAR_LBRACK;
	v->a[127653] = sym__special_character;
	v->a[127654] = anon_sym_DQUOTE;
	v->a[127655] = sym_raw_string;
	v->a[127656] = sym_ansi_c_string;
	v->a[127657] = anon_sym_DOLLAR_LBRACE;
	v->a[127658] = anon_sym_DOLLAR_BQUOTE;
	v->a[127659] = anon_sym_LT_LPAREN;
	small_parse_table_6383(v);
}

void	small_parse_table_6383(t_small_parse_table_array *v)
{
	v->a[127660] = anon_sym_GT_LPAREN;
	v->a[127661] = 26;
	v->a[127662] = actions(3);
	v->a[127663] = 1;
	v->a[127664] = sym_comment;
	v->a[127665] = actions(6480);
	v->a[127666] = 1;
	v->a[127667] = anon_sym_LPAREN;
	v->a[127668] = actions(6486);
	v->a[127669] = 1;
	v->a[127670] = anon_sym_DOLLAR_LBRACK;
	v->a[127671] = actions(6488);
	v->a[127672] = 1;
	v->a[127673] = anon_sym_DOLLAR;
	v->a[127674] = actions(6490);
	v->a[127675] = 1;
	v->a[127676] = sym__special_character;
	v->a[127677] = actions(6492);
	v->a[127678] = 1;
	v->a[127679] = anon_sym_DQUOTE;
	small_parse_table_6384(v);
}

void	small_parse_table_6384(t_small_parse_table_array *v)
{
	v->a[127680] = actions(6494);
	v->a[127681] = 1;
	v->a[127682] = aux_sym_number_token1;
	v->a[127683] = actions(6496);
	v->a[127684] = 1;
	v->a[127685] = aux_sym_number_token2;
	v->a[127686] = actions(6498);
	v->a[127687] = 1;
	v->a[127688] = anon_sym_DOLLAR_LBRACE;
	v->a[127689] = actions(6500);
	v->a[127690] = 1;
	v->a[127691] = anon_sym_DOLLAR_LPAREN;
	v->a[127692] = actions(6502);
	v->a[127693] = 1;
	v->a[127694] = anon_sym_BQUOTE;
	v->a[127695] = actions(6504);
	v->a[127696] = 1;
	v->a[127697] = anon_sym_DOLLAR_BQUOTE;
	v->a[127698] = actions(6508);
	v->a[127699] = 1;
	small_parse_table_6385(v);
}

/* EOF small_parse_table_1276.c */
