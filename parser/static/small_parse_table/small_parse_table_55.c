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
	v->a[5500] = anon_sym_LBRACE;
	v->a[5501] = actions(53);
	v->a[5502] = 1;
	v->a[5503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5504] = actions(55);
	v->a[5505] = 1;
	v->a[5506] = anon_sym_DOLLAR;
	v->a[5507] = actions(57);
	v->a[5508] = 1;
	v->a[5509] = anon_sym_DQUOTE;
	v->a[5510] = actions(61);
	v->a[5511] = 1;
	v->a[5512] = anon_sym_DOLLAR_LBRACE;
	v->a[5513] = actions(63);
	v->a[5514] = 1;
	v->a[5515] = anon_sym_DOLLAR_LPAREN;
	v->a[5516] = actions(65);
	v->a[5517] = 1;
	v->a[5518] = anon_sym_BQUOTE;
	v->a[5519] = actions(206);
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = 1;
	v->a[5521] = sym_word;
	v->a[5522] = actions(208);
	v->a[5523] = 1;
	v->a[5524] = anon_sym_BANG;
	v->a[5525] = actions(214);
	v->a[5526] = 1;
	v->a[5527] = sym_variable_name;
	v->a[5528] = state(106);
	v->a[5529] = 1;
	v->a[5530] = aux_sym__statements_repeat1;
	v->a[5531] = state(227);
	v->a[5532] = 1;
	v->a[5533] = sym_command_name;
	v->a[5534] = state(277);
	v->a[5535] = 1;
	v->a[5536] = sym_variable_assignment;
	v->a[5537] = state(506);
	v->a[5538] = 1;
	v->a[5539] = aux_sym_command_repeat1;
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = state(568);
	v->a[5541] = 1;
	v->a[5542] = sym_file_redirect;
	v->a[5543] = state(602);
	v->a[5544] = 1;
	v->a[5545] = sym_concatenation;
	v->a[5546] = state(911);
	v->a[5547] = 1;
	v->a[5548] = sym_pipeline;
	v->a[5549] = state(1001);
	v->a[5550] = 1;
	v->a[5551] = aux_sym_redirected_statement_repeat2;
	v->a[5552] = state(1606);
	v->a[5553] = 1;
	v->a[5554] = sym__statement_not_pipeline;
	v->a[5555] = state(1669);
	v->a[5556] = 1;
	v->a[5557] = sym__statements;
	v->a[5558] = actions(11);
	v->a[5559] = 2;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = anon_sym_while;
	v->a[5561] = anon_sym_until;
	v->a[5562] = actions(212);
	v->a[5563] = 2;
	v->a[5564] = sym_raw_string;
	v->a[5565] = sym_number;
	v->a[5566] = state(327);
	v->a[5567] = 5;
	v->a[5568] = sym_arithmetic_expansion;
	v->a[5569] = sym_string;
	v->a[5570] = sym_simple_expansion;
	v->a[5571] = sym_expansion;
	v->a[5572] = sym_command_substitution;
	v->a[5573] = actions(210);
	v->a[5574] = 7;
	v->a[5575] = anon_sym_LT;
	v->a[5576] = anon_sym_GT;
	v->a[5577] = anon_sym_GT_GT;
	v->a[5578] = anon_sym_LT_AMP;
	v->a[5579] = anon_sym_GT_AMP;
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = anon_sym_GT_PIPE;
	v->a[5581] = anon_sym_LT_GT;
	v->a[5582] = state(884);
	v->a[5583] = 12;
	v->a[5584] = sym_redirected_statement;
	v->a[5585] = sym_for_statement;
	v->a[5586] = sym_while_statement;
	v->a[5587] = sym_if_statement;
	v->a[5588] = sym_case_statement;
	v->a[5589] = sym_function_definition;
	v->a[5590] = sym_compound_statement;
	v->a[5591] = sym_subshell;
	v->a[5592] = sym_list;
	v->a[5593] = sym_negated_command;
	v->a[5594] = sym_command;
	v->a[5595] = sym__variable_assignments;
	v->a[5596] = 30;
	v->a[5597] = actions(3);
	v->a[5598] = 1;
	v->a[5599] = sym_comment;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
