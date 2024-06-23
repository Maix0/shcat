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
	v->a[14500] = sym_redirected_statement;
	v->a[14501] = sym_for_statement;
	v->a[14502] = sym_while_statement;
	v->a[14503] = sym_if_statement;
	v->a[14504] = sym_case_statement;
	v->a[14505] = sym_function_definition;
	v->a[14506] = sym_compound_statement;
	v->a[14507] = sym_subshell;
	v->a[14508] = sym_list;
	v->a[14509] = sym_negated_command;
	v->a[14510] = sym_command;
	v->a[14511] = sym__variable_assignments;
	v->a[14512] = 32;
	v->a[14513] = actions(3);
	v->a[14514] = 1;
	v->a[14515] = sym_comment;
	v->a[14516] = actions(143);
	v->a[14517] = 1;
	v->a[14518] = sym_word;
	v->a[14519] = actions(146);
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = 1;
	v->a[14521] = anon_sym_for;
	v->a[14522] = actions(152);
	v->a[14523] = 1;
	v->a[14524] = anon_sym_if;
	v->a[14525] = actions(155);
	v->a[14526] = 1;
	v->a[14527] = anon_sym_RBRACE;
	v->a[14528] = actions(157);
	v->a[14529] = 1;
	v->a[14530] = anon_sym_case;
	v->a[14531] = actions(160);
	v->a[14532] = 1;
	v->a[14533] = anon_sym_LPAREN;
	v->a[14534] = actions(163);
	v->a[14535] = 1;
	v->a[14536] = anon_sym_LBRACE;
	v->a[14537] = actions(166);
	v->a[14538] = 1;
	v->a[14539] = anon_sym_BANG;
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = actions(175);
	v->a[14541] = 1;
	v->a[14542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14543] = actions(178);
	v->a[14544] = 1;
	v->a[14545] = anon_sym_DOLLAR;
	v->a[14546] = actions(181);
	v->a[14547] = 1;
	v->a[14548] = anon_sym_DQUOTE;
	v->a[14549] = actions(187);
	v->a[14550] = 1;
	v->a[14551] = anon_sym_DOLLAR_LBRACE;
	v->a[14552] = actions(190);
	v->a[14553] = 1;
	v->a[14554] = anon_sym_DOLLAR_LPAREN;
	v->a[14555] = actions(193);
	v->a[14556] = 1;
	v->a[14557] = anon_sym_BQUOTE;
	v->a[14558] = actions(196);
	v->a[14559] = 1;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = sym_file_descriptor;
	v->a[14561] = actions(199);
	v->a[14562] = 1;
	v->a[14563] = sym_variable_name;
	v->a[14564] = state(119);
	v->a[14565] = 1;
	v->a[14566] = aux_sym__terminated_statement;
	v->a[14567] = state(187);
	v->a[14568] = 1;
	v->a[14569] = sym_command_name;
	v->a[14570] = state(281);
	v->a[14571] = 1;
	v->a[14572] = sym_variable_assignment;
	v->a[14573] = state(647);
	v->a[14574] = 1;
	v->a[14575] = sym_concatenation;
	v->a[14576] = state(736);
	v->a[14577] = 1;
	v->a[14578] = aux_sym_command_repeat1;
	v->a[14579] = state(738);
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = 1;
	v->a[14581] = sym_file_redirect;
	v->a[14582] = state(1460);
	v->a[14583] = 1;
	v->a[14584] = aux_sym_redirected_statement_repeat2;
	v->a[14585] = state(1464);
	v->a[14586] = 1;
	v->a[14587] = sym_pipeline;
	v->a[14588] = state(2269);
	v->a[14589] = 1;
	v->a[14590] = sym__statement_not_pipeline;
	v->a[14591] = actions(149);
	v->a[14592] = 2;
	v->a[14593] = anon_sym_while;
	v->a[14594] = anon_sym_until;
	v->a[14595] = actions(172);
	v->a[14596] = 2;
	v->a[14597] = anon_sym_LT_AMP_DASH;
	v->a[14598] = anon_sym_GT_AMP_DASH;
	v->a[14599] = actions(184);
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */
