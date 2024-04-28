/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_93.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_465(t_small_parse_table_array *v)
{
	v->a[9300] = anon_sym_DQUOTE;
	v->a[9301] = sym_raw_string;
	v->a[9302] = sym_ansi_c_string;
	v->a[9303] = anon_sym_DOLLAR_LBRACE;
	v->a[9304] = anon_sym_BQUOTE;
	v->a[9305] = anon_sym_DOLLAR_BQUOTE;
	v->a[9306] = anon_sym_LT_LPAREN;
	v->a[9307] = anon_sym_GT_LPAREN;
	v->a[9308] = actions(2715);
	v->a[9309] = 28;
	v->a[9310] = anon_sym_for;
	v->a[9311] = anon_sym_select;
	v->a[9312] = anon_sym_LT;
	v->a[9313] = anon_sym_GT;
	v->a[9314] = anon_sym_LPAREN;
	v->a[9315] = anon_sym_while;
	v->a[9316] = anon_sym_until;
	v->a[9317] = anon_sym_if;
	v->a[9318] = anon_sym_case;
	v->a[9319] = anon_sym_function;
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = anon_sym_BANG;
	v->a[9321] = anon_sym_LBRACK;
	v->a[9322] = anon_sym_declare;
	v->a[9323] = anon_sym_typeset;
	v->a[9324] = anon_sym_export;
	v->a[9325] = anon_sym_readonly;
	v->a[9326] = anon_sym_local;
	v->a[9327] = anon_sym_unset;
	v->a[9328] = anon_sym_unsetenv;
	v->a[9329] = anon_sym_AMP_GT;
	v->a[9330] = anon_sym_LT_AMP;
	v->a[9331] = anon_sym_GT_AMP;
	v->a[9332] = anon_sym_DOLLAR;
	v->a[9333] = sym__special_character;
	v->a[9334] = aux_sym_number_token1;
	v->a[9335] = aux_sym_number_token2;
	v->a[9336] = anon_sym_DOLLAR_LPAREN;
	v->a[9337] = sym_word;
	v->a[9338] = 37;
	v->a[9339] = actions(19);
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = 1;
	v->a[9341] = anon_sym_LPAREN;
	v->a[9342] = actions(33);
	v->a[9343] = 1;
	v->a[9344] = anon_sym_LBRACK;
	v->a[9345] = actions(35);
	v->a[9346] = 1;
	v->a[9347] = anon_sym_LBRACK_LBRACK;
	v->a[9348] = actions(71);
	v->a[9349] = 1;
	v->a[9350] = sym_comment;
	v->a[9351] = actions(288);
	v->a[9352] = 1;
	v->a[9353] = anon_sym_LPAREN_LPAREN;
	v->a[9354] = actions(312);
	v->a[9355] = 1;
	v->a[9356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9357] = actions(314);
	v->a[9358] = 1;
	v->a[9359] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = actions(316);
	v->a[9361] = 1;
	v->a[9362] = anon_sym_DOLLAR;
	v->a[9363] = actions(318);
	v->a[9364] = 1;
	v->a[9365] = sym__special_character;
	v->a[9366] = actions(320);
	v->a[9367] = 1;
	v->a[9368] = anon_sym_DQUOTE;
	v->a[9369] = actions(324);
	v->a[9370] = 1;
	v->a[9371] = aux_sym_number_token1;
	v->a[9372] = actions(326);
	v->a[9373] = 1;
	v->a[9374] = aux_sym_number_token2;
	v->a[9375] = actions(328);
	v->a[9376] = 1;
	v->a[9377] = anon_sym_DOLLAR_LBRACE;
	v->a[9378] = actions(330);
	v->a[9379] = 1;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = anon_sym_DOLLAR_LPAREN;
	v->a[9381] = actions(332);
	v->a[9382] = 1;
	v->a[9383] = anon_sym_BQUOTE;
	v->a[9384] = actions(334);
	v->a[9385] = 1;
	v->a[9386] = anon_sym_DOLLAR_BQUOTE;
	v->a[9387] = actions(340);
	v->a[9388] = 1;
	v->a[9389] = sym_variable_name;
	v->a[9390] = actions(342);
	v->a[9391] = 1;
	v->a[9392] = sym_test_operator;
	v->a[9393] = actions(344);
	v->a[9394] = 1;
	v->a[9395] = sym__brace_start;
	v->a[9396] = actions(1394);
	v->a[9397] = 1;
	v->a[9398] = anon_sym_LT_LT_LT;
	v->a[9399] = actions(1396);
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
