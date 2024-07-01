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
	v->a[78300] = actions(2689);
	v->a[78301] = 1;
	v->a[78302] = anon_sym_DQUOTE;
	v->a[78303] = actions(2691);
	v->a[78304] = 1;
	v->a[78305] = anon_sym_DOLLAR_LBRACE;
	v->a[78306] = actions(2693);
	v->a[78307] = 1;
	v->a[78308] = anon_sym_DOLLAR_LPAREN;
	v->a[78309] = actions(2695);
	v->a[78310] = 1;
	v->a[78311] = anon_sym_BQUOTE;
	v->a[78312] = actions(2697);
	v->a[78313] = 1;
	v->a[78314] = sym__bare_dollar;
	v->a[78315] = actions(3021);
	v->a[78316] = 1;
	v->a[78317] = anon_sym_DOLLAR;
	v->a[78318] = actions(2683);
	v->a[78319] = 5;
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = aux_sym_concatenation_token1;
	v->a[78321] = sym_raw_string;
	v->a[78322] = sym_number;
	v->a[78323] = sym__comment_word;
	v->a[78324] = sym_word;
	v->a[78325] = state(553);
	v->a[78326] = 5;
	v->a[78327] = sym_arithmetic_expansion;
	v->a[78328] = sym_string;
	v->a[78329] = sym_simple_expansion;
	v->a[78330] = sym_expansion;
	v->a[78331] = sym_command_substitution;
	v->a[78332] = 10;
	v->a[78333] = actions(870);
	v->a[78334] = 1;
	v->a[78335] = sym_comment;
	v->a[78336] = actions(2076);
	v->a[78337] = 1;
	v->a[78338] = anon_sym_PIPE;
	v->a[78339] = actions(3032);
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = 1;
	v->a[78341] = anon_sym_LT_LT;
	v->a[78342] = actions(3035);
	v->a[78343] = 1;
	v->a[78344] = anon_sym_LT_LT_DASH;
	v->a[78345] = actions(3038);
	v->a[78346] = 1;
	v->a[78347] = sym_file_descriptor;
	v->a[78348] = actions(2074);
	v->a[78349] = 2;
	v->a[78350] = anon_sym_AMP_AMP;
	v->a[78351] = anon_sym_PIPE_PIPE;
	v->a[78352] = actions(3026);
	v->a[78353] = 2;
	v->a[78354] = anon_sym_GT_GT;
	v->a[78355] = anon_sym_GT_PIPE;
	v->a[78356] = actions(3029);
	v->a[78357] = 2;
	v->a[78358] = anon_sym_LT_AMP_DASH;
	v->a[78359] = anon_sym_GT_AMP_DASH;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = state(1535);
	v->a[78361] = 3;
	v->a[78362] = sym_file_redirect;
	v->a[78363] = sym_heredoc_redirect;
	v->a[78364] = aux_sym_redirected_statement_repeat1;
	v->a[78365] = actions(3023);
	v->a[78366] = 4;
	v->a[78367] = anon_sym_LT;
	v->a[78368] = anon_sym_GT;
	v->a[78369] = anon_sym_LT_AMP;
	v->a[78370] = anon_sym_GT_AMP;
	v->a[78371] = 5;
	v->a[78372] = actions(682);
	v->a[78373] = 1;
	v->a[78374] = anon_sym_PIPE;
	v->a[78375] = actions(870);
	v->a[78376] = 1;
	v->a[78377] = sym_comment;
	v->a[78378] = state(1520);
	v->a[78379] = 3;
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = sym_file_redirect;
	v->a[78381] = sym_heredoc_redirect;
	v->a[78382] = aux_sym_redirected_statement_repeat1;
	v->a[78383] = actions(935);
	v->a[78384] = 5;
	v->a[78385] = anon_sym_LT;
	v->a[78386] = anon_sym_GT;
	v->a[78387] = anon_sym_LT_AMP;
	v->a[78388] = anon_sym_GT_AMP;
	v->a[78389] = anon_sym_LT_LT;
	v->a[78390] = actions(984);
	v->a[78391] = 8;
	v->a[78392] = sym_file_descriptor;
	v->a[78393] = anon_sym_AMP_AMP;
	v->a[78394] = anon_sym_PIPE_PIPE;
	v->a[78395] = anon_sym_GT_GT;
	v->a[78396] = anon_sym_GT_PIPE;
	v->a[78397] = anon_sym_LT_AMP_DASH;
	v->a[78398] = anon_sym_GT_AMP_DASH;
	v->a[78399] = anon_sym_LT_LT_DASH;
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
