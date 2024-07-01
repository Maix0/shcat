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
	v->a[19501] = anon_sym_DOLLAR;
	v->a[19502] = actions(63);
	v->a[19503] = 1;
	v->a[19504] = anon_sym_DQUOTE;
	v->a[19505] = actions(67);
	v->a[19506] = 1;
	v->a[19507] = anon_sym_DOLLAR_LBRACE;
	v->a[19508] = actions(69);
	v->a[19509] = 1;
	v->a[19510] = anon_sym_DOLLAR_LPAREN;
	v->a[19511] = actions(71);
	v->a[19512] = 1;
	v->a[19513] = anon_sym_BQUOTE;
	v->a[19514] = actions(73);
	v->a[19515] = 1;
	v->a[19516] = sym_file_descriptor;
	v->a[19517] = actions(377);
	v->a[19518] = 1;
	v->a[19519] = sym_variable_name;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = state(188);
	v->a[19521] = 1;
	v->a[19522] = sym_command_name;
	v->a[19523] = state(650);
	v->a[19524] = 1;
	v->a[19525] = sym_concatenation;
	v->a[19526] = state(749);
	v->a[19527] = 1;
	v->a[19528] = aux_sym_command_repeat1;
	v->a[19529] = state(795);
	v->a[19530] = 1;
	v->a[19531] = sym_file_redirect;
	v->a[19532] = state(1195);
	v->a[19533] = 1;
	v->a[19534] = sym_variable_assignment;
	v->a[19535] = state(1207);
	v->a[19536] = 1;
	v->a[19537] = aux_sym_redirected_statement_repeat2;
	v->a[19538] = actions(11);
	v->a[19539] = 2;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_while;
	v->a[19541] = anon_sym_until;
	v->a[19542] = actions(57);
	v->a[19543] = 2;
	v->a[19544] = anon_sym_LT_AMP_DASH;
	v->a[19545] = anon_sym_GT_AMP_DASH;
	v->a[19546] = actions(65);
	v->a[19547] = 3;
	v->a[19548] = sym_raw_string;
	v->a[19549] = sym_number;
	v->a[19550] = sym_word;
	v->a[19551] = state(443);
	v->a[19552] = 5;
	v->a[19553] = sym_arithmetic_expansion;
	v->a[19554] = sym_string;
	v->a[19555] = sym_simple_expansion;
	v->a[19556] = sym_expansion;
	v->a[19557] = sym_command_substitution;
	v->a[19558] = actions(55);
	v->a[19559] = 6;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = anon_sym_LT;
	v->a[19561] = anon_sym_GT;
	v->a[19562] = anon_sym_GT_GT;
	v->a[19563] = anon_sym_LT_AMP;
	v->a[19564] = anon_sym_GT_AMP;
	v->a[19565] = anon_sym_GT_PIPE;
	v->a[19566] = state(1191);
	v->a[19567] = 7;
	v->a[19568] = sym_for_statement;
	v->a[19569] = sym_while_statement;
	v->a[19570] = sym_if_statement;
	v->a[19571] = sym_compound_statement;
	v->a[19572] = sym_subshell;
	v->a[19573] = sym_command;
	v->a[19574] = sym__variable_assignments;
	v->a[19575] = 6;
	v->a[19576] = actions(3);
	v->a[19577] = 1;
	v->a[19578] = sym_comment;
	v->a[19579] = actions(387);
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = 1;
	v->a[19581] = sym_variable_name;
	v->a[19582] = actions(385);
	v->a[19583] = 2;
	v->a[19584] = aux_sym__simple_variable_name_token1;
	v->a[19585] = aux_sym__multiline_variable_name_token1;
	v->a[19586] = actions(379);
	v->a[19587] = 3;
	v->a[19588] = sym_file_descriptor;
	v->a[19589] = sym__bare_dollar;
	v->a[19590] = ts_builtin_sym_end;
	v->a[19591] = actions(383);
	v->a[19592] = 9;
	v->a[19593] = anon_sym_BANG;
	v->a[19594] = anon_sym_DASH;
	v->a[19595] = anon_sym_STAR;
	v->a[19596] = anon_sym_QMARK;
	v->a[19597] = anon_sym_DOLLAR;
	v->a[19598] = anon_sym_POUND;
	v->a[19599] = anon_sym_AT;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
