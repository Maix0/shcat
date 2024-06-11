/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_627.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3135(t_small_parse_table_array *v)
{
	v->a[62700] = anon_sym_LT_LT_DASH;
	v->a[62701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62702] = anon_sym_DOLLAR;
	v->a[62703] = anon_sym_DQUOTE;
	v->a[62704] = sym_raw_string;
	v->a[62705] = sym_number;
	v->a[62706] = anon_sym_DOLLAR_LBRACE;
	v->a[62707] = anon_sym_DOLLAR_LPAREN;
	v->a[62708] = anon_sym_BQUOTE;
	v->a[62709] = sym_word;
	v->a[62710] = 16;
	v->a[62711] = actions(1094);
	v->a[62712] = 1;
	v->a[62713] = sym_comment;
	v->a[62714] = actions(1869);
	v->a[62715] = 1;
	v->a[62716] = anon_sym_LPAREN;
	v->a[62717] = actions(1871);
	v->a[62718] = 1;
	v->a[62719] = anon_sym_BANG;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = actions(1879);
	v->a[62721] = 1;
	v->a[62722] = anon_sym_TILDE;
	v->a[62723] = actions(1881);
	v->a[62724] = 1;
	v->a[62725] = anon_sym_DOLLAR;
	v->a[62726] = actions(1883);
	v->a[62727] = 1;
	v->a[62728] = anon_sym_DQUOTE;
	v->a[62729] = actions(1887);
	v->a[62730] = 1;
	v->a[62731] = anon_sym_DOLLAR_LBRACE;
	v->a[62732] = actions(1889);
	v->a[62733] = 1;
	v->a[62734] = anon_sym_DOLLAR_LPAREN;
	v->a[62735] = actions(1891);
	v->a[62736] = 1;
	v->a[62737] = anon_sym_BQUOTE;
	v->a[62738] = actions(1893);
	v->a[62739] = 1;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = sym_variable_name;
	v->a[62741] = actions(1943);
	v->a[62742] = 1;
	v->a[62743] = anon_sym_RPAREN_RPAREN;
	v->a[62744] = actions(1875);
	v->a[62745] = 2;
	v->a[62746] = anon_sym_PLUS_PLUS;
	v->a[62747] = anon_sym_DASH_DASH;
	v->a[62748] = actions(1877);
	v->a[62749] = 2;
	v->a[62750] = anon_sym_DASH2;
	v->a[62751] = anon_sym_PLUS2;
	v->a[62752] = actions(1885);
	v->a[62753] = 2;
	v->a[62754] = sym_number;
	v->a[62755] = aux_sym__simple_variable_name_token1;
	v->a[62756] = state(365);
	v->a[62757] = 3;
	v->a[62758] = sym_string;
	v->a[62759] = sym_simple_expansion;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = sym_expansion;
	v->a[62761] = state(554);
	v->a[62762] = 8;
	v->a[62763] = sym__arithmetic_expression;
	v->a[62764] = sym_arithmetic_literal;
	v->a[62765] = sym_arithmetic_binary_expression;
	v->a[62766] = sym_arithmetic_ternary_expression;
	v->a[62767] = sym_arithmetic_unary_expression;
	v->a[62768] = sym_arithmetic_postfix_expression;
	v->a[62769] = sym_arithmetic_parenthesized_expression;
	v->a[62770] = sym_command_substitution;
	v->a[62771] = 16;
	v->a[62772] = actions(1094);
	v->a[62773] = 1;
	v->a[62774] = sym_comment;
	v->a[62775] = actions(1869);
	v->a[62776] = 1;
	v->a[62777] = anon_sym_LPAREN;
	v->a[62778] = actions(1871);
	v->a[62779] = 1;
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = anon_sym_BANG;
	v->a[62781] = actions(1879);
	v->a[62782] = 1;
	v->a[62783] = anon_sym_TILDE;
	v->a[62784] = actions(1881);
	v->a[62785] = 1;
	v->a[62786] = anon_sym_DOLLAR;
	v->a[62787] = actions(1883);
	v->a[62788] = 1;
	v->a[62789] = anon_sym_DQUOTE;
	v->a[62790] = actions(1887);
	v->a[62791] = 1;
	v->a[62792] = anon_sym_DOLLAR_LBRACE;
	v->a[62793] = actions(1889);
	v->a[62794] = 1;
	v->a[62795] = anon_sym_DOLLAR_LPAREN;
	v->a[62796] = actions(1891);
	v->a[62797] = 1;
	v->a[62798] = anon_sym_BQUOTE;
	v->a[62799] = actions(1893);
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
