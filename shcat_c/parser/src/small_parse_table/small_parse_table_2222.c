/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2222.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11110(t_small_parse_table_array *v)
{
	v->a[222200] = sym_subscript;
	v->a[222201] = sym__arithmetic_expression;
	v->a[222202] = sym__arithmetic_literal;
	v->a[222203] = sym__arithmetic_parenthesized_expression;
	v->a[222204] = sym_string;
	v->a[222205] = sym_number;
	v->a[222206] = sym_simple_expansion;
	v->a[222207] = sym_expansion;
	v->a[222208] = sym_command_substitution;
	v->a[222209] = 18;
	v->a[222210] = actions(3);
	v->a[222211] = 1;
	v->a[222212] = sym_comment;
	v->a[222213] = actions(3401);
	v->a[222214] = 1;
	v->a[222215] = aux_sym_number_token1;
	v->a[222216] = actions(3403);
	v->a[222217] = 1;
	v->a[222218] = aux_sym_number_token2;
	v->a[222219] = actions(3407);
	small_parse_table_11111(v);
}

void	small_parse_table_11111(t_small_parse_table_array *v)
{
	v->a[222220] = 1;
	v->a[222221] = anon_sym_DOLLAR_LPAREN;
	v->a[222222] = actions(3417);
	v->a[222223] = 1;
	v->a[222224] = sym__brace_start;
	v->a[222225] = actions(8926);
	v->a[222226] = 1;
	v->a[222227] = anon_sym_DOLLAR_LBRACK;
	v->a[222228] = actions(8930);
	v->a[222229] = 1;
	v->a[222230] = anon_sym_DQUOTE;
	v->a[222231] = actions(8934);
	v->a[222232] = 1;
	v->a[222233] = anon_sym_DOLLAR_LBRACE;
	v->a[222234] = actions(8936);
	v->a[222235] = 1;
	v->a[222236] = anon_sym_BQUOTE;
	v->a[222237] = actions(8938);
	v->a[222238] = 1;
	v->a[222239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11112(v);
}

void	small_parse_table_11112(t_small_parse_table_array *v)
{
	v->a[222240] = actions(9696);
	v->a[222241] = 1;
	v->a[222242] = sym_word;
	v->a[222243] = actions(9704);
	v->a[222244] = 1;
	v->a[222245] = sym__comment_word;
	v->a[222246] = actions(10622);
	v->a[222247] = 1;
	v->a[222248] = anon_sym_DOLLAR;
	v->a[222249] = actions(8924);
	v->a[222250] = 2;
	v->a[222251] = anon_sym_LPAREN_LPAREN;
	v->a[222252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222253] = actions(8940);
	v->a[222254] = 2;
	v->a[222255] = anon_sym_LT_LPAREN;
	v->a[222256] = anon_sym_GT_LPAREN;
	v->a[222257] = actions(9700);
	v->a[222258] = 2;
	v->a[222259] = sym_test_operator;
	small_parse_table_11113(v);
}

void	small_parse_table_11113(t_small_parse_table_array *v)
{
	v->a[222260] = sym__special_character;
	v->a[222261] = actions(9702);
	v->a[222262] = 3;
	v->a[222263] = sym__bare_dollar;
	v->a[222264] = sym_raw_string;
	v->a[222265] = sym_ansi_c_string;
	v->a[222266] = state(1851);
	v->a[222267] = 9;
	v->a[222268] = sym_arithmetic_expansion;
	v->a[222269] = sym_brace_expression;
	v->a[222270] = sym_string;
	v->a[222271] = sym_translated_string;
	v->a[222272] = sym_number;
	v->a[222273] = sym_simple_expansion;
	v->a[222274] = sym_expansion;
	v->a[222275] = sym_command_substitution;
	v->a[222276] = sym_process_substitution;
	v->a[222277] = 18;
	v->a[222278] = actions(3);
	v->a[222279] = 1;
	small_parse_table_11114(v);
}

void	small_parse_table_11114(t_small_parse_table_array *v)
{
	v->a[222280] = sym_comment;
	v->a[222281] = actions(3401);
	v->a[222282] = 1;
	v->a[222283] = aux_sym_number_token1;
	v->a[222284] = actions(3403);
	v->a[222285] = 1;
	v->a[222286] = aux_sym_number_token2;
	v->a[222287] = actions(3407);
	v->a[222288] = 1;
	v->a[222289] = anon_sym_DOLLAR_LPAREN;
	v->a[222290] = actions(3417);
	v->a[222291] = 1;
	v->a[222292] = sym__brace_start;
	v->a[222293] = actions(8926);
	v->a[222294] = 1;
	v->a[222295] = anon_sym_DOLLAR_LBRACK;
	v->a[222296] = actions(8930);
	v->a[222297] = 1;
	v->a[222298] = anon_sym_DQUOTE;
	v->a[222299] = actions(8934);
	small_parse_table_11115(v);
}

/* EOF small_parse_table_2222.c */
