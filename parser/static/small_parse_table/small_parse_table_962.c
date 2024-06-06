/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_962.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4810(t_small_parse_table_array *v)
{
	v->a[96200] = aux_sym_variable_assignments_repeat1;
	v->a[96201] = actions(5143);
	v->a[96202] = 21;
	v->a[96203] = anon_sym_PIPE;
	v->a[96204] = anon_sym_SEMI_SEMI;
	v->a[96205] = anon_sym_SEMI_AMP;
	v->a[96206] = anon_sym_SEMI_SEMI_AMP;
	v->a[96207] = anon_sym_PIPE_AMP;
	v->a[96208] = anon_sym_AMP_AMP;
	v->a[96209] = anon_sym_PIPE_PIPE;
	v->a[96210] = anon_sym_LT;
	v->a[96211] = anon_sym_GT;
	v->a[96212] = anon_sym_GT_GT;
	v->a[96213] = anon_sym_AMP_GT;
	v->a[96214] = anon_sym_AMP_GT_GT;
	v->a[96215] = anon_sym_LT_AMP;
	v->a[96216] = anon_sym_GT_AMP;
	v->a[96217] = anon_sym_GT_PIPE;
	v->a[96218] = anon_sym_LT_AMP_DASH;
	v->a[96219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4811(v);
}

void	small_parse_table_4811(t_small_parse_table_array *v)
{
	v->a[96220] = anon_sym_LT_LT;
	v->a[96221] = anon_sym_LT_LT_DASH;
	v->a[96222] = anon_sym_AMP;
	v->a[96223] = anon_sym_SEMI;
	v->a[96224] = 7;
	v->a[96225] = actions(3);
	v->a[96226] = 1;
	v->a[96227] = sym_comment;
	v->a[96228] = actions(5281);
	v->a[96229] = 1;
	v->a[96230] = aux_sym_heredoc_redirect_token1;
	v->a[96231] = actions(5283);
	v->a[96232] = 1;
	v->a[96233] = sym_file_descriptor;
	v->a[96234] = actions(5278);
	v->a[96235] = 2;
	v->a[96236] = anon_sym_LT_AMP_DASH;
	v->a[96237] = anon_sym_GT_AMP_DASH;
	v->a[96238] = state(1990);
	v->a[96239] = 2;
	small_parse_table_4812(v);
}

void	small_parse_table_4812(t_small_parse_table_array *v)
{
	v->a[96240] = sym_file_redirect;
	v->a[96241] = aux_sym_redirected_statement_repeat2;
	v->a[96242] = actions(5275);
	v->a[96243] = 8;
	v->a[96244] = anon_sym_LT;
	v->a[96245] = anon_sym_GT;
	v->a[96246] = anon_sym_GT_GT;
	v->a[96247] = anon_sym_AMP_GT;
	v->a[96248] = anon_sym_AMP_GT_GT;
	v->a[96249] = anon_sym_LT_AMP;
	v->a[96250] = anon_sym_GT_AMP;
	v->a[96251] = anon_sym_GT_PIPE;
	v->a[96252] = actions(5273);
	v->a[96253] = 12;
	v->a[96254] = anon_sym_esac;
	v->a[96255] = anon_sym_PIPE;
	v->a[96256] = anon_sym_SEMI_SEMI;
	v->a[96257] = anon_sym_SEMI_AMP;
	v->a[96258] = anon_sym_SEMI_SEMI_AMP;
	v->a[96259] = anon_sym_PIPE_AMP;
	small_parse_table_4813(v);
}

void	small_parse_table_4813(t_small_parse_table_array *v)
{
	v->a[96260] = anon_sym_AMP_AMP;
	v->a[96261] = anon_sym_PIPE_PIPE;
	v->a[96262] = anon_sym_LT_LT;
	v->a[96263] = anon_sym_LT_LT_DASH;
	v->a[96264] = anon_sym_AMP;
	v->a[96265] = anon_sym_SEMI;
	v->a[96266] = 3;
	v->a[96267] = actions(3);
	v->a[96268] = 1;
	v->a[96269] = sym_comment;
	v->a[96270] = actions(3066);
	v->a[96271] = 3;
	v->a[96272] = sym_file_descriptor;
	v->a[96273] = sym__concat;
	v->a[96274] = aux_sym_heredoc_redirect_token1;
	v->a[96275] = actions(3064);
	v->a[96276] = 23;
	v->a[96277] = anon_sym_esac;
	v->a[96278] = anon_sym_PIPE;
	v->a[96279] = anon_sym_SEMI_SEMI;
	small_parse_table_4814(v);
}

void	small_parse_table_4814(t_small_parse_table_array *v)
{
	v->a[96280] = anon_sym_SEMI_AMP;
	v->a[96281] = anon_sym_SEMI_SEMI_AMP;
	v->a[96282] = anon_sym_PIPE_AMP;
	v->a[96283] = anon_sym_AMP_AMP;
	v->a[96284] = anon_sym_PIPE_PIPE;
	v->a[96285] = anon_sym_LT;
	v->a[96286] = anon_sym_GT;
	v->a[96287] = anon_sym_GT_GT;
	v->a[96288] = anon_sym_AMP_GT;
	v->a[96289] = anon_sym_AMP_GT_GT;
	v->a[96290] = anon_sym_LT_AMP;
	v->a[96291] = anon_sym_GT_AMP;
	v->a[96292] = anon_sym_GT_PIPE;
	v->a[96293] = anon_sym_LT_AMP_DASH;
	v->a[96294] = anon_sym_GT_AMP_DASH;
	v->a[96295] = anon_sym_LT_LT;
	v->a[96296] = anon_sym_LT_LT_DASH;
	v->a[96297] = anon_sym_AMP;
	v->a[96298] = aux_sym_concatenation_token1;
	v->a[96299] = anon_sym_SEMI;
	small_parse_table_4815(v);
}

/* EOF small_parse_table_962.c */
