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
	v->a[71200] = state(1353);
	v->a[71201] = 3;
	v->a[71202] = sym_file_redirect;
	v->a[71203] = sym_heredoc_redirect;
	v->a[71204] = aux_sym_redirected_statement_repeat1;
	v->a[71205] = actions(2865);
	v->a[71206] = 5;
	v->a[71207] = anon_sym_GT_GT;
	v->a[71208] = anon_sym_LT_AMP;
	v->a[71209] = anon_sym_GT_AMP;
	v->a[71210] = anon_sym_GT_PIPE;
	v->a[71211] = anon_sym_LT_GT;
	v->a[71212] = 8;
	v->a[71213] = actions(501);
	v->a[71214] = 1;
	v->a[71215] = sym_comment;
	v->a[71216] = actions(2745);
	v->a[71217] = 1;
	v->a[71218] = anon_sym_LT_LT;
	v->a[71219] = actions(2747);
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = 1;
	v->a[71221] = anon_sym_LT_LT_DASH;
	v->a[71222] = actions(2749);
	v->a[71223] = 1;
	v->a[71224] = sym_file_descriptor;
	v->a[71225] = actions(2741);
	v->a[71226] = 2;
	v->a[71227] = anon_sym_LT;
	v->a[71228] = anon_sym_GT;
	v->a[71229] = actions(2867);
	v->a[71230] = 2;
	v->a[71231] = anon_sym_AMP_AMP;
	v->a[71232] = anon_sym_PIPE_PIPE;
	v->a[71233] = state(1371);
	v->a[71234] = 3;
	v->a[71235] = sym_file_redirect;
	v->a[71236] = sym_heredoc_redirect;
	v->a[71237] = aux_sym_redirected_statement_repeat1;
	v->a[71238] = actions(2743);
	v->a[71239] = 5;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = anon_sym_GT_GT;
	v->a[71241] = anon_sym_LT_AMP;
	v->a[71242] = anon_sym_GT_AMP;
	v->a[71243] = anon_sym_GT_PIPE;
	v->a[71244] = anon_sym_LT_GT;
	v->a[71245] = 8;
	v->a[71246] = actions(501);
	v->a[71247] = 1;
	v->a[71248] = sym_comment;
	v->a[71249] = actions(790);
	v->a[71250] = 1;
	v->a[71251] = anon_sym_LT_LT;
	v->a[71252] = actions(1933);
	v->a[71253] = 1;
	v->a[71254] = sym_file_descriptor;
	v->a[71255] = actions(2831);
	v->a[71256] = 1;
	v->a[71257] = anon_sym_LT_LT_DASH;
	v->a[71258] = actions(1931);
	v->a[71259] = 2;
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = anon_sym_LT;
	v->a[71261] = anon_sym_GT;
	v->a[71262] = actions(2869);
	v->a[71263] = 2;
	v->a[71264] = anon_sym_AMP_AMP;
	v->a[71265] = anon_sym_PIPE_PIPE;
	v->a[71266] = state(1034);
	v->a[71267] = 3;
	v->a[71268] = sym_file_redirect;
	v->a[71269] = sym_heredoc_redirect;
	v->a[71270] = aux_sym_redirected_statement_repeat1;
	v->a[71271] = actions(2871);
	v->a[71272] = 5;
	v->a[71273] = anon_sym_GT_GT;
	v->a[71274] = anon_sym_LT_AMP;
	v->a[71275] = anon_sym_GT_AMP;
	v->a[71276] = anon_sym_GT_PIPE;
	v->a[71277] = anon_sym_LT_GT;
	v->a[71278] = 5;
	v->a[71279] = actions(3);
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = 1;
	v->a[71281] = sym_comment;
	v->a[71282] = actions(2873);
	v->a[71283] = 1;
	v->a[71284] = anon_sym_PIPE;
	v->a[71285] = state(1439);
	v->a[71286] = 1;
	v->a[71287] = aux_sym_pipeline_repeat1;
	v->a[71288] = actions(2306);
	v->a[71289] = 2;
	v->a[71290] = sym_file_descriptor;
	v->a[71291] = aux_sym_heredoc_redirect_token1;
	v->a[71292] = actions(2310);
	v->a[71293] = 11;
	v->a[71294] = anon_sym_AMP_AMP;
	v->a[71295] = anon_sym_PIPE_PIPE;
	v->a[71296] = anon_sym_LT;
	v->a[71297] = anon_sym_GT;
	v->a[71298] = anon_sym_GT_GT;
	v->a[71299] = anon_sym_LT_AMP;
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
