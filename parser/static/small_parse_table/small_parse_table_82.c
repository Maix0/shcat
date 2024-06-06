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
	v->a[8200] = sym_comment;
	v->a[8201] = actions(1859);
	v->a[8202] = 1;
	v->a[8203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8204] = actions(1861);
	v->a[8205] = 1;
	v->a[8206] = anon_sym_DOLLAR;
	v->a[8207] = actions(1863);
	v->a[8208] = 1;
	v->a[8209] = sym__special_character;
	v->a[8210] = actions(1865);
	v->a[8211] = 1;
	v->a[8212] = anon_sym_DQUOTE;
	v->a[8213] = actions(1867);
	v->a[8214] = 1;
	v->a[8215] = aux_sym_number_token1;
	v->a[8216] = actions(1869);
	v->a[8217] = 1;
	v->a[8218] = aux_sym_number_token2;
	v->a[8219] = actions(1871);
	small_parse_table_411(v);
}

void	small_parse_table_411(t_small_parse_table_array *v)
{
	v->a[8220] = 1;
	v->a[8221] = anon_sym_DOLLAR_LBRACE;
	v->a[8222] = actions(1873);
	v->a[8223] = 1;
	v->a[8224] = anon_sym_DOLLAR_LPAREN;
	v->a[8225] = actions(1875);
	v->a[8226] = 1;
	v->a[8227] = anon_sym_BQUOTE;
	v->a[8228] = actions(1877);
	v->a[8229] = 1;
	v->a[8230] = anon_sym_DOLLAR_BQUOTE;
	v->a[8231] = actions(1879);
	v->a[8232] = 1;
	v->a[8233] = aux_sym__simple_variable_name_token1;
	v->a[8234] = actions(1881);
	v->a[8235] = 1;
	v->a[8236] = sym_test_operator;
	v->a[8237] = actions(1883);
	v->a[8238] = 1;
	v->a[8239] = sym__brace_start;
	small_parse_table_412(v);
}

void	small_parse_table_412(t_small_parse_table_array *v)
{
	v->a[8240] = state(1209);
	v->a[8241] = 1;
	v->a[8242] = aux_sym__literal_repeat1;
	v->a[8243] = actions(1857);
	v->a[8244] = 2;
	v->a[8245] = sym_raw_string;
	v->a[8246] = sym_word;
	v->a[8247] = state(387);
	v->a[8248] = 2;
	v->a[8249] = sym_concatenation;
	v->a[8250] = aux_sym_unset_command_repeat1;
	v->a[8251] = actions(1246);
	v->a[8252] = 3;
	v->a[8253] = sym_file_descriptor;
	v->a[8254] = ts_builtin_sym_end;
	v->a[8255] = aux_sym_heredoc_redirect_token1;
	v->a[8256] = state(774);
	v->a[8257] = 7;
	v->a[8258] = sym_arithmetic_expansion;
	v->a[8259] = sym_brace_expression;
	small_parse_table_413(v);
}

void	small_parse_table_413(t_small_parse_table_array *v)
{
	v->a[8260] = sym_string;
	v->a[8261] = sym_number;
	v->a[8262] = sym_simple_expansion;
	v->a[8263] = sym_expansion;
	v->a[8264] = sym_command_substitution;
	v->a[8265] = actions(1244);
	v->a[8266] = 19;
	v->a[8267] = anon_sym_PIPE;
	v->a[8268] = anon_sym_SEMI_SEMI;
	v->a[8269] = anon_sym_PIPE_AMP;
	v->a[8270] = anon_sym_AMP_AMP;
	v->a[8271] = anon_sym_PIPE_PIPE;
	v->a[8272] = anon_sym_LT;
	v->a[8273] = anon_sym_GT;
	v->a[8274] = anon_sym_GT_GT;
	v->a[8275] = anon_sym_AMP_GT;
	v->a[8276] = anon_sym_AMP_GT_GT;
	v->a[8277] = anon_sym_LT_AMP;
	v->a[8278] = anon_sym_GT_AMP;
	v->a[8279] = anon_sym_GT_PIPE;
	small_parse_table_414(v);
}

void	small_parse_table_414(t_small_parse_table_array *v)
{
	v->a[8280] = anon_sym_LT_AMP_DASH;
	v->a[8281] = anon_sym_GT_AMP_DASH;
	v->a[8282] = anon_sym_LT_LT;
	v->a[8283] = anon_sym_LT_LT_DASH;
	v->a[8284] = anon_sym_AMP;
	v->a[8285] = anon_sym_SEMI;
	v->a[8286] = 6;
	v->a[8287] = actions(3);
	v->a[8288] = 1;
	v->a[8289] = sym_comment;
	v->a[8290] = state(1237);
	v->a[8291] = 1;
	v->a[8292] = aux_sym__literal_repeat1;
	v->a[8293] = state(357);
	v->a[8294] = 2;
	v->a[8295] = sym_concatenation;
	v->a[8296] = aux_sym_for_statement_repeat1;
	v->a[8297] = actions(1182);
	v->a[8298] = 5;
	v->a[8299] = sym_file_descriptor;
	small_parse_table_415(v);
}

/* EOF small_parse_table_82.c */
