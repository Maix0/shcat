/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1243.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6215(t_small_parse_table_array *v)
{
	v->a[124300] = anon_sym_LT_AMP_DASH;
	v->a[124301] = anon_sym_GT_AMP_DASH;
	v->a[124302] = anon_sym_LT_LT_DASH;
	v->a[124303] = anon_sym_LT_LT_LT;
	v->a[124304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124305] = anon_sym_DOLLAR_LBRACK;
	v->a[124306] = anon_sym_DQUOTE;
	v->a[124307] = sym_raw_string;
	v->a[124308] = sym_ansi_c_string;
	v->a[124309] = anon_sym_DOLLAR_LBRACE;
	v->a[124310] = anon_sym_BQUOTE;
	v->a[124311] = anon_sym_DOLLAR_BQUOTE;
	v->a[124312] = anon_sym_LT_LPAREN;
	v->a[124313] = anon_sym_GT_LPAREN;
	v->a[124314] = 5;
	v->a[124315] = actions(71);
	v->a[124316] = 1;
	v->a[124317] = sym_comment;
	v->a[124318] = state(2429);
	v->a[124319] = 1;
	small_parse_table_6216(v);
}

void	small_parse_table_6216(t_small_parse_table_array *v)
{
	v->a[124320] = aux_sym_concatenation_repeat1;
	v->a[124321] = actions(6514);
	v->a[124322] = 2;
	v->a[124323] = sym__concat;
	v->a[124324] = aux_sym_concatenation_token1;
	v->a[124325] = actions(5393);
	v->a[124326] = 13;
	v->a[124327] = anon_sym_PIPE;
	v->a[124328] = anon_sym_LT;
	v->a[124329] = anon_sym_GT;
	v->a[124330] = anon_sym_LT_LT;
	v->a[124331] = anon_sym_AMP_GT;
	v->a[124332] = anon_sym_LT_AMP;
	v->a[124333] = anon_sym_GT_AMP;
	v->a[124334] = anon_sym_DOLLAR;
	v->a[124335] = aux_sym_number_token1;
	v->a[124336] = aux_sym_number_token2;
	v->a[124337] = anon_sym_DOLLAR_LPAREN;
	v->a[124338] = anon_sym_BQUOTE;
	v->a[124339] = sym_word;
	small_parse_table_6217(v);
}

void	small_parse_table_6217(t_small_parse_table_array *v)
{
	v->a[124340] = actions(5395);
	v->a[124341] = 25;
	v->a[124342] = sym_file_descriptor;
	v->a[124343] = sym_variable_name;
	v->a[124344] = sym_test_operator;
	v->a[124345] = sym__brace_start;
	v->a[124346] = anon_sym_LPAREN_LPAREN;
	v->a[124347] = anon_sym_PIPE_PIPE;
	v->a[124348] = anon_sym_AMP_AMP;
	v->a[124349] = anon_sym_GT_GT;
	v->a[124350] = anon_sym_PIPE_AMP;
	v->a[124351] = anon_sym_AMP_GT_GT;
	v->a[124352] = anon_sym_GT_PIPE;
	v->a[124353] = anon_sym_LT_AMP_DASH;
	v->a[124354] = anon_sym_GT_AMP_DASH;
	v->a[124355] = anon_sym_LT_LT_DASH;
	v->a[124356] = anon_sym_LT_LT_LT;
	v->a[124357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124358] = anon_sym_DOLLAR_LBRACK;
	v->a[124359] = sym__special_character;
	small_parse_table_6218(v);
}

void	small_parse_table_6218(t_small_parse_table_array *v)
{
	v->a[124360] = anon_sym_DQUOTE;
	v->a[124361] = sym_raw_string;
	v->a[124362] = sym_ansi_c_string;
	v->a[124363] = anon_sym_DOLLAR_LBRACE;
	v->a[124364] = anon_sym_DOLLAR_BQUOTE;
	v->a[124365] = anon_sym_LT_LPAREN;
	v->a[124366] = anon_sym_GT_LPAREN;
	v->a[124367] = 26;
	v->a[124368] = actions(3);
	v->a[124369] = 1;
	v->a[124370] = sym_comment;
	v->a[124371] = actions(6480);
	v->a[124372] = 1;
	v->a[124373] = anon_sym_LPAREN;
	v->a[124374] = actions(6486);
	v->a[124375] = 1;
	v->a[124376] = anon_sym_DOLLAR_LBRACK;
	v->a[124377] = actions(6488);
	v->a[124378] = 1;
	v->a[124379] = anon_sym_DOLLAR;
	small_parse_table_6219(v);
}

void	small_parse_table_6219(t_small_parse_table_array *v)
{
	v->a[124380] = actions(6490);
	v->a[124381] = 1;
	v->a[124382] = sym__special_character;
	v->a[124383] = actions(6492);
	v->a[124384] = 1;
	v->a[124385] = anon_sym_DQUOTE;
	v->a[124386] = actions(6494);
	v->a[124387] = 1;
	v->a[124388] = aux_sym_number_token1;
	v->a[124389] = actions(6496);
	v->a[124390] = 1;
	v->a[124391] = aux_sym_number_token2;
	v->a[124392] = actions(6498);
	v->a[124393] = 1;
	v->a[124394] = anon_sym_DOLLAR_LBRACE;
	v->a[124395] = actions(6500);
	v->a[124396] = 1;
	v->a[124397] = anon_sym_DOLLAR_LPAREN;
	v->a[124398] = actions(6502);
	v->a[124399] = 1;
	small_parse_table_6220(v);
}

/* EOF small_parse_table_1243.c */
