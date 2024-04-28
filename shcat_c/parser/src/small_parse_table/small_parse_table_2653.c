/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2653.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13265(t_small_parse_table_array *v)
{
	v->a[265300] = 1;
	v->a[265301] = sym_command_substitution;
	v->a[265302] = state(7377);
	v->a[265303] = 1;
	v->a[265304] = sym__expansion_body;
	v->a[265305] = actions(11762);
	v->a[265306] = 2;
	v->a[265307] = anon_sym_POUND2;
	v->a[265308] = anon_sym_EQ2;
	v->a[265309] = actions(8050);
	v->a[265310] = 3;
	v->a[265311] = sym__external_expansion_sym_hash;
	v->a[265312] = sym__external_expansion_sym_bang;
	v->a[265313] = sym__external_expansion_sym_equal;
	v->a[265314] = actions(11754);
	v->a[265315] = 4;
	v->a[265316] = anon_sym_DASH;
	v->a[265317] = anon_sym_STAR;
	v->a[265318] = anon_sym_QMARK;
	v->a[265319] = anon_sym_AT2;
	small_parse_table_13266(v);
}

void	small_parse_table_13266(t_small_parse_table_array *v)
{
	v->a[265320] = actions(11756);
	v->a[265321] = 5;
	v->a[265322] = anon_sym_BANG;
	v->a[265323] = anon_sym_DOLLAR;
	v->a[265324] = anon_sym_POUND;
	v->a[265325] = anon_sym_0;
	v->a[265326] = anon_sym__;
	v->a[265327] = 3;
	v->a[265328] = actions(3);
	v->a[265329] = 1;
	v->a[265330] = sym_comment;
	v->a[265331] = actions(1342);
	v->a[265332] = 4;
	v->a[265333] = sym__concat;
	v->a[265334] = sym_test_operator;
	v->a[265335] = sym__brace_start;
	v->a[265336] = aux_sym_heredoc_redirect_token1;
	v->a[265337] = actions(1340);
	v->a[265338] = 21;
	v->a[265339] = anon_sym_LPAREN_LPAREN;
	small_parse_table_13267(v);
}

void	small_parse_table_13267(t_small_parse_table_array *v)
{
	v->a[265340] = anon_sym_SEMI;
	v->a[265341] = anon_sym_AMP;
	v->a[265342] = anon_sym_SEMI_SEMI;
	v->a[265343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[265344] = anon_sym_DOLLAR_LBRACK;
	v->a[265345] = aux_sym_concatenation_token1;
	v->a[265346] = anon_sym_DOLLAR;
	v->a[265347] = sym__special_character;
	v->a[265348] = anon_sym_DQUOTE;
	v->a[265349] = sym_raw_string;
	v->a[265350] = sym_ansi_c_string;
	v->a[265351] = aux_sym_number_token1;
	v->a[265352] = aux_sym_number_token2;
	v->a[265353] = anon_sym_DOLLAR_LBRACE;
	v->a[265354] = anon_sym_DOLLAR_LPAREN;
	v->a[265355] = anon_sym_BQUOTE;
	v->a[265356] = anon_sym_DOLLAR_BQUOTE;
	v->a[265357] = anon_sym_LT_LPAREN;
	v->a[265358] = anon_sym_GT_LPAREN;
	v->a[265359] = sym_word;
	small_parse_table_13268(v);
}

void	small_parse_table_13268(t_small_parse_table_array *v)
{
	v->a[265360] = 16;
	v->a[265361] = actions(3);
	v->a[265362] = 1;
	v->a[265363] = sym_comment;
	v->a[265364] = actions(11760);
	v->a[265365] = 1;
	v->a[265366] = anon_sym_BANG2;
	v->a[265367] = actions(11764);
	v->a[265368] = 1;
	v->a[265369] = anon_sym_DOLLAR_LPAREN;
	v->a[265370] = actions(11766);
	v->a[265371] = 1;
	v->a[265372] = anon_sym_BQUOTE;
	v->a[265373] = actions(11768);
	v->a[265374] = 1;
	v->a[265375] = anon_sym_DOLLAR_BQUOTE;
	v->a[265376] = actions(11770);
	v->a[265377] = 1;
	v->a[265378] = aux_sym__simple_variable_name_token1;
	v->a[265379] = actions(11772);
	small_parse_table_13269(v);
}

void	small_parse_table_13269(t_small_parse_table_array *v)
{
	v->a[265380] = 1;
	v->a[265381] = sym_variable_name;
	v->a[265382] = actions(12082);
	v->a[265383] = 1;
	v->a[265384] = anon_sym_RBRACE3;
	v->a[265385] = state(3532);
	v->a[265386] = 1;
	v->a[265387] = sym_subscript;
	v->a[265388] = state(6428);
	v->a[265389] = 1;
	v->a[265390] = aux_sym__expansion_body_repeat1;
	v->a[265391] = state(6472);
	v->a[265392] = 1;
	v->a[265393] = sym_command_substitution;
	v->a[265394] = state(7260);
	v->a[265395] = 1;
	v->a[265396] = sym__expansion_body;
	v->a[265397] = actions(11762);
	v->a[265398] = 2;
	v->a[265399] = anon_sym_POUND2;
	small_parse_table_13270(v);
}

/* EOF small_parse_table_2653.c */
