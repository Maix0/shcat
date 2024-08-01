/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_355.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1775(t_small_parse_table_array *v)
{
	v->a[35500] = actions(1426);
	v->a[35501] = 2;
	v->a[35502] = anon_sym_DASH2;
	v->a[35503] = anon_sym_PLUS2;
	v->a[35504] = actions(1432);
	v->a[35505] = 2;
	v->a[35506] = sym_number;
	v->a[35507] = aux_sym__simple_variable_name_token1;
	v->a[35508] = state(1312);
	v->a[35509] = 3;
	v->a[35510] = sym_string;
	v->a[35511] = sym_simple_expansion;
	v->a[35512] = sym_expansion;
	v->a[35513] = state(1339);
	v->a[35514] = 7;
	v->a[35515] = sym__arithmetic_expression;
	v->a[35516] = sym_arithmetic_literal;
	v->a[35517] = sym_arithmetic_binary_expression;
	v->a[35518] = sym_arithmetic_ternary_expression;
	v->a[35519] = sym_arithmetic_unary_expression;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = sym_arithmetic_postfix_expression;
	v->a[35521] = sym_arithmetic_parenthesized_expression;
	v->a[35522] = 3;
	v->a[35523] = actions(3);
	v->a[35524] = 1;
	v->a[35525] = sym_comment;
	v->a[35526] = actions(1083);
	v->a[35527] = 1;
	v->a[35528] = sym__concat;
	v->a[35529] = actions(1085);
	v->a[35530] = 18;
	v->a[35531] = anon_sym_SEMI_SEMI;
	v->a[35532] = anon_sym_AMP_AMP;
	v->a[35533] = anon_sym_PIPE_PIPE;
	v->a[35534] = anon_sym_LT;
	v->a[35535] = anon_sym_GT;
	v->a[35536] = anon_sym_GT_GT;
	v->a[35537] = aux_sym_heredoc_redirect_token1;
	v->a[35538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35539] = aux_sym_concatenation_token1;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = anon_sym_DOLLAR;
	v->a[35541] = anon_sym_DQUOTE;
	v->a[35542] = sym_raw_string;
	v->a[35543] = sym_number;
	v->a[35544] = anon_sym_DOLLAR_LBRACE;
	v->a[35545] = anon_sym_DOLLAR_LPAREN;
	v->a[35546] = anon_sym_BQUOTE;
	v->a[35547] = sym_word;
	v->a[35548] = anon_sym_SEMI;
	v->a[35549] = 3;
	v->a[35550] = actions(3);
	v->a[35551] = 1;
	v->a[35552] = sym_comment;
	v->a[35553] = actions(1087);
	v->a[35554] = 1;
	v->a[35555] = sym__concat;
	v->a[35556] = actions(1089);
	v->a[35557] = 18;
	v->a[35558] = anon_sym_SEMI_SEMI;
	v->a[35559] = anon_sym_AMP_AMP;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = anon_sym_PIPE_PIPE;
	v->a[35561] = anon_sym_LT;
	v->a[35562] = anon_sym_GT;
	v->a[35563] = anon_sym_GT_GT;
	v->a[35564] = aux_sym_heredoc_redirect_token1;
	v->a[35565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35566] = aux_sym_concatenation_token1;
	v->a[35567] = anon_sym_DOLLAR;
	v->a[35568] = anon_sym_DQUOTE;
	v->a[35569] = sym_raw_string;
	v->a[35570] = sym_number;
	v->a[35571] = anon_sym_DOLLAR_LBRACE;
	v->a[35572] = anon_sym_DOLLAR_LPAREN;
	v->a[35573] = anon_sym_BQUOTE;
	v->a[35574] = sym_word;
	v->a[35575] = anon_sym_SEMI;
	v->a[35576] = 10;
	v->a[35577] = actions(1424);
	v->a[35578] = 1;
	v->a[35579] = anon_sym_LPAREN;
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = actions(1428);
	v->a[35581] = 1;
	v->a[35582] = anon_sym_DOLLAR;
	v->a[35583] = actions(1430);
	v->a[35584] = 1;
	v->a[35585] = anon_sym_DQUOTE;
	v->a[35586] = actions(1434);
	v->a[35587] = 1;
	v->a[35588] = anon_sym_DOLLAR_LBRACE;
	v->a[35589] = actions(1436);
	v->a[35590] = 1;
	v->a[35591] = sym_comment;
	v->a[35592] = actions(1438);
	v->a[35593] = 1;
	v->a[35594] = sym_variable_name;
	v->a[35595] = actions(1426);
	v->a[35596] = 2;
	v->a[35597] = anon_sym_DASH2;
	v->a[35598] = anon_sym_PLUS2;
	v->a[35599] = actions(1432);
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
