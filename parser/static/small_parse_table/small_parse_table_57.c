/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_57.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_285(t_small_parse_table_array *v)
{
	v->a[5700] = 2;
	v->a[5701] = anon_sym_while;
	v->a[5702] = anon_sym_until;
	v->a[5703] = actions(61);
	v->a[5704] = 2;
	v->a[5705] = sym_raw_string;
	v->a[5706] = sym_number;
	v->a[5707] = state(455);
	v->a[5708] = 5;
	v->a[5709] = sym_arithmetic_expansion;
	v->a[5710] = sym_string;
	v->a[5711] = sym_simple_expansion;
	v->a[5712] = sym_expansion;
	v->a[5713] = sym_command_substitution;
	v->a[5714] = actions(53);
	v->a[5715] = 7;
	v->a[5716] = anon_sym_LT;
	v->a[5717] = anon_sym_GT;
	v->a[5718] = anon_sym_GT_GT;
	v->a[5719] = anon_sym_LT_AMP;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = anon_sym_GT_AMP;
	v->a[5721] = anon_sym_GT_PIPE;
	v->a[5722] = anon_sym_LT_GT;
	v->a[5723] = state(1090);
	v->a[5724] = 12;
	v->a[5725] = sym_redirected_statement;
	v->a[5726] = sym_for_statement;
	v->a[5727] = sym_while_statement;
	v->a[5728] = sym_if_statement;
	v->a[5729] = sym_case_statement;
	v->a[5730] = sym_function_definition;
	v->a[5731] = sym_compound_statement;
	v->a[5732] = sym_subshell;
	v->a[5733] = sym_list;
	v->a[5734] = sym_negated_command;
	v->a[5735] = sym_command;
	v->a[5736] = sym__variable_assignments;
	v->a[5737] = 31;
	v->a[5738] = actions(3);
	v->a[5739] = 1;
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = sym_comment;
	v->a[5741] = actions(9);
	v->a[5742] = 1;
	v->a[5743] = anon_sym_for;
	v->a[5744] = actions(13);
	v->a[5745] = 1;
	v->a[5746] = anon_sym_if;
	v->a[5747] = actions(15);
	v->a[5748] = 1;
	v->a[5749] = anon_sym_case;
	v->a[5750] = actions(17);
	v->a[5751] = 1;
	v->a[5752] = anon_sym_LPAREN;
	v->a[5753] = actions(19);
	v->a[5754] = 1;
	v->a[5755] = anon_sym_LBRACE;
	v->a[5756] = actions(55);
	v->a[5757] = 1;
	v->a[5758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5759] = actions(57);
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = 1;
	v->a[5761] = anon_sym_DOLLAR;
	v->a[5762] = actions(59);
	v->a[5763] = 1;
	v->a[5764] = anon_sym_DQUOTE;
	v->a[5765] = actions(63);
	v->a[5766] = 1;
	v->a[5767] = anon_sym_DOLLAR_LBRACE;
	v->a[5768] = actions(65);
	v->a[5769] = 1;
	v->a[5770] = anon_sym_DOLLAR_LPAREN;
	v->a[5771] = actions(67);
	v->a[5772] = 1;
	v->a[5773] = anon_sym_BQUOTE;
	v->a[5774] = actions(69);
	v->a[5775] = 1;
	v->a[5776] = sym_file_descriptor;
	v->a[5777] = actions(71);
	v->a[5778] = 1;
	v->a[5779] = sym_variable_name;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = actions(223);
	v->a[5781] = 1;
	v->a[5782] = sym_word;
	v->a[5783] = actions(225);
	v->a[5784] = 1;
	v->a[5785] = anon_sym_BANG;
	v->a[5786] = state(129);
	v->a[5787] = 1;
	v->a[5788] = aux_sym__statements_repeat1;
	v->a[5789] = state(178);
	v->a[5790] = 1;
	v->a[5791] = sym_command_name;
	v->a[5792] = state(339);
	v->a[5793] = 1;
	v->a[5794] = sym_variable_assignment;
	v->a[5795] = state(585);
	v->a[5796] = 1;
	v->a[5797] = aux_sym_command_repeat1;
	v->a[5798] = state(661);
	v->a[5799] = 1;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
