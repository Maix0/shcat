/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = sym_file_descriptor;
	v->a[22601] = sym__bare_dollar;
	v->a[22602] = actions(419);
	v->a[22603] = 2;
	v->a[22604] = aux_sym__simple_variable_name_token1;
	v->a[22605] = aux_sym__multiline_variable_name_token1;
	v->a[22606] = actions(417);
	v->a[22607] = 9;
	v->a[22608] = anon_sym_BANG;
	v->a[22609] = anon_sym_DASH;
	v->a[22610] = anon_sym_STAR;
	v->a[22611] = anon_sym_QMARK;
	v->a[22612] = anon_sym_DOLLAR;
	v->a[22613] = anon_sym_POUND;
	v->a[22614] = anon_sym_AT;
	v->a[22615] = anon_sym_0;
	v->a[22616] = anon_sym__;
	v->a[22617] = actions(407);
	v->a[22618] = 26;
	v->a[22619] = anon_sym_LPAREN;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_PIPE;
	v->a[22621] = anon_sym_AMP_AMP;
	v->a[22622] = anon_sym_PIPE_PIPE;
	v->a[22623] = anon_sym_LT;
	v->a[22624] = anon_sym_GT;
	v->a[22625] = anon_sym_GT_GT;
	v->a[22626] = anon_sym_AMP_GT;
	v->a[22627] = anon_sym_AMP_GT_GT;
	v->a[22628] = anon_sym_LT_AMP;
	v->a[22629] = anon_sym_GT_AMP;
	v->a[22630] = anon_sym_GT_PIPE;
	v->a[22631] = anon_sym_LT_AMP_DASH;
	v->a[22632] = anon_sym_GT_AMP_DASH;
	v->a[22633] = anon_sym_LT_LT;
	v->a[22634] = anon_sym_LT_LT_DASH;
	v->a[22635] = aux_sym_heredoc_redirect_token1;
	v->a[22636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22637] = anon_sym_DQUOTE;
	v->a[22638] = sym_raw_string;
	v->a[22639] = aux_sym_number_token1;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = aux_sym_number_token2;
	v->a[22641] = anon_sym_DOLLAR_LBRACE;
	v->a[22642] = anon_sym_DOLLAR_LPAREN;
	v->a[22643] = anon_sym_BQUOTE;
	v->a[22644] = sym_word;
	v->a[22645] = 16;
	v->a[22646] = actions(3);
	v->a[22647] = 1;
	v->a[22648] = sym_comment;
	v->a[22649] = actions(485);
	v->a[22650] = 1;
	v->a[22651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22652] = actions(487);
	v->a[22653] = 1;
	v->a[22654] = anon_sym_DOLLAR;
	v->a[22655] = actions(489);
	v->a[22656] = 1;
	v->a[22657] = anon_sym_DQUOTE;
	v->a[22658] = actions(491);
	v->a[22659] = 1;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = aux_sym_number_token1;
	v->a[22661] = actions(493);
	v->a[22662] = 1;
	v->a[22663] = aux_sym_number_token2;
	v->a[22664] = actions(495);
	v->a[22665] = 1;
	v->a[22666] = anon_sym_DOLLAR_LBRACE;
	v->a[22667] = actions(497);
	v->a[22668] = 1;
	v->a[22669] = anon_sym_DOLLAR_LPAREN;
	v->a[22670] = actions(499);
	v->a[22671] = 1;
	v->a[22672] = anon_sym_BQUOTE;
	v->a[22673] = actions(501);
	v->a[22674] = 1;
	v->a[22675] = sym__bare_dollar;
	v->a[22676] = actions(563);
	v->a[22677] = 1;
	v->a[22678] = sym_file_descriptor;
	v->a[22679] = state(201);
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = 1;
	v->a[22681] = aux_sym_command_repeat2;
	v->a[22682] = state(753);
	v->a[22683] = 1;
	v->a[22684] = sym_concatenation;
	v->a[22685] = actions(483);
	v->a[22686] = 2;
	v->a[22687] = sym_raw_string;
	v->a[22688] = sym_word;
	v->a[22689] = state(341);
	v->a[22690] = 6;
	v->a[22691] = sym_arithmetic_expansion;
	v->a[22692] = sym_string;
	v->a[22693] = sym_number;
	v->a[22694] = sym_simple_expansion;
	v->a[22695] = sym_expansion;
	v->a[22696] = sym_command_substitution;
	v->a[22697] = actions(561);
	v->a[22698] = 20;
	v->a[22699] = anon_sym_PIPE;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
