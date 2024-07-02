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
	v->a[24600] = actions(810);
	v->a[24601] = 1;
	v->a[24602] = anon_sym_DOLLAR_LBRACE;
	v->a[24603] = actions(813);
	v->a[24604] = 1;
	v->a[24605] = anon_sym_DOLLAR_LPAREN;
	v->a[24606] = actions(816);
	v->a[24607] = 1;
	v->a[24608] = anon_sym_BQUOTE;
	v->a[24609] = state(274);
	v->a[24610] = 2;
	v->a[24611] = sym_concatenation;
	v->a[24612] = aux_sym_for_statement_repeat1;
	v->a[24613] = actions(933);
	v->a[24614] = 3;
	v->a[24615] = sym_raw_string;
	v->a[24616] = sym_number;
	v->a[24617] = sym_word;
	v->a[24618] = state(593);
	v->a[24619] = 5;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = sym_arithmetic_expansion;
	v->a[24621] = sym_string;
	v->a[24622] = sym_simple_expansion;
	v->a[24623] = sym_expansion;
	v->a[24624] = sym_command_substitution;
	v->a[24625] = actions(520);
	v->a[24626] = 16;
	v->a[24627] = anon_sym_PIPE;
	v->a[24628] = anon_sym_SEMI_SEMI;
	v->a[24629] = anon_sym_AMP_AMP;
	v->a[24630] = anon_sym_PIPE_PIPE;
	v->a[24631] = anon_sym_LT;
	v->a[24632] = anon_sym_GT;
	v->a[24633] = anon_sym_GT_GT;
	v->a[24634] = anon_sym_LT_AMP;
	v->a[24635] = anon_sym_GT_AMP;
	v->a[24636] = anon_sym_GT_PIPE;
	v->a[24637] = anon_sym_LT_GT;
	v->a[24638] = anon_sym_LT_LT;
	v->a[24639] = anon_sym_LT_LT_DASH;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = aux_sym_heredoc_redirect_token1;
	v->a[24641] = anon_sym_AMP;
	v->a[24642] = anon_sym_SEMI;
	v->a[24643] = 12;
	v->a[24644] = actions(3);
	v->a[24645] = 1;
	v->a[24646] = sym_comment;
	v->a[24647] = actions(692);
	v->a[24648] = 1;
	v->a[24649] = anon_sym_PIPE;
	v->a[24650] = actions(702);
	v->a[24651] = 1;
	v->a[24652] = sym_file_descriptor;
	v->a[24653] = actions(724);
	v->a[24654] = 1;
	v->a[24655] = anon_sym_BQUOTE;
	v->a[24656] = actions(938);
	v->a[24657] = 1;
	v->a[24658] = sym_variable_name;
	v->a[24659] = state(844);
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = 1;
	v->a[24661] = sym_terminator;
	v->a[24662] = actions(700);
	v->a[24663] = 2;
	v->a[24664] = anon_sym_LT_LT;
	v->a[24665] = anon_sym_LT_LT_DASH;
	v->a[24666] = actions(936);
	v->a[24667] = 2;
	v->a[24668] = anon_sym_AMP_AMP;
	v->a[24669] = anon_sym_PIPE_PIPE;
	v->a[24670] = state(1038);
	v->a[24671] = 2;
	v->a[24672] = sym_variable_assignment;
	v->a[24673] = aux_sym__variable_assignments_repeat1;
	v->a[24674] = state(1034);
	v->a[24675] = 3;
	v->a[24676] = sym_file_redirect;
	v->a[24677] = sym_heredoc_redirect;
	v->a[24678] = aux_sym_redirected_statement_repeat1;
	v->a[24679] = actions(696);
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = 4;
	v->a[24681] = anon_sym_SEMI_SEMI;
	v->a[24682] = aux_sym_heredoc_redirect_token1;
	v->a[24683] = anon_sym_AMP;
	v->a[24684] = anon_sym_SEMI;
	v->a[24685] = actions(690);
	v->a[24686] = 15;
	v->a[24687] = anon_sym_LT;
	v->a[24688] = anon_sym_GT;
	v->a[24689] = anon_sym_GT_GT;
	v->a[24690] = anon_sym_LT_AMP;
	v->a[24691] = anon_sym_GT_AMP;
	v->a[24692] = anon_sym_GT_PIPE;
	v->a[24693] = anon_sym_LT_GT;
	v->a[24694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24695] = anon_sym_DOLLAR;
	v->a[24696] = anon_sym_DQUOTE;
	v->a[24697] = sym_raw_string;
	v->a[24698] = sym_number;
	v->a[24699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
