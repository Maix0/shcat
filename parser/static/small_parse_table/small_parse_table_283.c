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
	v->a[28300] = actions(69);
	v->a[28301] = 2;
	v->a[28302] = sym_raw_string;
	v->a[28303] = sym_word;
	v->a[28304] = actions(1100);
	v->a[28305] = 2;
	v->a[28306] = anon_sym_LT_AMP_DASH;
	v->a[28307] = anon_sym_GT_AMP_DASH;
	v->a[28308] = state(397);
	v->a[28309] = 6;
	v->a[28310] = sym_arithmetic_expansion;
	v->a[28311] = sym_string;
	v->a[28312] = sym_number;
	v->a[28313] = sym_simple_expansion;
	v->a[28314] = sym_expansion;
	v->a[28315] = sym_command_substitution;
	v->a[28316] = actions(1098);
	v->a[28317] = 8;
	v->a[28318] = anon_sym_LT;
	v->a[28319] = anon_sym_GT;
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = anon_sym_GT_GT;
	v->a[28321] = anon_sym_AMP_GT;
	v->a[28322] = anon_sym_AMP_GT_GT;
	v->a[28323] = anon_sym_LT_AMP;
	v->a[28324] = anon_sym_GT_AMP;
	v->a[28325] = anon_sym_GT_PIPE;
	v->a[28326] = 6;
	v->a[28327] = actions(3);
	v->a[28328] = 1;
	v->a[28329] = sym_comment;
	v->a[28330] = actions(1106);
	v->a[28331] = 1;
	v->a[28332] = aux_sym_concatenation_token1;
	v->a[28333] = actions(1110);
	v->a[28334] = 1;
	v->a[28335] = sym__concat;
	v->a[28336] = state(292);
	v->a[28337] = 1;
	v->a[28338] = aux_sym_concatenation_repeat1;
	v->a[28339] = actions(1108);
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = 2;
	v->a[28341] = sym_file_descriptor;
	v->a[28342] = sym__bare_dollar;
	v->a[28343] = actions(1104);
	v->a[28344] = 31;
	v->a[28345] = anon_sym_esac;
	v->a[28346] = anon_sym_LPAREN;
	v->a[28347] = anon_sym_PIPE;
	v->a[28348] = anon_sym_SEMI_SEMI;
	v->a[28349] = anon_sym_AMP_AMP;
	v->a[28350] = anon_sym_PIPE_PIPE;
	v->a[28351] = anon_sym_LT;
	v->a[28352] = anon_sym_GT;
	v->a[28353] = anon_sym_GT_GT;
	v->a[28354] = anon_sym_AMP_GT;
	v->a[28355] = anon_sym_AMP_GT_GT;
	v->a[28356] = anon_sym_LT_AMP;
	v->a[28357] = anon_sym_GT_AMP;
	v->a[28358] = anon_sym_GT_PIPE;
	v->a[28359] = anon_sym_LT_AMP_DASH;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = anon_sym_GT_AMP_DASH;
	v->a[28361] = anon_sym_LT_LT;
	v->a[28362] = anon_sym_LT_LT_DASH;
	v->a[28363] = aux_sym_heredoc_redirect_token1;
	v->a[28364] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28365] = anon_sym_AMP;
	v->a[28366] = anon_sym_DOLLAR;
	v->a[28367] = anon_sym_DQUOTE;
	v->a[28368] = sym_raw_string;
	v->a[28369] = aux_sym_number_token1;
	v->a[28370] = aux_sym_number_token2;
	v->a[28371] = anon_sym_DOLLAR_LBRACE;
	v->a[28372] = anon_sym_DOLLAR_LPAREN;
	v->a[28373] = anon_sym_BQUOTE;
	v->a[28374] = sym_word;
	v->a[28375] = anon_sym_SEMI;
	v->a[28376] = 11;
	v->a[28377] = actions(3);
	v->a[28378] = 1;
	v->a[28379] = sym_comment;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = actions(1002);
	v->a[28381] = 1;
	v->a[28382] = anon_sym_PIPE;
	v->a[28383] = actions(1006);
	v->a[28384] = 1;
	v->a[28385] = sym_file_descriptor;
	v->a[28386] = actions(1033);
	v->a[28387] = 1;
	v->a[28388] = anon_sym_SEMI_SEMI;
	v->a[28389] = actions(1095);
	v->a[28390] = 1;
	v->a[28391] = sym_variable_name;
	v->a[28392] = actions(1062);
	v->a[28393] = 2;
	v->a[28394] = anon_sym_LT_LT;
	v->a[28395] = anon_sym_LT_LT_DASH;
	v->a[28396] = actions(1093);
	v->a[28397] = 2;
	v->a[28398] = anon_sym_AMP_AMP;
	v->a[28399] = anon_sym_PIPE_PIPE;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
