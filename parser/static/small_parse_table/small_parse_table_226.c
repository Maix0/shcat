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
	v->a[22600] = sym_word;
	v->a[22601] = state(418);
	v->a[22602] = 5;
	v->a[22603] = sym_arithmetic_expansion;
	v->a[22604] = sym_string;
	v->a[22605] = sym_simple_expansion;
	v->a[22606] = sym_expansion;
	v->a[22607] = sym_command_substitution;
	v->a[22608] = actions(487);
	v->a[22609] = 15;
	v->a[22610] = anon_sym_PIPE;
	v->a[22611] = anon_sym_SEMI_SEMI;
	v->a[22612] = anon_sym_AMP_AMP;
	v->a[22613] = anon_sym_PIPE_PIPE;
	v->a[22614] = anon_sym_LT;
	v->a[22615] = anon_sym_GT;
	v->a[22616] = anon_sym_GT_GT;
	v->a[22617] = anon_sym_LT_AMP;
	v->a[22618] = anon_sym_GT_AMP;
	v->a[22619] = anon_sym_GT_PIPE;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_LT_GT;
	v->a[22621] = anon_sym_LT_LT;
	v->a[22622] = anon_sym_LT_LT_DASH;
	v->a[22623] = aux_sym_heredoc_redirect_token1;
	v->a[22624] = anon_sym_SEMI;
	v->a[22625] = 6;
	v->a[22626] = actions(3);
	v->a[22627] = 1;
	v->a[22628] = sym_comment;
	v->a[22629] = actions(343);
	v->a[22630] = 1;
	v->a[22631] = sym__bare_dollar;
	v->a[22632] = actions(819);
	v->a[22633] = 1;
	v->a[22634] = sym_variable_name;
	v->a[22635] = actions(817);
	v->a[22636] = 2;
	v->a[22637] = aux_sym__simple_variable_name_token1;
	v->a[22638] = aux_sym__multiline_variable_name_token1;
	v->a[22639] = actions(815);
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = 8;
	v->a[22641] = anon_sym_BANG;
	v->a[22642] = anon_sym_DASH;
	v->a[22643] = anon_sym_STAR;
	v->a[22644] = anon_sym_QMARK;
	v->a[22645] = anon_sym_DOLLAR;
	v->a[22646] = anon_sym_POUND;
	v->a[22647] = anon_sym_AT;
	v->a[22648] = anon_sym_0;
	v->a[22649] = actions(345);
	v->a[22650] = 20;
	v->a[22651] = anon_sym_PIPE;
	v->a[22652] = anon_sym_AMP_AMP;
	v->a[22653] = anon_sym_PIPE_PIPE;
	v->a[22654] = anon_sym_LT;
	v->a[22655] = anon_sym_GT;
	v->a[22656] = anon_sym_GT_GT;
	v->a[22657] = anon_sym_LT_AMP;
	v->a[22658] = anon_sym_GT_AMP;
	v->a[22659] = anon_sym_GT_PIPE;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = anon_sym_LT_GT;
	v->a[22661] = anon_sym_LT_LT;
	v->a[22662] = anon_sym_LT_LT_DASH;
	v->a[22663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22664] = anon_sym_DQUOTE;
	v->a[22665] = sym_raw_string;
	v->a[22666] = sym_number;
	v->a[22667] = anon_sym_DOLLAR_LBRACE;
	v->a[22668] = anon_sym_DOLLAR_LPAREN;
	v->a[22669] = anon_sym_BQUOTE;
	v->a[22670] = sym_word;
	v->a[22671] = 5;
	v->a[22672] = actions(3);
	v->a[22673] = 1;
	v->a[22674] = sym_comment;
	v->a[22675] = actions(387);
	v->a[22676] = 1;
	v->a[22677] = sym_variable_name;
	v->a[22678] = actions(385);
	v->a[22679] = 2;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = aux_sym__simple_variable_name_token1;
	v->a[22681] = aux_sym__multiline_variable_name_token1;
	v->a[22682] = actions(383);
	v->a[22683] = 8;
	v->a[22684] = anon_sym_BANG;
	v->a[22685] = anon_sym_DASH;
	v->a[22686] = anon_sym_STAR;
	v->a[22687] = anon_sym_QMARK;
	v->a[22688] = anon_sym_DOLLAR;
	v->a[22689] = anon_sym_POUND;
	v->a[22690] = anon_sym_AT;
	v->a[22691] = anon_sym_0;
	v->a[22692] = actions(345);
	v->a[22693] = 21;
	v->a[22694] = anon_sym_PIPE;
	v->a[22695] = anon_sym_AMP_AMP;
	v->a[22696] = anon_sym_PIPE_PIPE;
	v->a[22697] = anon_sym_LT;
	v->a[22698] = anon_sym_GT;
	v->a[22699] = anon_sym_GT_GT;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
