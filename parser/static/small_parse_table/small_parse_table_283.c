/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_283.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1415(t_small_parse_table_array *v)
{
	v->a[28300] = anon_sym_DOLLAR_LPAREN;
	v->a[28301] = anon_sym_BQUOTE;
	v->a[28302] = sym_word;
	v->a[28303] = anon_sym_SEMI;
	v->a[28304] = 14;
	v->a[28305] = actions(3);
	v->a[28306] = 1;
	v->a[28307] = sym_comment;
	v->a[28308] = actions(477);
	v->a[28309] = 1;
	v->a[28310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28311] = actions(479);
	v->a[28312] = 1;
	v->a[28313] = anon_sym_DOLLAR;
	v->a[28314] = actions(481);
	v->a[28315] = 1;
	v->a[28316] = anon_sym_DQUOTE;
	v->a[28317] = actions(483);
	v->a[28318] = 1;
	v->a[28319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = actions(485);
	v->a[28321] = 1;
	v->a[28322] = anon_sym_DOLLAR_LPAREN;
	v->a[28323] = actions(487);
	v->a[28324] = 1;
	v->a[28325] = anon_sym_BQUOTE;
	v->a[28326] = actions(489);
	v->a[28327] = 1;
	v->a[28328] = sym__bare_dollar;
	v->a[28329] = actions(552);
	v->a[28330] = 1;
	v->a[28331] = sym_file_descriptor;
	v->a[28332] = state(390);
	v->a[28333] = 1;
	v->a[28334] = aux_sym_command_repeat2;
	v->a[28335] = state(712);
	v->a[28336] = 1;
	v->a[28337] = sym_concatenation;
	v->a[28338] = actions(891);
	v->a[28339] = 3;
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = sym_raw_string;
	v->a[28341] = sym_number;
	v->a[28342] = sym_word;
	v->a[28343] = state(796);
	v->a[28344] = 5;
	v->a[28345] = sym_arithmetic_expansion;
	v->a[28346] = sym_string;
	v->a[28347] = sym_simple_expansion;
	v->a[28348] = sym_expansion;
	v->a[28349] = sym_command_substitution;
	v->a[28350] = actions(550);
	v->a[28351] = 16;
	v->a[28352] = anon_sym_PIPE;
	v->a[28353] = anon_sym_AMP_AMP;
	v->a[28354] = anon_sym_PIPE_PIPE;
	v->a[28355] = anon_sym_LT;
	v->a[28356] = anon_sym_GT;
	v->a[28357] = anon_sym_GT_GT;
	v->a[28358] = anon_sym_AMP_GT;
	v->a[28359] = anon_sym_AMP_GT_GT;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = anon_sym_LT_AMP;
	v->a[28361] = anon_sym_GT_AMP;
	v->a[28362] = anon_sym_GT_PIPE;
	v->a[28363] = anon_sym_LT_AMP_DASH;
	v->a[28364] = anon_sym_GT_AMP_DASH;
	v->a[28365] = anon_sym_LT_LT;
	v->a[28366] = anon_sym_LT_LT_DASH;
	v->a[28367] = aux_sym_heredoc_redirect_token1;
	v->a[28368] = 3;
	v->a[28369] = actions(3);
	v->a[28370] = 1;
	v->a[28371] = sym_comment;
	v->a[28372] = actions(1044);
	v->a[28373] = 3;
	v->a[28374] = sym_file_descriptor;
	v->a[28375] = sym__concat;
	v->a[28376] = sym__bare_dollar;
	v->a[28377] = actions(1042);
	v->a[28378] = 31;
	v->a[28379] = anon_sym_esac;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = anon_sym_LPAREN;
	v->a[28381] = anon_sym_PIPE;
	v->a[28382] = anon_sym_SEMI_SEMI;
	v->a[28383] = anon_sym_AMP_AMP;
	v->a[28384] = anon_sym_PIPE_PIPE;
	v->a[28385] = anon_sym_LT;
	v->a[28386] = anon_sym_GT;
	v->a[28387] = anon_sym_GT_GT;
	v->a[28388] = anon_sym_AMP_GT;
	v->a[28389] = anon_sym_AMP_GT_GT;
	v->a[28390] = anon_sym_LT_AMP;
	v->a[28391] = anon_sym_GT_AMP;
	v->a[28392] = anon_sym_GT_PIPE;
	v->a[28393] = anon_sym_LT_AMP_DASH;
	v->a[28394] = anon_sym_GT_AMP_DASH;
	v->a[28395] = anon_sym_LT_LT;
	v->a[28396] = anon_sym_LT_LT_DASH;
	v->a[28397] = aux_sym_heredoc_redirect_token1;
	v->a[28398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28399] = anon_sym_AMP;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
