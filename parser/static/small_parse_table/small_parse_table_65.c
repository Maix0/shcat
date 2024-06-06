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
	v->a[6500] = aux_sym_heredoc_redirect_token1;
	v->a[6501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6502] = anon_sym_AMP;
	v->a[6503] = sym__special_character;
	v->a[6504] = anon_sym_DQUOTE;
	v->a[6505] = sym_raw_string;
	v->a[6506] = aux_sym_number_token1;
	v->a[6507] = aux_sym_number_token2;
	v->a[6508] = anon_sym_DOLLAR_LBRACE;
	v->a[6509] = anon_sym_DOLLAR_LPAREN;
	v->a[6510] = anon_sym_BQUOTE;
	v->a[6511] = anon_sym_DOLLAR_BQUOTE;
	v->a[6512] = sym_word;
	v->a[6513] = anon_sym_SEMI;
	v->a[6514] = 22;
	v->a[6515] = actions(3);
	v->a[6516] = 1;
	v->a[6517] = sym_comment;
	v->a[6518] = actions(1146);
	v->a[6519] = 1;
	small_parse_table_326(v);
}

void	small_parse_table_326(t_small_parse_table_array *v)
{
	v->a[6520] = anon_sym_LPAREN;
	v->a[6521] = actions(1252);
	v->a[6522] = 1;
	v->a[6523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6524] = actions(1254);
	v->a[6525] = 1;
	v->a[6526] = anon_sym_DOLLAR;
	v->a[6527] = actions(1258);
	v->a[6528] = 1;
	v->a[6529] = anon_sym_DQUOTE;
	v->a[6530] = actions(1260);
	v->a[6531] = 1;
	v->a[6532] = aux_sym_number_token1;
	v->a[6533] = actions(1262);
	v->a[6534] = 1;
	v->a[6535] = aux_sym_number_token2;
	v->a[6536] = actions(1264);
	v->a[6537] = 1;
	v->a[6538] = anon_sym_DOLLAR_LBRACE;
	v->a[6539] = actions(1266);
	small_parse_table_327(v);
}

void	small_parse_table_327(t_small_parse_table_array *v)
{
	v->a[6540] = 1;
	v->a[6541] = anon_sym_DOLLAR_LPAREN;
	v->a[6542] = actions(1270);
	v->a[6543] = 1;
	v->a[6544] = anon_sym_DOLLAR_BQUOTE;
	v->a[6545] = actions(1274);
	v->a[6546] = 1;
	v->a[6547] = sym__bare_dollar;
	v->a[6548] = actions(1276);
	v->a[6549] = 1;
	v->a[6550] = sym__brace_start;
	v->a[6551] = actions(1428);
	v->a[6552] = 1;
	v->a[6553] = sym__special_character;
	v->a[6554] = actions(1430);
	v->a[6555] = 1;
	v->a[6556] = sym_test_operator;
	v->a[6557] = state(420);
	v->a[6558] = 1;
	v->a[6559] = aux_sym_command_repeat2;
	small_parse_table_328(v);
}

void	small_parse_table_328(t_small_parse_table_array *v)
{
	v->a[6560] = state(1232);
	v->a[6561] = 1;
	v->a[6562] = aux_sym__literal_repeat1;
	v->a[6563] = state(1293);
	v->a[6564] = 1;
	v->a[6565] = sym_concatenation;
	v->a[6566] = state(2185);
	v->a[6567] = 1;
	v->a[6568] = sym_subshell;
	v->a[6569] = actions(695);
	v->a[6570] = 2;
	v->a[6571] = sym_file_descriptor;
	v->a[6572] = aux_sym_heredoc_redirect_token1;
	v->a[6573] = actions(1426);
	v->a[6574] = 2;
	v->a[6575] = sym_raw_string;
	v->a[6576] = sym_word;
	v->a[6577] = state(1146);
	v->a[6578] = 7;
	v->a[6579] = sym_arithmetic_expansion;
	small_parse_table_329(v);
}

void	small_parse_table_329(t_small_parse_table_array *v)
{
	v->a[6580] = sym_brace_expression;
	v->a[6581] = sym_string;
	v->a[6582] = sym_number;
	v->a[6583] = sym_simple_expansion;
	v->a[6584] = sym_expansion;
	v->a[6585] = sym_command_substitution;
	v->a[6586] = actions(691);
	v->a[6587] = 20;
	v->a[6588] = anon_sym_PIPE;
	v->a[6589] = anon_sym_SEMI_SEMI;
	v->a[6590] = anon_sym_PIPE_AMP;
	v->a[6591] = anon_sym_AMP_AMP;
	v->a[6592] = anon_sym_PIPE_PIPE;
	v->a[6593] = anon_sym_LT;
	v->a[6594] = anon_sym_GT;
	v->a[6595] = anon_sym_GT_GT;
	v->a[6596] = anon_sym_AMP_GT;
	v->a[6597] = anon_sym_AMP_GT_GT;
	v->a[6598] = anon_sym_LT_AMP;
	v->a[6599] = anon_sym_GT_AMP;
	small_parse_table_330(v);
}

/* EOF small_parse_table_65.c */
