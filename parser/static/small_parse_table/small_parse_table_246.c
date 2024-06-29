/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_246.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1230(t_small_parse_table_array *v)
{
	v->a[24600] = actions(3);
	v->a[24601] = 1;
	v->a[24602] = sym_comment;
	v->a[24603] = actions(477);
	v->a[24604] = 1;
	v->a[24605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24606] = actions(479);
	v->a[24607] = 1;
	v->a[24608] = anon_sym_DOLLAR;
	v->a[24609] = actions(481);
	v->a[24610] = 1;
	v->a[24611] = anon_sym_DQUOTE;
	v->a[24612] = actions(483);
	v->a[24613] = 1;
	v->a[24614] = anon_sym_DOLLAR_LBRACE;
	v->a[24615] = actions(485);
	v->a[24616] = 1;
	v->a[24617] = anon_sym_DOLLAR_LPAREN;
	v->a[24618] = actions(487);
	v->a[24619] = 1;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = anon_sym_BQUOTE;
	v->a[24621] = actions(489);
	v->a[24622] = 1;
	v->a[24623] = sym__bare_dollar;
	v->a[24624] = actions(552);
	v->a[24625] = 1;
	v->a[24626] = sym_file_descriptor;
	v->a[24627] = state(218);
	v->a[24628] = 1;
	v->a[24629] = aux_sym_command_repeat2;
	v->a[24630] = state(712);
	v->a[24631] = 1;
	v->a[24632] = sym_concatenation;
	v->a[24633] = actions(511);
	v->a[24634] = 3;
	v->a[24635] = sym_raw_string;
	v->a[24636] = sym_number;
	v->a[24637] = sym_word;
	v->a[24638] = state(479);
	v->a[24639] = 5;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = sym_arithmetic_expansion;
	v->a[24641] = sym_string;
	v->a[24642] = sym_simple_expansion;
	v->a[24643] = sym_expansion;
	v->a[24644] = sym_command_substitution;
	v->a[24645] = actions(550);
	v->a[24646] = 19;
	v->a[24647] = anon_sym_PIPE;
	v->a[24648] = anon_sym_SEMI_SEMI;
	v->a[24649] = anon_sym_AMP_AMP;
	v->a[24650] = anon_sym_PIPE_PIPE;
	v->a[24651] = anon_sym_LT;
	v->a[24652] = anon_sym_GT;
	v->a[24653] = anon_sym_GT_GT;
	v->a[24654] = anon_sym_AMP_GT;
	v->a[24655] = anon_sym_AMP_GT_GT;
	v->a[24656] = anon_sym_LT_AMP;
	v->a[24657] = anon_sym_GT_AMP;
	v->a[24658] = anon_sym_GT_PIPE;
	v->a[24659] = anon_sym_LT_AMP_DASH;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_GT_AMP_DASH;
	v->a[24661] = anon_sym_LT_LT;
	v->a[24662] = anon_sym_LT_LT_DASH;
	v->a[24663] = aux_sym_heredoc_redirect_token1;
	v->a[24664] = anon_sym_AMP;
	v->a[24665] = anon_sym_SEMI;
	v->a[24666] = 12;
	v->a[24667] = actions(3);
	v->a[24668] = 1;
	v->a[24669] = sym_comment;
	v->a[24670] = actions(766);
	v->a[24671] = 1;
	v->a[24672] = anon_sym_PIPE;
	v->a[24673] = actions(774);
	v->a[24674] = 1;
	v->a[24675] = sym_file_descriptor;
	v->a[24676] = actions(809);
	v->a[24677] = 1;
	v->a[24678] = anon_sym_BQUOTE;
	v->a[24679] = actions(844);
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = 1;
	v->a[24681] = sym_variable_name;
	v->a[24682] = state(829);
	v->a[24683] = 1;
	v->a[24684] = sym_terminator;
	v->a[24685] = actions(804);
	v->a[24686] = 2;
	v->a[24687] = anon_sym_LT_LT;
	v->a[24688] = anon_sym_LT_LT_DASH;
	v->a[24689] = actions(842);
	v->a[24690] = 2;
	v->a[24691] = anon_sym_AMP_AMP;
	v->a[24692] = anon_sym_PIPE_PIPE;
	v->a[24693] = state(1142);
	v->a[24694] = 2;
	v->a[24695] = sym_variable_assignment;
	v->a[24696] = aux_sym__variable_assignments_repeat1;
	v->a[24697] = state(1157);
	v->a[24698] = 3;
	v->a[24699] = sym_file_redirect;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
