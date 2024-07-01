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
	v->a[71200] = 2;
	v->a[71201] = sym_file_descriptor;
	v->a[71202] = aux_sym_heredoc_redirect_token1;
	v->a[71203] = actions(2095);
	v->a[71204] = 16;
	v->a[71205] = anon_sym_RPAREN;
	v->a[71206] = anon_sym_SEMI_SEMI;
	v->a[71207] = anon_sym_AMP_AMP;
	v->a[71208] = anon_sym_PIPE_PIPE;
	v->a[71209] = anon_sym_LT;
	v->a[71210] = anon_sym_GT;
	v->a[71211] = anon_sym_GT_GT;
	v->a[71212] = anon_sym_LT_AMP;
	v->a[71213] = anon_sym_GT_AMP;
	v->a[71214] = anon_sym_GT_PIPE;
	v->a[71215] = anon_sym_LT_AMP_DASH;
	v->a[71216] = anon_sym_GT_AMP_DASH;
	v->a[71217] = anon_sym_LT_LT;
	v->a[71218] = anon_sym_LT_LT_DASH;
	v->a[71219] = anon_sym_AMP;
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = anon_sym_SEMI;
	v->a[71221] = 5;
	v->a[71222] = actions(3);
	v->a[71223] = 1;
	v->a[71224] = sym_comment;
	v->a[71225] = actions(2464);
	v->a[71226] = 1;
	v->a[71227] = anon_sym_PIPE;
	v->a[71228] = state(1331);
	v->a[71229] = 1;
	v->a[71230] = aux_sym_pipeline_repeat1;
	v->a[71231] = actions(2462);
	v->a[71232] = 3;
	v->a[71233] = sym_file_descriptor;
	v->a[71234] = ts_builtin_sym_end;
	v->a[71235] = aux_sym_heredoc_redirect_token1;
	v->a[71236] = actions(2466);
	v->a[71237] = 15;
	v->a[71238] = anon_sym_SEMI_SEMI;
	v->a[71239] = anon_sym_AMP_AMP;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = anon_sym_PIPE_PIPE;
	v->a[71241] = anon_sym_LT;
	v->a[71242] = anon_sym_GT;
	v->a[71243] = anon_sym_GT_GT;
	v->a[71244] = anon_sym_LT_AMP;
	v->a[71245] = anon_sym_GT_AMP;
	v->a[71246] = anon_sym_GT_PIPE;
	v->a[71247] = anon_sym_LT_AMP_DASH;
	v->a[71248] = anon_sym_GT_AMP_DASH;
	v->a[71249] = anon_sym_LT_LT;
	v->a[71250] = anon_sym_LT_LT_DASH;
	v->a[71251] = anon_sym_AMP;
	v->a[71252] = anon_sym_SEMI;
	v->a[71253] = 11;
	v->a[71254] = actions(3);
	v->a[71255] = 1;
	v->a[71256] = sym_comment;
	v->a[71257] = actions(2471);
	v->a[71258] = 1;
	v->a[71259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = actions(2474);
	v->a[71261] = 1;
	v->a[71262] = anon_sym_DOLLAR;
	v->a[71263] = actions(2477);
	v->a[71264] = 1;
	v->a[71265] = anon_sym_DQUOTE;
	v->a[71266] = actions(2480);
	v->a[71267] = 1;
	v->a[71268] = anon_sym_DOLLAR_LBRACE;
	v->a[71269] = actions(2483);
	v->a[71270] = 1;
	v->a[71271] = anon_sym_DOLLAR_LPAREN;
	v->a[71272] = actions(2486);
	v->a[71273] = 1;
	v->a[71274] = anon_sym_BQUOTE;
	v->a[71275] = state(1327);
	v->a[71276] = 2;
	v->a[71277] = sym_concatenation;
	v->a[71278] = aux_sym_for_statement_repeat1;
	v->a[71279] = actions(2468);
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = 3;
	v->a[71281] = sym_raw_string;
	v->a[71282] = sym_number;
	v->a[71283] = sym_word;
	v->a[71284] = actions(582);
	v->a[71285] = 4;
	v->a[71286] = anon_sym_SEMI_SEMI;
	v->a[71287] = aux_sym_heredoc_redirect_token1;
	v->a[71288] = anon_sym_AMP;
	v->a[71289] = anon_sym_SEMI;
	v->a[71290] = state(1543);
	v->a[71291] = 5;
	v->a[71292] = sym_arithmetic_expansion;
	v->a[71293] = sym_string;
	v->a[71294] = sym_simple_expansion;
	v->a[71295] = sym_expansion;
	v->a[71296] = sym_command_substitution;
	v->a[71297] = 5;
	v->a[71298] = actions(3);
	v->a[71299] = 1;
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
