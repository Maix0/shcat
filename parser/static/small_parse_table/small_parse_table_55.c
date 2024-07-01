/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_55.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_275(t_small_parse_table_array *v)
{
	v->a[5500] = sym_negated_command;
	v->a[5501] = sym_command;
	v->a[5502] = sym__variable_assignments;
	v->a[5503] = 31;
	v->a[5504] = actions(3);
	v->a[5505] = 1;
	v->a[5506] = sym_comment;
	v->a[5507] = actions(9);
	v->a[5508] = 1;
	v->a[5509] = anon_sym_for;
	v->a[5510] = actions(13);
	v->a[5511] = 1;
	v->a[5512] = anon_sym_if;
	v->a[5513] = actions(15);
	v->a[5514] = 1;
	v->a[5515] = anon_sym_case;
	v->a[5516] = actions(17);
	v->a[5517] = 1;
	v->a[5518] = anon_sym_LPAREN;
	v->a[5519] = actions(19);
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = 1;
	v->a[5521] = anon_sym_LBRACE;
	v->a[5522] = actions(55);
	v->a[5523] = 1;
	v->a[5524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5525] = actions(57);
	v->a[5526] = 1;
	v->a[5527] = anon_sym_DOLLAR;
	v->a[5528] = actions(59);
	v->a[5529] = 1;
	v->a[5530] = anon_sym_DQUOTE;
	v->a[5531] = actions(63);
	v->a[5532] = 1;
	v->a[5533] = anon_sym_DOLLAR_LBRACE;
	v->a[5534] = actions(65);
	v->a[5535] = 1;
	v->a[5536] = anon_sym_DOLLAR_LPAREN;
	v->a[5537] = actions(67);
	v->a[5538] = 1;
	v->a[5539] = anon_sym_BQUOTE;
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = actions(211);
	v->a[5541] = 1;
	v->a[5542] = sym_word;
	v->a[5543] = actions(213);
	v->a[5544] = 1;
	v->a[5545] = anon_sym_BANG;
	v->a[5546] = actions(219);
	v->a[5547] = 1;
	v->a[5548] = sym_file_descriptor;
	v->a[5549] = actions(221);
	v->a[5550] = 1;
	v->a[5551] = sym_variable_name;
	v->a[5552] = state(125);
	v->a[5553] = 1;
	v->a[5554] = aux_sym__statements_repeat1;
	v->a[5555] = state(173);
	v->a[5556] = 1;
	v->a[5557] = sym_command_name;
	v->a[5558] = state(224);
	v->a[5559] = 1;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = sym_variable_assignment;
	v->a[5561] = state(603);
	v->a[5562] = 1;
	v->a[5563] = sym_concatenation;
	v->a[5564] = state(673);
	v->a[5565] = 1;
	v->a[5566] = aux_sym_command_repeat1;
	v->a[5567] = state(677);
	v->a[5568] = 1;
	v->a[5569] = sym_file_redirect;
	v->a[5570] = state(1020);
	v->a[5571] = 1;
	v->a[5572] = sym_pipeline;
	v->a[5573] = state(1136);
	v->a[5574] = 1;
	v->a[5575] = aux_sym_redirected_statement_repeat2;
	v->a[5576] = state(1898);
	v->a[5577] = 1;
	v->a[5578] = sym__statement_not_pipeline;
	v->a[5579] = state(1959);
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = 1;
	v->a[5581] = sym__statements;
	v->a[5582] = actions(11);
	v->a[5583] = 2;
	v->a[5584] = anon_sym_while;
	v->a[5585] = anon_sym_until;
	v->a[5586] = actions(217);
	v->a[5587] = 2;
	v->a[5588] = sym_raw_string;
	v->a[5589] = sym_number;
	v->a[5590] = state(362);
	v->a[5591] = 5;
	v->a[5592] = sym_arithmetic_expansion;
	v->a[5593] = sym_string;
	v->a[5594] = sym_simple_expansion;
	v->a[5595] = sym_expansion;
	v->a[5596] = sym_command_substitution;
	v->a[5597] = actions(215);
	v->a[5598] = 7;
	v->a[5599] = anon_sym_LT;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
