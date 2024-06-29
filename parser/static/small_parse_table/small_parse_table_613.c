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
	v->a[61300] = anon_sym_AMP_GT_GT;
	v->a[61301] = anon_sym_LT_AMP;
	v->a[61302] = anon_sym_GT_AMP;
	v->a[61303] = anon_sym_GT_PIPE;
	v->a[61304] = anon_sym_LT_AMP_DASH;
	v->a[61305] = anon_sym_GT_AMP_DASH;
	v->a[61306] = aux_sym_heredoc_redirect_token1;
	v->a[61307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61308] = aux_sym_concatenation_token1;
	v->a[61309] = anon_sym_DOLLAR;
	v->a[61310] = anon_sym_DQUOTE;
	v->a[61311] = sym_raw_string;
	v->a[61312] = sym_number;
	v->a[61313] = anon_sym_DOLLAR_LBRACE;
	v->a[61314] = anon_sym_DOLLAR_LPAREN;
	v->a[61315] = anon_sym_BQUOTE;
	v->a[61316] = sym_word;
	v->a[61317] = 3;
	v->a[61318] = actions(3);
	v->a[61319] = 1;
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = sym_comment;
	v->a[61321] = actions(988);
	v->a[61322] = 2;
	v->a[61323] = sym_file_descriptor;
	v->a[61324] = sym__concat;
	v->a[61325] = actions(983);
	v->a[61326] = 23;
	v->a[61327] = anon_sym_AMP_AMP;
	v->a[61328] = anon_sym_PIPE_PIPE;
	v->a[61329] = anon_sym_LT;
	v->a[61330] = anon_sym_GT;
	v->a[61331] = anon_sym_GT_GT;
	v->a[61332] = anon_sym_AMP_GT;
	v->a[61333] = anon_sym_AMP_GT_GT;
	v->a[61334] = anon_sym_LT_AMP;
	v->a[61335] = anon_sym_GT_AMP;
	v->a[61336] = anon_sym_GT_PIPE;
	v->a[61337] = anon_sym_LT_AMP_DASH;
	v->a[61338] = anon_sym_GT_AMP_DASH;
	v->a[61339] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61341] = aux_sym_concatenation_token1;
	v->a[61342] = anon_sym_DOLLAR;
	v->a[61343] = anon_sym_DQUOTE;
	v->a[61344] = sym_raw_string;
	v->a[61345] = sym_number;
	v->a[61346] = anon_sym_DOLLAR_LBRACE;
	v->a[61347] = anon_sym_DOLLAR_LPAREN;
	v->a[61348] = anon_sym_BQUOTE;
	v->a[61349] = sym_word;
	v->a[61350] = 12;
	v->a[61351] = actions(3);
	v->a[61352] = 1;
	v->a[61353] = sym_comment;
	v->a[61354] = actions(764);
	v->a[61355] = 1;
	v->a[61356] = anon_sym_BQUOTE;
	v->a[61357] = actions(766);
	v->a[61358] = 1;
	v->a[61359] = anon_sym_PIPE;
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = actions(2031);
	v->a[61361] = 1;
	v->a[61362] = aux_sym_heredoc_redirect_token1;
	v->a[61363] = actions(2033);
	v->a[61364] = 1;
	v->a[61365] = sym_file_descriptor;
	v->a[61366] = state(832);
	v->a[61367] = 1;
	v->a[61368] = sym_terminator;
	v->a[61369] = actions(804);
	v->a[61370] = 2;
	v->a[61371] = anon_sym_LT_LT;
	v->a[61372] = anon_sym_LT_LT_DASH;
	v->a[61373] = actions(842);
	v->a[61374] = 2;
	v->a[61375] = anon_sym_AMP_AMP;
	v->a[61376] = anon_sym_PIPE_PIPE;
	v->a[61377] = actions(2029);
	v->a[61378] = 2;
	v->a[61379] = anon_sym_LT_AMP_DASH;
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = anon_sym_GT_AMP_DASH;
	v->a[61381] = actions(800);
	v->a[61382] = 3;
	v->a[61383] = anon_sym_SEMI_SEMI;
	v->a[61384] = anon_sym_AMP;
	v->a[61385] = anon_sym_SEMI;
	v->a[61386] = state(1157);
	v->a[61387] = 3;
	v->a[61388] = sym_file_redirect;
	v->a[61389] = sym_heredoc_redirect;
	v->a[61390] = aux_sym_redirected_statement_repeat1;
	v->a[61391] = actions(2027);
	v->a[61392] = 8;
	v->a[61393] = anon_sym_LT;
	v->a[61394] = anon_sym_GT;
	v->a[61395] = anon_sym_GT_GT;
	v->a[61396] = anon_sym_AMP_GT;
	v->a[61397] = anon_sym_AMP_GT_GT;
	v->a[61398] = anon_sym_LT_AMP;
	v->a[61399] = anon_sym_GT_AMP;
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
