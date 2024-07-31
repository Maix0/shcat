/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = anon_sym_LT_AMP;
	v->a[48201] = anon_sym_GT_AMP;
	v->a[48202] = anon_sym_GT_PIPE;
	v->a[48203] = anon_sym_LT_GT;
	v->a[48204] = 10;
	v->a[48205] = actions(3);
	v->a[48206] = 1;
	v->a[48207] = sym_comment;
	v->a[48208] = actions(746);
	v->a[48209] = 1;
	v->a[48210] = anon_sym_PIPE;
	v->a[48211] = actions(842);
	v->a[48212] = 1;
	v->a[48213] = anon_sym_RPAREN;
	v->a[48214] = actions(1591);
	v->a[48215] = 1;
	v->a[48216] = aux_sym_heredoc_redirect_token1;
	v->a[48217] = state(531);
	v->a[48218] = 1;
	v->a[48219] = sym_terminator;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = actions(850);
	v->a[48221] = 2;
	v->a[48222] = anon_sym_LT_LT;
	v->a[48223] = anon_sym_LT_LT_DASH;
	v->a[48224] = actions(858);
	v->a[48225] = 2;
	v->a[48226] = anon_sym_SEMI_SEMI;
	v->a[48227] = anon_sym_SEMI;
	v->a[48228] = actions(860);
	v->a[48229] = 2;
	v->a[48230] = anon_sym_AMP_AMP;
	v->a[48231] = anon_sym_PIPE_PIPE;
	v->a[48232] = state(918);
	v->a[48233] = 3;
	v->a[48234] = sym_file_redirect;
	v->a[48235] = sym_heredoc_redirect;
	v->a[48236] = aux_sym_redirected_statement_repeat1;
	v->a[48237] = actions(1597);
	v->a[48238] = 7;
	v->a[48239] = anon_sym_LT;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = anon_sym_GT;
	v->a[48241] = anon_sym_GT_GT;
	v->a[48242] = anon_sym_LT_AMP;
	v->a[48243] = anon_sym_GT_AMP;
	v->a[48244] = anon_sym_GT_PIPE;
	v->a[48245] = anon_sym_LT_GT;
	v->a[48246] = 6;
	v->a[48247] = actions(3);
	v->a[48248] = 1;
	v->a[48249] = sym_comment;
	v->a[48250] = actions(1633);
	v->a[48251] = 1;
	v->a[48252] = aux_sym_concatenation_token1;
	v->a[48253] = actions(1674);
	v->a[48254] = 1;
	v->a[48255] = sym__concat;
	v->a[48256] = state(831);
	v->a[48257] = 1;
	v->a[48258] = aux_sym_concatenation_repeat1;
	v->a[48259] = actions(1023);
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = 2;
	v->a[48261] = sym_variable_name;
	v->a[48262] = aux_sym_heredoc_redirect_token1;
	v->a[48263] = actions(1025);
	v->a[48264] = 15;
	v->a[48265] = anon_sym_esac;
	v->a[48266] = anon_sym_PIPE;
	v->a[48267] = anon_sym_SEMI_SEMI;
	v->a[48268] = anon_sym_AMP_AMP;
	v->a[48269] = anon_sym_PIPE_PIPE;
	v->a[48270] = anon_sym_LT;
	v->a[48271] = anon_sym_GT;
	v->a[48272] = anon_sym_GT_GT;
	v->a[48273] = anon_sym_LT_AMP;
	v->a[48274] = anon_sym_GT_AMP;
	v->a[48275] = anon_sym_GT_PIPE;
	v->a[48276] = anon_sym_LT_GT;
	v->a[48277] = anon_sym_LT_LT;
	v->a[48278] = anon_sym_LT_LT_DASH;
	v->a[48279] = anon_sym_SEMI;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = 10;
	v->a[48281] = actions(3);
	v->a[48282] = 1;
	v->a[48283] = sym_comment;
	v->a[48284] = actions(744);
	v->a[48285] = 1;
	v->a[48286] = anon_sym_RPAREN;
	v->a[48287] = actions(746);
	v->a[48288] = 1;
	v->a[48289] = anon_sym_PIPE;
	v->a[48290] = actions(1591);
	v->a[48291] = 1;
	v->a[48292] = aux_sym_heredoc_redirect_token1;
	v->a[48293] = state(465);
	v->a[48294] = 1;
	v->a[48295] = sym_terminator;
	v->a[48296] = actions(850);
	v->a[48297] = 2;
	v->a[48298] = anon_sym_LT_LT;
	v->a[48299] = anon_sym_LT_LT_DASH;
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
