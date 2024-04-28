/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2382.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11910(t_small_parse_table_array *v)
{
	v->a[238200] = anon_sym_DOLLAR_LPAREN;
	v->a[238201] = actions(8324);
	v->a[238202] = 1;
	v->a[238203] = anon_sym_BQUOTE;
	v->a[238204] = actions(8326);
	v->a[238205] = 1;
	v->a[238206] = anon_sym_DOLLAR_BQUOTE;
	v->a[238207] = actions(8336);
	v->a[238208] = 1;
	v->a[238209] = sym__brace_start;
	v->a[238210] = actions(10282);
	v->a[238211] = 1;
	v->a[238212] = sym_word;
	v->a[238213] = actions(10288);
	v->a[238214] = 1;
	v->a[238215] = sym__comment_word;
	v->a[238216] = actions(11206);
	v->a[238217] = 1;
	v->a[238218] = anon_sym_DOLLAR;
	v->a[238219] = actions(8302);
	small_parse_table_11911(v);
}

void	small_parse_table_11911(t_small_parse_table_array *v)
{
	v->a[238220] = 2;
	v->a[238221] = anon_sym_LPAREN_LPAREN;
	v->a[238222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[238223] = actions(8328);
	v->a[238224] = 2;
	v->a[238225] = anon_sym_LT_LPAREN;
	v->a[238226] = anon_sym_GT_LPAREN;
	v->a[238227] = actions(10284);
	v->a[238228] = 2;
	v->a[238229] = sym_test_operator;
	v->a[238230] = sym__special_character;
	v->a[238231] = actions(10286);
	v->a[238232] = 3;
	v->a[238233] = sym__bare_dollar;
	v->a[238234] = sym_raw_string;
	v->a[238235] = sym_ansi_c_string;
	v->a[238236] = state(5428);
	v->a[238237] = 9;
	v->a[238238] = sym_arithmetic_expansion;
	v->a[238239] = sym_brace_expression;
	small_parse_table_11912(v);
}

void	small_parse_table_11912(t_small_parse_table_array *v)
{
	v->a[238240] = sym_string;
	v->a[238241] = sym_translated_string;
	v->a[238242] = sym_number;
	v->a[238243] = sym_simple_expansion;
	v->a[238244] = sym_expansion;
	v->a[238245] = sym_command_substitution;
	v->a[238246] = sym_process_substitution;
	v->a[238247] = 21;
	v->a[238248] = actions(71);
	v->a[238249] = 1;
	v->a[238250] = sym_comment;
	v->a[238251] = actions(3064);
	v->a[238252] = 1;
	v->a[238253] = sym_variable_name;
	v->a[238254] = actions(9278);
	v->a[238255] = 1;
	v->a[238256] = anon_sym_LPAREN;
	v->a[238257] = actions(9280);
	v->a[238258] = 1;
	v->a[238259] = anon_sym_BANG;
	small_parse_table_11913(v);
}

void	small_parse_table_11913(t_small_parse_table_array *v)
{
	v->a[238260] = actions(9286);
	v->a[238261] = 1;
	v->a[238262] = anon_sym_TILDE;
	v->a[238263] = actions(9288);
	v->a[238264] = 1;
	v->a[238265] = anon_sym_DOLLAR;
	v->a[238266] = actions(9290);
	v->a[238267] = 1;
	v->a[238268] = anon_sym_DQUOTE;
	v->a[238269] = actions(9292);
	v->a[238270] = 1;
	v->a[238271] = aux_sym_number_token1;
	v->a[238272] = actions(9294);
	v->a[238273] = 1;
	v->a[238274] = aux_sym_number_token2;
	v->a[238275] = actions(9296);
	v->a[238276] = 1;
	v->a[238277] = anon_sym_DOLLAR_LBRACE;
	v->a[238278] = actions(9298);
	v->a[238279] = 1;
	small_parse_table_11914(v);
}

void	small_parse_table_11914(t_small_parse_table_array *v)
{
	v->a[238280] = anon_sym_DOLLAR_LPAREN;
	v->a[238281] = actions(9300);
	v->a[238282] = 1;
	v->a[238283] = anon_sym_BQUOTE;
	v->a[238284] = actions(9302);
	v->a[238285] = 1;
	v->a[238286] = anon_sym_DOLLAR_BQUOTE;
	v->a[238287] = actions(11208);
	v->a[238288] = 1;
	v->a[238289] = aux_sym__simple_variable_name_token1;
	v->a[238290] = state(2801);
	v->a[238291] = 1;
	v->a[238292] = sym__arithmetic_binary_expression;
	v->a[238293] = state(2803);
	v->a[238294] = 1;
	v->a[238295] = sym__arithmetic_ternary_expression;
	v->a[238296] = state(2809);
	v->a[238297] = 1;
	v->a[238298] = sym__arithmetic_unary_expression;
	v->a[238299] = state(2825);
	small_parse_table_11915(v);
}

/* EOF small_parse_table_2382.c */
