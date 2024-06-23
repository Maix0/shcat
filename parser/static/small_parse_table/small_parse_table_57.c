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
	v->a[5700] = sym_string;
	v->a[5701] = sym_simple_expansion;
	v->a[5702] = sym_expansion;
	v->a[5703] = sym_command_substitution;
	v->a[5704] = actions(224);
	v->a[5705] = 8;
	v->a[5706] = anon_sym_LT;
	v->a[5707] = anon_sym_GT;
	v->a[5708] = anon_sym_GT_GT;
	v->a[5709] = anon_sym_AMP_GT;
	v->a[5710] = anon_sym_AMP_GT_GT;
	v->a[5711] = anon_sym_LT_AMP;
	v->a[5712] = anon_sym_GT_AMP;
	v->a[5713] = anon_sym_GT_PIPE;
	v->a[5714] = state(1188);
	v->a[5715] = 12;
	v->a[5716] = sym_redirected_statement;
	v->a[5717] = sym_for_statement;
	v->a[5718] = sym_while_statement;
	v->a[5719] = sym_if_statement;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = sym_case_statement;
	v->a[5721] = sym_function_definition;
	v->a[5722] = sym_compound_statement;
	v->a[5723] = sym_subshell;
	v->a[5724] = sym_list;
	v->a[5725] = sym_negated_command;
	v->a[5726] = sym_command;
	v->a[5727] = sym__variable_assignments;
	v->a[5728] = 32;
	v->a[5729] = actions(3);
	v->a[5730] = 1;
	v->a[5731] = sym_comment;
	v->a[5732] = actions(9);
	v->a[5733] = 1;
	v->a[5734] = anon_sym_for;
	v->a[5735] = actions(13);
	v->a[5736] = 1;
	v->a[5737] = anon_sym_if;
	v->a[5738] = actions(15);
	v->a[5739] = 1;
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = anon_sym_case;
	v->a[5741] = actions(17);
	v->a[5742] = 1;
	v->a[5743] = anon_sym_LPAREN;
	v->a[5744] = actions(19);
	v->a[5745] = 1;
	v->a[5746] = anon_sym_LBRACE;
	v->a[5747] = actions(59);
	v->a[5748] = 1;
	v->a[5749] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5750] = actions(61);
	v->a[5751] = 1;
	v->a[5752] = anon_sym_DOLLAR;
	v->a[5753] = actions(63);
	v->a[5754] = 1;
	v->a[5755] = anon_sym_DQUOTE;
	v->a[5756] = actions(67);
	v->a[5757] = 1;
	v->a[5758] = anon_sym_DOLLAR_LBRACE;
	v->a[5759] = actions(69);
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = 1;
	v->a[5761] = anon_sym_DOLLAR_LPAREN;
	v->a[5762] = actions(71);
	v->a[5763] = 1;
	v->a[5764] = anon_sym_BQUOTE;
	v->a[5765] = actions(220);
	v->a[5766] = 1;
	v->a[5767] = sym_word;
	v->a[5768] = actions(222);
	v->a[5769] = 1;
	v->a[5770] = anon_sym_BANG;
	v->a[5771] = actions(230);
	v->a[5772] = 1;
	v->a[5773] = sym_file_descriptor;
	v->a[5774] = actions(232);
	v->a[5775] = 1;
	v->a[5776] = sym_variable_name;
	v->a[5777] = state(126);
	v->a[5778] = 1;
	v->a[5779] = aux_sym__statements_repeat1;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = state(184);
	v->a[5781] = 1;
	v->a[5782] = sym_command_name;
	v->a[5783] = state(268);
	v->a[5784] = 1;
	v->a[5785] = sym_variable_assignment;
	v->a[5786] = state(647);
	v->a[5787] = 1;
	v->a[5788] = sym_concatenation;
	v->a[5789] = state(752);
	v->a[5790] = 1;
	v->a[5791] = sym_file_redirect;
	v->a[5792] = state(828);
	v->a[5793] = 1;
	v->a[5794] = aux_sym_command_repeat1;
	v->a[5795] = state(1314);
	v->a[5796] = 1;
	v->a[5797] = sym_pipeline;
	v->a[5798] = state(1331);
	v->a[5799] = 1;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
