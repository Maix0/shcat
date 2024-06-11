/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_617.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3085(t_small_parse_table_array *v)
{
	v->a[61700] = sym_arithmetic_postfix_expression;
	v->a[61701] = sym_arithmetic_parenthesized_expression;
	v->a[61702] = sym_command_substitution;
	v->a[61703] = 16;
	v->a[61704] = actions(1094);
	v->a[61705] = 1;
	v->a[61706] = sym_comment;
	v->a[61707] = actions(1869);
	v->a[61708] = 1;
	v->a[61709] = anon_sym_LPAREN;
	v->a[61710] = actions(1871);
	v->a[61711] = 1;
	v->a[61712] = anon_sym_BANG;
	v->a[61713] = actions(1879);
	v->a[61714] = 1;
	v->a[61715] = anon_sym_TILDE;
	v->a[61716] = actions(1881);
	v->a[61717] = 1;
	v->a[61718] = anon_sym_DOLLAR;
	v->a[61719] = actions(1883);
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = 1;
	v->a[61721] = anon_sym_DQUOTE;
	v->a[61722] = actions(1887);
	v->a[61723] = 1;
	v->a[61724] = anon_sym_DOLLAR_LBRACE;
	v->a[61725] = actions(1889);
	v->a[61726] = 1;
	v->a[61727] = anon_sym_DOLLAR_LPAREN;
	v->a[61728] = actions(1891);
	v->a[61729] = 1;
	v->a[61730] = anon_sym_BQUOTE;
	v->a[61731] = actions(1893);
	v->a[61732] = 1;
	v->a[61733] = sym_variable_name;
	v->a[61734] = actions(1917);
	v->a[61735] = 1;
	v->a[61736] = anon_sym_RPAREN_RPAREN;
	v->a[61737] = actions(1875);
	v->a[61738] = 2;
	v->a[61739] = anon_sym_PLUS_PLUS;
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = anon_sym_DASH_DASH;
	v->a[61741] = actions(1877);
	v->a[61742] = 2;
	v->a[61743] = anon_sym_DASH2;
	v->a[61744] = anon_sym_PLUS2;
	v->a[61745] = actions(1885);
	v->a[61746] = 2;
	v->a[61747] = sym_number;
	v->a[61748] = aux_sym__simple_variable_name_token1;
	v->a[61749] = state(365);
	v->a[61750] = 3;
	v->a[61751] = sym_string;
	v->a[61752] = sym_simple_expansion;
	v->a[61753] = sym_expansion;
	v->a[61754] = state(507);
	v->a[61755] = 8;
	v->a[61756] = sym__arithmetic_expression;
	v->a[61757] = sym_arithmetic_literal;
	v->a[61758] = sym_arithmetic_binary_expression;
	v->a[61759] = sym_arithmetic_ternary_expression;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = sym_arithmetic_unary_expression;
	v->a[61761] = sym_arithmetic_postfix_expression;
	v->a[61762] = sym_arithmetic_parenthesized_expression;
	v->a[61763] = sym_command_substitution;
	v->a[61764] = 16;
	v->a[61765] = actions(1094);
	v->a[61766] = 1;
	v->a[61767] = sym_comment;
	v->a[61768] = actions(1869);
	v->a[61769] = 1;
	v->a[61770] = anon_sym_LPAREN;
	v->a[61771] = actions(1871);
	v->a[61772] = 1;
	v->a[61773] = anon_sym_BANG;
	v->a[61774] = actions(1879);
	v->a[61775] = 1;
	v->a[61776] = anon_sym_TILDE;
	v->a[61777] = actions(1881);
	v->a[61778] = 1;
	v->a[61779] = anon_sym_DOLLAR;
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = actions(1883);
	v->a[61781] = 1;
	v->a[61782] = anon_sym_DQUOTE;
	v->a[61783] = actions(1887);
	v->a[61784] = 1;
	v->a[61785] = anon_sym_DOLLAR_LBRACE;
	v->a[61786] = actions(1889);
	v->a[61787] = 1;
	v->a[61788] = anon_sym_DOLLAR_LPAREN;
	v->a[61789] = actions(1891);
	v->a[61790] = 1;
	v->a[61791] = anon_sym_BQUOTE;
	v->a[61792] = actions(1893);
	v->a[61793] = 1;
	v->a[61794] = sym_variable_name;
	v->a[61795] = actions(1919);
	v->a[61796] = 1;
	v->a[61797] = anon_sym_RPAREN_RPAREN;
	v->a[61798] = actions(1875);
	v->a[61799] = 2;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
