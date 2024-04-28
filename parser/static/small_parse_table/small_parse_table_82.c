/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_82.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_410(t_small_parse_table_array *v)
{
	v->a[8200] = anon_sym_DOLLAR_BQUOTE;
	v->a[8201] = anon_sym_LT_LPAREN;
	v->a[8202] = anon_sym_GT_LPAREN;
	v->a[8203] = sym_word;
	v->a[8204] = 24;
	v->a[8205] = actions(3);
	v->a[8206] = 1;
	v->a[8207] = sym_comment;
	v->a[8208] = actions(2163);
	v->a[8209] = 1;
	v->a[8210] = anon_sym_DOLLAR_LBRACK;
	v->a[8211] = actions(2166);
	v->a[8212] = 1;
	v->a[8213] = anon_sym_DOLLAR;
	v->a[8214] = actions(2172);
	v->a[8215] = 1;
	v->a[8216] = anon_sym_DQUOTE;
	v->a[8217] = actions(2175);
	v->a[8218] = 1;
	v->a[8219] = aux_sym_number_token1;
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = actions(2178);
	v->a[8221] = 1;
	v->a[8222] = aux_sym_number_token2;
	v->a[8223] = actions(2181);
	v->a[8224] = 1;
	v->a[8225] = anon_sym_DOLLAR_LBRACE;
	v->a[8226] = actions(2184);
	v->a[8227] = 1;
	v->a[8228] = anon_sym_DOLLAR_LPAREN;
	v->a[8229] = actions(2187);
	v->a[8230] = 1;
	v->a[8231] = anon_sym_BQUOTE;
	v->a[8232] = actions(2190);
	v->a[8233] = 1;
	v->a[8234] = anon_sym_DOLLAR_BQUOTE;
	v->a[8235] = actions(2205);
	v->a[8236] = 1;
	v->a[8237] = sym__brace_start;
	v->a[8238] = actions(2550);
	v->a[8239] = 1;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = sym__special_character;
	v->a[8241] = actions(2553);
	v->a[8242] = 1;
	v->a[8243] = aux_sym__simple_variable_name_token1;
	v->a[8244] = actions(2556);
	v->a[8245] = 1;
	v->a[8246] = sym_variable_name;
	v->a[8247] = actions(2559);
	v->a[8248] = 1;
	v->a[8249] = sym_test_operator;
	v->a[8250] = state(1743);
	v->a[8251] = 1;
	v->a[8252] = aux_sym__literal_repeat1;
	v->a[8253] = state(6773);
	v->a[8254] = 1;
	v->a[8255] = sym_subscript;
	v->a[8256] = actions(1704);
	v->a[8257] = 2;
	v->a[8258] = sym_file_descriptor;
	v->a[8259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = actions(2160);
	v->a[8261] = 2;
	v->a[8262] = anon_sym_LPAREN_LPAREN;
	v->a[8263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8264] = actions(2193);
	v->a[8265] = 2;
	v->a[8266] = anon_sym_LT_LPAREN;
	v->a[8267] = anon_sym_GT_LPAREN;
	v->a[8268] = actions(2547);
	v->a[8269] = 3;
	v->a[8270] = sym_raw_string;
	v->a[8271] = sym_ansi_c_string;
	v->a[8272] = sym_word;
	v->a[8273] = state(612);
	v->a[8274] = 3;
	v->a[8275] = sym_variable_assignment;
	v->a[8276] = sym_concatenation;
	v->a[8277] = aux_sym_declaration_command_repeat1;
	v->a[8278] = state(1602);
	v->a[8279] = 9;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = sym_arithmetic_expansion;
	v->a[8281] = sym_brace_expression;
	v->a[8282] = sym_string;
	v->a[8283] = sym_translated_string;
	v->a[8284] = sym_number;
	v->a[8285] = sym_simple_expansion;
	v->a[8286] = sym_expansion;
	v->a[8287] = sym_command_substitution;
	v->a[8288] = sym_process_substitution;
	v->a[8289] = actions(1702);
	v->a[8290] = 19;
	v->a[8291] = anon_sym_SEMI;
	v->a[8292] = anon_sym_PIPE_PIPE;
	v->a[8293] = anon_sym_AMP_AMP;
	v->a[8294] = anon_sym_PIPE;
	v->a[8295] = anon_sym_AMP;
	v->a[8296] = anon_sym_LT;
	v->a[8297] = anon_sym_GT;
	v->a[8298] = anon_sym_LT_LT;
	v->a[8299] = anon_sym_GT_GT;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
