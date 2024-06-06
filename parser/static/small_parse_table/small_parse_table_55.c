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
	v->a[5500] = state(692);
	v->a[5501] = 7;
	v->a[5502] = sym_arithmetic_expansion;
	v->a[5503] = sym_brace_expression;
	v->a[5504] = sym_string;
	v->a[5505] = sym_number;
	v->a[5506] = sym_simple_expansion;
	v->a[5507] = sym_expansion;
	v->a[5508] = sym_command_substitution;
	v->a[5509] = actions(1337);
	v->a[5510] = 21;
	v->a[5511] = anon_sym_PIPE;
	v->a[5512] = anon_sym_SEMI_SEMI;
	v->a[5513] = anon_sym_SEMI_AMP;
	v->a[5514] = anon_sym_SEMI_SEMI_AMP;
	v->a[5515] = anon_sym_PIPE_AMP;
	v->a[5516] = anon_sym_AMP_AMP;
	v->a[5517] = anon_sym_PIPE_PIPE;
	v->a[5518] = anon_sym_LT;
	v->a[5519] = anon_sym_GT;
	small_parse_table_276(v);
}

void	small_parse_table_276(t_small_parse_table_array *v)
{
	v->a[5520] = anon_sym_GT_GT;
	v->a[5521] = anon_sym_AMP_GT;
	v->a[5522] = anon_sym_AMP_GT_GT;
	v->a[5523] = anon_sym_LT_AMP;
	v->a[5524] = anon_sym_GT_AMP;
	v->a[5525] = anon_sym_GT_PIPE;
	v->a[5526] = anon_sym_LT_AMP_DASH;
	v->a[5527] = anon_sym_GT_AMP_DASH;
	v->a[5528] = anon_sym_LT_LT;
	v->a[5529] = anon_sym_LT_LT_DASH;
	v->a[5530] = anon_sym_AMP;
	v->a[5531] = anon_sym_SEMI;
	v->a[5532] = 21;
	v->a[5533] = actions(3);
	v->a[5534] = 1;
	v->a[5535] = sym_comment;
	v->a[5536] = actions(921);
	v->a[5537] = 1;
	v->a[5538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5539] = actions(923);
	small_parse_table_277(v);
}

void	small_parse_table_277(t_small_parse_table_array *v)
{
	v->a[5540] = 1;
	v->a[5541] = anon_sym_DOLLAR;
	v->a[5542] = actions(925);
	v->a[5543] = 1;
	v->a[5544] = sym__special_character;
	v->a[5545] = actions(927);
	v->a[5546] = 1;
	v->a[5547] = anon_sym_DQUOTE;
	v->a[5548] = actions(929);
	v->a[5549] = 1;
	v->a[5550] = aux_sym_number_token1;
	v->a[5551] = actions(931);
	v->a[5552] = 1;
	v->a[5553] = aux_sym_number_token2;
	v->a[5554] = actions(933);
	v->a[5555] = 1;
	v->a[5556] = anon_sym_DOLLAR_LBRACE;
	v->a[5557] = actions(935);
	v->a[5558] = 1;
	v->a[5559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_278(v);
}

void	small_parse_table_278(t_small_parse_table_array *v)
{
	v->a[5560] = actions(937);
	v->a[5561] = 1;
	v->a[5562] = anon_sym_BQUOTE;
	v->a[5563] = actions(939);
	v->a[5564] = 1;
	v->a[5565] = anon_sym_DOLLAR_BQUOTE;
	v->a[5566] = actions(941);
	v->a[5567] = 1;
	v->a[5568] = sym_test_operator;
	v->a[5569] = actions(943);
	v->a[5570] = 1;
	v->a[5571] = sym__bare_dollar;
	v->a[5572] = actions(945);
	v->a[5573] = 1;
	v->a[5574] = sym__brace_start;
	v->a[5575] = state(311);
	v->a[5576] = 1;
	v->a[5577] = aux_sym_command_repeat2;
	v->a[5578] = state(1039);
	v->a[5579] = 1;
	small_parse_table_279(v);
}

void	small_parse_table_279(t_small_parse_table_array *v)
{
	v->a[5580] = aux_sym__literal_repeat1;
	v->a[5581] = state(1193);
	v->a[5582] = 1;
	v->a[5583] = sym_concatenation;
	v->a[5584] = actions(917);
	v->a[5585] = 2;
	v->a[5586] = sym_raw_string;
	v->a[5587] = sym_word;
	v->a[5588] = actions(1280);
	v->a[5589] = 2;
	v->a[5590] = sym_file_descriptor;
	v->a[5591] = aux_sym_heredoc_redirect_token1;
	v->a[5592] = state(692);
	v->a[5593] = 7;
	v->a[5594] = sym_arithmetic_expansion;
	v->a[5595] = sym_brace_expression;
	v->a[5596] = sym_string;
	v->a[5597] = sym_number;
	v->a[5598] = sym_simple_expansion;
	v->a[5599] = sym_expansion;
	small_parse_table_280(v);
}

/* EOF small_parse_table_55.c */
