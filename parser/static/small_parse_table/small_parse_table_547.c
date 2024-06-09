/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_547.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2735(t_small_parse_table_array *v)
{
	v->a[54700] = aux_sym_number_token2;
	v->a[54701] = actions(1999);
	v->a[54702] = 1;
	v->a[54703] = anon_sym_DOLLAR_LBRACE;
	v->a[54704] = actions(2001);
	v->a[54705] = 1;
	v->a[54706] = anon_sym_DOLLAR_LPAREN;
	v->a[54707] = actions(2003);
	v->a[54708] = 1;
	v->a[54709] = anon_sym_BQUOTE;
	v->a[54710] = actions(2005);
	v->a[54711] = 1;
	v->a[54712] = aux_sym__simple_variable_name_token1;
	v->a[54713] = actions(2007);
	v->a[54714] = 1;
	v->a[54715] = sym_variable_name;
	v->a[54716] = actions(2033);
	v->a[54717] = 1;
	v->a[54718] = anon_sym_RPAREN_RPAREN;
	v->a[54719] = actions(1985);
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = 2;
	v->a[54721] = anon_sym_PLUS_PLUS;
	v->a[54722] = anon_sym_DASH_DASH;
	v->a[54723] = actions(1987);
	v->a[54724] = 2;
	v->a[54725] = anon_sym_DASH2;
	v->a[54726] = anon_sym_PLUS2;
	v->a[54727] = state(530);
	v->a[54728] = 4;
	v->a[54729] = sym_string;
	v->a[54730] = sym_number;
	v->a[54731] = sym_simple_expansion;
	v->a[54732] = sym_expansion;
	v->a[54733] = state(641);
	v->a[54734] = 8;
	v->a[54735] = sym__arithmetic_expression;
	v->a[54736] = sym_arithmetic_literal;
	v->a[54737] = sym_arithmetic_binary_expression;
	v->a[54738] = sym_arithmetic_ternary_expression;
	v->a[54739] = sym_arithmetic_unary_expression;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = sym_arithmetic_postfix_expression;
	v->a[54741] = sym_arithmetic_parenthesized_expression;
	v->a[54742] = sym_command_substitution;
	v->a[54743] = 5;
	v->a[54744] = actions(3);
	v->a[54745] = 1;
	v->a[54746] = sym_comment;
	v->a[54747] = state(1234);
	v->a[54748] = 1;
	v->a[54749] = sym_concatenation;
	v->a[54750] = actions(750);
	v->a[54751] = 2;
	v->a[54752] = sym_file_descriptor;
	v->a[54753] = sym_variable_name;
	v->a[54754] = state(998);
	v->a[54755] = 6;
	v->a[54756] = sym_arithmetic_expansion;
	v->a[54757] = sym_string;
	v->a[54758] = sym_number;
	v->a[54759] = sym_simple_expansion;
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = sym_expansion;
	v->a[54761] = sym_command_substitution;
	v->a[54762] = actions(748);
	v->a[54763] = 20;
	v->a[54764] = anon_sym_LT;
	v->a[54765] = anon_sym_GT;
	v->a[54766] = anon_sym_GT_GT;
	v->a[54767] = anon_sym_AMP_GT;
	v->a[54768] = anon_sym_AMP_GT_GT;
	v->a[54769] = anon_sym_LT_AMP;
	v->a[54770] = anon_sym_GT_AMP;
	v->a[54771] = anon_sym_GT_PIPE;
	v->a[54772] = anon_sym_LT_AMP_DASH;
	v->a[54773] = anon_sym_GT_AMP_DASH;
	v->a[54774] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54775] = anon_sym_DOLLAR;
	v->a[54776] = anon_sym_DQUOTE;
	v->a[54777] = sym_raw_string;
	v->a[54778] = aux_sym_number_token1;
	v->a[54779] = aux_sym_number_token2;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = anon_sym_DOLLAR_LBRACE;
	v->a[54781] = anon_sym_DOLLAR_LPAREN;
	v->a[54782] = anon_sym_BQUOTE;
	v->a[54783] = sym_word;
	v->a[54784] = 18;
	v->a[54785] = actions(1404);
	v->a[54786] = 1;
	v->a[54787] = sym_comment;
	v->a[54788] = actions(1979);
	v->a[54789] = 1;
	v->a[54790] = anon_sym_LPAREN;
	v->a[54791] = actions(1981);
	v->a[54792] = 1;
	v->a[54793] = anon_sym_BANG;
	v->a[54794] = actions(1989);
	v->a[54795] = 1;
	v->a[54796] = anon_sym_TILDE;
	v->a[54797] = actions(1991);
	v->a[54798] = 1;
	v->a[54799] = anon_sym_DOLLAR;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
