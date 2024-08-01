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
	v->a[5500] = sym_string;
	v->a[5501] = sym_simple_expansion;
	v->a[5502] = sym_expansion;
	v->a[5503] = sym_command_substitution;
	v->a[5504] = state(820);
	v->a[5505] = 12;
	v->a[5506] = sym_redirected_statement;
	v->a[5507] = sym_for_statement;
	v->a[5508] = sym_while_statement;
	v->a[5509] = sym_if_statement;
	v->a[5510] = sym_case_statement;
	v->a[5511] = sym_function_definition;
	v->a[5512] = sym_compound_statement;
	v->a[5513] = sym_subshell;
	v->a[5514] = sym_list;
	v->a[5515] = sym_negated_command;
	v->a[5516] = sym_command;
	v->a[5517] = sym__variable_assignments;
	v->a[5518] = 30;
	v->a[5519] = actions(3);
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = 1;
	v->a[5521] = sym_comment;
	v->a[5522] = actions(9);
	v->a[5523] = 1;
	v->a[5524] = anon_sym_for;
	v->a[5525] = actions(13);
	v->a[5526] = 1;
	v->a[5527] = anon_sym_if;
	v->a[5528] = actions(15);
	v->a[5529] = 1;
	v->a[5530] = anon_sym_case;
	v->a[5531] = actions(17);
	v->a[5532] = 1;
	v->a[5533] = anon_sym_LPAREN;
	v->a[5534] = actions(19);
	v->a[5535] = 1;
	v->a[5536] = anon_sym_LBRACE;
	v->a[5537] = actions(41);
	v->a[5538] = 1;
	v->a[5539] = sym_word;
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = actions(49);
	v->a[5541] = 1;
	v->a[5542] = anon_sym_BANG;
	v->a[5543] = actions(53);
	v->a[5544] = 1;
	v->a[5545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5546] = actions(55);
	v->a[5547] = 1;
	v->a[5548] = anon_sym_DOLLAR;
	v->a[5549] = actions(57);
	v->a[5550] = 1;
	v->a[5551] = anon_sym_DQUOTE;
	v->a[5552] = actions(61);
	v->a[5553] = 1;
	v->a[5554] = anon_sym_DOLLAR_LBRACE;
	v->a[5555] = actions(63);
	v->a[5556] = 1;
	v->a[5557] = anon_sym_DOLLAR_LPAREN;
	v->a[5558] = actions(65);
	v->a[5559] = 1;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = anon_sym_BQUOTE;
	v->a[5561] = actions(67);
	v->a[5562] = 1;
	v->a[5563] = sym_variable_name;
	v->a[5564] = actions(220);
	v->a[5565] = 1;
	v->a[5566] = anon_sym_done;
	v->a[5567] = state(38);
	v->a[5568] = 1;
	v->a[5569] = aux_sym__terminated_statement;
	v->a[5570] = state(185);
	v->a[5571] = 1;
	v->a[5572] = sym_command_name;
	v->a[5573] = state(237);
	v->a[5574] = 1;
	v->a[5575] = sym_variable_assignment;
	v->a[5576] = state(411);
	v->a[5577] = 1;
	v->a[5578] = aux_sym_command_repeat1;
	v->a[5579] = state(551);
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = 1;
	v->a[5581] = sym_file_redirect;
	v->a[5582] = state(555);
	v->a[5583] = 1;
	v->a[5584] = sym_concatenation;
	v->a[5585] = state(1059);
	v->a[5586] = 1;
	v->a[5587] = sym_pipeline;
	v->a[5588] = state(1126);
	v->a[5589] = 1;
	v->a[5590] = aux_sym_redirected_statement_repeat2;
	v->a[5591] = state(1561);
	v->a[5592] = 1;
	v->a[5593] = sym__statement_not_pipeline;
	v->a[5594] = actions(11);
	v->a[5595] = 2;
	v->a[5596] = anon_sym_while;
	v->a[5597] = anon_sym_until;
	v->a[5598] = actions(59);
	v->a[5599] = 2;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
