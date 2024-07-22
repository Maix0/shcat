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
	v->a[22600] = anon_sym_SEMI;
	v->a[22601] = 14;
	v->a[22602] = actions(3);
	v->a[22603] = 1;
	v->a[22604] = sym_comment;
	v->a[22605] = actions(405);
	v->a[22606] = 1;
	v->a[22607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22608] = actions(407);
	v->a[22609] = 1;
	v->a[22610] = anon_sym_DOLLAR;
	v->a[22611] = actions(409);
	v->a[22612] = 1;
	v->a[22613] = anon_sym_DQUOTE;
	v->a[22614] = actions(411);
	v->a[22615] = 1;
	v->a[22616] = anon_sym_DOLLAR_LBRACE;
	v->a[22617] = actions(413);
	v->a[22618] = 1;
	v->a[22619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = actions(415);
	v->a[22621] = 1;
	v->a[22622] = anon_sym_BQUOTE;
	v->a[22623] = actions(419);
	v->a[22624] = 1;
	v->a[22625] = sym__bare_dollar;
	v->a[22626] = actions(505);
	v->a[22627] = 1;
	v->a[22628] = sym_file_descriptor;
	v->a[22629] = state(253);
	v->a[22630] = 1;
	v->a[22631] = aux_sym_command_repeat2;
	v->a[22632] = state(674);
	v->a[22633] = 1;
	v->a[22634] = sym_concatenation;
	v->a[22635] = actions(493);
	v->a[22636] = 3;
	v->a[22637] = sym_raw_string;
	v->a[22638] = sym_number;
	v->a[22639] = sym_word;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = state(495);
	v->a[22641] = 5;
	v->a[22642] = sym_arithmetic_expansion;
	v->a[22643] = sym_string;
	v->a[22644] = sym_simple_expansion;
	v->a[22645] = sym_expansion;
	v->a[22646] = sym_command_substitution;
	v->a[22647] = actions(503);
	v->a[22648] = 15;
	v->a[22649] = anon_sym_PIPE;
	v->a[22650] = anon_sym_SEMI_SEMI;
	v->a[22651] = anon_sym_AMP_AMP;
	v->a[22652] = anon_sym_PIPE_PIPE;
	v->a[22653] = anon_sym_LT;
	v->a[22654] = anon_sym_GT;
	v->a[22655] = anon_sym_GT_GT;
	v->a[22656] = anon_sym_LT_AMP;
	v->a[22657] = anon_sym_GT_AMP;
	v->a[22658] = anon_sym_GT_PIPE;
	v->a[22659] = anon_sym_LT_GT;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = anon_sym_LT_LT;
	v->a[22661] = anon_sym_LT_LT_DASH;
	v->a[22662] = aux_sym_heredoc_redirect_token1;
	v->a[22663] = anon_sym_SEMI;
	v->a[22664] = 12;
	v->a[22665] = actions(3);
	v->a[22666] = 1;
	v->a[22667] = sym_comment;
	v->a[22668] = actions(782);
	v->a[22669] = 1;
	v->a[22670] = anon_sym_PIPE;
	v->a[22671] = actions(792);
	v->a[22672] = 1;
	v->a[22673] = sym_file_descriptor;
	v->a[22674] = actions(794);
	v->a[22675] = 1;
	v->a[22676] = sym_variable_name;
	v->a[22677] = actions(797);
	v->a[22678] = 1;
	v->a[22679] = anon_sym_RPAREN;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = state(630);
	v->a[22681] = 1;
	v->a[22682] = sym_terminator;
	v->a[22683] = actions(788);
	v->a[22684] = 2;
	v->a[22685] = anon_sym_AMP_AMP;
	v->a[22686] = anon_sym_PIPE_PIPE;
	v->a[22687] = actions(790);
	v->a[22688] = 2;
	v->a[22689] = anon_sym_LT_LT;
	v->a[22690] = anon_sym_LT_LT_DASH;
	v->a[22691] = state(1109);
	v->a[22692] = 2;
	v->a[22693] = sym_variable_assignment;
	v->a[22694] = aux_sym__variable_assignments_repeat1;
	v->a[22695] = actions(786);
	v->a[22696] = 3;
	v->a[22697] = anon_sym_SEMI_SEMI;
	v->a[22698] = aux_sym_heredoc_redirect_token1;
	v->a[22699] = anon_sym_SEMI;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
