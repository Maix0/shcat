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
	v->a[5500] = actions(19);
	v->a[5501] = 1;
	v->a[5502] = anon_sym_LBRACE;
	v->a[5503] = actions(45);
	v->a[5504] = 1;
	v->a[5505] = sym_word;
	v->a[5506] = actions(53);
	v->a[5507] = 1;
	v->a[5508] = anon_sym_BANG;
	v->a[5509] = actions(59);
	v->a[5510] = 1;
	v->a[5511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5512] = actions(61);
	v->a[5513] = 1;
	v->a[5514] = anon_sym_DOLLAR;
	v->a[5515] = actions(63);
	v->a[5516] = 1;
	v->a[5517] = anon_sym_DQUOTE;
	v->a[5518] = actions(67);
	v->a[5519] = 1;
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = anon_sym_DOLLAR_LBRACE;
	v->a[5521] = actions(69);
	v->a[5522] = 1;
	v->a[5523] = anon_sym_DOLLAR_LPAREN;
	v->a[5524] = actions(71);
	v->a[5525] = 1;
	v->a[5526] = anon_sym_BQUOTE;
	v->a[5527] = actions(73);
	v->a[5528] = 1;
	v->a[5529] = sym_file_descriptor;
	v->a[5530] = actions(75);
	v->a[5531] = 1;
	v->a[5532] = sym_variable_name;
	v->a[5533] = actions(242);
	v->a[5534] = 1;
	v->a[5535] = anon_sym_then;
	v->a[5536] = state(35);
	v->a[5537] = 1;
	v->a[5538] = aux_sym__terminated_statement;
	v->a[5539] = state(187);
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = 1;
	v->a[5541] = sym_command_name;
	v->a[5542] = state(274);
	v->a[5543] = 1;
	v->a[5544] = sym_variable_assignment;
	v->a[5545] = state(647);
	v->a[5546] = 1;
	v->a[5547] = sym_concatenation;
	v->a[5548] = state(736);
	v->a[5549] = 1;
	v->a[5550] = aux_sym_command_repeat1;
	v->a[5551] = state(738);
	v->a[5552] = 1;
	v->a[5553] = sym_file_redirect;
	v->a[5554] = state(1439);
	v->a[5555] = 1;
	v->a[5556] = sym_pipeline;
	v->a[5557] = state(1460);
	v->a[5558] = 1;
	v->a[5559] = aux_sym_redirected_statement_repeat2;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = state(2269);
	v->a[5561] = 1;
	v->a[5562] = sym__statement_not_pipeline;
	v->a[5563] = actions(11);
	v->a[5564] = 2;
	v->a[5565] = anon_sym_while;
	v->a[5566] = anon_sym_until;
	v->a[5567] = actions(57);
	v->a[5568] = 2;
	v->a[5569] = anon_sym_LT_AMP_DASH;
	v->a[5570] = anon_sym_GT_AMP_DASH;
	v->a[5571] = actions(65);
	v->a[5572] = 2;
	v->a[5573] = sym_raw_string;
	v->a[5574] = sym_number;
	v->a[5575] = state(394);
	v->a[5576] = 5;
	v->a[5577] = sym_arithmetic_expansion;
	v->a[5578] = sym_string;
	v->a[5579] = sym_simple_expansion;
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = sym_expansion;
	v->a[5581] = sym_command_substitution;
	v->a[5582] = actions(55);
	v->a[5583] = 8;
	v->a[5584] = anon_sym_LT;
	v->a[5585] = anon_sym_GT;
	v->a[5586] = anon_sym_GT_GT;
	v->a[5587] = anon_sym_AMP_GT;
	v->a[5588] = anon_sym_AMP_GT_GT;
	v->a[5589] = anon_sym_LT_AMP;
	v->a[5590] = anon_sym_GT_AMP;
	v->a[5591] = anon_sym_GT_PIPE;
	v->a[5592] = state(1312);
	v->a[5593] = 12;
	v->a[5594] = sym_redirected_statement;
	v->a[5595] = sym_for_statement;
	v->a[5596] = sym_while_statement;
	v->a[5597] = sym_if_statement;
	v->a[5598] = sym_case_statement;
	v->a[5599] = sym_function_definition;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
