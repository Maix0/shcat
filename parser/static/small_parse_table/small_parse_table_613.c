/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_613.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3065(t_small_parse_table_array *v)
{
	v->a[61300] = anon_sym_BQUOTE;
	v->a[61301] = anon_sym_SEMI;
	v->a[61302] = 9;
	v->a[61303] = actions(3);
	v->a[61304] = 1;
	v->a[61305] = sym_comment;
	v->a[61306] = actions(1865);
	v->a[61307] = 1;
	v->a[61308] = aux_sym_heredoc_redirect_token1;
	v->a[61309] = actions(1889);
	v->a[61310] = 1;
	v->a[61311] = sym_file_descriptor;
	v->a[61312] = state(621);
	v->a[61313] = 1;
	v->a[61314] = sym_terminator;
	v->a[61315] = actions(744);
	v->a[61316] = 2;
	v->a[61317] = anon_sym_LT_LT;
	v->a[61318] = anon_sym_LT_LT_DASH;
	v->a[61319] = actions(955);
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = 2;
	v->a[61321] = anon_sym_AMP_AMP;
	v->a[61322] = anon_sym_PIPE_PIPE;
	v->a[61323] = actions(740);
	v->a[61324] = 3;
	v->a[61325] = anon_sym_SEMI_SEMI;
	v->a[61326] = anon_sym_AMP;
	v->a[61327] = anon_sym_SEMI;
	v->a[61328] = state(1194);
	v->a[61329] = 3;
	v->a[61330] = sym_file_redirect;
	v->a[61331] = sym_heredoc_redirect;
	v->a[61332] = aux_sym_redirected_statement_repeat1;
	v->a[61333] = actions(1887);
	v->a[61334] = 7;
	v->a[61335] = anon_sym_LT;
	v->a[61336] = anon_sym_GT;
	v->a[61337] = anon_sym_GT_GT;
	v->a[61338] = anon_sym_LT_AMP;
	v->a[61339] = anon_sym_GT_AMP;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = anon_sym_GT_PIPE;
	v->a[61341] = anon_sym_LT_GT;
	v->a[61342] = 6;
	v->a[61343] = actions(3);
	v->a[61344] = 1;
	v->a[61345] = sym_comment;
	v->a[61346] = actions(2051);
	v->a[61347] = 1;
	v->a[61348] = aux_sym_heredoc_redirect_token1;
	v->a[61349] = actions(2077);
	v->a[61350] = 1;
	v->a[61351] = sym_file_descriptor;
	v->a[61352] = state(1155);
	v->a[61353] = 2;
	v->a[61354] = sym_file_redirect;
	v->a[61355] = aux_sym_redirected_statement_repeat2;
	v->a[61356] = actions(1849);
	v->a[61357] = 7;
	v->a[61358] = anon_sym_LT;
	v->a[61359] = anon_sym_GT;
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = anon_sym_GT_GT;
	v->a[61361] = anon_sym_LT_AMP;
	v->a[61362] = anon_sym_GT_AMP;
	v->a[61363] = anon_sym_GT_PIPE;
	v->a[61364] = anon_sym_LT_GT;
	v->a[61365] = actions(2053);
	v->a[61366] = 9;
	v->a[61367] = anon_sym_esac;
	v->a[61368] = anon_sym_PIPE;
	v->a[61369] = anon_sym_SEMI_SEMI;
	v->a[61370] = anon_sym_AMP_AMP;
	v->a[61371] = anon_sym_PIPE_PIPE;
	v->a[61372] = anon_sym_LT_LT;
	v->a[61373] = anon_sym_LT_LT_DASH;
	v->a[61374] = anon_sym_AMP;
	v->a[61375] = anon_sym_SEMI;
	v->a[61376] = 3;
	v->a[61377] = actions(3);
	v->a[61378] = 1;
	v->a[61379] = sym_comment;
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = actions(2079);
	v->a[61381] = 3;
	v->a[61382] = sym_file_descriptor;
	v->a[61383] = ts_builtin_sym_end;
	v->a[61384] = aux_sym_heredoc_redirect_token1;
	v->a[61385] = actions(2081);
	v->a[61386] = 17;
	v->a[61387] = anon_sym_PIPE;
	v->a[61388] = anon_sym_RPAREN;
	v->a[61389] = anon_sym_SEMI_SEMI;
	v->a[61390] = anon_sym_AMP_AMP;
	v->a[61391] = anon_sym_PIPE_PIPE;
	v->a[61392] = anon_sym_LT;
	v->a[61393] = anon_sym_GT;
	v->a[61394] = anon_sym_GT_GT;
	v->a[61395] = anon_sym_LT_AMP;
	v->a[61396] = anon_sym_GT_AMP;
	v->a[61397] = anon_sym_GT_PIPE;
	v->a[61398] = anon_sym_LT_GT;
	v->a[61399] = anon_sym_LT_LT;
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
