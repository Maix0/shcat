/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_145.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_725(t_small_parse_table_array *v)
{
	v->a[14500] = sym_word;
	v->a[14501] = actions(240);
	v->a[14502] = 1;
	v->a[14503] = anon_sym_BANG;
	v->a[14504] = state(132);
	v->a[14505] = 1;
	v->a[14506] = aux_sym__statements_repeat1;
	v->a[14507] = state(185);
	v->a[14508] = 1;
	v->a[14509] = sym_command_name;
	v->a[14510] = state(297);
	v->a[14511] = 1;
	v->a[14512] = sym_variable_assignment;
	v->a[14513] = state(582);
	v->a[14514] = 1;
	v->a[14515] = sym_concatenation;
	v->a[14516] = state(614);
	v->a[14517] = 1;
	v->a[14518] = aux_sym_command_repeat1;
	v->a[14519] = state(769);
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = 1;
	v->a[14521] = sym_file_redirect;
	v->a[14522] = state(1133);
	v->a[14523] = 1;
	v->a[14524] = aux_sym_redirected_statement_repeat2;
	v->a[14525] = state(1142);
	v->a[14526] = 1;
	v->a[14527] = sym_pipeline;
	v->a[14528] = state(2041);
	v->a[14529] = 1;
	v->a[14530] = sym__statement_not_pipeline;
	v->a[14531] = state(2143);
	v->a[14532] = 1;
	v->a[14533] = sym__statements;
	v->a[14534] = actions(11);
	v->a[14535] = 2;
	v->a[14536] = anon_sym_while;
	v->a[14537] = anon_sym_until;
	v->a[14538] = actions(61);
	v->a[14539] = 2;
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = anon_sym_LT_AMP_DASH;
	v->a[14541] = anon_sym_GT_AMP_DASH;
	v->a[14542] = state(397);
	v->a[14543] = 6;
	v->a[14544] = sym_arithmetic_expansion;
	v->a[14545] = sym_string;
	v->a[14546] = sym_number;
	v->a[14547] = sym_simple_expansion;
	v->a[14548] = sym_expansion;
	v->a[14549] = sym_command_substitution;
	v->a[14550] = actions(59);
	v->a[14551] = 8;
	v->a[14552] = anon_sym_LT;
	v->a[14553] = anon_sym_GT;
	v->a[14554] = anon_sym_GT_GT;
	v->a[14555] = anon_sym_AMP_GT;
	v->a[14556] = anon_sym_AMP_GT_GT;
	v->a[14557] = anon_sym_LT_AMP;
	v->a[14558] = anon_sym_GT_AMP;
	v->a[14559] = anon_sym_GT_PIPE;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = state(1071);
	v->a[14561] = 12;
	v->a[14562] = sym_redirected_statement;
	v->a[14563] = sym_for_statement;
	v->a[14564] = sym_while_statement;
	v->a[14565] = sym_if_statement;
	v->a[14566] = sym_case_statement;
	v->a[14567] = sym_function_definition;
	v->a[14568] = sym_compound_statement;
	v->a[14569] = sym_subshell;
	v->a[14570] = sym_list;
	v->a[14571] = sym_negated_command;
	v->a[14572] = sym_command;
	v->a[14573] = sym_variable_assignments;
	v->a[14574] = 34;
	v->a[14575] = actions(3);
	v->a[14576] = 1;
	v->a[14577] = sym_comment;
	v->a[14578] = actions(9);
	v->a[14579] = 1;
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = anon_sym_for;
	v->a[14581] = actions(13);
	v->a[14582] = 1;
	v->a[14583] = anon_sym_if;
	v->a[14584] = actions(15);
	v->a[14585] = 1;
	v->a[14586] = anon_sym_case;
	v->a[14587] = actions(17);
	v->a[14588] = 1;
	v->a[14589] = anon_sym_LPAREN;
	v->a[14590] = actions(19);
	v->a[14591] = 1;
	v->a[14592] = anon_sym_LBRACE;
	v->a[14593] = actions(63);
	v->a[14594] = 1;
	v->a[14595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14596] = actions(65);
	v->a[14597] = 1;
	v->a[14598] = anon_sym_DOLLAR;
	v->a[14599] = actions(67);
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */
