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
	v->a[33300] = sym_word;
	v->a[33301] = state(5133);
	v->a[33302] = 9;
	v->a[33303] = sym_arithmetic_expansion;
	v->a[33304] = sym_brace_expression;
	v->a[33305] = sym_string;
	v->a[33306] = sym_translated_string;
	v->a[33307] = sym_number;
	v->a[33308] = sym_simple_expansion;
	v->a[33309] = sym_expansion;
	v->a[33310] = sym_command_substitution;
	v->a[33311] = sym_process_substitution;
	v->a[33312] = actions(2498);
	v->a[33313] = 17;
	v->a[33314] = anon_sym_PIPE_PIPE;
	v->a[33315] = anon_sym_AMP_AMP;
	v->a[33316] = anon_sym_PIPE;
	v->a[33317] = anon_sym_LT;
	v->a[33318] = anon_sym_GT;
	v->a[33319] = anon_sym_LT_LT;
	small_parse_table_1666(v);
}

void	small_parse_table_1666(t_small_parse_table_array *v)
{
	v->a[33320] = anon_sym_GT_GT;
	v->a[33321] = anon_sym_PIPE_AMP;
	v->a[33322] = anon_sym_AMP_GT;
	v->a[33323] = anon_sym_AMP_GT_GT;
	v->a[33324] = anon_sym_LT_AMP;
	v->a[33325] = anon_sym_GT_AMP;
	v->a[33326] = anon_sym_GT_PIPE;
	v->a[33327] = anon_sym_LT_AMP_DASH;
	v->a[33328] = anon_sym_GT_AMP_DASH;
	v->a[33329] = anon_sym_LT_LT_DASH;
	v->a[33330] = anon_sym_LT_LT_LT;
	v->a[33331] = 3;
	v->a[33332] = actions(3);
	v->a[33333] = 1;
	v->a[33334] = sym_comment;
	v->a[33335] = actions(1253);
	v->a[33336] = 6;
	v->a[33337] = sym_file_descriptor;
	v->a[33338] = sym__concat;
	v->a[33339] = sym_test_operator;
	small_parse_table_1667(v);
}

void	small_parse_table_1667(t_small_parse_table_array *v)
{
	v->a[33340] = sym__bare_dollar;
	v->a[33341] = sym__brace_start;
	v->a[33342] = aux_sym_heredoc_redirect_token1;
	v->a[33343] = actions(1251);
	v->a[33344] = 43;
	v->a[33345] = anon_sym_LPAREN_LPAREN;
	v->a[33346] = anon_sym_SEMI;
	v->a[33347] = anon_sym_PIPE_PIPE;
	v->a[33348] = anon_sym_AMP_AMP;
	v->a[33349] = anon_sym_PIPE;
	v->a[33350] = anon_sym_AMP;
	v->a[33351] = anon_sym_EQ_EQ;
	v->a[33352] = anon_sym_LT;
	v->a[33353] = anon_sym_GT;
	v->a[33354] = anon_sym_LT_LT;
	v->a[33355] = anon_sym_GT_GT;
	v->a[33356] = anon_sym_esac;
	v->a[33357] = anon_sym_SEMI_SEMI;
	v->a[33358] = anon_sym_SEMI_AMP;
	v->a[33359] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1668(v);
}

void	small_parse_table_1668(t_small_parse_table_array *v)
{
	v->a[33360] = anon_sym_PIPE_AMP;
	v->a[33361] = anon_sym_EQ_TILDE;
	v->a[33362] = anon_sym_AMP_GT;
	v->a[33363] = anon_sym_AMP_GT_GT;
	v->a[33364] = anon_sym_LT_AMP;
	v->a[33365] = anon_sym_GT_AMP;
	v->a[33366] = anon_sym_GT_PIPE;
	v->a[33367] = anon_sym_LT_AMP_DASH;
	v->a[33368] = anon_sym_GT_AMP_DASH;
	v->a[33369] = anon_sym_LT_LT_DASH;
	v->a[33370] = anon_sym_LT_LT_LT;
	v->a[33371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33372] = anon_sym_DOLLAR_LBRACK;
	v->a[33373] = aux_sym_concatenation_token1;
	v->a[33374] = anon_sym_DOLLAR;
	v->a[33375] = sym__special_character;
	v->a[33376] = anon_sym_DQUOTE;
	v->a[33377] = sym_raw_string;
	v->a[33378] = sym_ansi_c_string;
	v->a[33379] = aux_sym_number_token1;
	small_parse_table_1669(v);
}

void	small_parse_table_1669(t_small_parse_table_array *v)
{
	v->a[33380] = aux_sym_number_token2;
	v->a[33381] = anon_sym_DOLLAR_LBRACE;
	v->a[33382] = anon_sym_DOLLAR_LPAREN;
	v->a[33383] = anon_sym_BQUOTE;
	v->a[33384] = anon_sym_DOLLAR_BQUOTE;
	v->a[33385] = anon_sym_LT_LPAREN;
	v->a[33386] = anon_sym_GT_LPAREN;
	v->a[33387] = sym_word;
	v->a[33388] = 8;
	v->a[33389] = actions(3);
	v->a[33390] = 1;
	v->a[33391] = sym_comment;
	v->a[33392] = actions(3189);
	v->a[33393] = 1;
	v->a[33394] = anon_sym_DQUOTE;
	v->a[33395] = actions(4058);
	v->a[33396] = 1;
	v->a[33397] = sym_variable_name;
	v->a[33398] = state(1737);
	v->a[33399] = 1;
	small_parse_table_1670(v);
}

/* EOF small_parse_table_333.c */
