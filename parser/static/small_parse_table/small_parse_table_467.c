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
	v->a[46700] = anon_sym_while;
	v->a[46701] = anon_sym_until;
	v->a[46702] = anon_sym_if;
	v->a[46703] = anon_sym_case;
	v->a[46704] = anon_sym_LPAREN;
	v->a[46705] = anon_sym_LBRACE;
	v->a[46706] = anon_sym_BANG;
	v->a[46707] = anon_sym_LT;
	v->a[46708] = anon_sym_GT;
	v->a[46709] = anon_sym_GT_GT;
	v->a[46710] = anon_sym_LT_AMP;
	v->a[46711] = anon_sym_GT_AMP;
	v->a[46712] = anon_sym_GT_PIPE;
	v->a[46713] = anon_sym_LT_GT;
	v->a[46714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46715] = anon_sym_DOLLAR;
	v->a[46716] = anon_sym_DQUOTE;
	v->a[46717] = sym_raw_string;
	v->a[46718] = sym_number;
	v->a[46719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2336(v);
}

void	small_parse_table_2336(t_small_parse_table_array *v)
{
	v->a[46720] = anon_sym_DOLLAR_LPAREN;
	v->a[46721] = anon_sym_BQUOTE;
	v->a[46722] = sym_word;
	v->a[46723] = 16;
	v->a[46724] = actions(664);
	v->a[46725] = 1;
	v->a[46726] = sym_comment;
	v->a[46727] = actions(1560);
	v->a[46728] = 1;
	v->a[46729] = anon_sym_LPAREN;
	v->a[46730] = actions(1562);
	v->a[46731] = 1;
	v->a[46732] = anon_sym_BANG;
	v->a[46733] = actions(1570);
	v->a[46734] = 1;
	v->a[46735] = anon_sym_TILDE;
	v->a[46736] = actions(1572);
	v->a[46737] = 1;
	v->a[46738] = anon_sym_DOLLAR;
	v->a[46739] = actions(1574);
	small_parse_table_2337(v);
}

void	small_parse_table_2337(t_small_parse_table_array *v)
{
	v->a[46740] = 1;
	v->a[46741] = anon_sym_DQUOTE;
	v->a[46742] = actions(1578);
	v->a[46743] = 1;
	v->a[46744] = anon_sym_DOLLAR_LBRACE;
	v->a[46745] = actions(1580);
	v->a[46746] = 1;
	v->a[46747] = anon_sym_DOLLAR_LPAREN;
	v->a[46748] = actions(1582);
	v->a[46749] = 1;
	v->a[46750] = anon_sym_BQUOTE;
	v->a[46751] = actions(1584);
	v->a[46752] = 1;
	v->a[46753] = sym_variable_name;
	v->a[46754] = actions(1707);
	v->a[46755] = 1;
	v->a[46756] = anon_sym_RPAREN_RPAREN;
	v->a[46757] = actions(1566);
	v->a[46758] = 2;
	v->a[46759] = anon_sym_PLUS_PLUS;
	small_parse_table_2338(v);
}

void	small_parse_table_2338(t_small_parse_table_array *v)
{
	v->a[46760] = anon_sym_DASH_DASH;
	v->a[46761] = actions(1568);
	v->a[46762] = 2;
	v->a[46763] = anon_sym_DASH2;
	v->a[46764] = anon_sym_PLUS2;
	v->a[46765] = actions(1576);
	v->a[46766] = 2;
	v->a[46767] = sym_number;
	v->a[46768] = aux_sym__simple_variable_name_token1;
	v->a[46769] = state(255);
	v->a[46770] = 3;
	v->a[46771] = sym_string;
	v->a[46772] = sym_simple_expansion;
	v->a[46773] = sym_expansion;
	v->a[46774] = state(289);
	v->a[46775] = 8;
	v->a[46776] = sym__arithmetic_expression;
	v->a[46777] = sym_arithmetic_literal;
	v->a[46778] = sym_arithmetic_binary_expression;
	v->a[46779] = sym_arithmetic_ternary_expression;
	small_parse_table_2339(v);
}

void	small_parse_table_2339(t_small_parse_table_array *v)
{
	v->a[46780] = sym_arithmetic_unary_expression;
	v->a[46781] = sym_arithmetic_postfix_expression;
	v->a[46782] = sym_arithmetic_parenthesized_expression;
	v->a[46783] = sym_command_substitution;
	v->a[46784] = 3;
	v->a[46785] = actions(3);
	v->a[46786] = 1;
	v->a[46787] = sym_comment;
	v->a[46788] = actions(1289);
	v->a[46789] = 3;
	v->a[46790] = sym_file_descriptor;
	v->a[46791] = sym_variable_name;
	v->a[46792] = ts_builtin_sym_end;
	v->a[46793] = actions(1287);
	v->a[46794] = 24;
	v->a[46795] = anon_sym_for;
	v->a[46796] = anon_sym_while;
	v->a[46797] = anon_sym_until;
	v->a[46798] = anon_sym_if;
	v->a[46799] = anon_sym_case;
	small_parse_table_2340(v);
}

/* EOF small_parse_table_467.c */
