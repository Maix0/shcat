/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_165.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_825(t_small_parse_table_array *v)
{
	v->a[16500] = 1;
	v->a[16501] = anon_sym_DOLLAR;
	v->a[16502] = actions(63);
	v->a[16503] = 1;
	v->a[16504] = anon_sym_DQUOTE;
	v->a[16505] = actions(67);
	v->a[16506] = 1;
	v->a[16507] = anon_sym_DOLLAR_LBRACE;
	v->a[16508] = actions(69);
	v->a[16509] = 1;
	v->a[16510] = anon_sym_DOLLAR_LPAREN;
	v->a[16511] = actions(71);
	v->a[16512] = 1;
	v->a[16513] = anon_sym_BQUOTE;
	v->a[16514] = actions(73);
	v->a[16515] = 1;
	v->a[16516] = sym_file_descriptor;
	v->a[16517] = actions(75);
	v->a[16518] = 1;
	v->a[16519] = sym_variable_name;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = state(36);
	v->a[16521] = 1;
	v->a[16522] = aux_sym__terminated_statement;
	v->a[16523] = state(189);
	v->a[16524] = 1;
	v->a[16525] = sym_command_name;
	v->a[16526] = state(296);
	v->a[16527] = 1;
	v->a[16528] = sym_variable_assignment;
	v->a[16529] = state(650);
	v->a[16530] = 1;
	v->a[16531] = sym_concatenation;
	v->a[16532] = state(712);
	v->a[16533] = 1;
	v->a[16534] = sym_file_redirect;
	v->a[16535] = state(713);
	v->a[16536] = 1;
	v->a[16537] = aux_sym_command_repeat1;
	v->a[16538] = state(1215);
	v->a[16539] = 1;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = sym_pipeline;
	v->a[16541] = state(1333);
	v->a[16542] = 1;
	v->a[16543] = aux_sym_redirected_statement_repeat2;
	v->a[16544] = state(2103);
	v->a[16545] = 1;
	v->a[16546] = sym__statement_not_pipeline;
	v->a[16547] = actions(11);
	v->a[16548] = 2;
	v->a[16549] = anon_sym_while;
	v->a[16550] = anon_sym_until;
	v->a[16551] = actions(57);
	v->a[16552] = 2;
	v->a[16553] = anon_sym_LT_AMP_DASH;
	v->a[16554] = anon_sym_GT_AMP_DASH;
	v->a[16555] = actions(65);
	v->a[16556] = 2;
	v->a[16557] = sym_raw_string;
	v->a[16558] = sym_number;
	v->a[16559] = state(443);
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = 5;
	v->a[16561] = sym_arithmetic_expansion;
	v->a[16562] = sym_string;
	v->a[16563] = sym_simple_expansion;
	v->a[16564] = sym_expansion;
	v->a[16565] = sym_command_substitution;
	v->a[16566] = actions(55);
	v->a[16567] = 6;
	v->a[16568] = anon_sym_LT;
	v->a[16569] = anon_sym_GT;
	v->a[16570] = anon_sym_GT_GT;
	v->a[16571] = anon_sym_LT_AMP;
	v->a[16572] = anon_sym_GT_AMP;
	v->a[16573] = anon_sym_GT_PIPE;
	v->a[16574] = state(1170);
	v->a[16575] = 12;
	v->a[16576] = sym_redirected_statement;
	v->a[16577] = sym_for_statement;
	v->a[16578] = sym_while_statement;
	v->a[16579] = sym_if_statement;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = sym_case_statement;
	v->a[16581] = sym_function_definition;
	v->a[16582] = sym_compound_statement;
	v->a[16583] = sym_subshell;
	v->a[16584] = sym_list;
	v->a[16585] = sym_negated_command;
	v->a[16586] = sym_command;
	v->a[16587] = sym__variable_assignments;
	v->a[16588] = 31;
	v->a[16589] = actions(3);
	v->a[16590] = 1;
	v->a[16591] = sym_comment;
	v->a[16592] = actions(9);
	v->a[16593] = 1;
	v->a[16594] = anon_sym_for;
	v->a[16595] = actions(13);
	v->a[16596] = 1;
	v->a[16597] = anon_sym_if;
	v->a[16598] = actions(15);
	v->a[16599] = 1;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
