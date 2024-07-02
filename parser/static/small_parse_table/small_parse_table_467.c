/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_467.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2335(t_small_parse_table_array *v)
{
	v->a[46700] = aux_sym_heredoc_redirect_token1;
	v->a[46701] = anon_sym_AMP;
	v->a[46702] = anon_sym_SEMI;
	v->a[46703] = state(1806);
	v->a[46704] = 5;
	v->a[46705] = sym_arithmetic_expansion;
	v->a[46706] = sym_string;
	v->a[46707] = sym_simple_expansion;
	v->a[46708] = sym_expansion;
	v->a[46709] = sym_command_substitution;
	v->a[46710] = 16;
	v->a[46711] = actions(680);
	v->a[46712] = 1;
	v->a[46713] = sym_comment;
	v->a[46714] = actions(1574);
	v->a[46715] = 1;
	v->a[46716] = anon_sym_LPAREN;
	v->a[46717] = actions(1576);
	v->a[46718] = 1;
	v->a[46719] = anon_sym_BANG;
	small_parse_table_2336(v);
}

void	small_parse_table_2336(t_small_parse_table_array *v)
{
	v->a[46720] = actions(1584);
	v->a[46721] = 1;
	v->a[46722] = anon_sym_TILDE;
	v->a[46723] = actions(1586);
	v->a[46724] = 1;
	v->a[46725] = anon_sym_DOLLAR;
	v->a[46726] = actions(1588);
	v->a[46727] = 1;
	v->a[46728] = anon_sym_DQUOTE;
	v->a[46729] = actions(1592);
	v->a[46730] = 1;
	v->a[46731] = anon_sym_DOLLAR_LBRACE;
	v->a[46732] = actions(1594);
	v->a[46733] = 1;
	v->a[46734] = anon_sym_DOLLAR_LPAREN;
	v->a[46735] = actions(1596);
	v->a[46736] = 1;
	v->a[46737] = anon_sym_BQUOTE;
	v->a[46738] = actions(1598);
	v->a[46739] = 1;
	small_parse_table_2337(v);
}

void	small_parse_table_2337(t_small_parse_table_array *v)
{
	v->a[46740] = sym_variable_name;
	v->a[46741] = actions(1689);
	v->a[46742] = 1;
	v->a[46743] = anon_sym_RPAREN_RPAREN;
	v->a[46744] = actions(1580);
	v->a[46745] = 2;
	v->a[46746] = anon_sym_PLUS_PLUS;
	v->a[46747] = anon_sym_DASH_DASH;
	v->a[46748] = actions(1582);
	v->a[46749] = 2;
	v->a[46750] = anon_sym_DASH2;
	v->a[46751] = anon_sym_PLUS2;
	v->a[46752] = actions(1590);
	v->a[46753] = 2;
	v->a[46754] = sym_number;
	v->a[46755] = aux_sym__simple_variable_name_token1;
	v->a[46756] = state(238);
	v->a[46757] = 3;
	v->a[46758] = sym_string;
	v->a[46759] = sym_simple_expansion;
	small_parse_table_2338(v);
}

void	small_parse_table_2338(t_small_parse_table_array *v)
{
	v->a[46760] = sym_expansion;
	v->a[46761] = state(282);
	v->a[46762] = 8;
	v->a[46763] = sym__arithmetic_expression;
	v->a[46764] = sym_arithmetic_literal;
	v->a[46765] = sym_arithmetic_binary_expression;
	v->a[46766] = sym_arithmetic_ternary_expression;
	v->a[46767] = sym_arithmetic_unary_expression;
	v->a[46768] = sym_arithmetic_postfix_expression;
	v->a[46769] = sym_arithmetic_parenthesized_expression;
	v->a[46770] = sym_command_substitution;
	v->a[46771] = 12;
	v->a[46772] = actions(3);
	v->a[46773] = 1;
	v->a[46774] = sym_comment;
	v->a[46775] = actions(511);
	v->a[46776] = 1;
	v->a[46777] = sym_file_descriptor;
	v->a[46778] = actions(1562);
	v->a[46779] = 1;
	small_parse_table_2339(v);
}

void	small_parse_table_2339(t_small_parse_table_array *v)
{
	v->a[46780] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46781] = actions(1564);
	v->a[46782] = 1;
	v->a[46783] = anon_sym_DOLLAR;
	v->a[46784] = actions(1566);
	v->a[46785] = 1;
	v->a[46786] = anon_sym_DQUOTE;
	v->a[46787] = actions(1568);
	v->a[46788] = 1;
	v->a[46789] = anon_sym_DOLLAR_LBRACE;
	v->a[46790] = actions(1570);
	v->a[46791] = 1;
	v->a[46792] = anon_sym_DOLLAR_LPAREN;
	v->a[46793] = actions(1572);
	v->a[46794] = 1;
	v->a[46795] = anon_sym_BQUOTE;
	v->a[46796] = state(774);
	v->a[46797] = 2;
	v->a[46798] = sym_concatenation;
	v->a[46799] = aux_sym_for_statement_repeat1;
	small_parse_table_2340(v);
}

/* EOF small_parse_table_467.c */
