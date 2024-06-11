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
	v->a[78300] = actions(1973);
	v->a[78301] = 1;
	v->a[78302] = anon_sym_BQUOTE;
	v->a[78303] = actions(1975);
	v->a[78304] = 1;
	v->a[78305] = sym_extglob_pattern;
	v->a[78306] = actions(2899);
	v->a[78307] = 1;
	v->a[78308] = anon_sym_esac;
	v->a[78309] = state(1491);
	v->a[78310] = 1;
	v->a[78311] = aux_sym_case_statement_repeat1;
	v->a[78312] = state(2080);
	v->a[78313] = 1;
	v->a[78314] = sym_case_item;
	v->a[78315] = state(2290);
	v->a[78316] = 1;
	v->a[78317] = sym__case_item_last;
	v->a[78318] = state(2224);
	v->a[78319] = 2;
	small_parse_table_3916(v);
}

void	small_parse_table_3916(t_small_parse_table_array *v)
{
	v->a[78320] = sym_concatenation;
	v->a[78321] = sym__extglob_blob;
	v->a[78322] = actions(1955);
	v->a[78323] = 3;
	v->a[78324] = sym_raw_string;
	v->a[78325] = sym_number;
	v->a[78326] = sym_word;
	v->a[78327] = state(2157);
	v->a[78328] = 5;
	v->a[78329] = sym_arithmetic_expansion;
	v->a[78330] = sym_string;
	v->a[78331] = sym_simple_expansion;
	v->a[78332] = sym_expansion;
	v->a[78333] = sym_command_substitution;
	v->a[78334] = 7;
	v->a[78335] = actions(3);
	v->a[78336] = 1;
	v->a[78337] = sym_comment;
	v->a[78338] = actions(2626);
	v->a[78339] = 1;
	small_parse_table_3917(v);
}

void	small_parse_table_3917(t_small_parse_table_array *v)
{
	v->a[78340] = aux_sym_heredoc_redirect_token1;
	v->a[78341] = actions(2901);
	v->a[78342] = 1;
	v->a[78343] = sym_file_descriptor;
	v->a[78344] = actions(2598);
	v->a[78345] = 2;
	v->a[78346] = anon_sym_LT_AMP_DASH;
	v->a[78347] = anon_sym_GT_AMP_DASH;
	v->a[78348] = state(1459);
	v->a[78349] = 2;
	v->a[78350] = sym_file_redirect;
	v->a[78351] = aux_sym_redirected_statement_repeat2;
	v->a[78352] = actions(2596);
	v->a[78353] = 8;
	v->a[78354] = anon_sym_LT;
	v->a[78355] = anon_sym_GT;
	v->a[78356] = anon_sym_GT_GT;
	v->a[78357] = anon_sym_AMP_GT;
	v->a[78358] = anon_sym_AMP_GT_GT;
	v->a[78359] = anon_sym_LT_AMP;
	small_parse_table_3918(v);
}

void	small_parse_table_3918(t_small_parse_table_array *v)
{
	v->a[78360] = anon_sym_GT_AMP;
	v->a[78361] = anon_sym_GT_PIPE;
	v->a[78362] = actions(2624);
	v->a[78363] = 8;
	v->a[78364] = anon_sym_PIPE;
	v->a[78365] = anon_sym_SEMI_SEMI;
	v->a[78366] = anon_sym_AMP_AMP;
	v->a[78367] = anon_sym_PIPE_PIPE;
	v->a[78368] = anon_sym_LT_LT;
	v->a[78369] = anon_sym_LT_LT_DASH;
	v->a[78370] = anon_sym_AMP;
	v->a[78371] = anon_sym_SEMI;
	v->a[78372] = 9;
	v->a[78373] = actions(3);
	v->a[78374] = 1;
	v->a[78375] = sym_comment;
	v->a[78376] = actions(2602);
	v->a[78377] = 1;
	v->a[78378] = sym_file_descriptor;
	v->a[78379] = actions(2738);
	small_parse_table_3919(v);
}

void	small_parse_table_3919(t_small_parse_table_array *v)
{
	v->a[78380] = 1;
	v->a[78381] = aux_sym_heredoc_redirect_token1;
	v->a[78382] = actions(861);
	v->a[78383] = 2;
	v->a[78384] = anon_sym_LT_LT;
	v->a[78385] = anon_sym_LT_LT_DASH;
	v->a[78386] = actions(965);
	v->a[78387] = 2;
	v->a[78388] = anon_sym_AMP_AMP;
	v->a[78389] = anon_sym_PIPE_PIPE;
	v->a[78390] = actions(2598);
	v->a[78391] = 2;
	v->a[78392] = anon_sym_LT_AMP_DASH;
	v->a[78393] = anon_sym_GT_AMP_DASH;
	v->a[78394] = actions(1058);
	v->a[78395] = 3;
	v->a[78396] = anon_sym_SEMI_SEMI;
	v->a[78397] = anon_sym_AMP;
	v->a[78398] = anon_sym_SEMI;
	v->a[78399] = state(1322);
	small_parse_table_3920(v);
}

/* EOF small_parse_table_783.c */
