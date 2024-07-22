/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_333.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1665(t_small_parse_table_array *v)
{
	v->a[33300] = 1;
	v->a[33301] = anon_sym_BQUOTE;
	v->a[33302] = state(442);
	v->a[33303] = 2;
	v->a[33304] = sym_concatenation;
	v->a[33305] = aux_sym_for_statement_repeat1;
	v->a[33306] = actions(1294);
	v->a[33307] = 3;
	v->a[33308] = sym_raw_string;
	v->a[33309] = sym_number;
	v->a[33310] = sym_word;
	v->a[33311] = state(780);
	v->a[33312] = 5;
	v->a[33313] = sym_arithmetic_expansion;
	v->a[33314] = sym_string;
	v->a[33315] = sym_simple_expansion;
	v->a[33316] = sym_expansion;
	v->a[33317] = sym_command_substitution;
	v->a[33318] = actions(628);
	v->a[33319] = 13;
	small_parse_table_1666(v);
}

void	small_parse_table_1666(t_small_parse_table_array *v)
{
	v->a[33320] = anon_sym_PIPE;
	v->a[33321] = anon_sym_AMP_AMP;
	v->a[33322] = anon_sym_PIPE_PIPE;
	v->a[33323] = anon_sym_LT;
	v->a[33324] = anon_sym_GT;
	v->a[33325] = anon_sym_GT_GT;
	v->a[33326] = anon_sym_LT_AMP;
	v->a[33327] = anon_sym_GT_AMP;
	v->a[33328] = anon_sym_GT_PIPE;
	v->a[33329] = anon_sym_LT_GT;
	v->a[33330] = anon_sym_LT_LT;
	v->a[33331] = anon_sym_LT_LT_DASH;
	v->a[33332] = aux_sym_heredoc_redirect_token1;
	v->a[33333] = 12;
	v->a[33334] = actions(3);
	v->a[33335] = 1;
	v->a[33336] = sym_comment;
	v->a[33337] = actions(529);
	v->a[33338] = 1;
	v->a[33339] = sym_file_descriptor;
	small_parse_table_1667(v);
}

void	small_parse_table_1667(t_small_parse_table_array *v)
{
	v->a[33340] = actions(962);
	v->a[33341] = 1;
	v->a[33342] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33343] = actions(964);
	v->a[33344] = 1;
	v->a[33345] = anon_sym_DOLLAR;
	v->a[33346] = actions(966);
	v->a[33347] = 1;
	v->a[33348] = anon_sym_DQUOTE;
	v->a[33349] = actions(968);
	v->a[33350] = 1;
	v->a[33351] = anon_sym_DOLLAR_LBRACE;
	v->a[33352] = actions(970);
	v->a[33353] = 1;
	v->a[33354] = anon_sym_DOLLAR_LPAREN;
	v->a[33355] = actions(972);
	v->a[33356] = 1;
	v->a[33357] = anon_sym_BQUOTE;
	v->a[33358] = state(442);
	v->a[33359] = 2;
	small_parse_table_1668(v);
}

void	small_parse_table_1668(t_small_parse_table_array *v)
{
	v->a[33360] = sym_concatenation;
	v->a[33361] = aux_sym_for_statement_repeat1;
	v->a[33362] = actions(1297);
	v->a[33363] = 3;
	v->a[33364] = sym_raw_string;
	v->a[33365] = sym_number;
	v->a[33366] = sym_word;
	v->a[33367] = state(780);
	v->a[33368] = 5;
	v->a[33369] = sym_arithmetic_expansion;
	v->a[33370] = sym_string;
	v->a[33371] = sym_simple_expansion;
	v->a[33372] = sym_expansion;
	v->a[33373] = sym_command_substitution;
	v->a[33374] = actions(531);
	v->a[33375] = 13;
	v->a[33376] = anon_sym_PIPE;
	v->a[33377] = anon_sym_AMP_AMP;
	v->a[33378] = anon_sym_PIPE_PIPE;
	v->a[33379] = anon_sym_LT;
	small_parse_table_1669(v);
}

void	small_parse_table_1669(t_small_parse_table_array *v)
{
	v->a[33380] = anon_sym_GT;
	v->a[33381] = anon_sym_GT_GT;
	v->a[33382] = anon_sym_LT_AMP;
	v->a[33383] = anon_sym_GT_AMP;
	v->a[33384] = anon_sym_GT_PIPE;
	v->a[33385] = anon_sym_LT_GT;
	v->a[33386] = anon_sym_LT_LT;
	v->a[33387] = anon_sym_LT_LT_DASH;
	v->a[33388] = aux_sym_heredoc_redirect_token1;
	v->a[33389] = 6;
	v->a[33390] = actions(3);
	v->a[33391] = 1;
	v->a[33392] = sym_comment;
	v->a[33393] = actions(1299);
	v->a[33394] = 1;
	v->a[33395] = aux_sym_concatenation_token1;
	v->a[33396] = actions(1302);
	v->a[33397] = 1;
	v->a[33398] = sym__concat;
	v->a[33399] = state(444);
	small_parse_table_1670(v);
}

/* EOF small_parse_table_333.c */
