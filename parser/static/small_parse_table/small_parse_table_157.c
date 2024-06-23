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
	v->a[15700] = 1;
	v->a[15701] = sym__statement_not_pipeline;
	v->a[15702] = actions(11);
	v->a[15703] = 2;
	v->a[15704] = anon_sym_while;
	v->a[15705] = anon_sym_until;
	v->a[15706] = actions(57);
	v->a[15707] = 2;
	v->a[15708] = anon_sym_LT_AMP_DASH;
	v->a[15709] = anon_sym_GT_AMP_DASH;
	v->a[15710] = actions(65);
	v->a[15711] = 2;
	v->a[15712] = sym_raw_string;
	v->a[15713] = sym_number;
	v->a[15714] = state(394);
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
	v->a[15721] = actions(55);
	v->a[15722] = 8;
	v->a[15723] = anon_sym_LT;
	v->a[15724] = anon_sym_GT;
	v->a[15725] = anon_sym_GT_GT;
	v->a[15726] = anon_sym_AMP_GT;
	v->a[15727] = anon_sym_AMP_GT_GT;
	v->a[15728] = anon_sym_LT_AMP;
	v->a[15729] = anon_sym_GT_AMP;
	v->a[15730] = anon_sym_GT_PIPE;
	v->a[15731] = state(1324);
	v->a[15732] = 12;
	v->a[15733] = sym_redirected_statement;
	v->a[15734] = sym_for_statement;
	v->a[15735] = sym_while_statement;
	v->a[15736] = sym_if_statement;
	v->a[15737] = sym_case_statement;
	v->a[15738] = sym_function_definition;
	v->a[15739] = sym_compound_statement;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = sym_subshell;
	v->a[15741] = sym_list;
	v->a[15742] = sym_negated_command;
	v->a[15743] = sym_command;
	v->a[15744] = sym__variable_assignments;
	v->a[15745] = 42;
	v->a[15746] = actions(3);
	v->a[15747] = 1;
	v->a[15748] = sym_comment;
	v->a[15749] = actions(89);
	v->a[15750] = 1;
	v->a[15751] = sym_word;
	v->a[15752] = actions(91);
	v->a[15753] = 1;
	v->a[15754] = anon_sym_for;
	v->a[15755] = actions(95);
	v->a[15756] = 1;
	v->a[15757] = anon_sym_if;
	v->a[15758] = actions(97);
	v->a[15759] = 1;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = anon_sym_case;
	v->a[15761] = actions(99);
	v->a[15762] = 1;
	v->a[15763] = anon_sym_LPAREN;
	v->a[15764] = actions(101);
	v->a[15765] = 1;
	v->a[15766] = anon_sym_LBRACE;
	v->a[15767] = actions(103);
	v->a[15768] = 1;
	v->a[15769] = anon_sym_BANG;
	v->a[15770] = actions(109);
	v->a[15771] = 1;
	v->a[15772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15773] = actions(111);
	v->a[15774] = 1;
	v->a[15775] = anon_sym_DOLLAR;
	v->a[15776] = actions(113);
	v->a[15777] = 1;
	v->a[15778] = anon_sym_DQUOTE;
	v->a[15779] = actions(117);
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = 1;
	v->a[15781] = anon_sym_DOLLAR_LBRACE;
	v->a[15782] = actions(119);
	v->a[15783] = 1;
	v->a[15784] = anon_sym_DOLLAR_LPAREN;
	v->a[15785] = actions(121);
	v->a[15786] = 1;
	v->a[15787] = anon_sym_BQUOTE;
	v->a[15788] = actions(123);
	v->a[15789] = 1;
	v->a[15790] = sym_file_descriptor;
	v->a[15791] = actions(125);
	v->a[15792] = 1;
	v->a[15793] = sym_variable_name;
	v->a[15794] = state(133);
	v->a[15795] = 1;
	v->a[15796] = aux_sym__statements_repeat1;
	v->a[15797] = state(182);
	v->a[15798] = 1;
	v->a[15799] = sym_command_name;
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
