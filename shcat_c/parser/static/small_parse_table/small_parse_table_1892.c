/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1892.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9460(t_small_parse_table_array *v)
{
	v->a[189200] = 1;
	v->a[189201] = sym_word;
	v->a[189202] = actions(8090);
	v->a[189203] = 1;
	v->a[189204] = sym__special_character;
	v->a[189205] = actions(8094);
	v->a[189206] = 1;
	v->a[189207] = sym_test_operator;
	v->a[189208] = state(4287);
	v->a[189209] = 1;
	v->a[189210] = aux_sym__literal_repeat1;
	v->a[189211] = actions(7954);
	v->a[189212] = 2;
	v->a[189213] = anon_sym_LPAREN_LPAREN;
	v->a[189214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189215] = actions(7980);
	v->a[189216] = 2;
	v->a[189217] = anon_sym_LT_LPAREN;
	v->a[189218] = anon_sym_GT_LPAREN;
	v->a[189219] = actions(8092);
	small_parse_table_9461(v);
}

void	small_parse_table_9461(t_small_parse_table_array *v)
{
	v->a[189220] = 2;
	v->a[189221] = sym_raw_string;
	v->a[189222] = sym_ansi_c_string;
	v->a[189223] = state(4759);
	v->a[189224] = 2;
	v->a[189225] = sym_concatenation;
	v->a[189226] = sym_array;
	v->a[189227] = state(4550);
	v->a[189228] = 9;
	v->a[189229] = sym_arithmetic_expansion;
	v->a[189230] = sym_brace_expression;
	v->a[189231] = sym_string;
	v->a[189232] = sym_translated_string;
	v->a[189233] = sym_number;
	v->a[189234] = sym_simple_expansion;
	v->a[189235] = sym_expansion;
	v->a[189236] = sym_command_substitution;
	v->a[189237] = sym_process_substitution;
	v->a[189238] = 23;
	v->a[189239] = actions(3);
	small_parse_table_9462(v);
}

void	small_parse_table_9462(t_small_parse_table_array *v)
{
	v->a[189240] = 1;
	v->a[189241] = sym_comment;
	v->a[189242] = actions(8096);
	v->a[189243] = 1;
	v->a[189244] = sym_word;
	v->a[189245] = actions(8100);
	v->a[189246] = 1;
	v->a[189247] = anon_sym_LPAREN;
	v->a[189248] = actions(8102);
	v->a[189249] = 1;
	v->a[189250] = anon_sym_DOLLAR_LBRACK;
	v->a[189251] = actions(8104);
	v->a[189252] = 1;
	v->a[189253] = anon_sym_DOLLAR;
	v->a[189254] = actions(8106);
	v->a[189255] = 1;
	v->a[189256] = sym__special_character;
	v->a[189257] = actions(8108);
	v->a[189258] = 1;
	v->a[189259] = anon_sym_DQUOTE;
	small_parse_table_9463(v);
}

void	small_parse_table_9463(t_small_parse_table_array *v)
{
	v->a[189260] = actions(8112);
	v->a[189261] = 1;
	v->a[189262] = aux_sym_number_token1;
	v->a[189263] = actions(8114);
	v->a[189264] = 1;
	v->a[189265] = aux_sym_number_token2;
	v->a[189266] = actions(8116);
	v->a[189267] = 1;
	v->a[189268] = anon_sym_DOLLAR_LBRACE;
	v->a[189269] = actions(8118);
	v->a[189270] = 1;
	v->a[189271] = anon_sym_DOLLAR_LPAREN;
	v->a[189272] = actions(8120);
	v->a[189273] = 1;
	v->a[189274] = anon_sym_BQUOTE;
	v->a[189275] = actions(8122);
	v->a[189276] = 1;
	v->a[189277] = anon_sym_DOLLAR_BQUOTE;
	v->a[189278] = actions(8126);
	v->a[189279] = 1;
	small_parse_table_9464(v);
}

void	small_parse_table_9464(t_small_parse_table_array *v)
{
	v->a[189280] = sym__comment_word;
	v->a[189281] = actions(8128);
	v->a[189282] = 1;
	v->a[189283] = sym__empty_value;
	v->a[189284] = actions(8130);
	v->a[189285] = 1;
	v->a[189286] = sym_test_operator;
	v->a[189287] = actions(8132);
	v->a[189288] = 1;
	v->a[189289] = sym__brace_start;
	v->a[189290] = state(1361);
	v->a[189291] = 1;
	v->a[189292] = aux_sym__literal_repeat1;
	v->a[189293] = actions(8098);
	v->a[189294] = 2;
	v->a[189295] = anon_sym_LPAREN_LPAREN;
	v->a[189296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189297] = actions(8110);
	v->a[189298] = 2;
	v->a[189299] = sym_raw_string;
	small_parse_table_9465(v);
}

/* EOF small_parse_table_1892.c */
