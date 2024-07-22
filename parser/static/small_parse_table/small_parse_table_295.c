/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_295.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1475(t_small_parse_table_array *v)
{
	v->a[29500] = anon_sym_LPAREN;
	v->a[29501] = actions(329);
	v->a[29502] = 1;
	v->a[29503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29504] = actions(331);
	v->a[29505] = 1;
	v->a[29506] = anon_sym_DOLLAR;
	v->a[29507] = actions(333);
	v->a[29508] = 1;
	v->a[29509] = anon_sym_DQUOTE;
	v->a[29510] = actions(337);
	v->a[29511] = 1;
	v->a[29512] = anon_sym_DOLLAR_LBRACE;
	v->a[29513] = actions(339);
	v->a[29514] = 1;
	v->a[29515] = anon_sym_DOLLAR_LPAREN;
	v->a[29516] = actions(341);
	v->a[29517] = 1;
	v->a[29518] = anon_sym_BQUOTE;
	v->a[29519] = actions(345);
	small_parse_table_1476(v);
}

void	small_parse_table_1476(t_small_parse_table_array *v)
{
	v->a[29520] = 1;
	v->a[29521] = sym_variable_name;
	v->a[29522] = actions(1095);
	v->a[29523] = 1;
	v->a[29524] = sym_file_descriptor;
	v->a[29525] = state(326);
	v->a[29526] = 1;
	v->a[29527] = sym_command_name;
	v->a[29528] = state(643);
	v->a[29529] = 1;
	v->a[29530] = aux_sym_command_repeat1;
	v->a[29531] = state(896);
	v->a[29532] = 1;
	v->a[29533] = sym_concatenation;
	v->a[29534] = state(906);
	v->a[29535] = 1;
	v->a[29536] = sym_variable_assignment;
	v->a[29537] = state(1203);
	v->a[29538] = 1;
	v->a[29539] = sym_file_redirect;
	small_parse_table_1477(v);
}

void	small_parse_table_1477(t_small_parse_table_array *v)
{
	v->a[29540] = state(1515);
	v->a[29541] = 1;
	v->a[29542] = sym_command;
	v->a[29543] = state(1521);
	v->a[29544] = 1;
	v->a[29545] = sym_subshell;
	v->a[29546] = actions(335);
	v->a[29547] = 3;
	v->a[29548] = sym_raw_string;
	v->a[29549] = sym_number;
	v->a[29550] = sym_word;
	v->a[29551] = state(725);
	v->a[29552] = 5;
	v->a[29553] = sym_arithmetic_expansion;
	v->a[29554] = sym_string;
	v->a[29555] = sym_simple_expansion;
	v->a[29556] = sym_expansion;
	v->a[29557] = sym_command_substitution;
	v->a[29558] = actions(1093);
	v->a[29559] = 7;
	small_parse_table_1478(v);
}

void	small_parse_table_1478(t_small_parse_table_array *v)
{
	v->a[29560] = anon_sym_LT;
	v->a[29561] = anon_sym_GT;
	v->a[29562] = anon_sym_GT_GT;
	v->a[29563] = anon_sym_LT_AMP;
	v->a[29564] = anon_sym_GT_AMP;
	v->a[29565] = anon_sym_GT_PIPE;
	v->a[29566] = anon_sym_LT_GT;
	v->a[29567] = 6;
	v->a[29568] = actions(3);
	v->a[29569] = 1;
	v->a[29570] = sym_comment;
	v->a[29571] = actions(1107);
	v->a[29572] = 1;
	v->a[29573] = aux_sym_concatenation_token1;
	v->a[29574] = actions(1112);
	v->a[29575] = 1;
	v->a[29576] = sym__concat;
	v->a[29577] = state(359);
	v->a[29578] = 1;
	v->a[29579] = aux_sym_concatenation_repeat1;
	small_parse_table_1479(v);
}

void	small_parse_table_1479(t_small_parse_table_array *v)
{
	v->a[29580] = actions(1110);
	v->a[29581] = 2;
	v->a[29582] = sym_file_descriptor;
	v->a[29583] = sym__bare_dollar;
	v->a[29584] = actions(1105);
	v->a[29585] = 26;
	v->a[29586] = anon_sym_esac;
	v->a[29587] = anon_sym_LPAREN;
	v->a[29588] = anon_sym_PIPE;
	v->a[29589] = anon_sym_SEMI_SEMI;
	v->a[29590] = anon_sym_AMP_AMP;
	v->a[29591] = anon_sym_PIPE_PIPE;
	v->a[29592] = anon_sym_LT;
	v->a[29593] = anon_sym_GT;
	v->a[29594] = anon_sym_GT_GT;
	v->a[29595] = anon_sym_LT_AMP;
	v->a[29596] = anon_sym_GT_AMP;
	v->a[29597] = anon_sym_GT_PIPE;
	v->a[29598] = anon_sym_LT_GT;
	v->a[29599] = anon_sym_LT_LT;
	small_parse_table_1480(v);
}

/* EOF small_parse_table_295.c */
