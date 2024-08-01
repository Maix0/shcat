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
	v->a[5700] = aux_sym_redirected_statement_repeat2;
	v->a[5701] = state(1561);
	v->a[5702] = 1;
	v->a[5703] = sym__statement_not_pipeline;
	v->a[5704] = actions(129);
	v->a[5705] = 2;
	v->a[5706] = anon_sym_while;
	v->a[5707] = anon_sym_until;
	v->a[5708] = actions(161);
	v->a[5709] = 2;
	v->a[5710] = sym_raw_string;
	v->a[5711] = sym_number;
	v->a[5712] = actions(149);
	v->a[5713] = 3;
	v->a[5714] = anon_sym_LT;
	v->a[5715] = anon_sym_GT;
	v->a[5716] = anon_sym_GT_GT;
	v->a[5717] = state(401);
	v->a[5718] = 5;
	v->a[5719] = sym_arithmetic_expansion;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = sym_string;
	v->a[5721] = sym_simple_expansion;
	v->a[5722] = sym_expansion;
	v->a[5723] = sym_command_substitution;
	v->a[5724] = state(920);
	v->a[5725] = 12;
	v->a[5726] = sym_redirected_statement;
	v->a[5727] = sym_for_statement;
	v->a[5728] = sym_while_statement;
	v->a[5729] = sym_if_statement;
	v->a[5730] = sym_case_statement;
	v->a[5731] = sym_function_definition;
	v->a[5732] = sym_compound_statement;
	v->a[5733] = sym_subshell;
	v->a[5734] = sym_list;
	v->a[5735] = sym_negated_command;
	v->a[5736] = sym_command;
	v->a[5737] = sym__variable_assignments;
	v->a[5738] = 30;
	v->a[5739] = actions(3);
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = 1;
	v->a[5741] = sym_comment;
	v->a[5742] = actions(9);
	v->a[5743] = 1;
	v->a[5744] = anon_sym_for;
	v->a[5745] = actions(13);
	v->a[5746] = 1;
	v->a[5747] = anon_sym_if;
	v->a[5748] = actions(15);
	v->a[5749] = 1;
	v->a[5750] = anon_sym_case;
	v->a[5751] = actions(17);
	v->a[5752] = 1;
	v->a[5753] = anon_sym_LPAREN;
	v->a[5754] = actions(19);
	v->a[5755] = 1;
	v->a[5756] = anon_sym_LBRACE;
	v->a[5757] = actions(53);
	v->a[5758] = 1;
	v->a[5759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = actions(55);
	v->a[5761] = 1;
	v->a[5762] = anon_sym_DOLLAR;
	v->a[5763] = actions(57);
	v->a[5764] = 1;
	v->a[5765] = anon_sym_DQUOTE;
	v->a[5766] = actions(61);
	v->a[5767] = 1;
	v->a[5768] = anon_sym_DOLLAR_LBRACE;
	v->a[5769] = actions(63);
	v->a[5770] = 1;
	v->a[5771] = anon_sym_DOLLAR_LPAREN;
	v->a[5772] = actions(65);
	v->a[5773] = 1;
	v->a[5774] = anon_sym_BQUOTE;
	v->a[5775] = actions(208);
	v->a[5776] = 1;
	v->a[5777] = sym_word;
	v->a[5778] = actions(210);
	v->a[5779] = 1;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = anon_sym_BANG;
	v->a[5781] = actions(216);
	v->a[5782] = 1;
	v->a[5783] = sym_variable_name;
	v->a[5784] = state(112);
	v->a[5785] = 1;
	v->a[5786] = aux_sym__statements_repeat1;
	v->a[5787] = state(158);
	v->a[5788] = 1;
	v->a[5789] = sym_command_name;
	v->a[5790] = state(186);
	v->a[5791] = 1;
	v->a[5792] = sym_variable_assignment;
	v->a[5793] = state(298);
	v->a[5794] = 1;
	v->a[5795] = aux_sym_command_repeat1;
	v->a[5796] = state(555);
	v->a[5797] = 1;
	v->a[5798] = sym_concatenation;
	v->a[5799] = state(581);
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
