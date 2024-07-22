/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_175.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_875(t_small_parse_table_array *v)
{
	v->a[17500] = sym_compound_statement;
	v->a[17501] = sym_subshell;
	v->a[17502] = sym_list;
	v->a[17503] = sym_negated_command;
	v->a[17504] = sym_command;
	v->a[17505] = sym__variable_assignments;
	v->a[17506] = 24;
	v->a[17507] = actions(3);
	v->a[17508] = 1;
	v->a[17509] = sym_comment;
	v->a[17510] = actions(313);
	v->a[17511] = 1;
	v->a[17512] = anon_sym_for;
	v->a[17513] = actions(317);
	v->a[17514] = 1;
	v->a[17515] = anon_sym_if;
	v->a[17516] = actions(321);
	v->a[17517] = 1;
	v->a[17518] = anon_sym_LPAREN;
	v->a[17519] = actions(323);
	small_parse_table_876(v);
}

void	small_parse_table_876(t_small_parse_table_array *v)
{
	v->a[17520] = 1;
	v->a[17521] = anon_sym_LBRACE;
	v->a[17522] = actions(329);
	v->a[17523] = 1;
	v->a[17524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17525] = actions(331);
	v->a[17526] = 1;
	v->a[17527] = anon_sym_DOLLAR;
	v->a[17528] = actions(333);
	v->a[17529] = 1;
	v->a[17530] = anon_sym_DQUOTE;
	v->a[17531] = actions(337);
	v->a[17532] = 1;
	v->a[17533] = anon_sym_DOLLAR_LBRACE;
	v->a[17534] = actions(339);
	v->a[17535] = 1;
	v->a[17536] = anon_sym_DOLLAR_LPAREN;
	v->a[17537] = actions(341);
	v->a[17538] = 1;
	v->a[17539] = anon_sym_BQUOTE;
	small_parse_table_877(v);
}

void	small_parse_table_877(t_small_parse_table_array *v)
{
	v->a[17540] = actions(343);
	v->a[17541] = 1;
	v->a[17542] = sym_file_descriptor;
	v->a[17543] = actions(359);
	v->a[17544] = 1;
	v->a[17545] = sym_variable_name;
	v->a[17546] = state(326);
	v->a[17547] = 1;
	v->a[17548] = sym_command_name;
	v->a[17549] = state(643);
	v->a[17550] = 1;
	v->a[17551] = aux_sym_command_repeat1;
	v->a[17552] = state(896);
	v->a[17553] = 1;
	v->a[17554] = sym_concatenation;
	v->a[17555] = state(903);
	v->a[17556] = 1;
	v->a[17557] = sym_file_redirect;
	v->a[17558] = state(1119);
	v->a[17559] = 1;
	small_parse_table_878(v);
}

void	small_parse_table_878(t_small_parse_table_array *v)
{
	v->a[17560] = sym_variable_assignment;
	v->a[17561] = state(1430);
	v->a[17562] = 1;
	v->a[17563] = aux_sym_redirected_statement_repeat2;
	v->a[17564] = actions(315);
	v->a[17565] = 2;
	v->a[17566] = anon_sym_while;
	v->a[17567] = anon_sym_until;
	v->a[17568] = actions(335);
	v->a[17569] = 3;
	v->a[17570] = sym_raw_string;
	v->a[17571] = sym_number;
	v->a[17572] = sym_word;
	v->a[17573] = state(725);
	v->a[17574] = 5;
	v->a[17575] = sym_arithmetic_expansion;
	v->a[17576] = sym_string;
	v->a[17577] = sym_simple_expansion;
	v->a[17578] = sym_expansion;
	v->a[17579] = sym_command_substitution;
	small_parse_table_879(v);
}

void	small_parse_table_879(t_small_parse_table_array *v)
{
	v->a[17580] = actions(327);
	v->a[17581] = 7;
	v->a[17582] = anon_sym_LT;
	v->a[17583] = anon_sym_GT;
	v->a[17584] = anon_sym_GT_GT;
	v->a[17585] = anon_sym_LT_AMP;
	v->a[17586] = anon_sym_GT_AMP;
	v->a[17587] = anon_sym_GT_PIPE;
	v->a[17588] = anon_sym_LT_GT;
	v->a[17589] = state(1513);
	v->a[17590] = 7;
	v->a[17591] = sym_for_statement;
	v->a[17592] = sym_while_statement;
	v->a[17593] = sym_if_statement;
	v->a[17594] = sym_compound_statement;
	v->a[17595] = sym_subshell;
	v->a[17596] = sym_command;
	v->a[17597] = sym__variable_assignments;
	v->a[17598] = 24;
	v->a[17599] = actions(3);
	small_parse_table_880(v);
}

/* EOF small_parse_table_175.c */
