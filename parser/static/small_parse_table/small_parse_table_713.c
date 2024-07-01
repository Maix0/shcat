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
	v->a[71300] = sym_comment;
	v->a[71301] = actions(2489);
	v->a[71302] = 1;
	v->a[71303] = anon_sym_PIPE;
	v->a[71304] = state(1325);
	v->a[71305] = 1;
	v->a[71306] = aux_sym_pipeline_repeat1;
	v->a[71307] = actions(2462);
	v->a[71308] = 2;
	v->a[71309] = sym_file_descriptor;
	v->a[71310] = aux_sym_heredoc_redirect_token1;
	v->a[71311] = actions(2466);
	v->a[71312] = 16;
	v->a[71313] = anon_sym_RPAREN;
	v->a[71314] = anon_sym_SEMI_SEMI;
	v->a[71315] = anon_sym_AMP_AMP;
	v->a[71316] = anon_sym_PIPE_PIPE;
	v->a[71317] = anon_sym_LT;
	v->a[71318] = anon_sym_GT;
	v->a[71319] = anon_sym_GT_GT;
	small_parse_table_3566(v);
}

void	small_parse_table_3566(t_small_parse_table_array *v)
{
	v->a[71320] = anon_sym_LT_AMP;
	v->a[71321] = anon_sym_GT_AMP;
	v->a[71322] = anon_sym_GT_PIPE;
	v->a[71323] = anon_sym_LT_AMP_DASH;
	v->a[71324] = anon_sym_GT_AMP_DASH;
	v->a[71325] = anon_sym_LT_LT;
	v->a[71326] = anon_sym_LT_LT_DASH;
	v->a[71327] = anon_sym_AMP;
	v->a[71328] = anon_sym_SEMI;
	v->a[71329] = 14;
	v->a[71330] = actions(3);
	v->a[71331] = 1;
	v->a[71332] = sym_comment;
	v->a[71333] = actions(2494);
	v->a[71334] = 1;
	v->a[71335] = anon_sym_LPAREN;
	v->a[71336] = actions(2497);
	v->a[71337] = 1;
	v->a[71338] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71339] = actions(2500);
	small_parse_table_3567(v);
}

void	small_parse_table_3567(t_small_parse_table_array *v)
{
	v->a[71340] = 1;
	v->a[71341] = anon_sym_DOLLAR;
	v->a[71342] = actions(2503);
	v->a[71343] = 1;
	v->a[71344] = anon_sym_DQUOTE;
	v->a[71345] = actions(2506);
	v->a[71346] = 1;
	v->a[71347] = anon_sym_DOLLAR_LBRACE;
	v->a[71348] = actions(2509);
	v->a[71349] = 1;
	v->a[71350] = anon_sym_DOLLAR_LPAREN;
	v->a[71351] = actions(2512);
	v->a[71352] = 1;
	v->a[71353] = anon_sym_BQUOTE;
	v->a[71354] = actions(2515);
	v->a[71355] = 1;
	v->a[71356] = sym_extglob_pattern;
	v->a[71357] = state(1329);
	v->a[71358] = 1;
	v->a[71359] = aux_sym_case_statement_repeat1;
	small_parse_table_3568(v);
}

void	small_parse_table_3568(t_small_parse_table_array *v)
{
	v->a[71360] = state(1920);
	v->a[71361] = 1;
	v->a[71362] = sym_case_item;
	v->a[71363] = state(2078);
	v->a[71364] = 2;
	v->a[71365] = sym_concatenation;
	v->a[71366] = sym__extglob_blob;
	v->a[71367] = actions(2491);
	v->a[71368] = 3;
	v->a[71369] = sym_raw_string;
	v->a[71370] = sym_number;
	v->a[71371] = sym_word;
	v->a[71372] = state(1993);
	v->a[71373] = 5;
	v->a[71374] = sym_arithmetic_expansion;
	v->a[71375] = sym_string;
	v->a[71376] = sym_simple_expansion;
	v->a[71377] = sym_expansion;
	v->a[71378] = sym_command_substitution;
	v->a[71379] = 5;
	small_parse_table_3569(v);
}

void	small_parse_table_3569(t_small_parse_table_array *v)
{
	v->a[71380] = actions(3);
	v->a[71381] = 1;
	v->a[71382] = sym_comment;
	v->a[71383] = actions(2518);
	v->a[71384] = 1;
	v->a[71385] = anon_sym_PIPE;
	v->a[71386] = state(1330);
	v->a[71387] = 1;
	v->a[71388] = aux_sym_pipeline_repeat1;
	v->a[71389] = actions(2090);
	v->a[71390] = 2;
	v->a[71391] = sym_file_descriptor;
	v->a[71392] = aux_sym_heredoc_redirect_token1;
	v->a[71393] = actions(2095);
	v->a[71394] = 16;
	v->a[71395] = anon_sym_SEMI_SEMI;
	v->a[71396] = anon_sym_AMP_AMP;
	v->a[71397] = anon_sym_PIPE_PIPE;
	v->a[71398] = anon_sym_LT;
	v->a[71399] = anon_sym_GT;
	small_parse_table_3570(v);
}

/* EOF small_parse_table_713.c */
