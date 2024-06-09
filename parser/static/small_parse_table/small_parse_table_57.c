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
	v->a[5700] = 1;
	v->a[5701] = sym__statements;
	v->a[5702] = actions(11);
	v->a[5703] = 2;
	v->a[5704] = anon_sym_while;
	v->a[5705] = anon_sym_until;
	v->a[5706] = actions(61);
	v->a[5707] = 2;
	v->a[5708] = anon_sym_LT_AMP_DASH;
	v->a[5709] = anon_sym_GT_AMP_DASH;
	v->a[5710] = state(397);
	v->a[5711] = 6;
	v->a[5712] = sym_arithmetic_expansion;
	v->a[5713] = sym_string;
	v->a[5714] = sym_number;
	v->a[5715] = sym_simple_expansion;
	v->a[5716] = sym_expansion;
	v->a[5717] = sym_command_substitution;
	v->a[5718] = actions(59);
	v->a[5719] = 8;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = anon_sym_LT;
	v->a[5721] = anon_sym_GT;
	v->a[5722] = anon_sym_GT_GT;
	v->a[5723] = anon_sym_AMP_GT;
	v->a[5724] = anon_sym_AMP_GT_GT;
	v->a[5725] = anon_sym_LT_AMP;
	v->a[5726] = anon_sym_GT_AMP;
	v->a[5727] = anon_sym_GT_PIPE;
	v->a[5728] = state(1071);
	v->a[5729] = 12;
	v->a[5730] = sym_redirected_statement;
	v->a[5731] = sym_for_statement;
	v->a[5732] = sym_while_statement;
	v->a[5733] = sym_if_statement;
	v->a[5734] = sym_case_statement;
	v->a[5735] = sym_function_definition;
	v->a[5736] = sym_compound_statement;
	v->a[5737] = sym_subshell;
	v->a[5738] = sym_list;
	v->a[5739] = sym_negated_command;
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = sym_command;
	v->a[5741] = sym_variable_assignments;
	v->a[5742] = 34;
	v->a[5743] = actions(3);
	v->a[5744] = 1;
	v->a[5745] = sym_comment;
	v->a[5746] = actions(9);
	v->a[5747] = 1;
	v->a[5748] = anon_sym_for;
	v->a[5749] = actions(13);
	v->a[5750] = 1;
	v->a[5751] = anon_sym_if;
	v->a[5752] = actions(15);
	v->a[5753] = 1;
	v->a[5754] = anon_sym_case;
	v->a[5755] = actions(17);
	v->a[5756] = 1;
	v->a[5757] = anon_sym_LPAREN;
	v->a[5758] = actions(19);
	v->a[5759] = 1;
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = anon_sym_LBRACE;
	v->a[5761] = actions(63);
	v->a[5762] = 1;
	v->a[5763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5764] = actions(65);
	v->a[5765] = 1;
	v->a[5766] = anon_sym_DOLLAR;
	v->a[5767] = actions(67);
	v->a[5768] = 1;
	v->a[5769] = anon_sym_DQUOTE;
	v->a[5770] = actions(71);
	v->a[5771] = 1;
	v->a[5772] = aux_sym_number_token1;
	v->a[5773] = actions(73);
	v->a[5774] = 1;
	v->a[5775] = aux_sym_number_token2;
	v->a[5776] = actions(75);
	v->a[5777] = 1;
	v->a[5778] = anon_sym_DOLLAR_LBRACE;
	v->a[5779] = actions(77);
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = 1;
	v->a[5781] = anon_sym_DOLLAR_LPAREN;
	v->a[5782] = actions(79);
	v->a[5783] = 1;
	v->a[5784] = anon_sym_BQUOTE;
	v->a[5785] = actions(248);
	v->a[5786] = 1;
	v->a[5787] = sym_word;
	v->a[5788] = actions(250);
	v->a[5789] = 1;
	v->a[5790] = anon_sym_BANG;
	v->a[5791] = actions(256);
	v->a[5792] = 1;
	v->a[5793] = sym_raw_string;
	v->a[5794] = actions(258);
	v->a[5795] = 1;
	v->a[5796] = sym_file_descriptor;
	v->a[5797] = actions(260);
	v->a[5798] = 1;
	v->a[5799] = sym_variable_name;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
