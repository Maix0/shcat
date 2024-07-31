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
	v->a[5700] = sym_while_statement;
	v->a[5701] = sym_if_statement;
	v->a[5702] = sym_case_statement;
	v->a[5703] = sym_function_definition;
	v->a[5704] = sym_compound_statement;
	v->a[5705] = sym_subshell;
	v->a[5706] = sym_list;
	v->a[5707] = sym_negated_command;
	v->a[5708] = sym_command;
	v->a[5709] = sym__variable_assignments;
	v->a[5710] = 30;
	v->a[5711] = actions(3);
	v->a[5712] = 1;
	v->a[5713] = sym_comment;
	v->a[5714] = actions(9);
	v->a[5715] = 1;
	v->a[5716] = anon_sym_for;
	v->a[5717] = actions(13);
	v->a[5718] = 1;
	v->a[5719] = anon_sym_if;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = actions(15);
	v->a[5721] = 1;
	v->a[5722] = anon_sym_case;
	v->a[5723] = actions(17);
	v->a[5724] = 1;
	v->a[5725] = anon_sym_LPAREN;
	v->a[5726] = actions(19);
	v->a[5727] = 1;
	v->a[5728] = anon_sym_LBRACE;
	v->a[5729] = actions(53);
	v->a[5730] = 1;
	v->a[5731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5732] = actions(55);
	v->a[5733] = 1;
	v->a[5734] = anon_sym_DOLLAR;
	v->a[5735] = actions(57);
	v->a[5736] = 1;
	v->a[5737] = anon_sym_DQUOTE;
	v->a[5738] = actions(61);
	v->a[5739] = 1;
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = anon_sym_DOLLAR_LBRACE;
	v->a[5741] = actions(63);
	v->a[5742] = 1;
	v->a[5743] = anon_sym_DOLLAR_LPAREN;
	v->a[5744] = actions(65);
	v->a[5745] = 1;
	v->a[5746] = anon_sym_BQUOTE;
	v->a[5747] = actions(206);
	v->a[5748] = 1;
	v->a[5749] = sym_word;
	v->a[5750] = actions(208);
	v->a[5751] = 1;
	v->a[5752] = anon_sym_BANG;
	v->a[5753] = actions(214);
	v->a[5754] = 1;
	v->a[5755] = sym_variable_name;
	v->a[5756] = state(106);
	v->a[5757] = 1;
	v->a[5758] = aux_sym__statements_repeat1;
	v->a[5759] = state(227);
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = 1;
	v->a[5761] = sym_command_name;
	v->a[5762] = state(277);
	v->a[5763] = 1;
	v->a[5764] = sym_variable_assignment;
	v->a[5765] = state(506);
	v->a[5766] = 1;
	v->a[5767] = aux_sym_command_repeat1;
	v->a[5768] = state(552);
	v->a[5769] = 1;
	v->a[5770] = sym_file_redirect;
	v->a[5771] = state(602);
	v->a[5772] = 1;
	v->a[5773] = sym_concatenation;
	v->a[5774] = state(911);
	v->a[5775] = 1;
	v->a[5776] = sym_pipeline;
	v->a[5777] = state(1001);
	v->a[5778] = 1;
	v->a[5779] = aux_sym_redirected_statement_repeat2;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = state(1606);
	v->a[5781] = 1;
	v->a[5782] = sym__statement_not_pipeline;
	v->a[5783] = state(1666);
	v->a[5784] = 1;
	v->a[5785] = sym__statements;
	v->a[5786] = actions(11);
	v->a[5787] = 2;
	v->a[5788] = anon_sym_while;
	v->a[5789] = anon_sym_until;
	v->a[5790] = actions(212);
	v->a[5791] = 2;
	v->a[5792] = sym_raw_string;
	v->a[5793] = sym_number;
	v->a[5794] = state(327);
	v->a[5795] = 5;
	v->a[5796] = sym_arithmetic_expansion;
	v->a[5797] = sym_string;
	v->a[5798] = sym_simple_expansion;
	v->a[5799] = sym_expansion;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
