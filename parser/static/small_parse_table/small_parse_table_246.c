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
	v->a[24600] = anon_sym_GT_AMP;
	v->a[24601] = anon_sym_GT_PIPE;
	v->a[24602] = anon_sym_LT_GT;
	v->a[24603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24604] = anon_sym_DOLLAR;
	v->a[24605] = anon_sym_DQUOTE;
	v->a[24606] = sym_raw_string;
	v->a[24607] = sym_number;
	v->a[24608] = anon_sym_DOLLAR_LBRACE;
	v->a[24609] = anon_sym_DOLLAR_LPAREN;
	v->a[24610] = anon_sym_BQUOTE;
	v->a[24611] = sym_word;
	v->a[24612] = 10;
	v->a[24613] = actions(3);
	v->a[24614] = 1;
	v->a[24615] = sym_comment;
	v->a[24616] = actions(746);
	v->a[24617] = 1;
	v->a[24618] = anon_sym_PIPE;
	v->a[24619] = actions(900);
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = 1;
	v->a[24621] = sym_variable_name;
	v->a[24622] = state(480);
	v->a[24623] = 1;
	v->a[24624] = sym_terminator;
	v->a[24625] = actions(850);
	v->a[24626] = 2;
	v->a[24627] = anon_sym_LT_LT;
	v->a[24628] = anon_sym_LT_LT_DASH;
	v->a[24629] = actions(898);
	v->a[24630] = 2;
	v->a[24631] = anon_sym_AMP_AMP;
	v->a[24632] = anon_sym_PIPE_PIPE;
	v->a[24633] = state(1002);
	v->a[24634] = 2;
	v->a[24635] = sym_variable_assignment;
	v->a[24636] = aux_sym__variable_assignments_repeat1;
	v->a[24637] = actions(858);
	v->a[24638] = 3;
	v->a[24639] = anon_sym_SEMI_SEMI;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = aux_sym_heredoc_redirect_token1;
	v->a[24641] = anon_sym_SEMI;
	v->a[24642] = state(984);
	v->a[24643] = 3;
	v->a[24644] = sym_file_redirect;
	v->a[24645] = sym_heredoc_redirect;
	v->a[24646] = aux_sym_redirected_statement_repeat1;
	v->a[24647] = actions(742);
	v->a[24648] = 16;
	v->a[24649] = anon_sym_LT;
	v->a[24650] = anon_sym_GT;
	v->a[24651] = anon_sym_GT_GT;
	v->a[24652] = anon_sym_LT_AMP;
	v->a[24653] = anon_sym_GT_AMP;
	v->a[24654] = anon_sym_GT_PIPE;
	v->a[24655] = anon_sym_LT_GT;
	v->a[24656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24657] = anon_sym_DOLLAR;
	v->a[24658] = anon_sym_DQUOTE;
	v->a[24659] = sym_raw_string;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = sym_number;
	v->a[24661] = anon_sym_DOLLAR_LBRACE;
	v->a[24662] = anon_sym_DOLLAR_LPAREN;
	v->a[24663] = anon_sym_BQUOTE;
	v->a[24664] = sym_word;
	v->a[24665] = 18;
	v->a[24666] = actions(3);
	v->a[24667] = 1;
	v->a[24668] = sym_comment;
	v->a[24669] = actions(922);
	v->a[24670] = 1;
	v->a[24671] = anon_sym_PIPE;
	v->a[24672] = actions(930);
	v->a[24673] = 1;
	v->a[24674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24675] = actions(932);
	v->a[24676] = 1;
	v->a[24677] = anon_sym_DOLLAR;
	v->a[24678] = actions(934);
	v->a[24679] = 1;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = anon_sym_DQUOTE;
	v->a[24681] = actions(936);
	v->a[24682] = 1;
	v->a[24683] = anon_sym_DOLLAR_LBRACE;
	v->a[24684] = actions(938);
	v->a[24685] = 1;
	v->a[24686] = anon_sym_DOLLAR_LPAREN;
	v->a[24687] = actions(940);
	v->a[24688] = 1;
	v->a[24689] = anon_sym_BQUOTE;
	v->a[24690] = actions(958);
	v->a[24691] = 1;
	v->a[24692] = aux_sym_heredoc_redirect_token1;
	v->a[24693] = state(1048);
	v->a[24694] = 1;
	v->a[24695] = aux_sym__heredoc_command;
	v->a[24696] = state(1465);
	v->a[24697] = 1;
	v->a[24698] = sym_concatenation;
	v->a[24699] = state(1635);
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
