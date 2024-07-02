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
	v->a[71200] = anon_sym_GT_GT;
	v->a[71201] = anon_sym_LT_AMP;
	v->a[71202] = anon_sym_GT_AMP;
	v->a[71203] = anon_sym_GT_PIPE;
	v->a[71204] = anon_sym_LT_GT;
	v->a[71205] = anon_sym_LT_LT_DASH;
	v->a[71206] = aux_sym_concatenation_token1;
	v->a[71207] = 7;
	v->a[71208] = actions(3);
	v->a[71209] = 1;
	v->a[71210] = sym_comment;
	v->a[71211] = actions(2604);
	v->a[71212] = 1;
	v->a[71213] = sym_file_descriptor;
	v->a[71214] = actions(2677);
	v->a[71215] = 1;
	v->a[71216] = aux_sym_heredoc_redirect_token1;
	v->a[71217] = actions(700);
	v->a[71218] = 2;
	v->a[71219] = anon_sym_LT_LT;
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = anon_sym_LT_LT_DASH;
	v->a[71221] = actions(1416);
	v->a[71222] = 2;
	v->a[71223] = anon_sym_AMP_AMP;
	v->a[71224] = anon_sym_PIPE_PIPE;
	v->a[71225] = state(1354);
	v->a[71226] = 3;
	v->a[71227] = sym_file_redirect;
	v->a[71228] = sym_heredoc_redirect;
	v->a[71229] = aux_sym_redirected_statement_repeat1;
	v->a[71230] = actions(2600);
	v->a[71231] = 7;
	v->a[71232] = anon_sym_LT;
	v->a[71233] = anon_sym_GT;
	v->a[71234] = anon_sym_GT_GT;
	v->a[71235] = anon_sym_LT_AMP;
	v->a[71236] = anon_sym_GT_AMP;
	v->a[71237] = anon_sym_GT_PIPE;
	v->a[71238] = anon_sym_LT_GT;
	v->a[71239] = 10;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = actions(3);
	v->a[71241] = 1;
	v->a[71242] = sym_comment;
	v->a[71243] = actions(821);
	v->a[71244] = 1;
	v->a[71245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71246] = actions(823);
	v->a[71247] = 1;
	v->a[71248] = anon_sym_DOLLAR;
	v->a[71249] = actions(825);
	v->a[71250] = 1;
	v->a[71251] = anon_sym_DQUOTE;
	v->a[71252] = actions(827);
	v->a[71253] = 1;
	v->a[71254] = anon_sym_DOLLAR_LBRACE;
	v->a[71255] = actions(829);
	v->a[71256] = 1;
	v->a[71257] = anon_sym_DOLLAR_LPAREN;
	v->a[71258] = actions(831);
	v->a[71259] = 1;
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = anon_sym_BQUOTE;
	v->a[71261] = state(472);
	v->a[71262] = 2;
	v->a[71263] = sym_concatenation;
	v->a[71264] = aux_sym_for_statement_repeat1;
	v->a[71265] = actions(1275);
	v->a[71266] = 3;
	v->a[71267] = sym_raw_string;
	v->a[71268] = sym_number;
	v->a[71269] = sym_word;
	v->a[71270] = state(804);
	v->a[71271] = 5;
	v->a[71272] = sym_arithmetic_expansion;
	v->a[71273] = sym_string;
	v->a[71274] = sym_simple_expansion;
	v->a[71275] = sym_expansion;
	v->a[71276] = sym_command_substitution;
	v->a[71277] = 10;
	v->a[71278] = actions(3);
	v->a[71279] = 1;
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = sym_comment;
	v->a[71281] = actions(821);
	v->a[71282] = 1;
	v->a[71283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71284] = actions(823);
	v->a[71285] = 1;
	v->a[71286] = anon_sym_DOLLAR;
	v->a[71287] = actions(825);
	v->a[71288] = 1;
	v->a[71289] = anon_sym_DQUOTE;
	v->a[71290] = actions(827);
	v->a[71291] = 1;
	v->a[71292] = anon_sym_DOLLAR_LBRACE;
	v->a[71293] = actions(829);
	v->a[71294] = 1;
	v->a[71295] = anon_sym_DOLLAR_LPAREN;
	v->a[71296] = actions(831);
	v->a[71297] = 1;
	v->a[71298] = anon_sym_BQUOTE;
	v->a[71299] = state(473);
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
