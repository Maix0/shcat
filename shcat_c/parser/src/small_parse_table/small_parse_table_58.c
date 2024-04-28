/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_58.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_290(t_small_parse_table_array *v)
{
	v->a[5800] = sym_variable_name;
	v->a[5801] = actions(2287);
	v->a[5802] = 1;
	v->a[5803] = sym_test_operator;
	v->a[5804] = actions(2289);
	v->a[5805] = 1;
	v->a[5806] = sym__brace_start;
	v->a[5807] = state(1743);
	v->a[5808] = 1;
	v->a[5809] = aux_sym__literal_repeat1;
	v->a[5810] = state(6781);
	v->a[5811] = 1;
	v->a[5812] = sym_subscript;
	v->a[5813] = actions(1799);
	v->a[5814] = 2;
	v->a[5815] = sym_file_descriptor;
	v->a[5816] = aux_sym_heredoc_redirect_token1;
	v->a[5817] = actions(2259);
	v->a[5818] = 2;
	v->a[5819] = anon_sym_LPAREN_LPAREN;
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5821] = actions(2281);
	v->a[5822] = 2;
	v->a[5823] = anon_sym_LT_LPAREN;
	v->a[5824] = anon_sym_GT_LPAREN;
	v->a[5825] = actions(2257);
	v->a[5826] = 3;
	v->a[5827] = sym_raw_string;
	v->a[5828] = sym_ansi_c_string;
	v->a[5829] = sym_word;
	v->a[5830] = state(581);
	v->a[5831] = 3;
	v->a[5832] = sym_variable_assignment;
	v->a[5833] = sym_concatenation;
	v->a[5834] = aux_sym_declaration_command_repeat1;
	v->a[5835] = state(1360);
	v->a[5836] = 9;
	v->a[5837] = sym_arithmetic_expansion;
	v->a[5838] = sym_brace_expression;
	v->a[5839] = sym_string;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = sym_translated_string;
	v->a[5841] = sym_number;
	v->a[5842] = sym_simple_expansion;
	v->a[5843] = sym_expansion;
	v->a[5844] = sym_command_substitution;
	v->a[5845] = sym_process_substitution;
	v->a[5846] = actions(1797);
	v->a[5847] = 20;
	v->a[5848] = anon_sym_SEMI;
	v->a[5849] = anon_sym_PIPE_PIPE;
	v->a[5850] = anon_sym_AMP_AMP;
	v->a[5851] = anon_sym_PIPE;
	v->a[5852] = anon_sym_AMP;
	v->a[5853] = anon_sym_LT;
	v->a[5854] = anon_sym_GT;
	v->a[5855] = anon_sym_LT_LT;
	v->a[5856] = anon_sym_GT_GT;
	v->a[5857] = anon_sym_RPAREN;
	v->a[5858] = anon_sym_SEMI_SEMI;
	v->a[5859] = anon_sym_PIPE_AMP;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = anon_sym_AMP_GT;
	v->a[5861] = anon_sym_AMP_GT_GT;
	v->a[5862] = anon_sym_LT_AMP;
	v->a[5863] = anon_sym_GT_AMP;
	v->a[5864] = anon_sym_GT_PIPE;
	v->a[5865] = anon_sym_LT_AMP_DASH;
	v->a[5866] = anon_sym_GT_AMP_DASH;
	v->a[5867] = anon_sym_LT_LT_DASH;
	v->a[5868] = 24;
	v->a[5869] = actions(3);
	v->a[5870] = 1;
	v->a[5871] = sym_comment;
	v->a[5872] = actions(2261);
	v->a[5873] = 1;
	v->a[5874] = anon_sym_DOLLAR_LBRACK;
	v->a[5875] = actions(2263);
	v->a[5876] = 1;
	v->a[5877] = anon_sym_DOLLAR;
	v->a[5878] = actions(2265);
	v->a[5879] = 1;
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = sym__special_character;
	v->a[5881] = actions(2267);
	v->a[5882] = 1;
	v->a[5883] = anon_sym_DQUOTE;
	v->a[5884] = actions(2269);
	v->a[5885] = 1;
	v->a[5886] = aux_sym_number_token1;
	v->a[5887] = actions(2271);
	v->a[5888] = 1;
	v->a[5889] = aux_sym_number_token2;
	v->a[5890] = actions(2273);
	v->a[5891] = 1;
	v->a[5892] = anon_sym_DOLLAR_LBRACE;
	v->a[5893] = actions(2275);
	v->a[5894] = 1;
	v->a[5895] = anon_sym_DOLLAR_LPAREN;
	v->a[5896] = actions(2277);
	v->a[5897] = 1;
	v->a[5898] = anon_sym_BQUOTE;
	v->a[5899] = actions(2279);
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
