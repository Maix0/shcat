/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_56.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_280(t_small_parse_table_array *v)
{
	v->a[5600] = sym_compound_statement;
	v->a[5601] = sym_subshell;
	v->a[5602] = sym_list;
	v->a[5603] = sym_negated_command;
	v->a[5604] = sym_command;
	v->a[5605] = sym__variable_assignments;
	v->a[5606] = 32;
	v->a[5607] = actions(3);
	v->a[5608] = 1;
	v->a[5609] = sym_comment;
	v->a[5610] = actions(9);
	v->a[5611] = 1;
	v->a[5612] = anon_sym_for;
	v->a[5613] = actions(13);
	v->a[5614] = 1;
	v->a[5615] = anon_sym_if;
	v->a[5616] = actions(15);
	v->a[5617] = 1;
	v->a[5618] = anon_sym_case;
	v->a[5619] = actions(17);
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = 1;
	v->a[5621] = anon_sym_LPAREN;
	v->a[5622] = actions(19);
	v->a[5623] = 1;
	v->a[5624] = anon_sym_LBRACE;
	v->a[5625] = actions(59);
	v->a[5626] = 1;
	v->a[5627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5628] = actions(61);
	v->a[5629] = 1;
	v->a[5630] = anon_sym_DOLLAR;
	v->a[5631] = actions(63);
	v->a[5632] = 1;
	v->a[5633] = anon_sym_DQUOTE;
	v->a[5634] = actions(67);
	v->a[5635] = 1;
	v->a[5636] = anon_sym_DOLLAR_LBRACE;
	v->a[5637] = actions(69);
	v->a[5638] = 1;
	v->a[5639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = actions(71);
	v->a[5641] = 1;
	v->a[5642] = anon_sym_BQUOTE;
	v->a[5643] = actions(220);
	v->a[5644] = 1;
	v->a[5645] = sym_word;
	v->a[5646] = actions(222);
	v->a[5647] = 1;
	v->a[5648] = anon_sym_BANG;
	v->a[5649] = actions(230);
	v->a[5650] = 1;
	v->a[5651] = sym_file_descriptor;
	v->a[5652] = actions(232);
	v->a[5653] = 1;
	v->a[5654] = sym_variable_name;
	v->a[5655] = state(126);
	v->a[5656] = 1;
	v->a[5657] = aux_sym__statements_repeat1;
	v->a[5658] = state(184);
	v->a[5659] = 1;
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = sym_command_name;
	v->a[5661] = state(268);
	v->a[5662] = 1;
	v->a[5663] = sym_variable_assignment;
	v->a[5664] = state(647);
	v->a[5665] = 1;
	v->a[5666] = sym_concatenation;
	v->a[5667] = state(738);
	v->a[5668] = 1;
	v->a[5669] = sym_file_redirect;
	v->a[5670] = state(828);
	v->a[5671] = 1;
	v->a[5672] = aux_sym_command_repeat1;
	v->a[5673] = state(1314);
	v->a[5674] = 1;
	v->a[5675] = sym_pipeline;
	v->a[5676] = state(1331);
	v->a[5677] = 1;
	v->a[5678] = aux_sym_redirected_statement_repeat2;
	v->a[5679] = state(2252);
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = 1;
	v->a[5681] = sym__statement_not_pipeline;
	v->a[5682] = state(2459);
	v->a[5683] = 1;
	v->a[5684] = sym__statements;
	v->a[5685] = actions(11);
	v->a[5686] = 2;
	v->a[5687] = anon_sym_while;
	v->a[5688] = anon_sym_until;
	v->a[5689] = actions(226);
	v->a[5690] = 2;
	v->a[5691] = anon_sym_LT_AMP_DASH;
	v->a[5692] = anon_sym_GT_AMP_DASH;
	v->a[5693] = actions(228);
	v->a[5694] = 2;
	v->a[5695] = sym_raw_string;
	v->a[5696] = sym_number;
	v->a[5697] = state(294);
	v->a[5698] = 5;
	v->a[5699] = sym_arithmetic_expansion;
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
