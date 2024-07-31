/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_136.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_680(t_small_parse_table_array *v)
{
	v->a[13600] = anon_sym_GT_GT;
	v->a[13601] = anon_sym_LT_AMP;
	v->a[13602] = anon_sym_GT_AMP;
	v->a[13603] = anon_sym_GT_PIPE;
	v->a[13604] = anon_sym_LT_GT;
	v->a[13605] = state(938);
	v->a[13606] = 12;
	v->a[13607] = sym_redirected_statement;
	v->a[13608] = sym_for_statement;
	v->a[13609] = sym_while_statement;
	v->a[13610] = sym_if_statement;
	v->a[13611] = sym_case_statement;
	v->a[13612] = sym_function_definition;
	v->a[13613] = sym_compound_statement;
	v->a[13614] = sym_subshell;
	v->a[13615] = sym_list;
	v->a[13616] = sym_negated_command;
	v->a[13617] = sym_command;
	v->a[13618] = sym__variable_assignments;
	v->a[13619] = 40;
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = actions(3);
	v->a[13621] = 1;
	v->a[13622] = sym_comment;
	v->a[13623] = actions(9);
	v->a[13624] = 1;
	v->a[13625] = anon_sym_for;
	v->a[13626] = actions(13);
	v->a[13627] = 1;
	v->a[13628] = anon_sym_if;
	v->a[13629] = actions(15);
	v->a[13630] = 1;
	v->a[13631] = anon_sym_case;
	v->a[13632] = actions(17);
	v->a[13633] = 1;
	v->a[13634] = anon_sym_LPAREN;
	v->a[13635] = actions(19);
	v->a[13636] = 1;
	v->a[13637] = anon_sym_LBRACE;
	v->a[13638] = actions(53);
	v->a[13639] = 1;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13641] = actions(55);
	v->a[13642] = 1;
	v->a[13643] = anon_sym_DOLLAR;
	v->a[13644] = actions(57);
	v->a[13645] = 1;
	v->a[13646] = anon_sym_DQUOTE;
	v->a[13647] = actions(61);
	v->a[13648] = 1;
	v->a[13649] = anon_sym_DOLLAR_LBRACE;
	v->a[13650] = actions(63);
	v->a[13651] = 1;
	v->a[13652] = anon_sym_DOLLAR_LPAREN;
	v->a[13653] = actions(65);
	v->a[13654] = 1;
	v->a[13655] = anon_sym_BQUOTE;
	v->a[13656] = actions(67);
	v->a[13657] = 1;
	v->a[13658] = sym_variable_name;
	v->a[13659] = actions(202);
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = 1;
	v->a[13661] = sym_word;
	v->a[13662] = actions(204);
	v->a[13663] = 1;
	v->a[13664] = anon_sym_BANG;
	v->a[13665] = state(105);
	v->a[13666] = 1;
	v->a[13667] = aux_sym__statements_repeat1;
	v->a[13668] = state(272);
	v->a[13669] = 1;
	v->a[13670] = sym_command_name;
	v->a[13671] = state(300);
	v->a[13672] = 1;
	v->a[13673] = sym_variable_assignment;
	v->a[13674] = state(486);
	v->a[13675] = 1;
	v->a[13676] = aux_sym_command_repeat1;
	v->a[13677] = state(602);
	v->a[13678] = 1;
	v->a[13679] = sym_concatenation;
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = state(636);
	v->a[13681] = 1;
	v->a[13682] = sym_file_redirect;
	v->a[13683] = state(814);
	v->a[13684] = 1;
	v->a[13685] = sym_subshell;
	v->a[13686] = state(824);
	v->a[13687] = 1;
	v->a[13688] = sym_redirected_statement;
	v->a[13689] = state(825);
	v->a[13690] = 1;
	v->a[13691] = sym__variable_assignments;
	v->a[13692] = state(826);
	v->a[13693] = 1;
	v->a[13694] = sym_command;
	v->a[13695] = state(832);
	v->a[13696] = 1;
	v->a[13697] = sym_for_statement;
	v->a[13698] = state(833);
	v->a[13699] = 1;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
