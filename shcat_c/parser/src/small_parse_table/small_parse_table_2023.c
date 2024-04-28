/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2023.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10115(t_small_parse_table_array *v)
{
	v->a[202300] = state(2337);
	v->a[202301] = 9;
	v->a[202302] = sym_arithmetic_expansion;
	v->a[202303] = sym_brace_expression;
	v->a[202304] = sym_string;
	v->a[202305] = sym_translated_string;
	v->a[202306] = sym_number;
	v->a[202307] = sym_simple_expansion;
	v->a[202308] = sym_expansion;
	v->a[202309] = sym_command_substitution;
	v->a[202310] = sym_process_substitution;
	v->a[202311] = 20;
	v->a[202312] = actions(71);
	v->a[202313] = 1;
	v->a[202314] = sym_comment;
	v->a[202315] = actions(3731);
	v->a[202316] = 1;
	v->a[202317] = anon_sym_DOLLAR;
	v->a[202318] = actions(3737);
	v->a[202319] = 1;
	small_parse_table_10116(v);
}

void	small_parse_table_10116(t_small_parse_table_array *v)
{
	v->a[202320] = aux_sym_number_token1;
	v->a[202321] = actions(3739);
	v->a[202322] = 1;
	v->a[202323] = aux_sym_number_token2;
	v->a[202324] = actions(3743);
	v->a[202325] = 1;
	v->a[202326] = anon_sym_DOLLAR_LPAREN;
	v->a[202327] = actions(3755);
	v->a[202328] = 1;
	v->a[202329] = sym__brace_start;
	v->a[202330] = actions(7759);
	v->a[202331] = 1;
	v->a[202332] = sym_word;
	v->a[202333] = actions(7767);
	v->a[202334] = 1;
	v->a[202335] = sym_test_operator;
	v->a[202336] = actions(8820);
	v->a[202337] = 1;
	v->a[202338] = anon_sym_DOLLAR_LBRACK;
	v->a[202339] = actions(8822);
	small_parse_table_10117(v);
}

void	small_parse_table_10117(t_small_parse_table_array *v)
{
	v->a[202340] = 1;
	v->a[202341] = sym__special_character;
	v->a[202342] = actions(8824);
	v->a[202343] = 1;
	v->a[202344] = anon_sym_DQUOTE;
	v->a[202345] = actions(8828);
	v->a[202346] = 1;
	v->a[202347] = anon_sym_DOLLAR_LBRACE;
	v->a[202348] = actions(8830);
	v->a[202349] = 1;
	v->a[202350] = anon_sym_BQUOTE;
	v->a[202351] = actions(8832);
	v->a[202352] = 1;
	v->a[202353] = anon_sym_DOLLAR_BQUOTE;
	v->a[202354] = state(4975);
	v->a[202355] = 1;
	v->a[202356] = aux_sym__literal_repeat1;
	v->a[202357] = actions(8818);
	v->a[202358] = 2;
	v->a[202359] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10118(v);
}

void	small_parse_table_10118(t_small_parse_table_array *v)
{
	v->a[202360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202361] = actions(8826);
	v->a[202362] = 2;
	v->a[202363] = sym_raw_string;
	v->a[202364] = sym_ansi_c_string;
	v->a[202365] = actions(8834);
	v->a[202366] = 2;
	v->a[202367] = anon_sym_LT_LPAREN;
	v->a[202368] = anon_sym_GT_LPAREN;
	v->a[202369] = state(3475);
	v->a[202370] = 2;
	v->a[202371] = sym_concatenation;
	v->a[202372] = aux_sym_for_statement_repeat1;
	v->a[202373] = state(4460);
	v->a[202374] = 9;
	v->a[202375] = sym_arithmetic_expansion;
	v->a[202376] = sym_brace_expression;
	v->a[202377] = sym_string;
	v->a[202378] = sym_translated_string;
	v->a[202379] = sym_number;
	small_parse_table_10119(v);
}

void	small_parse_table_10119(t_small_parse_table_array *v)
{
	v->a[202380] = sym_simple_expansion;
	v->a[202381] = sym_expansion;
	v->a[202382] = sym_command_substitution;
	v->a[202383] = sym_process_substitution;
	v->a[202384] = 20;
	v->a[202385] = actions(71);
	v->a[202386] = 1;
	v->a[202387] = sym_comment;
	v->a[202388] = actions(8178);
	v->a[202389] = 1;
	v->a[202390] = anon_sym_DOLLAR_LBRACK;
	v->a[202391] = actions(8180);
	v->a[202392] = 1;
	v->a[202393] = anon_sym_DOLLAR;
	v->a[202394] = actions(8184);
	v->a[202395] = 1;
	v->a[202396] = anon_sym_DQUOTE;
	v->a[202397] = actions(8188);
	v->a[202398] = 1;
	v->a[202399] = aux_sym_number_token1;
	small_parse_table_10120(v);
}

/* EOF small_parse_table_2023.c */
