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
	v->a[90200] = anon_sym_BANG;
	v->a[90201] = actions(1195);
	v->a[90202] = 1;
	v->a[90203] = anon_sym_TILDE;
	v->a[90204] = actions(1201);
	v->a[90205] = 1;
	v->a[90206] = sym_test_operator;
	v->a[90207] = actions(3060);
	v->a[90208] = 1;
	v->a[90209] = anon_sym_BQUOTE;
	v->a[90210] = actions(5779);
	v->a[90211] = 1;
	v->a[90212] = sym__special_character;
	v->a[90213] = actions(6025);
	v->a[90214] = 1;
	v->a[90215] = sym__regex_no_space;
	v->a[90216] = state(2717);
	v->a[90217] = 1;
	v->a[90218] = aux_sym__literal_repeat1;
	v->a[90219] = state(2995);
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = 1;
	v->a[90221] = sym__expression;
	v->a[90222] = actions(1129);
	v->a[90223] = 2;
	v->a[90224] = anon_sym_LPAREN_LPAREN;
	v->a[90225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90226] = actions(1165);
	v->a[90227] = 2;
	v->a[90228] = anon_sym_LT_LPAREN;
	v->a[90229] = anon_sym_GT_LPAREN;
	v->a[90230] = actions(1191);
	v->a[90231] = 2;
	v->a[90232] = anon_sym_PLUS_PLUS2;
	v->a[90233] = anon_sym_DASH_DASH2;
	v->a[90234] = actions(1193);
	v->a[90235] = 2;
	v->a[90236] = anon_sym_DASH2;
	v->a[90237] = anon_sym_PLUS2;
	v->a[90238] = actions(1199);
	v->a[90239] = 2;
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = sym_raw_string;
	v->a[90241] = sym_ansi_c_string;
	v->a[90242] = state(2594);
	v->a[90243] = 6;
	v->a[90244] = sym_binary_expression;
	v->a[90245] = sym_ternary_expression;
	v->a[90246] = sym_unary_expression;
	v->a[90247] = sym_postfix_expression;
	v->a[90248] = sym_parenthesized_expression;
	v->a[90249] = sym_concatenation;
	v->a[90250] = state(2503);
	v->a[90251] = 9;
	v->a[90252] = sym_arithmetic_expansion;
	v->a[90253] = sym_brace_expression;
	v->a[90254] = sym_string;
	v->a[90255] = sym_translated_string;
	v->a[90256] = sym_number;
	v->a[90257] = sym_simple_expansion;
	v->a[90258] = sym_expansion;
	v->a[90259] = sym_command_substitution;
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = sym_process_substitution;
	v->a[90261] = 22;
	v->a[90262] = actions(71);
	v->a[90263] = 1;
	v->a[90264] = sym_comment;
	v->a[90265] = actions(6027);
	v->a[90266] = 1;
	v->a[90267] = sym_word;
	v->a[90268] = actions(6033);
	v->a[90269] = 1;
	v->a[90270] = anon_sym_DOLLAR_LBRACK;
	v->a[90271] = actions(6036);
	v->a[90272] = 1;
	v->a[90273] = anon_sym_DOLLAR;
	v->a[90274] = actions(6039);
	v->a[90275] = 1;
	v->a[90276] = sym__special_character;
	v->a[90277] = actions(6042);
	v->a[90278] = 1;
	v->a[90279] = anon_sym_DQUOTE;
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = actions(6048);
	v->a[90281] = 1;
	v->a[90282] = aux_sym_number_token1;
	v->a[90283] = actions(6051);
	v->a[90284] = 1;
	v->a[90285] = aux_sym_number_token2;
	v->a[90286] = actions(6054);
	v->a[90287] = 1;
	v->a[90288] = anon_sym_DOLLAR_LBRACE;
	v->a[90289] = actions(6057);
	v->a[90290] = 1;
	v->a[90291] = anon_sym_DOLLAR_LPAREN;
	v->a[90292] = actions(6060);
	v->a[90293] = 1;
	v->a[90294] = anon_sym_BQUOTE;
	v->a[90295] = actions(6063);
	v->a[90296] = 1;
	v->a[90297] = anon_sym_DOLLAR_BQUOTE;
	v->a[90298] = actions(6069);
	v->a[90299] = 1;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
