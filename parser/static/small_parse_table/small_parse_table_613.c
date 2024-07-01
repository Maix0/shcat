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
	v->a[61300] = anon_sym_AMP;
	v->a[61301] = anon_sym_BQUOTE;
	v->a[61302] = anon_sym_SEMI;
	v->a[61303] = 12;
	v->a[61304] = actions(3);
	v->a[61305] = 1;
	v->a[61306] = sym_comment;
	v->a[61307] = actions(682);
	v->a[61308] = 1;
	v->a[61309] = anon_sym_PIPE;
	v->a[61310] = actions(695);
	v->a[61311] = 1;
	v->a[61312] = anon_sym_RPAREN;
	v->a[61313] = actions(2009);
	v->a[61314] = 1;
	v->a[61315] = aux_sym_heredoc_redirect_token1;
	v->a[61316] = actions(2011);
	v->a[61317] = 1;
	v->a[61318] = sym_file_descriptor;
	v->a[61319] = state(767);
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = 1;
	v->a[61321] = sym_terminator;
	v->a[61322] = actions(752);
	v->a[61323] = 2;
	v->a[61324] = anon_sym_AMP_AMP;
	v->a[61325] = anon_sym_PIPE_PIPE;
	v->a[61326] = actions(754);
	v->a[61327] = 2;
	v->a[61328] = anon_sym_LT_LT;
	v->a[61329] = anon_sym_LT_LT_DASH;
	v->a[61330] = actions(2007);
	v->a[61331] = 2;
	v->a[61332] = anon_sym_LT_AMP_DASH;
	v->a[61333] = anon_sym_GT_AMP_DASH;
	v->a[61334] = actions(750);
	v->a[61335] = 3;
	v->a[61336] = anon_sym_SEMI_SEMI;
	v->a[61337] = anon_sym_AMP;
	v->a[61338] = anon_sym_SEMI;
	v->a[61339] = state(1128);
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = 3;
	v->a[61341] = sym_file_redirect;
	v->a[61342] = sym_heredoc_redirect;
	v->a[61343] = aux_sym_redirected_statement_repeat1;
	v->a[61344] = actions(2005);
	v->a[61345] = 6;
	v->a[61346] = anon_sym_LT;
	v->a[61347] = anon_sym_GT;
	v->a[61348] = anon_sym_GT_GT;
	v->a[61349] = anon_sym_LT_AMP;
	v->a[61350] = anon_sym_GT_AMP;
	v->a[61351] = anon_sym_GT_PIPE;
	v->a[61352] = 12;
	v->a[61353] = actions(3);
	v->a[61354] = 1;
	v->a[61355] = sym_comment;
	v->a[61356] = actions(682);
	v->a[61357] = 1;
	v->a[61358] = anon_sym_PIPE;
	v->a[61359] = actions(695);
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = 1;
	v->a[61361] = anon_sym_BQUOTE;
	v->a[61362] = actions(2009);
	v->a[61363] = 1;
	v->a[61364] = aux_sym_heredoc_redirect_token1;
	v->a[61365] = actions(2041);
	v->a[61366] = 1;
	v->a[61367] = sym_file_descriptor;
	v->a[61368] = state(832);
	v->a[61369] = 1;
	v->a[61370] = sym_terminator;
	v->a[61371] = actions(754);
	v->a[61372] = 2;
	v->a[61373] = anon_sym_LT_LT;
	v->a[61374] = anon_sym_LT_LT_DASH;
	v->a[61375] = actions(963);
	v->a[61376] = 2;
	v->a[61377] = anon_sym_AMP_AMP;
	v->a[61378] = anon_sym_PIPE_PIPE;
	v->a[61379] = actions(2039);
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = 2;
	v->a[61381] = anon_sym_LT_AMP_DASH;
	v->a[61382] = anon_sym_GT_AMP_DASH;
	v->a[61383] = actions(750);
	v->a[61384] = 3;
	v->a[61385] = anon_sym_SEMI_SEMI;
	v->a[61386] = anon_sym_AMP;
	v->a[61387] = anon_sym_SEMI;
	v->a[61388] = state(1165);
	v->a[61389] = 3;
	v->a[61390] = sym_file_redirect;
	v->a[61391] = sym_heredoc_redirect;
	v->a[61392] = aux_sym_redirected_statement_repeat1;
	v->a[61393] = actions(2037);
	v->a[61394] = 6;
	v->a[61395] = anon_sym_LT;
	v->a[61396] = anon_sym_GT;
	v->a[61397] = anon_sym_GT_GT;
	v->a[61398] = anon_sym_LT_AMP;
	v->a[61399] = anon_sym_GT_AMP;
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
