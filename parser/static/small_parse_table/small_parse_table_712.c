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
	v->a[71200] = actions(3);
	v->a[71201] = 1;
	v->a[71202] = sym_comment;
	v->a[71203] = actions(933);
	v->a[71204] = 1;
	v->a[71205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71206] = actions(935);
	v->a[71207] = 1;
	v->a[71208] = anon_sym_DOLLAR;
	v->a[71209] = actions(937);
	v->a[71210] = 1;
	v->a[71211] = anon_sym_DQUOTE;
	v->a[71212] = actions(939);
	v->a[71213] = 1;
	v->a[71214] = aux_sym_number_token1;
	v->a[71215] = actions(941);
	v->a[71216] = 1;
	v->a[71217] = aux_sym_number_token2;
	v->a[71218] = actions(943);
	v->a[71219] = 1;
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = anon_sym_DOLLAR_LBRACE;
	v->a[71221] = actions(945);
	v->a[71222] = 1;
	v->a[71223] = anon_sym_DOLLAR_LPAREN;
	v->a[71224] = actions(947);
	v->a[71225] = 1;
	v->a[71226] = anon_sym_BQUOTE;
	v->a[71227] = actions(2641);
	v->a[71228] = 2;
	v->a[71229] = sym_raw_string;
	v->a[71230] = sym_word;
	v->a[71231] = state(1232);
	v->a[71232] = 2;
	v->a[71233] = sym_concatenation;
	v->a[71234] = aux_sym_for_statement_repeat1;
	v->a[71235] = actions(2653);
	v->a[71236] = 4;
	v->a[71237] = anon_sym_SEMI_SEMI;
	v->a[71238] = aux_sym_heredoc_redirect_token1;
	v->a[71239] = anon_sym_AMP;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = anon_sym_SEMI;
	v->a[71241] = state(1503);
	v->a[71242] = 6;
	v->a[71243] = sym_arithmetic_expansion;
	v->a[71244] = sym_string;
	v->a[71245] = sym_number;
	v->a[71246] = sym_simple_expansion;
	v->a[71247] = sym_expansion;
	v->a[71248] = sym_command_substitution;
	v->a[71249] = 9;
	v->a[71250] = actions(3);
	v->a[71251] = 1;
	v->a[71252] = sym_comment;
	v->a[71253] = actions(2460);
	v->a[71254] = 1;
	v->a[71255] = sym_file_descriptor;
	v->a[71256] = actions(2476);
	v->a[71257] = 1;
	v->a[71258] = aux_sym_heredoc_redirect_token1;
	v->a[71259] = actions(1062);
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = 2;
	v->a[71261] = anon_sym_LT_LT;
	v->a[71262] = anon_sym_LT_LT_DASH;
	v->a[71263] = actions(1093);
	v->a[71264] = 2;
	v->a[71265] = anon_sym_AMP_AMP;
	v->a[71266] = anon_sym_PIPE_PIPE;
	v->a[71267] = actions(2456);
	v->a[71268] = 2;
	v->a[71269] = anon_sym_LT_AMP_DASH;
	v->a[71270] = anon_sym_GT_AMP_DASH;
	v->a[71271] = actions(1171);
	v->a[71272] = 3;
	v->a[71273] = anon_sym_SEMI_SEMI;
	v->a[71274] = anon_sym_AMP;
	v->a[71275] = anon_sym_SEMI;
	v->a[71276] = state(1160);
	v->a[71277] = 3;
	v->a[71278] = sym_file_redirect;
	v->a[71279] = sym_heredoc_redirect;
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = aux_sym_redirected_statement_repeat1;
	v->a[71281] = actions(2454);
	v->a[71282] = 8;
	v->a[71283] = anon_sym_LT;
	v->a[71284] = anon_sym_GT;
	v->a[71285] = anon_sym_GT_GT;
	v->a[71286] = anon_sym_AMP_GT;
	v->a[71287] = anon_sym_AMP_GT_GT;
	v->a[71288] = anon_sym_LT_AMP;
	v->a[71289] = anon_sym_GT_AMP;
	v->a[71290] = anon_sym_GT_PIPE;
	v->a[71291] = 10;
	v->a[71292] = actions(3);
	v->a[71293] = 1;
	v->a[71294] = sym_comment;
	v->a[71295] = actions(1033);
	v->a[71296] = 1;
	v->a[71297] = anon_sym_SEMI_SEMI;
	v->a[71298] = actions(2365);
	v->a[71299] = 1;
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
