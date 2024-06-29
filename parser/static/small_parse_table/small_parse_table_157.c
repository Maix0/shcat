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
	v->a[15700] = 8;
	v->a[15701] = anon_sym_LT;
	v->a[15702] = anon_sym_GT;
	v->a[15703] = anon_sym_GT_GT;
	v->a[15704] = anon_sym_AMP_GT;
	v->a[15705] = anon_sym_AMP_GT_GT;
	v->a[15706] = anon_sym_LT_AMP;
	v->a[15707] = anon_sym_GT_AMP;
	v->a[15708] = anon_sym_GT_PIPE;
	v->a[15709] = state(1112);
	v->a[15710] = 12;
	v->a[15711] = sym_redirected_statement;
	v->a[15712] = sym_for_statement;
	v->a[15713] = sym_while_statement;
	v->a[15714] = sym_if_statement;
	v->a[15715] = sym_case_statement;
	v->a[15716] = sym_function_definition;
	v->a[15717] = sym_compound_statement;
	v->a[15718] = sym_subshell;
	v->a[15719] = sym_list;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = sym_negated_command;
	v->a[15721] = sym_command;
	v->a[15722] = sym__variable_assignments;
	v->a[15723] = 42;
	v->a[15724] = actions(3);
	v->a[15725] = 1;
	v->a[15726] = sym_comment;
	v->a[15727] = actions(9);
	v->a[15728] = 1;
	v->a[15729] = anon_sym_for;
	v->a[15730] = actions(13);
	v->a[15731] = 1;
	v->a[15732] = anon_sym_if;
	v->a[15733] = actions(15);
	v->a[15734] = 1;
	v->a[15735] = anon_sym_case;
	v->a[15736] = actions(17);
	v->a[15737] = 1;
	v->a[15738] = anon_sym_LPAREN;
	v->a[15739] = actions(19);
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = 1;
	v->a[15741] = anon_sym_LBRACE;
	v->a[15742] = actions(59);
	v->a[15743] = 1;
	v->a[15744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15745] = actions(61);
	v->a[15746] = 1;
	v->a[15747] = anon_sym_DOLLAR;
	v->a[15748] = actions(63);
	v->a[15749] = 1;
	v->a[15750] = anon_sym_DQUOTE;
	v->a[15751] = actions(67);
	v->a[15752] = 1;
	v->a[15753] = anon_sym_DOLLAR_LBRACE;
	v->a[15754] = actions(69);
	v->a[15755] = 1;
	v->a[15756] = anon_sym_DOLLAR_LPAREN;
	v->a[15757] = actions(71);
	v->a[15758] = 1;
	v->a[15759] = anon_sym_BQUOTE;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = actions(73);
	v->a[15761] = 1;
	v->a[15762] = sym_file_descriptor;
	v->a[15763] = actions(75);
	v->a[15764] = 1;
	v->a[15765] = sym_variable_name;
	v->a[15766] = actions(234);
	v->a[15767] = 1;
	v->a[15768] = sym_word;
	v->a[15769] = actions(236);
	v->a[15770] = 1;
	v->a[15771] = anon_sym_BANG;
	v->a[15772] = state(137);
	v->a[15773] = 1;
	v->a[15774] = aux_sym__statements_repeat1;
	v->a[15775] = state(189);
	v->a[15776] = 1;
	v->a[15777] = sym_command_name;
	v->a[15778] = state(253);
	v->a[15779] = 1;
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = sym_variable_assignment;
	v->a[15781] = state(624);
	v->a[15782] = 1;
	v->a[15783] = sym_concatenation;
	v->a[15784] = state(672);
	v->a[15785] = 1;
	v->a[15786] = aux_sym_command_repeat1;
	v->a[15787] = state(787);
	v->a[15788] = 1;
	v->a[15789] = sym_file_redirect;
	v->a[15790] = state(1010);
	v->a[15791] = 1;
	v->a[15792] = sym__variable_assignments;
	v->a[15793] = state(1012);
	v->a[15794] = 1;
	v->a[15795] = sym_command;
	v->a[15796] = state(1013);
	v->a[15797] = 1;
	v->a[15798] = sym_negated_command;
	v->a[15799] = state(1015);
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
