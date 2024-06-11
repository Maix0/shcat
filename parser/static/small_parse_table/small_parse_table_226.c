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
	v->a[22600] = actions(657);
	v->a[22601] = 1;
	v->a[22602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22603] = actions(660);
	v->a[22604] = 1;
	v->a[22605] = anon_sym_DOLLAR;
	v->a[22606] = actions(663);
	v->a[22607] = 1;
	v->a[22608] = anon_sym_DQUOTE;
	v->a[22609] = actions(666);
	v->a[22610] = 1;
	v->a[22611] = anon_sym_DOLLAR_LBRACE;
	v->a[22612] = actions(669);
	v->a[22613] = 1;
	v->a[22614] = anon_sym_DOLLAR_LPAREN;
	v->a[22615] = actions(672);
	v->a[22616] = 1;
	v->a[22617] = anon_sym_BQUOTE;
	v->a[22618] = actions(675);
	v->a[22619] = 1;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = sym__bare_dollar;
	v->a[22621] = state(209);
	v->a[22622] = 1;
	v->a[22623] = aux_sym_command_repeat2;
	v->a[22624] = state(809);
	v->a[22625] = 1;
	v->a[22626] = sym_concatenation;
	v->a[22627] = actions(536);
	v->a[22628] = 2;
	v->a[22629] = sym_file_descriptor;
	v->a[22630] = ts_builtin_sym_end;
	v->a[22631] = actions(654);
	v->a[22632] = 3;
	v->a[22633] = sym_raw_string;
	v->a[22634] = sym_number;
	v->a[22635] = sym_word;
	v->a[22636] = state(339);
	v->a[22637] = 5;
	v->a[22638] = sym_arithmetic_expansion;
	v->a[22639] = sym_string;
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = sym_simple_expansion;
	v->a[22641] = sym_expansion;
	v->a[22642] = sym_command_substitution;
	v->a[22643] = actions(516);
	v->a[22644] = 19;
	v->a[22645] = anon_sym_PIPE;
	v->a[22646] = anon_sym_SEMI_SEMI;
	v->a[22647] = anon_sym_AMP_AMP;
	v->a[22648] = anon_sym_PIPE_PIPE;
	v->a[22649] = anon_sym_LT;
	v->a[22650] = anon_sym_GT;
	v->a[22651] = anon_sym_GT_GT;
	v->a[22652] = anon_sym_AMP_GT;
	v->a[22653] = anon_sym_AMP_GT_GT;
	v->a[22654] = anon_sym_LT_AMP;
	v->a[22655] = anon_sym_GT_AMP;
	v->a[22656] = anon_sym_GT_PIPE;
	v->a[22657] = anon_sym_LT_AMP_DASH;
	v->a[22658] = anon_sym_GT_AMP_DASH;
	v->a[22659] = anon_sym_LT_LT;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = anon_sym_LT_LT_DASH;
	v->a[22661] = aux_sym_heredoc_redirect_token1;
	v->a[22662] = anon_sym_AMP;
	v->a[22663] = anon_sym_SEMI;
	v->a[22664] = 5;
	v->a[22665] = actions(3);
	v->a[22666] = 1;
	v->a[22667] = sym_comment;
	v->a[22668] = actions(543);
	v->a[22669] = 2;
	v->a[22670] = sym_file_descriptor;
	v->a[22671] = sym_variable_name;
	v->a[22672] = state(207);
	v->a[22673] = 2;
	v->a[22674] = sym_concatenation;
	v->a[22675] = aux_sym_for_statement_repeat1;
	v->a[22676] = state(364);
	v->a[22677] = 5;
	v->a[22678] = sym_arithmetic_expansion;
	v->a[22679] = sym_string;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = sym_simple_expansion;
	v->a[22681] = sym_expansion;
	v->a[22682] = sym_command_substitution;
	v->a[22683] = actions(541);
	v->a[22684] = 29;
	v->a[22685] = anon_sym_esac;
	v->a[22686] = anon_sym_PIPE;
	v->a[22687] = anon_sym_SEMI_SEMI;
	v->a[22688] = anon_sym_AMP_AMP;
	v->a[22689] = anon_sym_PIPE_PIPE;
	v->a[22690] = anon_sym_LT;
	v->a[22691] = anon_sym_GT;
	v->a[22692] = anon_sym_GT_GT;
	v->a[22693] = anon_sym_AMP_GT;
	v->a[22694] = anon_sym_AMP_GT_GT;
	v->a[22695] = anon_sym_LT_AMP;
	v->a[22696] = anon_sym_GT_AMP;
	v->a[22697] = anon_sym_GT_PIPE;
	v->a[22698] = anon_sym_LT_AMP_DASH;
	v->a[22699] = anon_sym_GT_AMP_DASH;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
