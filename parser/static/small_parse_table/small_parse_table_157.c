/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_157.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_785(t_small_parse_table_array *v)
{
	v->a[15700] = state(1196);
	v->a[15701] = 1;
	v->a[15702] = aux_sym_redirected_statement_repeat2;
	v->a[15703] = state(1910);
	v->a[15704] = 1;
	v->a[15705] = sym__statement_not_pipeline;
	v->a[15706] = actions(11);
	v->a[15707] = 2;
	v->a[15708] = anon_sym_while;
	v->a[15709] = anon_sym_until;
	v->a[15710] = actions(61);
	v->a[15711] = 2;
	v->a[15712] = sym_raw_string;
	v->a[15713] = sym_number;
	v->a[15714] = state(436);
	v->a[15715] = 5;
	v->a[15716] = sym_arithmetic_expansion;
	v->a[15717] = sym_string;
	v->a[15718] = sym_simple_expansion;
	v->a[15719] = sym_expansion;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = sym_command_substitution;
	v->a[15721] = actions(53);
	v->a[15722] = 7;
	v->a[15723] = anon_sym_LT;
	v->a[15724] = anon_sym_GT;
	v->a[15725] = anon_sym_GT_GT;
	v->a[15726] = anon_sym_LT_AMP;
	v->a[15727] = anon_sym_GT_AMP;
	v->a[15728] = anon_sym_GT_PIPE;
	v->a[15729] = anon_sym_LT_GT;
	v->a[15730] = state(1021);
	v->a[15731] = 12;
	v->a[15732] = sym_redirected_statement;
	v->a[15733] = sym_for_statement;
	v->a[15734] = sym_while_statement;
	v->a[15735] = sym_if_statement;
	v->a[15736] = sym_case_statement;
	v->a[15737] = sym_function_definition;
	v->a[15738] = sym_compound_statement;
	v->a[15739] = sym_subshell;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = sym_list;
	v->a[15741] = sym_negated_command;
	v->a[15742] = sym_command;
	v->a[15743] = sym__variable_assignments;
	v->a[15744] = 28;
	v->a[15745] = actions(3);
	v->a[15746] = 1;
	v->a[15747] = sym_comment;
	v->a[15748] = actions(311);
	v->a[15749] = 1;
	v->a[15750] = sym_word;
	v->a[15751] = actions(313);
	v->a[15752] = 1;
	v->a[15753] = anon_sym_for;
	v->a[15754] = actions(317);
	v->a[15755] = 1;
	v->a[15756] = anon_sym_if;
	v->a[15757] = actions(319);
	v->a[15758] = 1;
	v->a[15759] = anon_sym_case;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = actions(321);
	v->a[15761] = 1;
	v->a[15762] = anon_sym_LPAREN;
	v->a[15763] = actions(323);
	v->a[15764] = 1;
	v->a[15765] = anon_sym_LBRACE;
	v->a[15766] = actions(325);
	v->a[15767] = 1;
	v->a[15768] = anon_sym_BANG;
	v->a[15769] = actions(329);
	v->a[15770] = 1;
	v->a[15771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15772] = actions(331);
	v->a[15773] = 1;
	v->a[15774] = anon_sym_DOLLAR;
	v->a[15775] = actions(333);
	v->a[15776] = 1;
	v->a[15777] = anon_sym_DQUOTE;
	v->a[15778] = actions(337);
	v->a[15779] = 1;
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = anon_sym_DOLLAR_LBRACE;
	v->a[15781] = actions(339);
	v->a[15782] = 1;
	v->a[15783] = anon_sym_DOLLAR_LPAREN;
	v->a[15784] = actions(341);
	v->a[15785] = 1;
	v->a[15786] = anon_sym_BQUOTE;
	v->a[15787] = actions(343);
	v->a[15788] = 1;
	v->a[15789] = sym_file_descriptor;
	v->a[15790] = actions(345);
	v->a[15791] = 1;
	v->a[15792] = sym_variable_name;
	v->a[15793] = state(364);
	v->a[15794] = 1;
	v->a[15795] = sym_command_name;
	v->a[15796] = state(626);
	v->a[15797] = 1;
	v->a[15798] = aux_sym_command_repeat1;
	v->a[15799] = state(686);
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
