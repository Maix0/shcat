/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1181.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5905(t_small_parse_table_array *v)
{
	v->a[118100] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118101] = actions(5958);
	v->a[118102] = 1;
	v->a[118103] = anon_sym_DQUOTE;
	v->a[118104] = actions(5960);
	v->a[118105] = 1;
	v->a[118106] = anon_sym_DOLLAR_LBRACE;
	v->a[118107] = actions(5962);
	v->a[118108] = 1;
	v->a[118109] = anon_sym_BQUOTE;
	v->a[118110] = actions(5964);
	v->a[118111] = 1;
	v->a[118112] = anon_sym_DOLLAR_BQUOTE;
	v->a[118113] = actions(6941);
	v->a[118114] = 1;
	v->a[118115] = sym_word;
	v->a[118116] = actions(6943);
	v->a[118117] = 1;
	v->a[118118] = sym__special_character;
	v->a[118119] = actions(6947);
	small_parse_table_5906(v);
}

void	small_parse_table_5906(t_small_parse_table_array *v)
{
	v->a[118120] = 1;
	v->a[118121] = sym__comment_word;
	v->a[118122] = actions(6945);
	v->a[118123] = 3;
	v->a[118124] = sym_test_operator;
	v->a[118125] = sym__bare_dollar;
	v->a[118126] = sym_raw_string;
	v->a[118127] = state(1236);
	v->a[118128] = 7;
	v->a[118129] = sym_arithmetic_expansion;
	v->a[118130] = sym_brace_expression;
	v->a[118131] = sym_string;
	v->a[118132] = sym_number;
	v->a[118133] = sym_simple_expansion;
	v->a[118134] = sym_expansion;
	v->a[118135] = sym_command_substitution;
	v->a[118136] = 16;
	v->a[118137] = actions(3);
	v->a[118138] = 1;
	v->a[118139] = sym_comment;
	small_parse_table_5907(v);
}

void	small_parse_table_5907(t_small_parse_table_array *v)
{
	v->a[118140] = actions(1260);
	v->a[118141] = 1;
	v->a[118142] = aux_sym_number_token1;
	v->a[118143] = actions(1262);
	v->a[118144] = 1;
	v->a[118145] = aux_sym_number_token2;
	v->a[118146] = actions(1266);
	v->a[118147] = 1;
	v->a[118148] = anon_sym_DOLLAR_LPAREN;
	v->a[118149] = actions(1276);
	v->a[118150] = 1;
	v->a[118151] = sym__brace_start;
	v->a[118152] = actions(6879);
	v->a[118153] = 1;
	v->a[118154] = sym_word;
	v->a[118155] = actions(6881);
	v->a[118156] = 1;
	v->a[118157] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118158] = actions(6885);
	v->a[118159] = 1;
	small_parse_table_5908(v);
}

void	small_parse_table_5908(t_small_parse_table_array *v)
{
	v->a[118160] = sym__special_character;
	v->a[118161] = actions(6887);
	v->a[118162] = 1;
	v->a[118163] = anon_sym_DQUOTE;
	v->a[118164] = actions(6891);
	v->a[118165] = 1;
	v->a[118166] = anon_sym_DOLLAR_LBRACE;
	v->a[118167] = actions(6893);
	v->a[118168] = 1;
	v->a[118169] = anon_sym_BQUOTE;
	v->a[118170] = actions(6895);
	v->a[118171] = 1;
	v->a[118172] = anon_sym_DOLLAR_BQUOTE;
	v->a[118173] = actions(6897);
	v->a[118174] = 1;
	v->a[118175] = sym__comment_word;
	v->a[118176] = actions(6949);
	v->a[118177] = 1;
	v->a[118178] = anon_sym_DOLLAR;
	v->a[118179] = actions(6889);
	small_parse_table_5909(v);
}

void	small_parse_table_5909(t_small_parse_table_array *v)
{
	v->a[118180] = 3;
	v->a[118181] = sym_test_operator;
	v->a[118182] = sym__bare_dollar;
	v->a[118183] = sym_raw_string;
	v->a[118184] = state(1005);
	v->a[118185] = 7;
	v->a[118186] = sym_arithmetic_expansion;
	v->a[118187] = sym_brace_expression;
	v->a[118188] = sym_string;
	v->a[118189] = sym_number;
	v->a[118190] = sym_simple_expansion;
	v->a[118191] = sym_expansion;
	v->a[118192] = sym_command_substitution;
	v->a[118193] = 16;
	v->a[118194] = actions(3);
	v->a[118195] = 1;
	v->a[118196] = sym_comment;
	v->a[118197] = actions(1260);
	v->a[118198] = 1;
	v->a[118199] = aux_sym_number_token1;
	small_parse_table_5910(v);
}

/* EOF small_parse_table_1181.c */
