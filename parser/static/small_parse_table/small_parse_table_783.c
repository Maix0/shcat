/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_783.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3915(t_small_parse_table_array *v)
{
	v->a[78300] = 1;
	v->a[78301] = anon_sym_DOLLAR_LPAREN;
	v->a[78302] = actions(2783);
	v->a[78303] = 1;
	v->a[78304] = anon_sym_BQUOTE;
	v->a[78305] = actions(2785);
	v->a[78306] = 1;
	v->a[78307] = sym__bare_dollar;
	v->a[78308] = actions(2771);
	v->a[78309] = 5;
	v->a[78310] = aux_sym_concatenation_token1;
	v->a[78311] = sym_raw_string;
	v->a[78312] = sym_number;
	v->a[78313] = sym__comment_word;
	v->a[78314] = sym_word;
	v->a[78315] = state(1183);
	v->a[78316] = 5;
	v->a[78317] = sym_arithmetic_expansion;
	v->a[78318] = sym_string;
	v->a[78319] = sym_simple_expansion;
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = sym_expansion;
	v->a[78321] = sym_command_substitution;
	v->a[78322] = 12;
	v->a[78323] = actions(3);
	v->a[78324] = 1;
	v->a[78325] = sym_comment;
	v->a[78326] = actions(2789);
	v->a[78327] = 1;
	v->a[78328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78329] = actions(2791);
	v->a[78330] = 1;
	v->a[78331] = anon_sym_DOLLAR;
	v->a[78332] = actions(2793);
	v->a[78333] = 1;
	v->a[78334] = anon_sym_DQUOTE;
	v->a[78335] = actions(2795);
	v->a[78336] = 1;
	v->a[78337] = anon_sym_DOLLAR_LBRACE;
	v->a[78338] = actions(2797);
	v->a[78339] = 1;
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = anon_sym_DOLLAR_LPAREN;
	v->a[78341] = actions(2799);
	v->a[78342] = 1;
	v->a[78343] = anon_sym_BQUOTE;
	v->a[78344] = actions(2801);
	v->a[78345] = 1;
	v->a[78346] = sym__comment_word;
	v->a[78347] = actions(2803);
	v->a[78348] = 1;
	v->a[78349] = sym__empty_value;
	v->a[78350] = state(695);
	v->a[78351] = 1;
	v->a[78352] = sym_concatenation;
	v->a[78353] = actions(2787);
	v->a[78354] = 3;
	v->a[78355] = sym_raw_string;
	v->a[78356] = sym_number;
	v->a[78357] = sym_word;
	v->a[78358] = state(336);
	v->a[78359] = 5;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = sym_arithmetic_expansion;
	v->a[78361] = sym_string;
	v->a[78362] = sym_simple_expansion;
	v->a[78363] = sym_expansion;
	v->a[78364] = sym_command_substitution;
	v->a[78365] = 8;
	v->a[78366] = actions(3);
	v->a[78367] = 1;
	v->a[78368] = sym_comment;
	v->a[78369] = actions(871);
	v->a[78370] = 1;
	v->a[78371] = sym_file_descriptor;
	v->a[78372] = actions(2805);
	v->a[78373] = 1;
	v->a[78374] = aux_sym_heredoc_redirect_token1;
	v->a[78375] = state(2130);
	v->a[78376] = 1;
	v->a[78377] = sym__heredoc_expression;
	v->a[78378] = actions(851);
	v->a[78379] = 2;
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = anon_sym_AMP_AMP;
	v->a[78381] = anon_sym_PIPE_PIPE;
	v->a[78382] = actions(855);
	v->a[78383] = 2;
	v->a[78384] = anon_sym_LT_AMP_DASH;
	v->a[78385] = anon_sym_GT_AMP_DASH;
	v->a[78386] = state(1609);
	v->a[78387] = 2;
	v->a[78388] = sym_file_redirect;
	v->a[78389] = aux_sym_redirected_statement_repeat2;
	v->a[78390] = actions(853);
	v->a[78391] = 8;
	v->a[78392] = anon_sym_LT;
	v->a[78393] = anon_sym_GT;
	v->a[78394] = anon_sym_GT_GT;
	v->a[78395] = anon_sym_AMP_GT;
	v->a[78396] = anon_sym_AMP_GT_GT;
	v->a[78397] = anon_sym_LT_AMP;
	v->a[78398] = anon_sym_GT_AMP;
	v->a[78399] = anon_sym_GT_PIPE;
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
