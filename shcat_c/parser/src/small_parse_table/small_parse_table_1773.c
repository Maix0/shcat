/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1773.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8865(t_small_parse_table_array *v)
{
	v->a[177300] = anon_sym_GT_GT;
	v->a[177301] = actions(7591);
	v->a[177302] = 2;
	v->a[177303] = anon_sym_PLUS;
	v->a[177304] = anon_sym_DASH;
	v->a[177305] = actions(7593);
	v->a[177306] = 3;
	v->a[177307] = anon_sym_STAR;
	v->a[177308] = anon_sym_SLASH;
	v->a[177309] = anon_sym_PERCENT;
	v->a[177310] = actions(7571);
	v->a[177311] = 11;
	v->a[177312] = anon_sym_PLUS_EQ;
	v->a[177313] = anon_sym_DASH_EQ;
	v->a[177314] = anon_sym_STAR_EQ;
	v->a[177315] = anon_sym_SLASH_EQ;
	v->a[177316] = anon_sym_PERCENT_EQ;
	v->a[177317] = anon_sym_STAR_STAR_EQ;
	v->a[177318] = anon_sym_LT_LT_EQ;
	v->a[177319] = anon_sym_GT_GT_EQ;
	small_parse_table_8866(v);
}

void	small_parse_table_8866(t_small_parse_table_array *v)
{
	v->a[177320] = anon_sym_AMP_EQ;
	v->a[177321] = anon_sym_CARET_EQ;
	v->a[177322] = anon_sym_PIPE_EQ;
	v->a[177323] = 24;
	v->a[177324] = actions(71);
	v->a[177325] = 1;
	v->a[177326] = sym_comment;
	v->a[177327] = actions(6474);
	v->a[177328] = 1;
	v->a[177329] = sym_word;
	v->a[177330] = actions(6480);
	v->a[177331] = 1;
	v->a[177332] = anon_sym_LPAREN;
	v->a[177333] = actions(6488);
	v->a[177334] = 1;
	v->a[177335] = anon_sym_DOLLAR;
	v->a[177336] = actions(6494);
	v->a[177337] = 1;
	v->a[177338] = aux_sym_number_token1;
	v->a[177339] = actions(6496);
	small_parse_table_8867(v);
}

void	small_parse_table_8867(t_small_parse_table_array *v)
{
	v->a[177340] = 1;
	v->a[177341] = aux_sym_number_token2;
	v->a[177342] = actions(6500);
	v->a[177343] = 1;
	v->a[177344] = anon_sym_DOLLAR_LPAREN;
	v->a[177345] = actions(6508);
	v->a[177346] = 1;
	v->a[177347] = sym_test_operator;
	v->a[177348] = actions(6510);
	v->a[177349] = 1;
	v->a[177350] = sym_extglob_pattern;
	v->a[177351] = actions(6512);
	v->a[177352] = 1;
	v->a[177353] = sym__brace_start;
	v->a[177354] = actions(7226);
	v->a[177355] = 1;
	v->a[177356] = anon_sym_DOLLAR_LBRACK;
	v->a[177357] = actions(7228);
	v->a[177358] = 1;
	v->a[177359] = sym__special_character;
	small_parse_table_8868(v);
}

void	small_parse_table_8868(t_small_parse_table_array *v)
{
	v->a[177360] = actions(7230);
	v->a[177361] = 1;
	v->a[177362] = anon_sym_DQUOTE;
	v->a[177363] = actions(7234);
	v->a[177364] = 1;
	v->a[177365] = anon_sym_DOLLAR_LBRACE;
	v->a[177366] = actions(7236);
	v->a[177367] = 1;
	v->a[177368] = anon_sym_BQUOTE;
	v->a[177369] = actions(7238);
	v->a[177370] = 1;
	v->a[177371] = anon_sym_DOLLAR_BQUOTE;
	v->a[177372] = state(6426);
	v->a[177373] = 1;
	v->a[177374] = aux_sym__literal_repeat1;
	v->a[177375] = state(7291);
	v->a[177376] = 1;
	v->a[177377] = sym_last_case_item;
	v->a[177378] = actions(7224);
	v->a[177379] = 2;
	small_parse_table_8869(v);
}

void	small_parse_table_8869(t_small_parse_table_array *v)
{
	v->a[177380] = anon_sym_LPAREN_LPAREN;
	v->a[177381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[177382] = actions(7232);
	v->a[177383] = 2;
	v->a[177384] = sym_raw_string;
	v->a[177385] = sym_ansi_c_string;
	v->a[177386] = actions(7240);
	v->a[177387] = 2;
	v->a[177388] = anon_sym_LT_LPAREN;
	v->a[177389] = anon_sym_GT_LPAREN;
	v->a[177390] = state(3477);
	v->a[177391] = 2;
	v->a[177392] = sym_case_item;
	v->a[177393] = aux_sym_case_statement_repeat1;
	v->a[177394] = state(6695);
	v->a[177395] = 2;
	v->a[177396] = sym_concatenation;
	v->a[177397] = sym__extglob_blob;
	v->a[177398] = state(6303);
	v->a[177399] = 9;
	small_parse_table_8870(v);
}

/* EOF small_parse_table_1773.c */
