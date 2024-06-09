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
	v->a[15700] = sym_expansion;
	v->a[15701] = sym_command_substitution;
	v->a[15702] = actions(252);
	v->a[15703] = 8;
	v->a[15704] = anon_sym_LT;
	v->a[15705] = anon_sym_GT;
	v->a[15706] = anon_sym_GT_GT;
	v->a[15707] = anon_sym_AMP_GT;
	v->a[15708] = anon_sym_AMP_GT_GT;
	v->a[15709] = anon_sym_LT_AMP;
	v->a[15710] = anon_sym_GT_AMP;
	v->a[15711] = anon_sym_GT_PIPE;
	v->a[15712] = state(1031);
	v->a[15713] = 12;
	v->a[15714] = sym_redirected_statement;
	v->a[15715] = sym_for_statement;
	v->a[15716] = sym_while_statement;
	v->a[15717] = sym_if_statement;
	v->a[15718] = sym_case_statement;
	v->a[15719] = sym_function_definition;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = sym_compound_statement;
	v->a[15721] = sym_subshell;
	v->a[15722] = sym_list;
	v->a[15723] = sym_negated_command;
	v->a[15724] = sym_command;
	v->a[15725] = sym_variable_assignments;
	v->a[15726] = 34;
	v->a[15727] = actions(3);
	v->a[15728] = 1;
	v->a[15729] = sym_comment;
	v->a[15730] = actions(9);
	v->a[15731] = 1;
	v->a[15732] = anon_sym_for;
	v->a[15733] = actions(13);
	v->a[15734] = 1;
	v->a[15735] = anon_sym_if;
	v->a[15736] = actions(15);
	v->a[15737] = 1;
	v->a[15738] = anon_sym_case;
	v->a[15739] = actions(17);
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = 1;
	v->a[15741] = anon_sym_LPAREN;
	v->a[15742] = actions(19);
	v->a[15743] = 1;
	v->a[15744] = anon_sym_LBRACE;
	v->a[15745] = actions(63);
	v->a[15746] = 1;
	v->a[15747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15748] = actions(65);
	v->a[15749] = 1;
	v->a[15750] = anon_sym_DOLLAR;
	v->a[15751] = actions(67);
	v->a[15752] = 1;
	v->a[15753] = anon_sym_DQUOTE;
	v->a[15754] = actions(71);
	v->a[15755] = 1;
	v->a[15756] = aux_sym_number_token1;
	v->a[15757] = actions(73);
	v->a[15758] = 1;
	v->a[15759] = aux_sym_number_token2;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = actions(75);
	v->a[15761] = 1;
	v->a[15762] = anon_sym_DOLLAR_LBRACE;
	v->a[15763] = actions(77);
	v->a[15764] = 1;
	v->a[15765] = anon_sym_DOLLAR_LPAREN;
	v->a[15766] = actions(79);
	v->a[15767] = 1;
	v->a[15768] = anon_sym_BQUOTE;
	v->a[15769] = actions(248);
	v->a[15770] = 1;
	v->a[15771] = sym_word;
	v->a[15772] = actions(250);
	v->a[15773] = 1;
	v->a[15774] = anon_sym_BANG;
	v->a[15775] = actions(256);
	v->a[15776] = 1;
	v->a[15777] = sym_raw_string;
	v->a[15778] = actions(258);
	v->a[15779] = 1;
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = sym_file_descriptor;
	v->a[15781] = actions(260);
	v->a[15782] = 1;
	v->a[15783] = sym_variable_name;
	v->a[15784] = state(141);
	v->a[15785] = 1;
	v->a[15786] = aux_sym__statements_repeat1;
	v->a[15787] = state(175);
	v->a[15788] = 1;
	v->a[15789] = sym_command_name;
	v->a[15790] = state(278);
	v->a[15791] = 1;
	v->a[15792] = sym_variable_assignment;
	v->a[15793] = state(567);
	v->a[15794] = 1;
	v->a[15795] = aux_sym_command_repeat1;
	v->a[15796] = state(582);
	v->a[15797] = 1;
	v->a[15798] = sym_concatenation;
	v->a[15799] = state(738);
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
