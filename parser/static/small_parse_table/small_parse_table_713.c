/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_713.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3565(t_small_parse_table_array *v)
{
	v->a[71300] = 2;
	v->a[71301] = sym_concatenation;
	v->a[71302] = aux_sym_for_statement_repeat1;
	v->a[71303] = actions(1275);
	v->a[71304] = 3;
	v->a[71305] = sym_raw_string;
	v->a[71306] = sym_number;
	v->a[71307] = sym_word;
	v->a[71308] = state(804);
	v->a[71309] = 5;
	v->a[71310] = sym_arithmetic_expansion;
	v->a[71311] = sym_string;
	v->a[71312] = sym_simple_expansion;
	v->a[71313] = sym_expansion;
	v->a[71314] = sym_command_substitution;
	v->a[71315] = 3;
	v->a[71316] = actions(680);
	v->a[71317] = 1;
	v->a[71318] = sym_comment;
	v->a[71319] = actions(1180);
	small_parse_table_3566(v);
}

void	small_parse_table_3566(t_small_parse_table_array *v)
{
	v->a[71320] = 4;
	v->a[71321] = anon_sym_PIPE;
	v->a[71322] = anon_sym_LT;
	v->a[71323] = anon_sym_GT;
	v->a[71324] = anon_sym_LT_LT;
	v->a[71325] = actions(1178);
	v->a[71326] = 12;
	v->a[71327] = sym_file_descriptor;
	v->a[71328] = sym__concat;
	v->a[71329] = sym_variable_name;
	v->a[71330] = anon_sym_AMP_AMP;
	v->a[71331] = anon_sym_PIPE_PIPE;
	v->a[71332] = anon_sym_GT_GT;
	v->a[71333] = anon_sym_LT_AMP;
	v->a[71334] = anon_sym_GT_AMP;
	v->a[71335] = anon_sym_GT_PIPE;
	v->a[71336] = anon_sym_LT_GT;
	v->a[71337] = anon_sym_LT_LT_DASH;
	v->a[71338] = aux_sym_concatenation_token1;
	v->a[71339] = 10;
	small_parse_table_3567(v);
}

void	small_parse_table_3567(t_small_parse_table_array *v)
{
	v->a[71340] = actions(3);
	v->a[71341] = 1;
	v->a[71342] = sym_comment;
	v->a[71343] = actions(2358);
	v->a[71344] = 1;
	v->a[71345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71346] = actions(2360);
	v->a[71347] = 1;
	v->a[71348] = anon_sym_DOLLAR;
	v->a[71349] = actions(2362);
	v->a[71350] = 1;
	v->a[71351] = anon_sym_DQUOTE;
	v->a[71352] = actions(2364);
	v->a[71353] = 1;
	v->a[71354] = anon_sym_DOLLAR_LBRACE;
	v->a[71355] = actions(2366);
	v->a[71356] = 1;
	v->a[71357] = anon_sym_DOLLAR_LPAREN;
	v->a[71358] = actions(2368);
	v->a[71359] = 1;
	small_parse_table_3568(v);
}

void	small_parse_table_3568(t_small_parse_table_array *v)
{
	v->a[71360] = anon_sym_BQUOTE;
	v->a[71361] = state(854);
	v->a[71362] = 2;
	v->a[71363] = sym_concatenation;
	v->a[71364] = aux_sym_for_statement_repeat1;
	v->a[71365] = actions(2799);
	v->a[71366] = 3;
	v->a[71367] = sym_raw_string;
	v->a[71368] = sym_number;
	v->a[71369] = sym_word;
	v->a[71370] = state(1079);
	v->a[71371] = 5;
	v->a[71372] = sym_arithmetic_expansion;
	v->a[71373] = sym_string;
	v->a[71374] = sym_simple_expansion;
	v->a[71375] = sym_expansion;
	v->a[71376] = sym_command_substitution;
	v->a[71377] = 5;
	v->a[71378] = actions(3);
	v->a[71379] = 1;
	small_parse_table_3569(v);
}

void	small_parse_table_3569(t_small_parse_table_array *v)
{
	v->a[71380] = sym_comment;
	v->a[71381] = actions(2795);
	v->a[71382] = 1;
	v->a[71383] = aux_sym_concatenation_token1;
	v->a[71384] = actions(2817);
	v->a[71385] = 1;
	v->a[71386] = sym__concat;
	v->a[71387] = state(1414);
	v->a[71388] = 1;
	v->a[71389] = aux_sym_concatenation_repeat1;
	v->a[71390] = actions(1045);
	v->a[71391] = 13;
	v->a[71392] = anon_sym_SEMI_SEMI;
	v->a[71393] = aux_sym_heredoc_redirect_token1;
	v->a[71394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71395] = anon_sym_AMP;
	v->a[71396] = anon_sym_DOLLAR;
	v->a[71397] = anon_sym_DQUOTE;
	v->a[71398] = sym_raw_string;
	v->a[71399] = sym_number;
	small_parse_table_3570(v);
}

/* EOF small_parse_table_713.c */
