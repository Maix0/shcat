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
	v->a[16500] = actions(107);
	v->a[16501] = 2;
	v->a[16502] = anon_sym_LT_AMP_DASH;
	v->a[16503] = anon_sym_GT_AMP_DASH;
	v->a[16504] = actions(115);
	v->a[16505] = 2;
	v->a[16506] = sym_raw_string;
	v->a[16507] = sym_number;
	v->a[16508] = state(289);
	v->a[16509] = 5;
	v->a[16510] = sym_arithmetic_expansion;
	v->a[16511] = sym_string;
	v->a[16512] = sym_simple_expansion;
	v->a[16513] = sym_expansion;
	v->a[16514] = sym_command_substitution;
	v->a[16515] = actions(105);
	v->a[16516] = 8;
	v->a[16517] = anon_sym_LT;
	v->a[16518] = anon_sym_GT;
	v->a[16519] = anon_sym_GT_GT;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = anon_sym_AMP_GT;
	v->a[16521] = anon_sym_AMP_GT_GT;
	v->a[16522] = anon_sym_LT_AMP;
	v->a[16523] = anon_sym_GT_AMP;
	v->a[16524] = anon_sym_GT_PIPE;
	v->a[16525] = 31;
	v->a[16526] = actions(3);
	v->a[16527] = 1;
	v->a[16528] = sym_comment;
	v->a[16529] = actions(9);
	v->a[16530] = 1;
	v->a[16531] = anon_sym_for;
	v->a[16532] = actions(13);
	v->a[16533] = 1;
	v->a[16534] = anon_sym_if;
	v->a[16535] = actions(15);
	v->a[16536] = 1;
	v->a[16537] = anon_sym_case;
	v->a[16538] = actions(17);
	v->a[16539] = 1;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = anon_sym_LPAREN;
	v->a[16541] = actions(19);
	v->a[16542] = 1;
	v->a[16543] = anon_sym_LBRACE;
	v->a[16544] = actions(45);
	v->a[16545] = 1;
	v->a[16546] = sym_word;
	v->a[16547] = actions(53);
	v->a[16548] = 1;
	v->a[16549] = anon_sym_BANG;
	v->a[16550] = actions(59);
	v->a[16551] = 1;
	v->a[16552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16553] = actions(61);
	v->a[16554] = 1;
	v->a[16555] = anon_sym_DOLLAR;
	v->a[16556] = actions(63);
	v->a[16557] = 1;
	v->a[16558] = anon_sym_DQUOTE;
	v->a[16559] = actions(67);
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = 1;
	v->a[16561] = anon_sym_DOLLAR_LBRACE;
	v->a[16562] = actions(69);
	v->a[16563] = 1;
	v->a[16564] = anon_sym_DOLLAR_LPAREN;
	v->a[16565] = actions(71);
	v->a[16566] = 1;
	v->a[16567] = anon_sym_BQUOTE;
	v->a[16568] = actions(73);
	v->a[16569] = 1;
	v->a[16570] = sym_file_descriptor;
	v->a[16571] = actions(75);
	v->a[16572] = 1;
	v->a[16573] = sym_variable_name;
	v->a[16574] = state(113);
	v->a[16575] = 1;
	v->a[16576] = aux_sym__terminated_statement;
	v->a[16577] = state(191);
	v->a[16578] = 1;
	v->a[16579] = sym_command_name;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = state(281);
	v->a[16581] = 1;
	v->a[16582] = sym_variable_assignment;
	v->a[16583] = state(624);
	v->a[16584] = 1;
	v->a[16585] = sym_concatenation;
	v->a[16586] = state(726);
	v->a[16587] = 1;
	v->a[16588] = sym_file_redirect;
	v->a[16589] = state(733);
	v->a[16590] = 1;
	v->a[16591] = aux_sym_command_repeat1;
	v->a[16592] = state(1200);
	v->a[16593] = 1;
	v->a[16594] = sym_pipeline;
	v->a[16595] = state(1307);
	v->a[16596] = 1;
	v->a[16597] = aux_sym_redirected_statement_repeat2;
	v->a[16598] = state(2117);
	v->a[16599] = 1;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
