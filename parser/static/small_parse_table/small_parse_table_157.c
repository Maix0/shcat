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
	v->a[15700] = 2;
	v->a[15701] = anon_sym_while;
	v->a[15702] = anon_sym_until;
	v->a[15703] = actions(212);
	v->a[15704] = 3;
	v->a[15705] = sym_raw_string;
	v->a[15706] = sym_number;
	v->a[15707] = sym_word;
	v->a[15708] = state(327);
	v->a[15709] = 5;
	v->a[15710] = sym_arithmetic_expansion;
	v->a[15711] = sym_string;
	v->a[15712] = sym_simple_expansion;
	v->a[15713] = sym_expansion;
	v->a[15714] = sym_command_substitution;
	v->a[15715] = actions(210);
	v->a[15716] = 7;
	v->a[15717] = anon_sym_LT;
	v->a[15718] = anon_sym_GT;
	v->a[15719] = anon_sym_GT_GT;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = anon_sym_LT_AMP;
	v->a[15721] = anon_sym_GT_AMP;
	v->a[15722] = anon_sym_GT_PIPE;
	v->a[15723] = anon_sym_LT_GT;
	v->a[15724] = state(974);
	v->a[15725] = 7;
	v->a[15726] = sym_for_statement;
	v->a[15727] = sym_while_statement;
	v->a[15728] = sym_if_statement;
	v->a[15729] = sym_compound_statement;
	v->a[15730] = sym_subshell;
	v->a[15731] = sym_command;
	v->a[15732] = sym__variable_assignments;
	v->a[15733] = 23;
	v->a[15734] = actions(3);
	v->a[15735] = 1;
	v->a[15736] = sym_comment;
	v->a[15737] = actions(9);
	v->a[15738] = 1;
	v->a[15739] = anon_sym_for;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = actions(13);
	v->a[15741] = 1;
	v->a[15742] = anon_sym_if;
	v->a[15743] = actions(17);
	v->a[15744] = 1;
	v->a[15745] = anon_sym_LPAREN;
	v->a[15746] = actions(19);
	v->a[15747] = 1;
	v->a[15748] = anon_sym_LBRACE;
	v->a[15749] = actions(25);
	v->a[15750] = 1;
	v->a[15751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15752] = actions(27);
	v->a[15753] = 1;
	v->a[15754] = anon_sym_DOLLAR;
	v->a[15755] = actions(29);
	v->a[15756] = 1;
	v->a[15757] = anon_sym_DQUOTE;
	v->a[15758] = actions(33);
	v->a[15759] = 1;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = anon_sym_DOLLAR_LBRACE;
	v->a[15761] = actions(35);
	v->a[15762] = 1;
	v->a[15763] = anon_sym_DOLLAR_LPAREN;
	v->a[15764] = actions(37);
	v->a[15765] = 1;
	v->a[15766] = anon_sym_BQUOTE;
	v->a[15767] = actions(341);
	v->a[15768] = 1;
	v->a[15769] = sym_variable_name;
	v->a[15770] = state(213);
	v->a[15771] = 1;
	v->a[15772] = sym_command_name;
	v->a[15773] = state(542);
	v->a[15774] = 1;
	v->a[15775] = aux_sym_command_repeat1;
	v->a[15776] = state(566);
	v->a[15777] = 1;
	v->a[15778] = sym_file_redirect;
	v->a[15779] = state(569);
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = 1;
	v->a[15781] = sym_concatenation;
	v->a[15782] = state(923);
	v->a[15783] = 1;
	v->a[15784] = sym_variable_assignment;
	v->a[15785] = state(1036);
	v->a[15786] = 1;
	v->a[15787] = aux_sym_redirected_statement_repeat2;
	v->a[15788] = actions(11);
	v->a[15789] = 2;
	v->a[15790] = anon_sym_while;
	v->a[15791] = anon_sym_until;
	v->a[15792] = actions(31);
	v->a[15793] = 3;
	v->a[15794] = sym_raw_string;
	v->a[15795] = sym_number;
	v->a[15796] = sym_word;
	v->a[15797] = state(329);
	v->a[15798] = 5;
	v->a[15799] = sym_arithmetic_expansion;
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
