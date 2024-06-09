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
	v->a[16500] = anon_sym_LPAREN;
	v->a[16501] = actions(19);
	v->a[16502] = 1;
	v->a[16503] = anon_sym_LBRACE;
	v->a[16504] = actions(49);
	v->a[16505] = 1;
	v->a[16506] = sym_word;
	v->a[16507] = actions(57);
	v->a[16508] = 1;
	v->a[16509] = anon_sym_BANG;
	v->a[16510] = actions(63);
	v->a[16511] = 1;
	v->a[16512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16513] = actions(65);
	v->a[16514] = 1;
	v->a[16515] = anon_sym_DOLLAR;
	v->a[16516] = actions(67);
	v->a[16517] = 1;
	v->a[16518] = anon_sym_DQUOTE;
	v->a[16519] = actions(69);
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = 1;
	v->a[16521] = sym_raw_string;
	v->a[16522] = actions(71);
	v->a[16523] = 1;
	v->a[16524] = aux_sym_number_token1;
	v->a[16525] = actions(73);
	v->a[16526] = 1;
	v->a[16527] = aux_sym_number_token2;
	v->a[16528] = actions(75);
	v->a[16529] = 1;
	v->a[16530] = anon_sym_DOLLAR_LBRACE;
	v->a[16531] = actions(77);
	v->a[16532] = 1;
	v->a[16533] = anon_sym_DOLLAR_LPAREN;
	v->a[16534] = actions(79);
	v->a[16535] = 1;
	v->a[16536] = anon_sym_BQUOTE;
	v->a[16537] = actions(81);
	v->a[16538] = 1;
	v->a[16539] = sym_file_descriptor;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = actions(83);
	v->a[16541] = 1;
	v->a[16542] = sym_variable_name;
	v->a[16543] = state(49);
	v->a[16544] = 1;
	v->a[16545] = aux_sym__terminated_statement;
	v->a[16546] = state(190);
	v->a[16547] = 1;
	v->a[16548] = sym_command_name;
	v->a[16549] = state(303);
	v->a[16550] = 1;
	v->a[16551] = sym_variable_assignment;
	v->a[16552] = state(582);
	v->a[16553] = 1;
	v->a[16554] = sym_concatenation;
	v->a[16555] = state(587);
	v->a[16556] = 1;
	v->a[16557] = aux_sym_command_repeat1;
	v->a[16558] = state(718);
	v->a[16559] = 1;
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = sym_file_redirect;
	v->a[16561] = state(1213);
	v->a[16562] = 1;
	v->a[16563] = aux_sym_redirected_statement_repeat2;
	v->a[16564] = state(1225);
	v->a[16565] = 1;
	v->a[16566] = sym_pipeline;
	v->a[16567] = state(2035);
	v->a[16568] = 1;
	v->a[16569] = sym__statement_not_pipeline;
	v->a[16570] = actions(11);
	v->a[16571] = 2;
	v->a[16572] = anon_sym_while;
	v->a[16573] = anon_sym_until;
	v->a[16574] = actions(61);
	v->a[16575] = 2;
	v->a[16576] = anon_sym_LT_AMP_DASH;
	v->a[16577] = anon_sym_GT_AMP_DASH;
	v->a[16578] = state(397);
	v->a[16579] = 6;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = sym_arithmetic_expansion;
	v->a[16581] = sym_string;
	v->a[16582] = sym_number;
	v->a[16583] = sym_simple_expansion;
	v->a[16584] = sym_expansion;
	v->a[16585] = sym_command_substitution;
	v->a[16586] = actions(59);
	v->a[16587] = 8;
	v->a[16588] = anon_sym_LT;
	v->a[16589] = anon_sym_GT;
	v->a[16590] = anon_sym_GT_GT;
	v->a[16591] = anon_sym_AMP_GT;
	v->a[16592] = anon_sym_AMP_GT_GT;
	v->a[16593] = anon_sym_LT_AMP;
	v->a[16594] = anon_sym_GT_AMP;
	v->a[16595] = anon_sym_GT_PIPE;
	v->a[16596] = state(1137);
	v->a[16597] = 12;
	v->a[16598] = sym_redirected_statement;
	v->a[16599] = sym_for_statement;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
