/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_712.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3560(t_small_parse_table_array *v)
{
	v->a[71200] = 1;
	v->a[71201] = anon_sym_BQUOTE;
	v->a[71202] = state(205);
	v->a[71203] = 2;
	v->a[71204] = sym_concatenation;
	v->a[71205] = aux_sym_for_statement_repeat1;
	v->a[71206] = actions(666);
	v->a[71207] = 3;
	v->a[71208] = sym_raw_string;
	v->a[71209] = sym_number;
	v->a[71210] = sym_word;
	v->a[71211] = state(463);
	v->a[71212] = 5;
	v->a[71213] = sym_arithmetic_expansion;
	v->a[71214] = sym_string;
	v->a[71215] = sym_simple_expansion;
	v->a[71216] = sym_expansion;
	v->a[71217] = sym_command_substitution;
	v->a[71218] = 10;
	v->a[71219] = actions(3);
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = 1;
	v->a[71221] = sym_comment;
	v->a[71222] = actions(2446);
	v->a[71223] = 1;
	v->a[71224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71225] = actions(2448);
	v->a[71226] = 1;
	v->a[71227] = anon_sym_DOLLAR;
	v->a[71228] = actions(2450);
	v->a[71229] = 1;
	v->a[71230] = anon_sym_DQUOTE;
	v->a[71231] = actions(2452);
	v->a[71232] = 1;
	v->a[71233] = anon_sym_DOLLAR_LBRACE;
	v->a[71234] = actions(2454);
	v->a[71235] = 1;
	v->a[71236] = anon_sym_DOLLAR_LPAREN;
	v->a[71237] = actions(2456);
	v->a[71238] = 1;
	v->a[71239] = anon_sym_BQUOTE;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = state(184);
	v->a[71241] = 2;
	v->a[71242] = sym_concatenation;
	v->a[71243] = aux_sym_for_statement_repeat1;
	v->a[71244] = actions(2734);
	v->a[71245] = 3;
	v->a[71246] = sym_raw_string;
	v->a[71247] = sym_number;
	v->a[71248] = sym_word;
	v->a[71249] = state(397);
	v->a[71250] = 5;
	v->a[71251] = sym_arithmetic_expansion;
	v->a[71252] = sym_string;
	v->a[71253] = sym_simple_expansion;
	v->a[71254] = sym_expansion;
	v->a[71255] = sym_command_substitution;
	v->a[71256] = 7;
	v->a[71257] = actions(3);
	v->a[71258] = 1;
	v->a[71259] = sym_comment;
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = actions(2436);
	v->a[71261] = 1;
	v->a[71262] = sym_file_descriptor;
	v->a[71263] = actions(2608);
	v->a[71264] = 1;
	v->a[71265] = aux_sym_heredoc_redirect_token1;
	v->a[71266] = actions(744);
	v->a[71267] = 2;
	v->a[71268] = anon_sym_LT_LT;
	v->a[71269] = anon_sym_LT_LT_DASH;
	v->a[71270] = actions(1396);
	v->a[71271] = 2;
	v->a[71272] = anon_sym_AMP_AMP;
	v->a[71273] = anon_sym_PIPE_PIPE;
	v->a[71274] = state(1359);
	v->a[71275] = 3;
	v->a[71276] = sym_file_redirect;
	v->a[71277] = sym_heredoc_redirect;
	v->a[71278] = aux_sym_redirected_statement_repeat1;
	v->a[71279] = actions(2432);
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = 7;
	v->a[71281] = anon_sym_LT;
	v->a[71282] = anon_sym_GT;
	v->a[71283] = anon_sym_GT_GT;
	v->a[71284] = anon_sym_LT_AMP;
	v->a[71285] = anon_sym_GT_AMP;
	v->a[71286] = anon_sym_GT_PIPE;
	v->a[71287] = anon_sym_LT_GT;
	v->a[71288] = 3;
	v->a[71289] = actions(664);
	v->a[71290] = 1;
	v->a[71291] = sym_comment;
	v->a[71292] = actions(660);
	v->a[71293] = 4;
	v->a[71294] = anon_sym_PIPE;
	v->a[71295] = anon_sym_LT;
	v->a[71296] = anon_sym_GT;
	v->a[71297] = anon_sym_LT_LT;
	v->a[71298] = actions(662);
	v->a[71299] = 12;
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
