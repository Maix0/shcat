/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15(t_small_parse_table_array *v)
{
	v->a[300] = actions(771);
	v->a[301] = 1;
	v->a[302] = anon_sym_DOLLAR;
	v->a[303] = actions(774);
	v->a[304] = 1;
	v->a[305] = sym__special_character;
	v->a[306] = actions(777);
	v->a[307] = 1;
	v->a[308] = anon_sym_DQUOTE;
	v->a[309] = actions(780);
	v->a[310] = 1;
	v->a[311] = aux_sym_number_token1;
	v->a[312] = actions(783);
	v->a[313] = 1;
	v->a[314] = aux_sym_number_token2;
	v->a[315] = actions(786);
	v->a[316] = 1;
	v->a[317] = anon_sym_DOLLAR_LBRACE;
	v->a[318] = actions(789);
	v->a[319] = 1;
	small_parse_table_16(v);
}

void	small_parse_table_16(t_small_parse_table_array *v)
{
	v->a[320] = anon_sym_DOLLAR_LPAREN;
	v->a[321] = actions(792);
	v->a[322] = 1;
	v->a[323] = anon_sym_BQUOTE;
	v->a[324] = actions(795);
	v->a[325] = 1;
	v->a[326] = anon_sym_DOLLAR_BQUOTE;
	v->a[327] = actions(798);
	v->a[328] = 1;
	v->a[329] = aux_sym__simple_variable_name_token1;
	v->a[330] = actions(801);
	v->a[331] = 1;
	v->a[332] = sym_variable_name;
	v->a[333] = actions(804);
	v->a[334] = 1;
	v->a[335] = sym_test_operator;
	v->a[336] = actions(807);
	v->a[337] = 1;
	v->a[338] = sym__brace_start;
	v->a[339] = state(683);
	small_parse_table_17(v);
}

void	small_parse_table_17(t_small_parse_table_array *v)
{
	v->a[340] = 1;
	v->a[341] = aux_sym__literal_repeat1;
	v->a[342] = actions(761);
	v->a[343] = 2;
	v->a[344] = sym_raw_string;
	v->a[345] = sym_word;
	v->a[346] = actions(766);
	v->a[347] = 2;
	v->a[348] = sym_file_descriptor;
	v->a[349] = aux_sym_heredoc_redirect_token1;
	v->a[350] = state(260);
	v->a[351] = 3;
	v->a[352] = sym_variable_assignment;
	v->a[353] = sym_concatenation;
	v->a[354] = aux_sym_declaration_command_repeat1;
	v->a[355] = state(503);
	v->a[356] = 7;
	v->a[357] = sym_arithmetic_expansion;
	v->a[358] = sym_brace_expression;
	v->a[359] = sym_string;
	small_parse_table_18(v);
}

void	small_parse_table_18(t_small_parse_table_array *v)
{
	v->a[360] = sym_number;
	v->a[361] = sym_simple_expansion;
	v->a[362] = sym_expansion;
	v->a[363] = sym_command_substitution;
	v->a[364] = actions(764);
	v->a[365] = 22;
	v->a[366] = anon_sym_esac;
	v->a[367] = anon_sym_PIPE;
	v->a[368] = anon_sym_SEMI_SEMI;
	v->a[369] = anon_sym_SEMI_AMP;
	v->a[370] = anon_sym_SEMI_SEMI_AMP;
	v->a[371] = anon_sym_PIPE_AMP;
	v->a[372] = anon_sym_AMP_AMP;
	v->a[373] = anon_sym_PIPE_PIPE;
	v->a[374] = anon_sym_LT;
	v->a[375] = anon_sym_GT;
	v->a[376] = anon_sym_GT_GT;
	v->a[377] = anon_sym_AMP_GT;
	v->a[378] = anon_sym_AMP_GT_GT;
	v->a[379] = anon_sym_LT_AMP;
	small_parse_table_19(v);
}

void	small_parse_table_19(t_small_parse_table_array *v)
{
	v->a[380] = anon_sym_GT_AMP;
	v->a[381] = anon_sym_GT_PIPE;
	v->a[382] = anon_sym_LT_AMP_DASH;
	v->a[383] = anon_sym_GT_AMP_DASH;
	v->a[384] = anon_sym_LT_LT;
	v->a[385] = anon_sym_LT_LT_DASH;
	v->a[386] = anon_sym_AMP;
	v->a[387] = anon_sym_SEMI;
	v->a[388] = 6;
	v->a[389] = actions(3);
	v->a[390] = 1;
	v->a[391] = sym_comment;
	v->a[392] = actions(818);
	v->a[393] = 1;
	v->a[394] = sym_variable_name;
	v->a[395] = actions(814);
	v->a[396] = 2;
	v->a[397] = aux_sym__simple_variable_name_token1;
	v->a[398] = aux_sym__multiline_variable_name_token1;
	v->a[399] = actions(816);
	small_parse_table_20(v);
}

/* EOF small_parse_table_3.c */
