/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_65.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_325(t_small_parse_table_array *v)
{
	v->a[6500] = sym_ansi_c_string;
	v->a[6501] = sym_word;
	v->a[6502] = state(594);
	v->a[6503] = 3;
	v->a[6504] = sym_variable_assignment;
	v->a[6505] = sym_concatenation;
	v->a[6506] = aux_sym_declaration_command_repeat1;
	v->a[6507] = state(1602);
	v->a[6508] = 9;
	v->a[6509] = sym_arithmetic_expansion;
	v->a[6510] = sym_brace_expression;
	v->a[6511] = sym_string;
	v->a[6512] = sym_translated_string;
	v->a[6513] = sym_number;
	v->a[6514] = sym_simple_expansion;
	v->a[6515] = sym_expansion;
	v->a[6516] = sym_command_substitution;
	v->a[6517] = sym_process_substitution;
	v->a[6518] = actions(1755);
	v->a[6519] = 20;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = anon_sym_SEMI;
	v->a[6521] = anon_sym_PIPE_PIPE;
	v->a[6522] = anon_sym_AMP_AMP;
	v->a[6523] = anon_sym_PIPE;
	v->a[6524] = anon_sym_AMP;
	v->a[6525] = anon_sym_LT;
	v->a[6526] = anon_sym_GT;
	v->a[6527] = anon_sym_LT_LT;
	v->a[6528] = anon_sym_GT_GT;
	v->a[6529] = anon_sym_SEMI_SEMI;
	v->a[6530] = anon_sym_PIPE_AMP;
	v->a[6531] = anon_sym_AMP_GT;
	v->a[6532] = anon_sym_AMP_GT_GT;
	v->a[6533] = anon_sym_LT_AMP;
	v->a[6534] = anon_sym_GT_AMP;
	v->a[6535] = anon_sym_GT_PIPE;
	v->a[6536] = anon_sym_LT_AMP_DASH;
	v->a[6537] = anon_sym_GT_AMP_DASH;
	v->a[6538] = anon_sym_LT_LT_DASH;
	v->a[6539] = anon_sym_BQUOTE;
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = 21;
	v->a[6541] = actions(3);
	v->a[6542] = 1;
	v->a[6543] = sym_comment;
	v->a[6544] = actions(2375);
	v->a[6545] = 1;
	v->a[6546] = anon_sym_DOLLAR_LBRACK;
	v->a[6547] = actions(2378);
	v->a[6548] = 1;
	v->a[6549] = anon_sym_DOLLAR;
	v->a[6550] = actions(2381);
	v->a[6551] = 1;
	v->a[6552] = sym__special_character;
	v->a[6553] = actions(2384);
	v->a[6554] = 1;
	v->a[6555] = anon_sym_DQUOTE;
	v->a[6556] = actions(2387);
	v->a[6557] = 1;
	v->a[6558] = aux_sym_number_token1;
	v->a[6559] = actions(2390);
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = 1;
	v->a[6561] = aux_sym_number_token2;
	v->a[6562] = actions(2393);
	v->a[6563] = 1;
	v->a[6564] = anon_sym_DOLLAR_LBRACE;
	v->a[6565] = actions(2396);
	v->a[6566] = 1;
	v->a[6567] = anon_sym_DOLLAR_LPAREN;
	v->a[6568] = actions(2399);
	v->a[6569] = 1;
	v->a[6570] = anon_sym_BQUOTE;
	v->a[6571] = actions(2402);
	v->a[6572] = 1;
	v->a[6573] = anon_sym_DOLLAR_BQUOTE;
	v->a[6574] = actions(2408);
	v->a[6575] = 1;
	v->a[6576] = sym_test_operator;
	v->a[6577] = actions(2411);
	v->a[6578] = 1;
	v->a[6579] = sym__brace_start;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = state(1658);
	v->a[6581] = 1;
	v->a[6582] = aux_sym__literal_repeat1;
	v->a[6583] = actions(2216);
	v->a[6584] = 2;
	v->a[6585] = sym_file_descriptor;
	v->a[6586] = aux_sym_heredoc_redirect_token1;
	v->a[6587] = actions(2372);
	v->a[6588] = 2;
	v->a[6589] = anon_sym_LPAREN_LPAREN;
	v->a[6590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6591] = actions(2405);
	v->a[6592] = 2;
	v->a[6593] = anon_sym_LT_LPAREN;
	v->a[6594] = anon_sym_GT_LPAREN;
	v->a[6595] = state(593);
	v->a[6596] = 2;
	v->a[6597] = sym_concatenation;
	v->a[6598] = aux_sym_for_statement_repeat1;
	v->a[6599] = actions(2369);
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
