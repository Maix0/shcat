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
	v->a[54700] = anon_sym_PIPE_PIPE;
	v->a[54701] = anon_sym_LT;
	v->a[54702] = anon_sym_GT;
	v->a[54703] = anon_sym_GT_GT;
	v->a[54704] = anon_sym_LT_AMP;
	v->a[54705] = anon_sym_GT_AMP;
	v->a[54706] = anon_sym_GT_PIPE;
	v->a[54707] = anon_sym_LT_AMP_DASH;
	v->a[54708] = anon_sym_GT_AMP_DASH;
	v->a[54709] = anon_sym_LT_LT;
	v->a[54710] = anon_sym_LT_LT_DASH;
	v->a[54711] = 15;
	v->a[54712] = actions(870);
	v->a[54713] = 1;
	v->a[54714] = sym_comment;
	v->a[54715] = actions(1744);
	v->a[54716] = 1;
	v->a[54717] = anon_sym_LPAREN;
	v->a[54718] = actions(1746);
	v->a[54719] = 1;
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = anon_sym_BANG;
	v->a[54721] = actions(1754);
	v->a[54722] = 1;
	v->a[54723] = anon_sym_TILDE;
	v->a[54724] = actions(1756);
	v->a[54725] = 1;
	v->a[54726] = anon_sym_DOLLAR;
	v->a[54727] = actions(1758);
	v->a[54728] = 1;
	v->a[54729] = anon_sym_DQUOTE;
	v->a[54730] = actions(1762);
	v->a[54731] = 1;
	v->a[54732] = anon_sym_DOLLAR_LBRACE;
	v->a[54733] = actions(1764);
	v->a[54734] = 1;
	v->a[54735] = anon_sym_DOLLAR_LPAREN;
	v->a[54736] = actions(1766);
	v->a[54737] = 1;
	v->a[54738] = anon_sym_BQUOTE;
	v->a[54739] = actions(1768);
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = 1;
	v->a[54741] = sym_variable_name;
	v->a[54742] = actions(1750);
	v->a[54743] = 2;
	v->a[54744] = anon_sym_PLUS_PLUS;
	v->a[54745] = anon_sym_DASH_DASH;
	v->a[54746] = actions(1752);
	v->a[54747] = 2;
	v->a[54748] = anon_sym_DASH2;
	v->a[54749] = anon_sym_PLUS2;
	v->a[54750] = actions(1760);
	v->a[54751] = 2;
	v->a[54752] = sym_number;
	v->a[54753] = aux_sym__simple_variable_name_token1;
	v->a[54754] = state(271);
	v->a[54755] = 3;
	v->a[54756] = sym_string;
	v->a[54757] = sym_simple_expansion;
	v->a[54758] = sym_expansion;
	v->a[54759] = state(262);
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = 8;
	v->a[54761] = sym__arithmetic_expression;
	v->a[54762] = sym_arithmetic_literal;
	v->a[54763] = sym_arithmetic_binary_expression;
	v->a[54764] = sym_arithmetic_ternary_expression;
	v->a[54765] = sym_arithmetic_unary_expression;
	v->a[54766] = sym_arithmetic_postfix_expression;
	v->a[54767] = sym_arithmetic_parenthesized_expression;
	v->a[54768] = sym_command_substitution;
	v->a[54769] = 6;
	v->a[54770] = actions(3);
	v->a[54771] = 1;
	v->a[54772] = sym_comment;
	v->a[54773] = actions(379);
	v->a[54774] = 1;
	v->a[54775] = sym_file_descriptor;
	v->a[54776] = actions(1955);
	v->a[54777] = 1;
	v->a[54778] = sym_variable_name;
	v->a[54779] = actions(1953);
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = 2;
	v->a[54781] = aux_sym__simple_variable_name_token1;
	v->a[54782] = aux_sym__multiline_variable_name_token1;
	v->a[54783] = actions(1951);
	v->a[54784] = 9;
	v->a[54785] = anon_sym_BANG;
	v->a[54786] = anon_sym_DASH;
	v->a[54787] = anon_sym_STAR;
	v->a[54788] = anon_sym_QMARK;
	v->a[54789] = anon_sym_DOLLAR;
	v->a[54790] = anon_sym_POUND;
	v->a[54791] = anon_sym_AT;
	v->a[54792] = anon_sym_0;
	v->a[54793] = anon_sym__;
	v->a[54794] = actions(381);
	v->a[54795] = 13;
	v->a[54796] = anon_sym_PIPE;
	v->a[54797] = anon_sym_AMP_AMP;
	v->a[54798] = anon_sym_PIPE_PIPE;
	v->a[54799] = anon_sym_LT;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
