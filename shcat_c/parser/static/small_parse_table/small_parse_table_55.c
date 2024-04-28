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
	v->a[5500] = anon_sym_LPAREN_LPAREN;
	v->a[5501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5502] = actions(1569);
	v->a[5503] = 2;
	v->a[5504] = anon_sym_LT_LPAREN;
	v->a[5505] = anon_sym_GT_LPAREN;
	v->a[5506] = actions(1627);
	v->a[5507] = 2;
	v->a[5508] = sym_file_descriptor;
	v->a[5509] = aux_sym_heredoc_redirect_token1;
	v->a[5510] = actions(1688);
	v->a[5511] = 2;
	v->a[5512] = anon_sym_EQ_EQ;
	v->a[5513] = anon_sym_EQ_TILDE;
	v->a[5514] = actions(1686);
	v->a[5515] = 3;
	v->a[5516] = sym_raw_string;
	v->a[5517] = sym_ansi_c_string;
	v->a[5518] = sym_word;
	v->a[5519] = state(1219);
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = 9;
	v->a[5521] = sym_arithmetic_expansion;
	v->a[5522] = sym_brace_expression;
	v->a[5523] = sym_string;
	v->a[5524] = sym_translated_string;
	v->a[5525] = sym_number;
	v->a[5526] = sym_simple_expansion;
	v->a[5527] = sym_expansion;
	v->a[5528] = sym_command_substitution;
	v->a[5529] = sym_process_substitution;
	v->a[5530] = actions(1625);
	v->a[5531] = 19;
	v->a[5532] = anon_sym_SEMI;
	v->a[5533] = anon_sym_PIPE_PIPE;
	v->a[5534] = anon_sym_AMP_AMP;
	v->a[5535] = anon_sym_PIPE;
	v->a[5536] = anon_sym_AMP;
	v->a[5537] = anon_sym_LT;
	v->a[5538] = anon_sym_GT;
	v->a[5539] = anon_sym_LT_LT;
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = anon_sym_GT_GT;
	v->a[5541] = anon_sym_SEMI_SEMI;
	v->a[5542] = anon_sym_PIPE_AMP;
	v->a[5543] = anon_sym_AMP_GT;
	v->a[5544] = anon_sym_AMP_GT_GT;
	v->a[5545] = anon_sym_LT_AMP;
	v->a[5546] = anon_sym_GT_AMP;
	v->a[5547] = anon_sym_GT_PIPE;
	v->a[5548] = anon_sym_LT_AMP_DASH;
	v->a[5549] = anon_sym_GT_AMP_DASH;
	v->a[5550] = anon_sym_LT_LT_DASH;
	v->a[5551] = 21;
	v->a[5552] = actions(3);
	v->a[5553] = 1;
	v->a[5554] = sym_comment;
	v->a[5555] = actions(2218);
	v->a[5556] = 1;
	v->a[5557] = anon_sym_DOLLAR_LBRACK;
	v->a[5558] = actions(2221);
	v->a[5559] = 1;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = anon_sym_DOLLAR;
	v->a[5561] = actions(2224);
	v->a[5562] = 1;
	v->a[5563] = sym__special_character;
	v->a[5564] = actions(2227);
	v->a[5565] = 1;
	v->a[5566] = anon_sym_DQUOTE;
	v->a[5567] = actions(2230);
	v->a[5568] = 1;
	v->a[5569] = aux_sym_number_token1;
	v->a[5570] = actions(2233);
	v->a[5571] = 1;
	v->a[5572] = aux_sym_number_token2;
	v->a[5573] = actions(2236);
	v->a[5574] = 1;
	v->a[5575] = anon_sym_DOLLAR_LBRACE;
	v->a[5576] = actions(2239);
	v->a[5577] = 1;
	v->a[5578] = anon_sym_DOLLAR_LPAREN;
	v->a[5579] = actions(2242);
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = 1;
	v->a[5581] = anon_sym_BQUOTE;
	v->a[5582] = actions(2245);
	v->a[5583] = 1;
	v->a[5584] = anon_sym_DOLLAR_BQUOTE;
	v->a[5585] = actions(2251);
	v->a[5586] = 1;
	v->a[5587] = sym_test_operator;
	v->a[5588] = actions(2254);
	v->a[5589] = 1;
	v->a[5590] = sym__brace_start;
	v->a[5591] = state(1474);
	v->a[5592] = 1;
	v->a[5593] = aux_sym__literal_repeat1;
	v->a[5594] = actions(2211);
	v->a[5595] = 2;
	v->a[5596] = anon_sym_LPAREN_LPAREN;
	v->a[5597] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5598] = actions(2248);
	v->a[5599] = 2;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
