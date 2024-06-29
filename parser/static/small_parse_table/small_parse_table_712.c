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
	v->a[71200] = actions(2406);
	v->a[71201] = 1;
	v->a[71202] = sym_file_descriptor;
	v->a[71203] = actions(2113);
	v->a[71204] = 2;
	v->a[71205] = anon_sym_LT_LT;
	v->a[71206] = anon_sym_LT_LT_DASH;
	v->a[71207] = actions(2403);
	v->a[71208] = 2;
	v->a[71209] = anon_sym_LT_AMP_DASH;
	v->a[71210] = anon_sym_GT_AMP_DASH;
	v->a[71211] = state(1269);
	v->a[71212] = 3;
	v->a[71213] = sym_file_redirect;
	v->a[71214] = sym_heredoc_redirect;
	v->a[71215] = aux_sym_redirected_statement_repeat1;
	v->a[71216] = actions(2068);
	v->a[71217] = 6;
	v->a[71218] = anon_sym_PIPE;
	v->a[71219] = anon_sym_SEMI_SEMI;
	small_parse_table_3561(v);
}

void	small_parse_table_3561(t_small_parse_table_array *v)
{
	v->a[71220] = anon_sym_AMP_AMP;
	v->a[71221] = anon_sym_PIPE_PIPE;
	v->a[71222] = anon_sym_AMP;
	v->a[71223] = anon_sym_SEMI;
	v->a[71224] = actions(2400);
	v->a[71225] = 8;
	v->a[71226] = anon_sym_LT;
	v->a[71227] = anon_sym_GT;
	v->a[71228] = anon_sym_GT_GT;
	v->a[71229] = anon_sym_AMP_GT;
	v->a[71230] = anon_sym_AMP_GT_GT;
	v->a[71231] = anon_sym_LT_AMP;
	v->a[71232] = anon_sym_GT_AMP;
	v->a[71233] = anon_sym_GT_PIPE;
	v->a[71234] = 5;
	v->a[71235] = actions(3);
	v->a[71236] = 1;
	v->a[71237] = sym_comment;
	v->a[71238] = actions(2409);
	v->a[71239] = 1;
	small_parse_table_3562(v);
}

void	small_parse_table_3562(t_small_parse_table_array *v)
{
	v->a[71240] = sym_variable_name;
	v->a[71241] = actions(2131);
	v->a[71242] = 2;
	v->a[71243] = sym_file_descriptor;
	v->a[71244] = aux_sym_heredoc_redirect_token1;
	v->a[71245] = state(1285);
	v->a[71246] = 2;
	v->a[71247] = sym_variable_assignment;
	v->a[71248] = aux_sym__variable_assignments_repeat1;
	v->a[71249] = actions(2133);
	v->a[71250] = 18;
	v->a[71251] = anon_sym_PIPE;
	v->a[71252] = anon_sym_SEMI_SEMI;
	v->a[71253] = anon_sym_AMP_AMP;
	v->a[71254] = anon_sym_PIPE_PIPE;
	v->a[71255] = anon_sym_LT;
	v->a[71256] = anon_sym_GT;
	v->a[71257] = anon_sym_GT_GT;
	v->a[71258] = anon_sym_AMP_GT;
	v->a[71259] = anon_sym_AMP_GT_GT;
	small_parse_table_3563(v);
}

void	small_parse_table_3563(t_small_parse_table_array *v)
{
	v->a[71260] = anon_sym_LT_AMP;
	v->a[71261] = anon_sym_GT_AMP;
	v->a[71262] = anon_sym_GT_PIPE;
	v->a[71263] = anon_sym_LT_AMP_DASH;
	v->a[71264] = anon_sym_GT_AMP_DASH;
	v->a[71265] = anon_sym_LT_LT;
	v->a[71266] = anon_sym_LT_LT_DASH;
	v->a[71267] = anon_sym_AMP;
	v->a[71268] = anon_sym_SEMI;
	v->a[71269] = 5;
	v->a[71270] = actions(3);
	v->a[71271] = 1;
	v->a[71272] = sym_comment;
	v->a[71273] = actions(774);
	v->a[71274] = 1;
	v->a[71275] = sym_file_descriptor;
	v->a[71276] = actions(806);
	v->a[71277] = 1;
	v->a[71278] = sym_variable_name;
	v->a[71279] = state(1143);
	small_parse_table_3564(v);
}

void	small_parse_table_3564(t_small_parse_table_array *v)
{
	v->a[71280] = 2;
	v->a[71281] = sym_variable_assignment;
	v->a[71282] = aux_sym__variable_assignments_repeat1;
	v->a[71283] = actions(762);
	v->a[71284] = 19;
	v->a[71285] = anon_sym_LT;
	v->a[71286] = anon_sym_GT;
	v->a[71287] = anon_sym_GT_GT;
	v->a[71288] = anon_sym_AMP_GT;
	v->a[71289] = anon_sym_AMP_GT_GT;
	v->a[71290] = anon_sym_LT_AMP;
	v->a[71291] = anon_sym_GT_AMP;
	v->a[71292] = anon_sym_GT_PIPE;
	v->a[71293] = anon_sym_LT_AMP_DASH;
	v->a[71294] = anon_sym_GT_AMP_DASH;
	v->a[71295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71296] = anon_sym_DOLLAR;
	v->a[71297] = anon_sym_DQUOTE;
	v->a[71298] = sym_raw_string;
	v->a[71299] = sym_number;
	small_parse_table_3565(v);
}

/* EOF small_parse_table_712.c */
