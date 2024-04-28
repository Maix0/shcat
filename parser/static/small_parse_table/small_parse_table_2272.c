/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2272.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11360(t_small_parse_table_array *v)
{
	v->a[227200] = aux_sym__literal_repeat1;
	v->a[227201] = state(4861);
	v->a[227202] = 1;
	v->a[227203] = sym_concatenation;
	v->a[227204] = actions(9634);
	v->a[227205] = 2;
	v->a[227206] = anon_sym_LPAREN_LPAREN;
	v->a[227207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227208] = actions(9650);
	v->a[227209] = 2;
	v->a[227210] = anon_sym_LT_LPAREN;
	v->a[227211] = anon_sym_GT_LPAREN;
	v->a[227212] = actions(10792);
	v->a[227213] = 2;
	v->a[227214] = sym_raw_string;
	v->a[227215] = sym_ansi_c_string;
	v->a[227216] = state(4440);
	v->a[227217] = 9;
	v->a[227218] = sym_arithmetic_expansion;
	v->a[227219] = sym_brace_expression;
	small_parse_table_11361(v);
}

void	small_parse_table_11361(t_small_parse_table_array *v)
{
	v->a[227220] = sym_string;
	v->a[227221] = sym_translated_string;
	v->a[227222] = sym_number;
	v->a[227223] = sym_simple_expansion;
	v->a[227224] = sym_expansion;
	v->a[227225] = sym_command_substitution;
	v->a[227226] = sym_process_substitution;
	v->a[227227] = 18;
	v->a[227228] = actions(3);
	v->a[227229] = 1;
	v->a[227230] = sym_comment;
	v->a[227231] = actions(8268);
	v->a[227232] = 1;
	v->a[227233] = anon_sym_DOLLAR_LBRACK;
	v->a[227234] = actions(8274);
	v->a[227235] = 1;
	v->a[227236] = anon_sym_DQUOTE;
	v->a[227237] = actions(8278);
	v->a[227238] = 1;
	v->a[227239] = aux_sym_number_token1;
	small_parse_table_11362(v);
}

void	small_parse_table_11362(t_small_parse_table_array *v)
{
	v->a[227240] = actions(8280);
	v->a[227241] = 1;
	v->a[227242] = aux_sym_number_token2;
	v->a[227243] = actions(8282);
	v->a[227244] = 1;
	v->a[227245] = anon_sym_DOLLAR_LBRACE;
	v->a[227246] = actions(8284);
	v->a[227247] = 1;
	v->a[227248] = anon_sym_DOLLAR_LPAREN;
	v->a[227249] = actions(8286);
	v->a[227250] = 1;
	v->a[227251] = anon_sym_BQUOTE;
	v->a[227252] = actions(8288);
	v->a[227253] = 1;
	v->a[227254] = anon_sym_DOLLAR_BQUOTE;
	v->a[227255] = actions(8298);
	v->a[227256] = 1;
	v->a[227257] = sym__brace_start;
	v->a[227258] = actions(10480);
	v->a[227259] = 1;
	small_parse_table_11363(v);
}

void	small_parse_table_11363(t_small_parse_table_array *v)
{
	v->a[227260] = sym_word;
	v->a[227261] = actions(10486);
	v->a[227262] = 1;
	v->a[227263] = sym__comment_word;
	v->a[227264] = actions(10796);
	v->a[227265] = 1;
	v->a[227266] = anon_sym_DOLLAR;
	v->a[227267] = actions(8264);
	v->a[227268] = 2;
	v->a[227269] = anon_sym_LPAREN_LPAREN;
	v->a[227270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[227271] = actions(8290);
	v->a[227272] = 2;
	v->a[227273] = anon_sym_LT_LPAREN;
	v->a[227274] = anon_sym_GT_LPAREN;
	v->a[227275] = actions(10482);
	v->a[227276] = 2;
	v->a[227277] = sym_test_operator;
	v->a[227278] = sym__special_character;
	v->a[227279] = actions(10484);
	small_parse_table_11364(v);
}

void	small_parse_table_11364(t_small_parse_table_array *v)
{
	v->a[227280] = 3;
	v->a[227281] = sym__bare_dollar;
	v->a[227282] = sym_raw_string;
	v->a[227283] = sym_ansi_c_string;
	v->a[227284] = state(1465);
	v->a[227285] = 9;
	v->a[227286] = sym_arithmetic_expansion;
	v->a[227287] = sym_brace_expression;
	v->a[227288] = sym_string;
	v->a[227289] = sym_translated_string;
	v->a[227290] = sym_number;
	v->a[227291] = sym_simple_expansion;
	v->a[227292] = sym_expansion;
	v->a[227293] = sym_command_substitution;
	v->a[227294] = sym_process_substitution;
	v->a[227295] = 21;
	v->a[227296] = actions(71);
	v->a[227297] = 1;
	v->a[227298] = sym_comment;
	v->a[227299] = actions(3064);
	small_parse_table_11365(v);
}

/* EOF small_parse_table_2272.c */
