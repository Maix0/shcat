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
	v->a[13600] = state(905);
	v->a[13601] = 1;
	v->a[13602] = sym_file_redirect;
	v->a[13603] = state(1422);
	v->a[13604] = 1;
	v->a[13605] = sym_pipeline;
	v->a[13606] = state(1429);
	v->a[13607] = 1;
	v->a[13608] = aux_sym_redirected_statement_repeat2;
	v->a[13609] = state(2271);
	v->a[13610] = 1;
	v->a[13611] = sym__statement_not_pipeline;
	v->a[13612] = state(2417);
	v->a[13613] = 1;
	v->a[13614] = sym__statements;
	v->a[13615] = actions(11);
	v->a[13616] = 2;
	v->a[13617] = anon_sym_while;
	v->a[13618] = anon_sym_until;
	v->a[13619] = actions(57);
	small_parse_table_681(v);
}

void	small_parse_table_681(t_small_parse_table_array *v)
{
	v->a[13620] = 2;
	v->a[13621] = anon_sym_LT_AMP_DASH;
	v->a[13622] = anon_sym_GT_AMP_DASH;
	v->a[13623] = actions(65);
	v->a[13624] = 2;
	v->a[13625] = sym_raw_string;
	v->a[13626] = sym_number;
	v->a[13627] = state(394);
	v->a[13628] = 5;
	v->a[13629] = sym_arithmetic_expansion;
	v->a[13630] = sym_string;
	v->a[13631] = sym_simple_expansion;
	v->a[13632] = sym_expansion;
	v->a[13633] = sym_command_substitution;
	v->a[13634] = actions(55);
	v->a[13635] = 8;
	v->a[13636] = anon_sym_LT;
	v->a[13637] = anon_sym_GT;
	v->a[13638] = anon_sym_GT_GT;
	v->a[13639] = anon_sym_AMP_GT;
	small_parse_table_682(v);
}

void	small_parse_table_682(t_small_parse_table_array *v)
{
	v->a[13640] = anon_sym_AMP_GT_GT;
	v->a[13641] = anon_sym_LT_AMP;
	v->a[13642] = anon_sym_GT_AMP;
	v->a[13643] = anon_sym_GT_PIPE;
	v->a[13644] = state(1211);
	v->a[13645] = 12;
	v->a[13646] = sym_redirected_statement;
	v->a[13647] = sym_for_statement;
	v->a[13648] = sym_while_statement;
	v->a[13649] = sym_if_statement;
	v->a[13650] = sym_case_statement;
	v->a[13651] = sym_function_definition;
	v->a[13652] = sym_compound_statement;
	v->a[13653] = sym_subshell;
	v->a[13654] = sym_list;
	v->a[13655] = sym_negated_command;
	v->a[13656] = sym_command;
	v->a[13657] = sym__variable_assignments;
	v->a[13658] = 32;
	v->a[13659] = actions(3);
	small_parse_table_683(v);
}

void	small_parse_table_683(t_small_parse_table_array *v)
{
	v->a[13660] = 1;
	v->a[13661] = sym_comment;
	v->a[13662] = actions(9);
	v->a[13663] = 1;
	v->a[13664] = anon_sym_for;
	v->a[13665] = actions(13);
	v->a[13666] = 1;
	v->a[13667] = anon_sym_if;
	v->a[13668] = actions(15);
	v->a[13669] = 1;
	v->a[13670] = anon_sym_case;
	v->a[13671] = actions(17);
	v->a[13672] = 1;
	v->a[13673] = anon_sym_LPAREN;
	v->a[13674] = actions(19);
	v->a[13675] = 1;
	v->a[13676] = anon_sym_LBRACE;
	v->a[13677] = actions(59);
	v->a[13678] = 1;
	v->a[13679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_684(v);
}

void	small_parse_table_684(t_small_parse_table_array *v)
{
	v->a[13680] = actions(61);
	v->a[13681] = 1;
	v->a[13682] = anon_sym_DOLLAR;
	v->a[13683] = actions(63);
	v->a[13684] = 1;
	v->a[13685] = anon_sym_DQUOTE;
	v->a[13686] = actions(67);
	v->a[13687] = 1;
	v->a[13688] = anon_sym_DOLLAR_LBRACE;
	v->a[13689] = actions(69);
	v->a[13690] = 1;
	v->a[13691] = anon_sym_DOLLAR_LPAREN;
	v->a[13692] = actions(71);
	v->a[13693] = 1;
	v->a[13694] = anon_sym_BQUOTE;
	v->a[13695] = actions(220);
	v->a[13696] = 1;
	v->a[13697] = sym_word;
	v->a[13698] = actions(222);
	v->a[13699] = 1;
	small_parse_table_685(v);
}

/* EOF small_parse_table_136.c */
