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
	v->a[14500] = anon_sym_GT_PIPE;
	v->a[14501] = anon_sym_LT_GT;
	v->a[14502] = state(1021);
	v->a[14503] = 12;
	v->a[14504] = sym_redirected_statement;
	v->a[14505] = sym_for_statement;
	v->a[14506] = sym_while_statement;
	v->a[14507] = sym_if_statement;
	v->a[14508] = sym_case_statement;
	v->a[14509] = sym_function_definition;
	v->a[14510] = sym_compound_statement;
	v->a[14511] = sym_subshell;
	v->a[14512] = sym_list;
	v->a[14513] = sym_negated_command;
	v->a[14514] = sym_command;
	v->a[14515] = sym__variable_assignments;
	v->a[14516] = 30;
	v->a[14517] = actions(3);
	v->a[14518] = 1;
	v->a[14519] = sym_comment;
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = actions(9);
	v->a[14521] = 1;
	v->a[14522] = anon_sym_for;
	v->a[14523] = actions(13);
	v->a[14524] = 1;
	v->a[14525] = anon_sym_if;
	v->a[14526] = actions(15);
	v->a[14527] = 1;
	v->a[14528] = anon_sym_case;
	v->a[14529] = actions(17);
	v->a[14530] = 1;
	v->a[14531] = anon_sym_LPAREN;
	v->a[14532] = actions(19);
	v->a[14533] = 1;
	v->a[14534] = anon_sym_LBRACE;
	v->a[14535] = actions(43);
	v->a[14536] = 1;
	v->a[14537] = sym_word;
	v->a[14538] = actions(51);
	v->a[14539] = 1;
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = anon_sym_BANG;
	v->a[14541] = actions(55);
	v->a[14542] = 1;
	v->a[14543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14544] = actions(57);
	v->a[14545] = 1;
	v->a[14546] = anon_sym_DOLLAR;
	v->a[14547] = actions(59);
	v->a[14548] = 1;
	v->a[14549] = anon_sym_DQUOTE;
	v->a[14550] = actions(63);
	v->a[14551] = 1;
	v->a[14552] = anon_sym_DOLLAR_LBRACE;
	v->a[14553] = actions(65);
	v->a[14554] = 1;
	v->a[14555] = anon_sym_DOLLAR_LPAREN;
	v->a[14556] = actions(67);
	v->a[14557] = 1;
	v->a[14558] = anon_sym_BQUOTE;
	v->a[14559] = actions(69);
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = 1;
	v->a[14561] = sym_file_descriptor;
	v->a[14562] = actions(71);
	v->a[14563] = 1;
	v->a[14564] = sym_variable_name;
	v->a[14565] = state(38);
	v->a[14566] = 1;
	v->a[14567] = aux_sym__terminated_statement;
	v->a[14568] = state(183);
	v->a[14569] = 1;
	v->a[14570] = sym_command_name;
	v->a[14571] = state(325);
	v->a[14572] = 1;
	v->a[14573] = sym_variable_assignment;
	v->a[14574] = state(603);
	v->a[14575] = 1;
	v->a[14576] = sym_concatenation;
	v->a[14577] = state(639);
	v->a[14578] = 1;
	v->a[14579] = aux_sym_command_repeat1;
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = state(644);
	v->a[14581] = 1;
	v->a[14582] = sym_file_redirect;
	v->a[14583] = state(1145);
	v->a[14584] = 1;
	v->a[14585] = sym_pipeline;
	v->a[14586] = state(1196);
	v->a[14587] = 1;
	v->a[14588] = aux_sym_redirected_statement_repeat2;
	v->a[14589] = state(1910);
	v->a[14590] = 1;
	v->a[14591] = sym__statement_not_pipeline;
	v->a[14592] = actions(11);
	v->a[14593] = 2;
	v->a[14594] = anon_sym_while;
	v->a[14595] = anon_sym_until;
	v->a[14596] = actions(61);
	v->a[14597] = 2;
	v->a[14598] = sym_raw_string;
	v->a[14599] = sym_number;
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */
