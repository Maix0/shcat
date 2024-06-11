/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_883.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4415(t_small_parse_table_array *v)
{
	v->a[88300] = anon_sym_PIPE_PIPE;
	v->a[88301] = anon_sym_GT_GT;
	v->a[88302] = anon_sym_AMP_GT_GT;
	v->a[88303] = anon_sym_GT_PIPE;
	v->a[88304] = anon_sym_LT_AMP_DASH;
	v->a[88305] = anon_sym_GT_AMP_DASH;
	v->a[88306] = anon_sym_LT_LT_DASH;
	v->a[88307] = 3;
	v->a[88308] = actions(1094);
	v->a[88309] = 1;
	v->a[88310] = sym_comment;
	v->a[88311] = actions(2870);
	v->a[88312] = 7;
	v->a[88313] = anon_sym_PIPE;
	v->a[88314] = anon_sym_LT;
	v->a[88315] = anon_sym_GT;
	v->a[88316] = anon_sym_AMP_GT;
	v->a[88317] = anon_sym_LT_AMP;
	v->a[88318] = anon_sym_GT_AMP;
	v->a[88319] = anon_sym_LT_LT;
	small_parse_table_4416(v);
}

void	small_parse_table_4416(t_small_parse_table_array *v)
{
	v->a[88320] = actions(2868);
	v->a[88321] = 9;
	v->a[88322] = sym_file_descriptor;
	v->a[88323] = anon_sym_AMP_AMP;
	v->a[88324] = anon_sym_PIPE_PIPE;
	v->a[88325] = anon_sym_GT_GT;
	v->a[88326] = anon_sym_AMP_GT_GT;
	v->a[88327] = anon_sym_GT_PIPE;
	v->a[88328] = anon_sym_LT_AMP_DASH;
	v->a[88329] = anon_sym_GT_AMP_DASH;
	v->a[88330] = anon_sym_LT_LT_DASH;
	v->a[88331] = 10;
	v->a[88332] = actions(3);
	v->a[88333] = 1;
	v->a[88334] = sym_comment;
	v->a[88335] = actions(701);
	v->a[88336] = 1;
	v->a[88337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88338] = actions(703);
	v->a[88339] = 1;
	small_parse_table_4417(v);
}

void	small_parse_table_4417(t_small_parse_table_array *v)
{
	v->a[88340] = anon_sym_DOLLAR;
	v->a[88341] = actions(705);
	v->a[88342] = 1;
	v->a[88343] = anon_sym_DQUOTE;
	v->a[88344] = actions(707);
	v->a[88345] = 1;
	v->a[88346] = anon_sym_DOLLAR_LBRACE;
	v->a[88347] = actions(709);
	v->a[88348] = 1;
	v->a[88349] = anon_sym_DOLLAR_LPAREN;
	v->a[88350] = actions(711);
	v->a[88351] = 1;
	v->a[88352] = anon_sym_BQUOTE;
	v->a[88353] = state(216);
	v->a[88354] = 2;
	v->a[88355] = sym_concatenation;
	v->a[88356] = aux_sym_for_statement_repeat1;
	v->a[88357] = actions(699);
	v->a[88358] = 3;
	v->a[88359] = sym_raw_string;
	small_parse_table_4418(v);
}

void	small_parse_table_4418(t_small_parse_table_array *v)
{
	v->a[88360] = sym_number;
	v->a[88361] = sym_word;
	v->a[88362] = state(517);
	v->a[88363] = 5;
	v->a[88364] = sym_arithmetic_expansion;
	v->a[88365] = sym_string;
	v->a[88366] = sym_simple_expansion;
	v->a[88367] = sym_expansion;
	v->a[88368] = sym_command_substitution;
	v->a[88369] = 3;
	v->a[88370] = actions(1094);
	v->a[88371] = 1;
	v->a[88372] = sym_comment;
	v->a[88373] = actions(2858);
	v->a[88374] = 7;
	v->a[88375] = anon_sym_PIPE;
	v->a[88376] = anon_sym_LT;
	v->a[88377] = anon_sym_GT;
	v->a[88378] = anon_sym_AMP_GT;
	v->a[88379] = anon_sym_LT_AMP;
	small_parse_table_4419(v);
}

void	small_parse_table_4419(t_small_parse_table_array *v)
{
	v->a[88380] = anon_sym_GT_AMP;
	v->a[88381] = anon_sym_LT_LT;
	v->a[88382] = actions(2856);
	v->a[88383] = 9;
	v->a[88384] = sym_file_descriptor;
	v->a[88385] = anon_sym_AMP_AMP;
	v->a[88386] = anon_sym_PIPE_PIPE;
	v->a[88387] = anon_sym_GT_GT;
	v->a[88388] = anon_sym_AMP_GT_GT;
	v->a[88389] = anon_sym_GT_PIPE;
	v->a[88390] = anon_sym_LT_AMP_DASH;
	v->a[88391] = anon_sym_GT_AMP_DASH;
	v->a[88392] = anon_sym_LT_LT_DASH;
	v->a[88393] = 10;
	v->a[88394] = actions(3);
	v->a[88395] = 1;
	v->a[88396] = sym_comment;
	v->a[88397] = actions(701);
	v->a[88398] = 1;
	v->a[88399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4420(v);
}

/* EOF small_parse_table_883.c */
