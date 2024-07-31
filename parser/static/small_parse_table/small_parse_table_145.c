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
	v->a[14500] = sym_command;
	v->a[14501] = sym__variable_assignments;
	v->a[14502] = 27;
	v->a[14503] = actions(3);
	v->a[14504] = 1;
	v->a[14505] = sym_comment;
	v->a[14506] = actions(9);
	v->a[14507] = 1;
	v->a[14508] = anon_sym_for;
	v->a[14509] = actions(13);
	v->a[14510] = 1;
	v->a[14511] = anon_sym_if;
	v->a[14512] = actions(15);
	v->a[14513] = 1;
	v->a[14514] = anon_sym_case;
	v->a[14515] = actions(17);
	v->a[14516] = 1;
	v->a[14517] = anon_sym_LPAREN;
	v->a[14518] = actions(19);
	v->a[14519] = 1;
	small_parse_table_726(v);
}

void	small_parse_table_726(t_small_parse_table_array *v)
{
	v->a[14520] = anon_sym_LBRACE;
	v->a[14521] = actions(53);
	v->a[14522] = 1;
	v->a[14523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14524] = actions(55);
	v->a[14525] = 1;
	v->a[14526] = anon_sym_DOLLAR;
	v->a[14527] = actions(57);
	v->a[14528] = 1;
	v->a[14529] = anon_sym_DQUOTE;
	v->a[14530] = actions(61);
	v->a[14531] = 1;
	v->a[14532] = anon_sym_DOLLAR_LBRACE;
	v->a[14533] = actions(63);
	v->a[14534] = 1;
	v->a[14535] = anon_sym_DOLLAR_LPAREN;
	v->a[14536] = actions(65);
	v->a[14537] = 1;
	v->a[14538] = anon_sym_BQUOTE;
	v->a[14539] = actions(206);
	small_parse_table_727(v);
}

void	small_parse_table_727(t_small_parse_table_array *v)
{
	v->a[14540] = 1;
	v->a[14541] = sym_word;
	v->a[14542] = actions(208);
	v->a[14543] = 1;
	v->a[14544] = anon_sym_BANG;
	v->a[14545] = actions(214);
	v->a[14546] = 1;
	v->a[14547] = sym_variable_name;
	v->a[14548] = state(227);
	v->a[14549] = 1;
	v->a[14550] = sym_command_name;
	v->a[14551] = state(295);
	v->a[14552] = 1;
	v->a[14553] = sym_variable_assignment;
	v->a[14554] = state(506);
	v->a[14555] = 1;
	v->a[14556] = aux_sym_command_repeat1;
	v->a[14557] = state(600);
	v->a[14558] = 1;
	v->a[14559] = sym_file_redirect;
	small_parse_table_728(v);
}

void	small_parse_table_728(t_small_parse_table_array *v)
{
	v->a[14560] = state(602);
	v->a[14561] = 1;
	v->a[14562] = sym_concatenation;
	v->a[14563] = state(1001);
	v->a[14564] = 1;
	v->a[14565] = aux_sym_redirected_statement_repeat2;
	v->a[14566] = state(1242);
	v->a[14567] = 1;
	v->a[14568] = sym_pipeline;
	v->a[14569] = actions(11);
	v->a[14570] = 2;
	v->a[14571] = anon_sym_while;
	v->a[14572] = anon_sym_until;
	v->a[14573] = actions(212);
	v->a[14574] = 2;
	v->a[14575] = sym_raw_string;
	v->a[14576] = sym_number;
	v->a[14577] = state(327);
	v->a[14578] = 5;
	v->a[14579] = sym_arithmetic_expansion;
	small_parse_table_729(v);
}

void	small_parse_table_729(t_small_parse_table_array *v)
{
	v->a[14580] = sym_string;
	v->a[14581] = sym_simple_expansion;
	v->a[14582] = sym_expansion;
	v->a[14583] = sym_command_substitution;
	v->a[14584] = actions(210);
	v->a[14585] = 7;
	v->a[14586] = anon_sym_LT;
	v->a[14587] = anon_sym_GT;
	v->a[14588] = anon_sym_GT_GT;
	v->a[14589] = anon_sym_LT_AMP;
	v->a[14590] = anon_sym_GT_AMP;
	v->a[14591] = anon_sym_GT_PIPE;
	v->a[14592] = anon_sym_LT_GT;
	v->a[14593] = state(934);
	v->a[14594] = 13;
	v->a[14595] = sym__statement_not_pipeline;
	v->a[14596] = sym_redirected_statement;
	v->a[14597] = sym_for_statement;
	v->a[14598] = sym_while_statement;
	v->a[14599] = sym_if_statement;
	small_parse_table_730(v);
}

/* EOF small_parse_table_145.c */
