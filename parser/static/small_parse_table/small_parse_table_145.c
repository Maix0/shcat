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
	v->a[14500] = sym_string;
	v->a[14501] = sym_simple_expansion;
	v->a[14502] = sym_expansion;
	v->a[14503] = sym_command_substitution;
	v->a[14504] = state(942);
	v->a[14505] = 12;
	v->a[14506] = sym_redirected_statement;
	v->a[14507] = sym_for_statement;
	v->a[14508] = sym_while_statement;
	v->a[14509] = sym_if_statement;
	v->a[14510] = sym_case_statement;
	v->a[14511] = sym_function_definition;
	v->a[14512] = sym_compound_statement;
	v->a[14513] = sym_subshell;
	v->a[14514] = sym_list;
	v->a[14515] = sym_negated_command;
	v->a[14516] = sym_command;
	v->a[14517] = sym__variable_assignments;
	v->a[14518] = 28;
	v->a[14519] = actions(3);
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = 1;
	v->a[14521] = sym_comment;
	v->a[14522] = actions(9);
	v->a[14523] = 1;
	v->a[14524] = anon_sym_for;
	v->a[14525] = actions(13);
	v->a[14526] = 1;
	v->a[14527] = anon_sym_if;
	v->a[14528] = actions(15);
	v->a[14529] = 1;
	v->a[14530] = anon_sym_case;
	v->a[14531] = actions(17);
	v->a[14532] = 1;
	v->a[14533] = anon_sym_LPAREN;
	v->a[14534] = actions(19);
	v->a[14535] = 1;
	v->a[14536] = anon_sym_LBRACE;
	v->a[14537] = actions(53);
	v->a[14538] = 1;
	v->a[14539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = actions(55);
	v->a[14541] = 1;
	v->a[14542] = anon_sym_DOLLAR;
	v->a[14543] = actions(57);
	v->a[14544] = 1;
	v->a[14545] = anon_sym_DQUOTE;
	v->a[14546] = actions(61);
	v->a[14547] = 1;
	v->a[14548] = anon_sym_DOLLAR_LBRACE;
	v->a[14549] = actions(63);
	v->a[14550] = 1;
	v->a[14551] = anon_sym_DOLLAR_LPAREN;
	v->a[14552] = actions(65);
	v->a[14553] = 1;
	v->a[14554] = anon_sym_BQUOTE;
	v->a[14555] = actions(331);
	v->a[14556] = 1;
	v->a[14557] = sym_word;
	v->a[14558] = actions(333);
	v->a[14559] = 1;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = anon_sym_BANG;
	v->a[14561] = actions(339);
	v->a[14562] = 1;
	v->a[14563] = sym_variable_name;
	v->a[14564] = state(252);
	v->a[14565] = 1;
	v->a[14566] = sym_command_name;
	v->a[14567] = state(309);
	v->a[14568] = 1;
	v->a[14569] = sym_variable_assignment;
	v->a[14570] = state(387);
	v->a[14571] = 1;
	v->a[14572] = aux_sym_command_repeat1;
	v->a[14573] = state(551);
	v->a[14574] = 1;
	v->a[14575] = sym_file_redirect;
	v->a[14576] = state(555);
	v->a[14577] = 1;
	v->a[14578] = sym_concatenation;
	v->a[14579] = state(1228);
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = 1;
	v->a[14581] = sym_pipeline;
	v->a[14582] = state(1309);
	v->a[14583] = 1;
	v->a[14584] = aux_sym_redirected_statement_repeat2;
	v->a[14585] = state(1559);
	v->a[14586] = 1;
	v->a[14587] = sym__statement_not_pipeline;
	v->a[14588] = actions(11);
	v->a[14589] = 2;
	v->a[14590] = anon_sym_while;
	v->a[14591] = anon_sym_until;
	v->a[14592] = actions(337);
	v->a[14593] = 2;
	v->a[14594] = sym_raw_string;
	v->a[14595] = sym_number;
	v->a[14596] = actions(335);
	v->a[14597] = 3;
	v->a[14598] = anon_sym_LT;
	v->a[14599] = anon_sym_GT;
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */
