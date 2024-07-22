/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_465.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2325(t_small_parse_table_array *v)
{
	v->a[46500] = anon_sym_SEMI_SEMI;
	v->a[46501] = anon_sym_AMP_AMP;
	v->a[46502] = anon_sym_PIPE_PIPE;
	v->a[46503] = anon_sym_LT_LT;
	v->a[46504] = anon_sym_LT_LT_DASH;
	v->a[46505] = aux_sym_heredoc_redirect_token1;
	v->a[46506] = anon_sym_SEMI;
	v->a[46507] = actions(1447);
	v->a[46508] = 9;
	v->a[46509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46510] = anon_sym_DOLLAR;
	v->a[46511] = anon_sym_DQUOTE;
	v->a[46512] = sym_raw_string;
	v->a[46513] = sym_number;
	v->a[46514] = anon_sym_DOLLAR_LBRACE;
	v->a[46515] = anon_sym_DOLLAR_LPAREN;
	v->a[46516] = anon_sym_BQUOTE;
	v->a[46517] = sym_word;
	v->a[46518] = 16;
	v->a[46519] = actions(501);
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = 1;
	v->a[46521] = sym_comment;
	v->a[46522] = actions(1469);
	v->a[46523] = 1;
	v->a[46524] = anon_sym_LPAREN;
	v->a[46525] = actions(1471);
	v->a[46526] = 1;
	v->a[46527] = anon_sym_BANG;
	v->a[46528] = actions(1479);
	v->a[46529] = 1;
	v->a[46530] = anon_sym_TILDE;
	v->a[46531] = actions(1481);
	v->a[46532] = 1;
	v->a[46533] = anon_sym_DOLLAR;
	v->a[46534] = actions(1483);
	v->a[46535] = 1;
	v->a[46536] = anon_sym_DQUOTE;
	v->a[46537] = actions(1487);
	v->a[46538] = 1;
	v->a[46539] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = actions(1489);
	v->a[46541] = 1;
	v->a[46542] = anon_sym_DOLLAR_LPAREN;
	v->a[46543] = actions(1491);
	v->a[46544] = 1;
	v->a[46545] = anon_sym_BQUOTE;
	v->a[46546] = actions(1493);
	v->a[46547] = 1;
	v->a[46548] = sym_variable_name;
	v->a[46549] = actions(1686);
	v->a[46550] = 1;
	v->a[46551] = anon_sym_RPAREN_RPAREN;
	v->a[46552] = actions(1475);
	v->a[46553] = 2;
	v->a[46554] = anon_sym_PLUS_PLUS;
	v->a[46555] = anon_sym_DASH_DASH;
	v->a[46556] = actions(1477);
	v->a[46557] = 2;
	v->a[46558] = anon_sym_DASH2;
	v->a[46559] = anon_sym_PLUS2;
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = actions(1485);
	v->a[46561] = 2;
	v->a[46562] = sym_number;
	v->a[46563] = aux_sym__simple_variable_name_token1;
	v->a[46564] = state(194);
	v->a[46565] = 3;
	v->a[46566] = sym_string;
	v->a[46567] = sym_simple_expansion;
	v->a[46568] = sym_expansion;
	v->a[46569] = state(314);
	v->a[46570] = 8;
	v->a[46571] = sym__arithmetic_expression;
	v->a[46572] = sym_arithmetic_literal;
	v->a[46573] = sym_arithmetic_binary_expression;
	v->a[46574] = sym_arithmetic_ternary_expression;
	v->a[46575] = sym_arithmetic_unary_expression;
	v->a[46576] = sym_arithmetic_postfix_expression;
	v->a[46577] = sym_arithmetic_parenthesized_expression;
	v->a[46578] = sym_command_substitution;
	v->a[46579] = 6;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = actions(3);
	v->a[46581] = 1;
	v->a[46582] = sym_comment;
	v->a[46583] = actions(1243);
	v->a[46584] = 1;
	v->a[46585] = aux_sym_concatenation_token1;
	v->a[46586] = actions(1688);
	v->a[46587] = 1;
	v->a[46588] = sym__concat;
	v->a[46589] = state(384);
	v->a[46590] = 1;
	v->a[46591] = aux_sym_concatenation_repeat1;
	v->a[46592] = actions(1097);
	v->a[46593] = 2;
	v->a[46594] = sym_file_descriptor;
	v->a[46595] = sym__bare_dollar;
	v->a[46596] = actions(1099);
	v->a[46597] = 22;
	v->a[46598] = anon_sym_PIPE;
	v->a[46599] = anon_sym_AMP_AMP;
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
