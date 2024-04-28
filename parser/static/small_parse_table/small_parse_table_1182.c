/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1182.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5910(t_small_parse_table_array *v)
{
	v->a[118200] = sym_unary_expression;
	v->a[118201] = sym_postfix_expression;
	v->a[118202] = sym_parenthesized_expression;
	v->a[118203] = sym_concatenation;
	v->a[118204] = state(2500);
	v->a[118205] = 9;
	v->a[118206] = sym_arithmetic_expansion;
	v->a[118207] = sym_brace_expression;
	v->a[118208] = sym_string;
	v->a[118209] = sym_translated_string;
	v->a[118210] = sym_number;
	v->a[118211] = sym_simple_expansion;
	v->a[118212] = sym_expansion;
	v->a[118213] = sym_command_substitution;
	v->a[118214] = sym_process_substitution;
	v->a[118215] = 8;
	v->a[118216] = actions(3);
	v->a[118217] = 1;
	v->a[118218] = sym_comment;
	v->a[118219] = actions(5826);
	small_parse_table_5911(v);
}

void	small_parse_table_5911(t_small_parse_table_array *v)
{
	v->a[118220] = 1;
	v->a[118221] = aux_sym_heredoc_redirect_token1;
	v->a[118222] = actions(5828);
	v->a[118223] = 1;
	v->a[118224] = sym_file_descriptor;
	v->a[118225] = actions(6430);
	v->a[118226] = 1;
	v->a[118227] = anon_sym_RPAREN;
	v->a[118228] = actions(5831);
	v->a[118229] = 3;
	v->a[118230] = sym_variable_name;
	v->a[118231] = sym_test_operator;
	v->a[118232] = sym__brace_start;
	v->a[118233] = actions(5821);
	v->a[118234] = 9;
	v->a[118235] = anon_sym_SEMI;
	v->a[118236] = anon_sym_PIPE_PIPE;
	v->a[118237] = anon_sym_AMP_AMP;
	v->a[118238] = anon_sym_PIPE;
	v->a[118239] = anon_sym_AMP;
	small_parse_table_5912(v);
}

void	small_parse_table_5912(t_small_parse_table_array *v)
{
	v->a[118240] = anon_sym_LT_LT;
	v->a[118241] = anon_sym_SEMI_SEMI;
	v->a[118242] = anon_sym_PIPE_AMP;
	v->a[118243] = anon_sym_LT_LT_DASH;
	v->a[118244] = actions(5823);
	v->a[118245] = 11;
	v->a[118246] = anon_sym_LT;
	v->a[118247] = anon_sym_GT;
	v->a[118248] = anon_sym_GT_GT;
	v->a[118249] = anon_sym_AMP_GT;
	v->a[118250] = anon_sym_AMP_GT_GT;
	v->a[118251] = anon_sym_LT_AMP;
	v->a[118252] = anon_sym_GT_AMP;
	v->a[118253] = anon_sym_GT_PIPE;
	v->a[118254] = anon_sym_LT_AMP_DASH;
	v->a[118255] = anon_sym_GT_AMP_DASH;
	v->a[118256] = anon_sym_LT_LT_LT;
	v->a[118257] = actions(5819);
	v->a[118258] = 17;
	v->a[118259] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5913(v);
}

void	small_parse_table_5913(t_small_parse_table_array *v)
{
	v->a[118260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118261] = anon_sym_DOLLAR_LBRACK;
	v->a[118262] = anon_sym_DOLLAR;
	v->a[118263] = sym__special_character;
	v->a[118264] = anon_sym_DQUOTE;
	v->a[118265] = sym_raw_string;
	v->a[118266] = sym_ansi_c_string;
	v->a[118267] = aux_sym_number_token1;
	v->a[118268] = aux_sym_number_token2;
	v->a[118269] = anon_sym_DOLLAR_LBRACE;
	v->a[118270] = anon_sym_DOLLAR_LPAREN;
	v->a[118271] = anon_sym_BQUOTE;
	v->a[118272] = anon_sym_DOLLAR_BQUOTE;
	v->a[118273] = anon_sym_LT_LPAREN;
	v->a[118274] = anon_sym_GT_LPAREN;
	v->a[118275] = sym_word;
	v->a[118276] = 3;
	v->a[118277] = actions(3);
	v->a[118278] = 1;
	v->a[118279] = sym_comment;
	small_parse_table_5914(v);
}

void	small_parse_table_5914(t_small_parse_table_array *v)
{
	v->a[118280] = actions(1334);
	v->a[118281] = 5;
	v->a[118282] = sym_file_descriptor;
	v->a[118283] = sym__concat;
	v->a[118284] = sym_test_operator;
	v->a[118285] = sym__brace_start;
	v->a[118286] = aux_sym_heredoc_redirect_token1;
	v->a[118287] = actions(1332);
	v->a[118288] = 38;
	v->a[118289] = anon_sym_LPAREN_LPAREN;
	v->a[118290] = anon_sym_SEMI;
	v->a[118291] = anon_sym_PIPE_PIPE;
	v->a[118292] = anon_sym_AMP_AMP;
	v->a[118293] = anon_sym_PIPE;
	v->a[118294] = anon_sym_AMP;
	v->a[118295] = anon_sym_LT;
	v->a[118296] = anon_sym_GT;
	v->a[118297] = anon_sym_LT_LT;
	v->a[118298] = anon_sym_GT_GT;
	v->a[118299] = anon_sym_RPAREN;
	small_parse_table_5915(v);
}

/* EOF small_parse_table_1182.c */
