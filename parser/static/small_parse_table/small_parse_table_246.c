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
	v->a[24600] = aux_sym_heredoc_redirect_token1;
	v->a[24601] = actions(848);
	v->a[24602] = 1;
	v->a[24603] = anon_sym_AMP;
	v->a[24604] = actions(850);
	v->a[24605] = 1;
	v->a[24606] = anon_sym_SEMI;
	v->a[24607] = actions(852);
	v->a[24608] = 1;
	v->a[24609] = sym_variable_name;
	v->a[24610] = actions(840);
	v->a[24611] = 2;
	v->a[24612] = anon_sym_esac;
	v->a[24613] = anon_sym_SEMI_SEMI;
	v->a[24614] = actions(842);
	v->a[24615] = 2;
	v->a[24616] = anon_sym_AMP_AMP;
	v->a[24617] = anon_sym_PIPE_PIPE;
	v->a[24618] = actions(844);
	v->a[24619] = 2;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = anon_sym_LT_LT;
	v->a[24621] = anon_sym_LT_LT_DASH;
	v->a[24622] = state(1216);
	v->a[24623] = 2;
	v->a[24624] = sym_variable_assignment;
	v->a[24625] = aux_sym__variable_assignments_repeat1;
	v->a[24626] = state(1214);
	v->a[24627] = 3;
	v->a[24628] = sym_file_redirect;
	v->a[24629] = sym_heredoc_redirect;
	v->a[24630] = aux_sym_redirected_statement_repeat1;
	v->a[24631] = actions(805);
	v->a[24632] = 19;
	v->a[24633] = anon_sym_LT;
	v->a[24634] = anon_sym_GT;
	v->a[24635] = anon_sym_GT_GT;
	v->a[24636] = anon_sym_AMP_GT;
	v->a[24637] = anon_sym_AMP_GT_GT;
	v->a[24638] = anon_sym_LT_AMP;
	v->a[24639] = anon_sym_GT_AMP;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = anon_sym_GT_PIPE;
	v->a[24641] = anon_sym_LT_AMP_DASH;
	v->a[24642] = anon_sym_GT_AMP_DASH;
	v->a[24643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24644] = anon_sym_DOLLAR;
	v->a[24645] = anon_sym_DQUOTE;
	v->a[24646] = sym_raw_string;
	v->a[24647] = sym_number;
	v->a[24648] = anon_sym_DOLLAR_LBRACE;
	v->a[24649] = anon_sym_DOLLAR_LPAREN;
	v->a[24650] = anon_sym_BQUOTE;
	v->a[24651] = sym_word;
	v->a[24652] = 12;
	v->a[24653] = actions(3);
	v->a[24654] = 1;
	v->a[24655] = sym_comment;
	v->a[24656] = actions(717);
	v->a[24657] = 1;
	v->a[24658] = sym_file_descriptor;
	v->a[24659] = actions(824);
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = 1;
	v->a[24661] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24662] = actions(826);
	v->a[24663] = 1;
	v->a[24664] = anon_sym_DOLLAR;
	v->a[24665] = actions(828);
	v->a[24666] = 1;
	v->a[24667] = anon_sym_DQUOTE;
	v->a[24668] = actions(830);
	v->a[24669] = 1;
	v->a[24670] = anon_sym_DOLLAR_LBRACE;
	v->a[24671] = actions(832);
	v->a[24672] = 1;
	v->a[24673] = anon_sym_DOLLAR_LPAREN;
	v->a[24674] = actions(834);
	v->a[24675] = 1;
	v->a[24676] = anon_sym_BQUOTE;
	v->a[24677] = state(1376);
	v->a[24678] = 1;
	v->a[24679] = sym_concatenation;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = actions(855);
	v->a[24681] = 3;
	v->a[24682] = sym_raw_string;
	v->a[24683] = sym_number;
	v->a[24684] = sym_word;
	v->a[24685] = state(1276);
	v->a[24686] = 5;
	v->a[24687] = sym_arithmetic_expansion;
	v->a[24688] = sym_string;
	v->a[24689] = sym_simple_expansion;
	v->a[24690] = sym_expansion;
	v->a[24691] = sym_command_substitution;
	v->a[24692] = actions(719);
	v->a[24693] = 20;
	v->a[24694] = anon_sym_PIPE;
	v->a[24695] = anon_sym_RPAREN;
	v->a[24696] = anon_sym_SEMI_SEMI;
	v->a[24697] = anon_sym_AMP_AMP;
	v->a[24698] = anon_sym_PIPE_PIPE;
	v->a[24699] = anon_sym_LT;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
