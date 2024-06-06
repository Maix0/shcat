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
	v->a[61300] = 1;
	v->a[61301] = aux_sym__literal_repeat1;
	v->a[61302] = actions(3519);
	v->a[61303] = 5;
	v->a[61304] = sym_file_descriptor;
	v->a[61305] = sym_test_operator;
	v->a[61306] = sym__brace_start;
	v->a[61307] = ts_builtin_sym_end;
	v->a[61308] = aux_sym_heredoc_redirect_token1;
	v->a[61309] = actions(3517);
	v->a[61310] = 30;
	v->a[61311] = anon_sym_PIPE;
	v->a[61312] = anon_sym_SEMI_SEMI;
	v->a[61313] = anon_sym_PIPE_AMP;
	v->a[61314] = anon_sym_AMP_AMP;
	v->a[61315] = anon_sym_PIPE_PIPE;
	v->a[61316] = anon_sym_LT;
	v->a[61317] = anon_sym_GT;
	v->a[61318] = anon_sym_GT_GT;
	v->a[61319] = anon_sym_AMP_GT;
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = anon_sym_AMP_GT_GT;
	v->a[61321] = anon_sym_LT_AMP;
	v->a[61322] = anon_sym_GT_AMP;
	v->a[61323] = anon_sym_GT_PIPE;
	v->a[61324] = anon_sym_LT_AMP_DASH;
	v->a[61325] = anon_sym_GT_AMP_DASH;
	v->a[61326] = anon_sym_LT_LT;
	v->a[61327] = anon_sym_LT_LT_DASH;
	v->a[61328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61329] = anon_sym_AMP;
	v->a[61330] = anon_sym_DOLLAR;
	v->a[61331] = anon_sym_DQUOTE;
	v->a[61332] = sym_raw_string;
	v->a[61333] = aux_sym_number_token1;
	v->a[61334] = aux_sym_number_token2;
	v->a[61335] = anon_sym_DOLLAR_LBRACE;
	v->a[61336] = anon_sym_DOLLAR_LPAREN;
	v->a[61337] = anon_sym_BQUOTE;
	v->a[61338] = anon_sym_DOLLAR_BQUOTE;
	v->a[61339] = sym_word;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = anon_sym_SEMI;
	v->a[61341] = 6;
	v->a[61342] = actions(3);
	v->a[61343] = 1;
	v->a[61344] = sym_comment;
	v->a[61345] = actions(3358);
	v->a[61346] = 1;
	v->a[61347] = aux_sym_concatenation_token1;
	v->a[61348] = actions(4012);
	v->a[61349] = 1;
	v->a[61350] = sym__concat;
	v->a[61351] = state(666);
	v->a[61352] = 1;
	v->a[61353] = aux_sym_concatenation_repeat1;
	v->a[61354] = actions(2696);
	v->a[61355] = 5;
	v->a[61356] = sym_file_descriptor;
	v->a[61357] = sym_test_operator;
	v->a[61358] = sym__bare_dollar;
	v->a[61359] = sym__brace_start;
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = aux_sym_heredoc_redirect_token1;
	v->a[61361] = actions(2694);
	v->a[61362] = 29;
	v->a[61363] = anon_sym_LPAREN;
	v->a[61364] = anon_sym_PIPE;
	v->a[61365] = anon_sym_PIPE_AMP;
	v->a[61366] = anon_sym_AMP_AMP;
	v->a[61367] = anon_sym_PIPE_PIPE;
	v->a[61368] = anon_sym_LT;
	v->a[61369] = anon_sym_GT;
	v->a[61370] = anon_sym_GT_GT;
	v->a[61371] = anon_sym_AMP_GT;
	v->a[61372] = anon_sym_AMP_GT_GT;
	v->a[61373] = anon_sym_LT_AMP;
	v->a[61374] = anon_sym_GT_AMP;
	v->a[61375] = anon_sym_GT_PIPE;
	v->a[61376] = anon_sym_LT_AMP_DASH;
	v->a[61377] = anon_sym_GT_AMP_DASH;
	v->a[61378] = anon_sym_LT_LT;
	v->a[61379] = anon_sym_LT_LT_DASH;
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61381] = anon_sym_DOLLAR;
	v->a[61382] = sym__special_character;
	v->a[61383] = anon_sym_DQUOTE;
	v->a[61384] = sym_raw_string;
	v->a[61385] = aux_sym_number_token1;
	v->a[61386] = aux_sym_number_token2;
	v->a[61387] = anon_sym_DOLLAR_LBRACE;
	v->a[61388] = anon_sym_DOLLAR_LPAREN;
	v->a[61389] = anon_sym_BQUOTE;
	v->a[61390] = anon_sym_DOLLAR_BQUOTE;
	v->a[61391] = sym_word;
	v->a[61392] = 8;
	v->a[61393] = actions(3);
	v->a[61394] = 1;
	v->a[61395] = sym_comment;
	v->a[61396] = actions(3632);
	v->a[61397] = 1;
	v->a[61398] = aux_sym_heredoc_redirect_token1;
	v->a[61399] = actions(3634);
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
