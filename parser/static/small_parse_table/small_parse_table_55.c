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
	v->a[5500] = 1;
	v->a[5501] = anon_sym_LPAREN;
	v->a[5502] = actions(19);
	v->a[5503] = 1;
	v->a[5504] = anon_sym_LBRACE;
	v->a[5505] = actions(63);
	v->a[5506] = 1;
	v->a[5507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5508] = actions(65);
	v->a[5509] = 1;
	v->a[5510] = anon_sym_DOLLAR;
	v->a[5511] = actions(67);
	v->a[5512] = 1;
	v->a[5513] = anon_sym_DQUOTE;
	v->a[5514] = actions(71);
	v->a[5515] = 1;
	v->a[5516] = aux_sym_number_token1;
	v->a[5517] = actions(73);
	v->a[5518] = 1;
	v->a[5519] = aux_sym_number_token2;
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = actions(75);
	v->a[5521] = 1;
	v->a[5522] = anon_sym_DOLLAR_LBRACE;
	v->a[5523] = actions(77);
	v->a[5524] = 1;
	v->a[5525] = anon_sym_DOLLAR_LPAREN;
	v->a[5526] = actions(79);
	v->a[5527] = 1;
	v->a[5528] = anon_sym_BQUOTE;
	v->a[5529] = actions(248);
	v->a[5530] = 1;
	v->a[5531] = sym_word;
	v->a[5532] = actions(250);
	v->a[5533] = 1;
	v->a[5534] = anon_sym_BANG;
	v->a[5535] = actions(256);
	v->a[5536] = 1;
	v->a[5537] = sym_raw_string;
	v->a[5538] = actions(258);
	v->a[5539] = 1;
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = sym_file_descriptor;
	v->a[5541] = actions(260);
	v->a[5542] = 1;
	v->a[5543] = sym_variable_name;
	v->a[5544] = state(141);
	v->a[5545] = 1;
	v->a[5546] = aux_sym__statements_repeat1;
	v->a[5547] = state(175);
	v->a[5548] = 1;
	v->a[5549] = sym_command_name;
	v->a[5550] = state(278);
	v->a[5551] = 1;
	v->a[5552] = sym_variable_assignment;
	v->a[5553] = state(567);
	v->a[5554] = 1;
	v->a[5555] = aux_sym_command_repeat1;
	v->a[5556] = state(582);
	v->a[5557] = 1;
	v->a[5558] = sym_concatenation;
	v->a[5559] = state(695);
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = 1;
	v->a[5561] = sym_file_redirect;
	v->a[5562] = state(1100);
	v->a[5563] = 1;
	v->a[5564] = sym_pipeline;
	v->a[5565] = state(1196);
	v->a[5566] = 1;
	v->a[5567] = aux_sym_redirected_statement_repeat2;
	v->a[5568] = state(2037);
	v->a[5569] = 1;
	v->a[5570] = sym__statement_not_pipeline;
	v->a[5571] = state(2215);
	v->a[5572] = 1;
	v->a[5573] = sym__statements;
	v->a[5574] = actions(11);
	v->a[5575] = 2;
	v->a[5576] = anon_sym_while;
	v->a[5577] = anon_sym_until;
	v->a[5578] = actions(254);
	v->a[5579] = 2;
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = anon_sym_LT_AMP_DASH;
	v->a[5581] = anon_sym_GT_AMP_DASH;
	v->a[5582] = state(295);
	v->a[5583] = 6;
	v->a[5584] = sym_arithmetic_expansion;
	v->a[5585] = sym_string;
	v->a[5586] = sym_number;
	v->a[5587] = sym_simple_expansion;
	v->a[5588] = sym_expansion;
	v->a[5589] = sym_command_substitution;
	v->a[5590] = actions(252);
	v->a[5591] = 8;
	v->a[5592] = anon_sym_LT;
	v->a[5593] = anon_sym_GT;
	v->a[5594] = anon_sym_GT_GT;
	v->a[5595] = anon_sym_AMP_GT;
	v->a[5596] = anon_sym_AMP_GT_GT;
	v->a[5597] = anon_sym_LT_AMP;
	v->a[5598] = anon_sym_GT_AMP;
	v->a[5599] = anon_sym_GT_PIPE;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
