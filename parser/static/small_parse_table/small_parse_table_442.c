/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_442.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2210(t_small_parse_table_array *v)
{
	v->a[44200] = 1;
	v->a[44201] = anon_sym_LT_LT;
	v->a[44202] = actions(1938);
	v->a[44203] = 2;
	v->a[44204] = ts_builtin_sym_end;
	v->a[44205] = aux_sym_heredoc_redirect_token1;
	v->a[44206] = actions(1872);
	v->a[44207] = 3;
	v->a[44208] = anon_sym_LT;
	v->a[44209] = anon_sym_GT;
	v->a[44210] = anon_sym_GT_GT;
	v->a[44211] = state(961);
	v->a[44212] = 3;
	v->a[44213] = sym_file_redirect;
	v->a[44214] = sym_heredoc_redirect;
	v->a[44215] = aux_sym_redirected_statement_repeat1;
	v->a[44216] = actions(1936);
	v->a[44217] = 5;
	v->a[44218] = anon_sym_PIPE;
	v->a[44219] = anon_sym_SEMI_SEMI;
	small_parse_table_2211(v);
}

void	small_parse_table_2211(t_small_parse_table_array *v)
{
	v->a[44220] = anon_sym_AMP_AMP;
	v->a[44221] = anon_sym_PIPE_PIPE;
	v->a[44222] = anon_sym_SEMI;
	v->a[44223] = 3;
	v->a[44224] = actions(3);
	v->a[44225] = 1;
	v->a[44226] = sym_comment;
	v->a[44227] = actions(1108);
	v->a[44228] = 3;
	v->a[44229] = sym__concat;
	v->a[44230] = sym_variable_name;
	v->a[44231] = aux_sym_heredoc_redirect_token1;
	v->a[44232] = actions(1106);
	v->a[44233] = 11;
	v->a[44234] = anon_sym_esac;
	v->a[44235] = anon_sym_PIPE;
	v->a[44236] = anon_sym_SEMI_SEMI;
	v->a[44237] = anon_sym_AMP_AMP;
	v->a[44238] = anon_sym_PIPE_PIPE;
	v->a[44239] = anon_sym_LT;
	small_parse_table_2212(v);
}

void	small_parse_table_2212(t_small_parse_table_array *v)
{
	v->a[44240] = anon_sym_GT;
	v->a[44241] = anon_sym_GT_GT;
	v->a[44242] = anon_sym_LT_LT;
	v->a[44243] = aux_sym_concatenation_token1;
	v->a[44244] = anon_sym_SEMI;
	v->a[44245] = 5;
	v->a[44246] = actions(3);
	v->a[44247] = 1;
	v->a[44248] = sym_comment;
	v->a[44249] = actions(1956);
	v->a[44250] = 1;
	v->a[44251] = sym_variable_name;
	v->a[44252] = actions(1952);
	v->a[44253] = 2;
	v->a[44254] = ts_builtin_sym_end;
	v->a[44255] = aux_sym_heredoc_redirect_token1;
	v->a[44256] = state(965);
	v->a[44257] = 2;
	v->a[44258] = sym_variable_assignment;
	v->a[44259] = aux_sym__variable_assignments_repeat1;
	small_parse_table_2213(v);
}

void	small_parse_table_2213(t_small_parse_table_array *v)
{
	v->a[44260] = actions(1954);
	v->a[44261] = 9;
	v->a[44262] = anon_sym_PIPE;
	v->a[44263] = anon_sym_SEMI_SEMI;
	v->a[44264] = anon_sym_AMP_AMP;
	v->a[44265] = anon_sym_PIPE_PIPE;
	v->a[44266] = anon_sym_LT;
	v->a[44267] = anon_sym_GT;
	v->a[44268] = anon_sym_GT_GT;
	v->a[44269] = anon_sym_LT_LT;
	v->a[44270] = anon_sym_SEMI;
	v->a[44271] = 6;
	v->a[44272] = actions(3);
	v->a[44273] = 1;
	v->a[44274] = sym_comment;
	v->a[44275] = actions(597);
	v->a[44276] = 1;
	v->a[44277] = anon_sym_LT_LT;
	v->a[44278] = actions(1938);
	v->a[44279] = 1;
	small_parse_table_2214(v);
}

void	small_parse_table_2214(t_small_parse_table_array *v)
{
	v->a[44280] = aux_sym_heredoc_redirect_token1;
	v->a[44281] = actions(1880);
	v->a[44282] = 3;
	v->a[44283] = anon_sym_LT;
	v->a[44284] = anon_sym_GT;
	v->a[44285] = anon_sym_GT_GT;
	v->a[44286] = state(931);
	v->a[44287] = 3;
	v->a[44288] = sym_file_redirect;
	v->a[44289] = sym_heredoc_redirect;
	v->a[44290] = aux_sym_redirected_statement_repeat1;
	v->a[44291] = actions(1936);
	v->a[44292] = 6;
	v->a[44293] = anon_sym_PIPE;
	v->a[44294] = anon_sym_SEMI_SEMI;
	v->a[44295] = anon_sym_AMP_AMP;
	v->a[44296] = anon_sym_PIPE_PIPE;
	v->a[44297] = anon_sym_BQUOTE;
	v->a[44298] = anon_sym_SEMI;
	v->a[44299] = 3;
	small_parse_table_2215(v);
}

/* EOF small_parse_table_442.c */
