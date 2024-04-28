/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1112.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5560(t_small_parse_table_array *v)
{
	v->a[111200] = anon_sym_DOLLAR_LBRACE;
	v->a[111201] = actions(381);
	v->a[111202] = 1;
	v->a[111203] = anon_sym_DOLLAR_LPAREN;
	v->a[111204] = actions(385);
	v->a[111205] = 1;
	v->a[111206] = anon_sym_DOLLAR_BQUOTE;
	v->a[111207] = actions(391);
	v->a[111208] = 1;
	v->a[111209] = sym__brace_start;
	v->a[111210] = actions(1093);
	v->a[111211] = 1;
	v->a[111212] = anon_sym_LPAREN;
	v->a[111213] = actions(1095);
	v->a[111214] = 1;
	v->a[111215] = anon_sym_BANG;
	v->a[111216] = actions(1103);
	v->a[111217] = 1;
	v->a[111218] = anon_sym_TILDE;
	v->a[111219] = actions(5809);
	small_parse_table_5561(v);
}

void	small_parse_table_5561(t_small_parse_table_array *v)
{
	v->a[111220] = 1;
	v->a[111221] = anon_sym_BQUOTE;
	v->a[111222] = actions(5916);
	v->a[111223] = 1;
	v->a[111224] = sym__special_character;
	v->a[111225] = actions(6293);
	v->a[111226] = 1;
	v->a[111227] = sym_word;
	v->a[111228] = actions(6297);
	v->a[111229] = 1;
	v->a[111230] = sym_test_operator;
	v->a[111231] = state(2501);
	v->a[111232] = 1;
	v->a[111233] = aux_sym__literal_repeat1;
	v->a[111234] = state(3397);
	v->a[111235] = 1;
	v->a[111236] = sym__expression;
	v->a[111237] = actions(352);
	v->a[111238] = 2;
	v->a[111239] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5562(v);
}

void	small_parse_table_5562(t_small_parse_table_array *v)
{
	v->a[111240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111241] = actions(387);
	v->a[111242] = 2;
	v->a[111243] = anon_sym_LT_LPAREN;
	v->a[111244] = anon_sym_GT_LPAREN;
	v->a[111245] = actions(1099);
	v->a[111246] = 2;
	v->a[111247] = anon_sym_PLUS_PLUS2;
	v->a[111248] = anon_sym_DASH_DASH2;
	v->a[111249] = actions(1101);
	v->a[111250] = 2;
	v->a[111251] = anon_sym_DASH2;
	v->a[111252] = anon_sym_PLUS2;
	v->a[111253] = actions(6295);
	v->a[111254] = 2;
	v->a[111255] = sym_raw_string;
	v->a[111256] = sym_ansi_c_string;
	v->a[111257] = state(2594);
	v->a[111258] = 2;
	v->a[111259] = sym_ternary_expression;
	small_parse_table_5563(v);
}

void	small_parse_table_5563(t_small_parse_table_array *v)
{
	v->a[111260] = sym_postfix_expression;
	v->a[111261] = state(2833);
	v->a[111262] = 4;
	v->a[111263] = sym_binary_expression;
	v->a[111264] = sym_unary_expression;
	v->a[111265] = sym_parenthesized_expression;
	v->a[111266] = sym_concatenation;
	v->a[111267] = state(2497);
	v->a[111268] = 9;
	v->a[111269] = sym_arithmetic_expansion;
	v->a[111270] = sym_brace_expression;
	v->a[111271] = sym_string;
	v->a[111272] = sym_translated_string;
	v->a[111273] = sym_number;
	v->a[111274] = sym_simple_expansion;
	v->a[111275] = sym_expansion;
	v->a[111276] = sym_command_substitution;
	v->a[111277] = sym_process_substitution;
	v->a[111278] = 8;
	v->a[111279] = actions(3);
	small_parse_table_5564(v);
}

void	small_parse_table_5564(t_small_parse_table_array *v)
{
	v->a[111280] = 1;
	v->a[111281] = sym_comment;
	v->a[111282] = actions(5826);
	v->a[111283] = 1;
	v->a[111284] = aux_sym_heredoc_redirect_token1;
	v->a[111285] = actions(5828);
	v->a[111286] = 1;
	v->a[111287] = sym_file_descriptor;
	v->a[111288] = actions(6299);
	v->a[111289] = 1;
	v->a[111290] = anon_sym_RPAREN;
	v->a[111291] = actions(5831);
	v->a[111292] = 3;
	v->a[111293] = sym_variable_name;
	v->a[111294] = sym_test_operator;
	v->a[111295] = sym__brace_start;
	v->a[111296] = actions(5821);
	v->a[111297] = 9;
	v->a[111298] = anon_sym_SEMI;
	v->a[111299] = anon_sym_PIPE_PIPE;
	small_parse_table_5565(v);
}

/* EOF small_parse_table_1112.c */
