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
	v->a[16500] = anon_sym_GT_AMP;
	v->a[16501] = anon_sym_GT_PIPE;
	v->a[16502] = anon_sym_LT_GT;
	v->a[16503] = state(1053);
	v->a[16504] = 12;
	v->a[16505] = sym_redirected_statement;
	v->a[16506] = sym_for_statement;
	v->a[16507] = sym_while_statement;
	v->a[16508] = sym_if_statement;
	v->a[16509] = sym_case_statement;
	v->a[16510] = sym_function_definition;
	v->a[16511] = sym_compound_statement;
	v->a[16512] = sym_subshell;
	v->a[16513] = sym_list;
	v->a[16514] = sym_negated_command;
	v->a[16515] = sym_command;
	v->a[16516] = sym__variable_assignments;
	v->a[16517] = 28;
	v->a[16518] = actions(3);
	v->a[16519] = 1;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = sym_comment;
	v->a[16521] = actions(9);
	v->a[16522] = 1;
	v->a[16523] = anon_sym_for;
	v->a[16524] = actions(13);
	v->a[16525] = 1;
	v->a[16526] = anon_sym_if;
	v->a[16527] = actions(15);
	v->a[16528] = 1;
	v->a[16529] = anon_sym_case;
	v->a[16530] = actions(17);
	v->a[16531] = 1;
	v->a[16532] = anon_sym_LPAREN;
	v->a[16533] = actions(19);
	v->a[16534] = 1;
	v->a[16535] = anon_sym_LBRACE;
	v->a[16536] = actions(55);
	v->a[16537] = 1;
	v->a[16538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16539] = actions(57);
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = 1;
	v->a[16541] = anon_sym_DOLLAR;
	v->a[16542] = actions(59);
	v->a[16543] = 1;
	v->a[16544] = anon_sym_DQUOTE;
	v->a[16545] = actions(63);
	v->a[16546] = 1;
	v->a[16547] = anon_sym_DOLLAR_LBRACE;
	v->a[16548] = actions(65);
	v->a[16549] = 1;
	v->a[16550] = anon_sym_DOLLAR_LPAREN;
	v->a[16551] = actions(67);
	v->a[16552] = 1;
	v->a[16553] = anon_sym_BQUOTE;
	v->a[16554] = actions(69);
	v->a[16555] = 1;
	v->a[16556] = sym_file_descriptor;
	v->a[16557] = actions(71);
	v->a[16558] = 1;
	v->a[16559] = sym_variable_name;
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = actions(223);
	v->a[16561] = 1;
	v->a[16562] = sym_word;
	v->a[16563] = actions(225);
	v->a[16564] = 1;
	v->a[16565] = anon_sym_BANG;
	v->a[16566] = state(183);
	v->a[16567] = 1;
	v->a[16568] = sym_command_name;
	v->a[16569] = state(354);
	v->a[16570] = 1;
	v->a[16571] = sym_variable_assignment;
	v->a[16572] = state(584);
	v->a[16573] = 1;
	v->a[16574] = sym_concatenation;
	v->a[16575] = state(674);
	v->a[16576] = 1;
	v->a[16577] = aux_sym_command_repeat1;
	v->a[16578] = state(723);
	v->a[16579] = 1;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = sym_file_redirect;
	v->a[16581] = state(1099);
	v->a[16582] = 1;
	v->a[16583] = aux_sym_redirected_statement_repeat2;
	v->a[16584] = state(1432);
	v->a[16585] = 1;
	v->a[16586] = sym_pipeline;
	v->a[16587] = actions(11);
	v->a[16588] = 2;
	v->a[16589] = anon_sym_while;
	v->a[16590] = anon_sym_until;
	v->a[16591] = actions(61);
	v->a[16592] = 2;
	v->a[16593] = sym_raw_string;
	v->a[16594] = sym_number;
	v->a[16595] = state(433);
	v->a[16596] = 5;
	v->a[16597] = sym_arithmetic_expansion;
	v->a[16598] = sym_string;
	v->a[16599] = sym_simple_expansion;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
