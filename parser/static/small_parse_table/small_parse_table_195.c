/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_195.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_975(t_small_parse_table_array *v)
{
	v->a[19500] = 1;
	v->a[19501] = sym_variable_name;
	v->a[19502] = state(271);
	v->a[19503] = 1;
	v->a[19504] = sym_command_name;
	v->a[19505] = state(581);
	v->a[19506] = 1;
	v->a[19507] = aux_sym_command_repeat1;
	v->a[19508] = state(721);
	v->a[19509] = 1;
	v->a[19510] = sym_variable_assignment;
	v->a[19511] = state(889);
	v->a[19512] = 1;
	v->a[19513] = sym_concatenation;
	v->a[19514] = state(938);
	v->a[19515] = 1;
	v->a[19516] = sym_file_redirect;
	v->a[19517] = state(1347);
	v->a[19518] = 1;
	v->a[19519] = sym_pipeline;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = state(1404);
	v->a[19521] = 1;
	v->a[19522] = aux_sym_redirected_statement_repeat2;
	v->a[19523] = state(2051);
	v->a[19524] = 1;
	v->a[19525] = sym__statement_not_pipeline;
	v->a[19526] = actions(367);
	v->a[19527] = 2;
	v->a[19528] = anon_sym_while;
	v->a[19529] = anon_sym_until;
	v->a[19530] = actions(381);
	v->a[19531] = 2;
	v->a[19532] = anon_sym_LT_AMP_DASH;
	v->a[19533] = anon_sym_GT_AMP_DASH;
	v->a[19534] = state(768);
	v->a[19535] = 6;
	v->a[19536] = sym_arithmetic_expansion;
	v->a[19537] = sym_string;
	v->a[19538] = sym_number;
	v->a[19539] = sym_simple_expansion;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = sym_expansion;
	v->a[19541] = sym_command_substitution;
	v->a[19542] = actions(379);
	v->a[19543] = 8;
	v->a[19544] = anon_sym_LT;
	v->a[19545] = anon_sym_GT;
	v->a[19546] = anon_sym_GT_GT;
	v->a[19547] = anon_sym_AMP_GT;
	v->a[19548] = anon_sym_AMP_GT_GT;
	v->a[19549] = anon_sym_LT_AMP;
	v->a[19550] = anon_sym_GT_AMP;
	v->a[19551] = anon_sym_GT_PIPE;
	v->a[19552] = state(1349);
	v->a[19553] = 12;
	v->a[19554] = sym_redirected_statement;
	v->a[19555] = sym_for_statement;
	v->a[19556] = sym_while_statement;
	v->a[19557] = sym_if_statement;
	v->a[19558] = sym_case_statement;
	v->a[19559] = sym_function_definition;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = sym_compound_statement;
	v->a[19561] = sym_subshell;
	v->a[19562] = sym_list;
	v->a[19563] = sym_negated_command;
	v->a[19564] = sym_command;
	v->a[19565] = sym_variable_assignments;
	v->a[19566] = 31;
	v->a[19567] = actions(3);
	v->a[19568] = 1;
	v->a[19569] = sym_comment;
	v->a[19570] = actions(363);
	v->a[19571] = 1;
	v->a[19572] = sym_word;
	v->a[19573] = actions(365);
	v->a[19574] = 1;
	v->a[19575] = anon_sym_for;
	v->a[19576] = actions(369);
	v->a[19577] = 1;
	v->a[19578] = anon_sym_if;
	v->a[19579] = actions(371);
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = 1;
	v->a[19581] = anon_sym_case;
	v->a[19582] = actions(373);
	v->a[19583] = 1;
	v->a[19584] = anon_sym_LPAREN;
	v->a[19585] = actions(375);
	v->a[19586] = 1;
	v->a[19587] = anon_sym_LBRACE;
	v->a[19588] = actions(377);
	v->a[19589] = 1;
	v->a[19590] = anon_sym_BANG;
	v->a[19591] = actions(383);
	v->a[19592] = 1;
	v->a[19593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19594] = actions(385);
	v->a[19595] = 1;
	v->a[19596] = anon_sym_DOLLAR;
	v->a[19597] = actions(387);
	v->a[19598] = 1;
	v->a[19599] = anon_sym_DQUOTE;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
