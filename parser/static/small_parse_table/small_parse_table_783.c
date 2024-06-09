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
	v->a[78300] = 3;
	v->a[78301] = sym_raw_string;
	v->a[78302] = sym__comment_word;
	v->a[78303] = sym_word;
	v->a[78304] = state(956);
	v->a[78305] = 6;
	v->a[78306] = sym_arithmetic_expansion;
	v->a[78307] = sym_string;
	v->a[78308] = sym_number;
	v->a[78309] = sym_simple_expansion;
	v->a[78310] = sym_expansion;
	v->a[78311] = sym_command_substitution;
	v->a[78312] = 8;
	v->a[78313] = actions(1404);
	v->a[78314] = 1;
	v->a[78315] = sym_comment;
	v->a[78316] = actions(3209);
	v->a[78317] = 1;
	v->a[78318] = sym_file_descriptor;
	v->a[78319] = actions(2406);
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = 2;
	v->a[78321] = anon_sym_PIPE;
	v->a[78322] = anon_sym_LT_LT;
	v->a[78323] = actions(3206);
	v->a[78324] = 2;
	v->a[78325] = anon_sym_LT_AMP_DASH;
	v->a[78326] = anon_sym_GT_AMP_DASH;
	v->a[78327] = state(1422);
	v->a[78328] = 2;
	v->a[78329] = sym_file_redirect;
	v->a[78330] = aux_sym_redirected_statement_repeat2;
	v->a[78331] = actions(2414);
	v->a[78332] = 3;
	v->a[78333] = anon_sym_AMP_AMP;
	v->a[78334] = anon_sym_PIPE_PIPE;
	v->a[78335] = anon_sym_LT_LT_DASH;
	v->a[78336] = actions(3203);
	v->a[78337] = 3;
	v->a[78338] = anon_sym_GT_GT;
	v->a[78339] = anon_sym_AMP_GT_GT;
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = anon_sym_GT_PIPE;
	v->a[78341] = actions(3200);
	v->a[78342] = 5;
	v->a[78343] = anon_sym_LT;
	v->a[78344] = anon_sym_GT;
	v->a[78345] = anon_sym_AMP_GT;
	v->a[78346] = anon_sym_LT_AMP;
	v->a[78347] = anon_sym_GT_AMP;
	v->a[78348] = 12;
	v->a[78349] = actions(3);
	v->a[78350] = 1;
	v->a[78351] = sym_comment;
	v->a[78352] = actions(2953);
	v->a[78353] = 1;
	v->a[78354] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78355] = actions(2955);
	v->a[78356] = 1;
	v->a[78357] = anon_sym_DOLLAR;
	v->a[78358] = actions(2957);
	v->a[78359] = 1;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = anon_sym_DQUOTE;
	v->a[78361] = actions(2959);
	v->a[78362] = 1;
	v->a[78363] = aux_sym_number_token1;
	v->a[78364] = actions(2961);
	v->a[78365] = 1;
	v->a[78366] = aux_sym_number_token2;
	v->a[78367] = actions(2963);
	v->a[78368] = 1;
	v->a[78369] = anon_sym_DOLLAR_LBRACE;
	v->a[78370] = actions(2965);
	v->a[78371] = 1;
	v->a[78372] = anon_sym_DOLLAR_LPAREN;
	v->a[78373] = actions(2967);
	v->a[78374] = 1;
	v->a[78375] = anon_sym_BQUOTE;
	v->a[78376] = actions(3099);
	v->a[78377] = 1;
	v->a[78378] = sym__bare_dollar;
	v->a[78379] = actions(3095);
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = 3;
	v->a[78381] = sym_raw_string;
	v->a[78382] = sym__comment_word;
	v->a[78383] = sym_word;
	v->a[78384] = state(1027);
	v->a[78385] = 6;
	v->a[78386] = sym_arithmetic_expansion;
	v->a[78387] = sym_string;
	v->a[78388] = sym_number;
	v->a[78389] = sym_simple_expansion;
	v->a[78390] = sym_expansion;
	v->a[78391] = sym_command_substitution;
	v->a[78392] = 12;
	v->a[78393] = actions(3);
	v->a[78394] = 1;
	v->a[78395] = sym_comment;
	v->a[78396] = actions(3180);
	v->a[78397] = 1;
	v->a[78398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78399] = actions(3184);
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
