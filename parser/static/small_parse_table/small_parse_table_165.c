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
	v->a[16500] = actions(45);
	v->a[16501] = 1;
	v->a[16502] = sym_word;
	v->a[16503] = actions(53);
	v->a[16504] = 1;
	v->a[16505] = anon_sym_BANG;
	v->a[16506] = actions(59);
	v->a[16507] = 1;
	v->a[16508] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16509] = actions(61);
	v->a[16510] = 1;
	v->a[16511] = anon_sym_DOLLAR;
	v->a[16512] = actions(63);
	v->a[16513] = 1;
	v->a[16514] = anon_sym_DQUOTE;
	v->a[16515] = actions(67);
	v->a[16516] = 1;
	v->a[16517] = anon_sym_DOLLAR_LBRACE;
	v->a[16518] = actions(69);
	v->a[16519] = 1;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = anon_sym_DOLLAR_LPAREN;
	v->a[16521] = actions(71);
	v->a[16522] = 1;
	v->a[16523] = anon_sym_BQUOTE;
	v->a[16524] = actions(73);
	v->a[16525] = 1;
	v->a[16526] = sym_file_descriptor;
	v->a[16527] = actions(75);
	v->a[16528] = 1;
	v->a[16529] = sym_variable_name;
	v->a[16530] = state(48);
	v->a[16531] = 1;
	v->a[16532] = aux_sym__terminated_statement;
	v->a[16533] = state(187);
	v->a[16534] = 1;
	v->a[16535] = sym_command_name;
	v->a[16536] = state(281);
	v->a[16537] = 1;
	v->a[16538] = sym_variable_assignment;
	v->a[16539] = state(647);
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = 1;
	v->a[16541] = sym_concatenation;
	v->a[16542] = state(736);
	v->a[16543] = 1;
	v->a[16544] = aux_sym_command_repeat1;
	v->a[16545] = state(738);
	v->a[16546] = 1;
	v->a[16547] = sym_file_redirect;
	v->a[16548] = state(1460);
	v->a[16549] = 1;
	v->a[16550] = aux_sym_redirected_statement_repeat2;
	v->a[16551] = state(1464);
	v->a[16552] = 1;
	v->a[16553] = sym_pipeline;
	v->a[16554] = state(2269);
	v->a[16555] = 1;
	v->a[16556] = sym__statement_not_pipeline;
	v->a[16557] = actions(11);
	v->a[16558] = 2;
	v->a[16559] = anon_sym_while;
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = anon_sym_until;
	v->a[16561] = actions(57);
	v->a[16562] = 2;
	v->a[16563] = anon_sym_LT_AMP_DASH;
	v->a[16564] = anon_sym_GT_AMP_DASH;
	v->a[16565] = actions(65);
	v->a[16566] = 2;
	v->a[16567] = sym_raw_string;
	v->a[16568] = sym_number;
	v->a[16569] = state(394);
	v->a[16570] = 5;
	v->a[16571] = sym_arithmetic_expansion;
	v->a[16572] = sym_string;
	v->a[16573] = sym_simple_expansion;
	v->a[16574] = sym_expansion;
	v->a[16575] = sym_command_substitution;
	v->a[16576] = actions(55);
	v->a[16577] = 8;
	v->a[16578] = anon_sym_LT;
	v->a[16579] = anon_sym_GT;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = anon_sym_GT_GT;
	v->a[16581] = anon_sym_AMP_GT;
	v->a[16582] = anon_sym_AMP_GT_GT;
	v->a[16583] = anon_sym_LT_AMP;
	v->a[16584] = anon_sym_GT_AMP;
	v->a[16585] = anon_sym_GT_PIPE;
	v->a[16586] = state(1324);
	v->a[16587] = 12;
	v->a[16588] = sym_redirected_statement;
	v->a[16589] = sym_for_statement;
	v->a[16590] = sym_while_statement;
	v->a[16591] = sym_if_statement;
	v->a[16592] = sym_case_statement;
	v->a[16593] = sym_function_definition;
	v->a[16594] = sym_compound_statement;
	v->a[16595] = sym_subshell;
	v->a[16596] = sym_list;
	v->a[16597] = sym_negated_command;
	v->a[16598] = sym_command;
	v->a[16599] = sym__variable_assignments;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
