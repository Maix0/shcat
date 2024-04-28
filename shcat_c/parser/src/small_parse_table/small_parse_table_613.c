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
	v->a[61300] = aux_sym_number_token2;
	v->a[61301] = anon_sym_DOLLAR_LBRACE;
	v->a[61302] = anon_sym_DOLLAR_LPAREN;
	v->a[61303] = anon_sym_BQUOTE;
	v->a[61304] = anon_sym_DOLLAR_BQUOTE;
	v->a[61305] = anon_sym_LT_LPAREN;
	v->a[61306] = anon_sym_GT_LPAREN;
	v->a[61307] = sym_word;
	v->a[61308] = 3;
	v->a[61309] = actions(3);
	v->a[61310] = 1;
	v->a[61311] = sym_comment;
	v->a[61312] = actions(1310);
	v->a[61313] = 6;
	v->a[61314] = sym_file_descriptor;
	v->a[61315] = sym__concat;
	v->a[61316] = sym_variable_name;
	v->a[61317] = sym_test_operator;
	v->a[61318] = sym__brace_start;
	v->a[61319] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3066(v);
}

void	small_parse_table_3066(t_small_parse_table_array *v)
{
	v->a[61320] = actions(1308);
	v->a[61321] = 40;
	v->a[61322] = anon_sym_LPAREN_LPAREN;
	v->a[61323] = anon_sym_SEMI;
	v->a[61324] = anon_sym_PIPE_PIPE;
	v->a[61325] = anon_sym_AMP_AMP;
	v->a[61326] = anon_sym_PIPE;
	v->a[61327] = anon_sym_AMP;
	v->a[61328] = anon_sym_LT;
	v->a[61329] = anon_sym_GT;
	v->a[61330] = anon_sym_LT_LT;
	v->a[61331] = anon_sym_GT_GT;
	v->a[61332] = anon_sym_SEMI_SEMI;
	v->a[61333] = anon_sym_SEMI_AMP;
	v->a[61334] = anon_sym_SEMI_SEMI_AMP;
	v->a[61335] = anon_sym_PIPE_AMP;
	v->a[61336] = anon_sym_AMP_GT;
	v->a[61337] = anon_sym_AMP_GT_GT;
	v->a[61338] = anon_sym_LT_AMP;
	v->a[61339] = anon_sym_GT_AMP;
	small_parse_table_3067(v);
}

void	small_parse_table_3067(t_small_parse_table_array *v)
{
	v->a[61340] = anon_sym_GT_PIPE;
	v->a[61341] = anon_sym_LT_AMP_DASH;
	v->a[61342] = anon_sym_GT_AMP_DASH;
	v->a[61343] = anon_sym_LT_LT_DASH;
	v->a[61344] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61345] = anon_sym_DOLLAR_LBRACK;
	v->a[61346] = aux_sym_concatenation_token1;
	v->a[61347] = anon_sym_DOLLAR;
	v->a[61348] = sym__special_character;
	v->a[61349] = anon_sym_DQUOTE;
	v->a[61350] = sym_raw_string;
	v->a[61351] = sym_ansi_c_string;
	v->a[61352] = aux_sym_number_token1;
	v->a[61353] = aux_sym_number_token2;
	v->a[61354] = anon_sym_DOLLAR_LBRACE;
	v->a[61355] = anon_sym_DOLLAR_LPAREN;
	v->a[61356] = anon_sym_BQUOTE;
	v->a[61357] = anon_sym_DOLLAR_BQUOTE;
	v->a[61358] = anon_sym_LT_LPAREN;
	v->a[61359] = anon_sym_GT_LPAREN;
	small_parse_table_3068(v);
}

void	small_parse_table_3068(t_small_parse_table_array *v)
{
	v->a[61360] = aux_sym__simple_variable_name_token1;
	v->a[61361] = sym_word;
	v->a[61362] = 6;
	v->a[61363] = actions(3);
	v->a[61364] = 1;
	v->a[61365] = sym_comment;
	v->a[61366] = actions(5664);
	v->a[61367] = 1;
	v->a[61368] = aux_sym_concatenation_token1;
	v->a[61369] = actions(5666);
	v->a[61370] = 1;
	v->a[61371] = sym__concat;
	v->a[61372] = state(1383);
	v->a[61373] = 1;
	v->a[61374] = aux_sym_concatenation_repeat1;
	v->a[61375] = actions(5176);
	v->a[61376] = 5;
	v->a[61377] = sym_file_descriptor;
	v->a[61378] = sym_variable_name;
	v->a[61379] = sym_test_operator;
	small_parse_table_3069(v);
}

void	small_parse_table_3069(t_small_parse_table_array *v)
{
	v->a[61380] = sym__brace_start;
	v->a[61381] = aux_sym_heredoc_redirect_token1;
	v->a[61382] = actions(5174);
	v->a[61383] = 38;
	v->a[61384] = anon_sym_LPAREN_LPAREN;
	v->a[61385] = anon_sym_SEMI;
	v->a[61386] = anon_sym_PIPE_PIPE;
	v->a[61387] = anon_sym_AMP_AMP;
	v->a[61388] = anon_sym_PIPE;
	v->a[61389] = anon_sym_AMP;
	v->a[61390] = anon_sym_LT;
	v->a[61391] = anon_sym_GT;
	v->a[61392] = anon_sym_LT_LT;
	v->a[61393] = anon_sym_GT_GT;
	v->a[61394] = anon_sym_RPAREN;
	v->a[61395] = anon_sym_SEMI_SEMI;
	v->a[61396] = anon_sym_PIPE_AMP;
	v->a[61397] = anon_sym_AMP_GT;
	v->a[61398] = anon_sym_AMP_GT_GT;
	v->a[61399] = anon_sym_LT_AMP;
	small_parse_table_3070(v);
}

/* EOF small_parse_table_613.c */
