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
	v->a[16500] = 12;
	v->a[16501] = sym_redirected_statement;
	v->a[16502] = sym_for_statement;
	v->a[16503] = sym_while_statement;
	v->a[16504] = sym_if_statement;
	v->a[16505] = sym_case_statement;
	v->a[16506] = sym_function_definition;
	v->a[16507] = sym_compound_statement;
	v->a[16508] = sym_subshell;
	v->a[16509] = sym_list;
	v->a[16510] = sym_negated_command;
	v->a[16511] = sym_command;
	v->a[16512] = sym__variable_assignments;
	v->a[16513] = 29;
	v->a[16514] = actions(3);
	v->a[16515] = 1;
	v->a[16516] = sym_comment;
	v->a[16517] = actions(311);
	v->a[16518] = 1;
	v->a[16519] = sym_word;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = actions(313);
	v->a[16521] = 1;
	v->a[16522] = anon_sym_for;
	v->a[16523] = actions(317);
	v->a[16524] = 1;
	v->a[16525] = anon_sym_if;
	v->a[16526] = actions(319);
	v->a[16527] = 1;
	v->a[16528] = anon_sym_case;
	v->a[16529] = actions(321);
	v->a[16530] = 1;
	v->a[16531] = anon_sym_LPAREN;
	v->a[16532] = actions(323);
	v->a[16533] = 1;
	v->a[16534] = anon_sym_LBRACE;
	v->a[16535] = actions(325);
	v->a[16536] = 1;
	v->a[16537] = anon_sym_BANG;
	v->a[16538] = actions(329);
	v->a[16539] = 1;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16541] = actions(331);
	v->a[16542] = 1;
	v->a[16543] = anon_sym_DOLLAR;
	v->a[16544] = actions(333);
	v->a[16545] = 1;
	v->a[16546] = anon_sym_DQUOTE;
	v->a[16547] = actions(337);
	v->a[16548] = 1;
	v->a[16549] = anon_sym_DOLLAR_LBRACE;
	v->a[16550] = actions(339);
	v->a[16551] = 1;
	v->a[16552] = anon_sym_DOLLAR_LPAREN;
	v->a[16553] = actions(341);
	v->a[16554] = 1;
	v->a[16555] = anon_sym_BQUOTE;
	v->a[16556] = actions(343);
	v->a[16557] = 1;
	v->a[16558] = sym_file_descriptor;
	v->a[16559] = actions(345);
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = 1;
	v->a[16561] = sym_variable_name;
	v->a[16562] = state(326);
	v->a[16563] = 1;
	v->a[16564] = sym_command_name;
	v->a[16565] = state(636);
	v->a[16566] = 1;
	v->a[16567] = sym_variable_assignment;
	v->a[16568] = state(643);
	v->a[16569] = 1;
	v->a[16570] = aux_sym_command_repeat1;
	v->a[16571] = state(896);
	v->a[16572] = 1;
	v->a[16573] = sym_concatenation;
	v->a[16574] = state(903);
	v->a[16575] = 1;
	v->a[16576] = sym_file_redirect;
	v->a[16577] = state(1399);
	v->a[16578] = 1;
	v->a[16579] = sym_pipeline;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = state(1438);
	v->a[16581] = 1;
	v->a[16582] = aux_sym_redirected_statement_repeat2;
	v->a[16583] = state(1900);
	v->a[16584] = 1;
	v->a[16585] = sym__statement_not_pipeline;
	v->a[16586] = actions(315);
	v->a[16587] = 2;
	v->a[16588] = anon_sym_while;
	v->a[16589] = anon_sym_until;
	v->a[16590] = actions(335);
	v->a[16591] = 2;
	v->a[16592] = sym_raw_string;
	v->a[16593] = sym_number;
	v->a[16594] = state(725);
	v->a[16595] = 5;
	v->a[16596] = sym_arithmetic_expansion;
	v->a[16597] = sym_string;
	v->a[16598] = sym_simple_expansion;
	v->a[16599] = sym_expansion;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
