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
	v->a[19500] = sym_subshell;
	v->a[19501] = sym_command;
	v->a[19502] = sym__variable_assignments;
	v->a[19503] = actions(55);
	v->a[19504] = 8;
	v->a[19505] = anon_sym_LT;
	v->a[19506] = anon_sym_GT;
	v->a[19507] = anon_sym_GT_GT;
	v->a[19508] = anon_sym_AMP_GT;
	v->a[19509] = anon_sym_AMP_GT_GT;
	v->a[19510] = anon_sym_LT_AMP;
	v->a[19511] = anon_sym_GT_AMP;
	v->a[19512] = anon_sym_GT_PIPE;
	v->a[19513] = 25;
	v->a[19514] = actions(3);
	v->a[19515] = 1;
	v->a[19516] = sym_comment;
	v->a[19517] = actions(327);
	v->a[19518] = 1;
	v->a[19519] = anon_sym_for;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = actions(331);
	v->a[19521] = 1;
	v->a[19522] = anon_sym_if;
	v->a[19523] = actions(335);
	v->a[19524] = 1;
	v->a[19525] = anon_sym_LPAREN;
	v->a[19526] = actions(337);
	v->a[19527] = 1;
	v->a[19528] = anon_sym_LBRACE;
	v->a[19529] = actions(345);
	v->a[19530] = 1;
	v->a[19531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19532] = actions(347);
	v->a[19533] = 1;
	v->a[19534] = anon_sym_DOLLAR;
	v->a[19535] = actions(349);
	v->a[19536] = 1;
	v->a[19537] = anon_sym_DQUOTE;
	v->a[19538] = actions(353);
	v->a[19539] = 1;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_DOLLAR_LBRACE;
	v->a[19541] = actions(355);
	v->a[19542] = 1;
	v->a[19543] = anon_sym_DOLLAR_LPAREN;
	v->a[19544] = actions(357);
	v->a[19545] = 1;
	v->a[19546] = anon_sym_BQUOTE;
	v->a[19547] = actions(359);
	v->a[19548] = 1;
	v->a[19549] = sym_file_descriptor;
	v->a[19550] = actions(377);
	v->a[19551] = 1;
	v->a[19552] = sym_variable_name;
	v->a[19553] = state(287);
	v->a[19554] = 1;
	v->a[19555] = sym_command_name;
	v->a[19556] = state(732);
	v->a[19557] = 1;
	v->a[19558] = aux_sym_command_repeat1;
	v->a[19559] = state(928);
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = 1;
	v->a[19561] = sym_concatenation;
	v->a[19562] = state(961);
	v->a[19563] = 1;
	v->a[19564] = sym_file_redirect;
	v->a[19565] = state(1247);
	v->a[19566] = 1;
	v->a[19567] = sym_variable_assignment;
	v->a[19568] = state(1458);
	v->a[19569] = 1;
	v->a[19570] = aux_sym_redirected_statement_repeat2;
	v->a[19571] = actions(329);
	v->a[19572] = 2;
	v->a[19573] = anon_sym_while;
	v->a[19574] = anon_sym_until;
	v->a[19575] = actions(343);
	v->a[19576] = 2;
	v->a[19577] = anon_sym_LT_AMP_DASH;
	v->a[19578] = anon_sym_GT_AMP_DASH;
	v->a[19579] = actions(351);
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = 3;
	v->a[19581] = sym_raw_string;
	v->a[19582] = sym_number;
	v->a[19583] = sym_word;
	v->a[19584] = state(777);
	v->a[19585] = 5;
	v->a[19586] = sym_arithmetic_expansion;
	v->a[19587] = sym_string;
	v->a[19588] = sym_simple_expansion;
	v->a[19589] = sym_expansion;
	v->a[19590] = sym_command_substitution;
	v->a[19591] = state(1619);
	v->a[19592] = 7;
	v->a[19593] = sym_for_statement;
	v->a[19594] = sym_while_statement;
	v->a[19595] = sym_if_statement;
	v->a[19596] = sym_compound_statement;
	v->a[19597] = sym_subshell;
	v->a[19598] = sym_command;
	v->a[19599] = sym__variable_assignments;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
