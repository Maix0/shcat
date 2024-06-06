/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_902.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4510(t_small_parse_table_array *v)
{
	v->a[90200] = 1;
	v->a[90201] = anon_sym_DOLLAR_LPAREN;
	v->a[90202] = actions(4606);
	v->a[90203] = 1;
	v->a[90204] = anon_sym_BQUOTE;
	v->a[90205] = actions(4608);
	v->a[90206] = 1;
	v->a[90207] = anon_sym_DOLLAR_BQUOTE;
	v->a[90208] = actions(4977);
	v->a[90209] = 1;
	v->a[90210] = aux_sym__simple_variable_name_token1;
	v->a[90211] = actions(4979);
	v->a[90212] = 1;
	v->a[90213] = sym_variable_name;
	v->a[90214] = state(1476);
	v->a[90215] = 1;
	v->a[90216] = sym__arithmetic_postfix_expression;
	v->a[90217] = state(1478);
	v->a[90218] = 1;
	v->a[90219] = sym__arithmetic_unary_expression;
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = state(1490);
	v->a[90221] = 1;
	v->a[90222] = sym__arithmetic_ternary_expression;
	v->a[90223] = state(1511);
	v->a[90224] = 1;
	v->a[90225] = sym__arithmetic_binary_expression;
	v->a[90226] = actions(4588);
	v->a[90227] = 2;
	v->a[90228] = anon_sym_PLUS_PLUS;
	v->a[90229] = anon_sym_DASH_DASH;
	v->a[90230] = actions(4590);
	v->a[90231] = 2;
	v->a[90232] = anon_sym_DASH2;
	v->a[90233] = anon_sym_PLUS2;
	v->a[90234] = state(1372);
	v->a[90235] = 8;
	v->a[90236] = sym__arithmetic_expression;
	v->a[90237] = sym__arithmetic_literal;
	v->a[90238] = sym__arithmetic_parenthesized_expression;
	v->a[90239] = sym_string;
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = sym_number;
	v->a[90241] = sym_simple_expansion;
	v->a[90242] = sym_expansion;
	v->a[90243] = sym_command_substitution;
	v->a[90244] = 5;
	v->a[90245] = actions(57);
	v->a[90246] = 1;
	v->a[90247] = sym_comment;
	v->a[90248] = state(1782);
	v->a[90249] = 1;
	v->a[90250] = aux_sym_concatenation_repeat1;
	v->a[90251] = actions(4795);
	v->a[90252] = 2;
	v->a[90253] = sym__concat;
	v->a[90254] = aux_sym_concatenation_token1;
	v->a[90255] = actions(2717);
	v->a[90256] = 11;
	v->a[90257] = anon_sym_LT;
	v->a[90258] = anon_sym_GT;
	v->a[90259] = anon_sym_AMP_GT;
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = anon_sym_LT_AMP;
	v->a[90261] = anon_sym_GT_AMP;
	v->a[90262] = anon_sym_DOLLAR;
	v->a[90263] = aux_sym_number_token1;
	v->a[90264] = aux_sym_number_token2;
	v->a[90265] = anon_sym_DOLLAR_LPAREN;
	v->a[90266] = anon_sym_BQUOTE;
	v->a[90267] = sym_word;
	v->a[90268] = actions(2719);
	v->a[90269] = 15;
	v->a[90270] = sym_file_descriptor;
	v->a[90271] = sym_variable_name;
	v->a[90272] = sym_test_operator;
	v->a[90273] = sym__brace_start;
	v->a[90274] = anon_sym_GT_GT;
	v->a[90275] = anon_sym_AMP_GT_GT;
	v->a[90276] = anon_sym_GT_PIPE;
	v->a[90277] = anon_sym_LT_AMP_DASH;
	v->a[90278] = anon_sym_GT_AMP_DASH;
	v->a[90279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = sym__special_character;
	v->a[90281] = anon_sym_DQUOTE;
	v->a[90282] = sym_raw_string;
	v->a[90283] = anon_sym_DOLLAR_LBRACE;
	v->a[90284] = anon_sym_DOLLAR_BQUOTE;
	v->a[90285] = 21;
	v->a[90286] = actions(57);
	v->a[90287] = 1;
	v->a[90288] = sym_comment;
	v->a[90289] = actions(4584);
	v->a[90290] = 1;
	v->a[90291] = anon_sym_LPAREN;
	v->a[90292] = actions(4586);
	v->a[90293] = 1;
	v->a[90294] = anon_sym_BANG;
	v->a[90295] = actions(4592);
	v->a[90296] = 1;
	v->a[90297] = anon_sym_TILDE;
	v->a[90298] = actions(4594);
	v->a[90299] = 1;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
