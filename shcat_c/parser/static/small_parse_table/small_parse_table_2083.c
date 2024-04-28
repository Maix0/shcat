/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2083.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10415(t_small_parse_table_array *v)
{
	v->a[208300] = 1;
	v->a[208301] = anon_sym_DOLLAR;
	v->a[208302] = actions(9764);
	v->a[208303] = 1;
	v->a[208304] = anon_sym_DQUOTE;
	v->a[208305] = actions(9768);
	v->a[208306] = 1;
	v->a[208307] = aux_sym_number_token1;
	v->a[208308] = actions(9770);
	v->a[208309] = 1;
	v->a[208310] = aux_sym_number_token2;
	v->a[208311] = actions(9772);
	v->a[208312] = 1;
	v->a[208313] = anon_sym_DOLLAR_LBRACE;
	v->a[208314] = actions(9774);
	v->a[208315] = 1;
	v->a[208316] = anon_sym_DOLLAR_LPAREN;
	v->a[208317] = actions(9776);
	v->a[208318] = 1;
	v->a[208319] = anon_sym_BQUOTE;
	small_parse_table_10416(v);
}

void	small_parse_table_10416(t_small_parse_table_array *v)
{
	v->a[208320] = actions(9778);
	v->a[208321] = 1;
	v->a[208322] = anon_sym_DOLLAR_BQUOTE;
	v->a[208323] = actions(9782);
	v->a[208324] = 1;
	v->a[208325] = sym__comment_word;
	v->a[208326] = actions(9784);
	v->a[208327] = 1;
	v->a[208328] = sym__brace_start;
	v->a[208329] = actions(9756);
	v->a[208330] = 2;
	v->a[208331] = anon_sym_LPAREN_LPAREN;
	v->a[208332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208333] = actions(9762);
	v->a[208334] = 2;
	v->a[208335] = sym_test_operator;
	v->a[208336] = sym__special_character;
	v->a[208337] = actions(9780);
	v->a[208338] = 2;
	v->a[208339] = anon_sym_LT_LPAREN;
	small_parse_table_10417(v);
}

void	small_parse_table_10417(t_small_parse_table_array *v)
{
	v->a[208340] = anon_sym_GT_LPAREN;
	v->a[208341] = actions(9766);
	v->a[208342] = 3;
	v->a[208343] = sym__bare_dollar;
	v->a[208344] = sym_raw_string;
	v->a[208345] = sym_ansi_c_string;
	v->a[208346] = state(6225);
	v->a[208347] = 9;
	v->a[208348] = sym_arithmetic_expansion;
	v->a[208349] = sym_brace_expression;
	v->a[208350] = sym_string;
	v->a[208351] = sym_translated_string;
	v->a[208352] = sym_number;
	v->a[208353] = sym_simple_expansion;
	v->a[208354] = sym_expansion;
	v->a[208355] = sym_command_substitution;
	v->a[208356] = sym_process_substitution;
	v->a[208357] = 20;
	v->a[208358] = actions(71);
	v->a[208359] = 1;
	small_parse_table_10418(v);
}

void	small_parse_table_10418(t_small_parse_table_array *v)
{
	v->a[208360] = sym_comment;
	v->a[208361] = actions(8102);
	v->a[208362] = 1;
	v->a[208363] = anon_sym_DOLLAR_LBRACK;
	v->a[208364] = actions(8104);
	v->a[208365] = 1;
	v->a[208366] = anon_sym_DOLLAR;
	v->a[208367] = actions(8106);
	v->a[208368] = 1;
	v->a[208369] = sym__special_character;
	v->a[208370] = actions(8108);
	v->a[208371] = 1;
	v->a[208372] = anon_sym_DQUOTE;
	v->a[208373] = actions(8112);
	v->a[208374] = 1;
	v->a[208375] = aux_sym_number_token1;
	v->a[208376] = actions(8114);
	v->a[208377] = 1;
	v->a[208378] = aux_sym_number_token2;
	v->a[208379] = actions(8116);
	small_parse_table_10419(v);
}

void	small_parse_table_10419(t_small_parse_table_array *v)
{
	v->a[208380] = 1;
	v->a[208381] = anon_sym_DOLLAR_LBRACE;
	v->a[208382] = actions(8118);
	v->a[208383] = 1;
	v->a[208384] = anon_sym_DOLLAR_LPAREN;
	v->a[208385] = actions(8120);
	v->a[208386] = 1;
	v->a[208387] = anon_sym_BQUOTE;
	v->a[208388] = actions(8122);
	v->a[208389] = 1;
	v->a[208390] = anon_sym_DOLLAR_BQUOTE;
	v->a[208391] = actions(8132);
	v->a[208392] = 1;
	v->a[208393] = sym__brace_start;
	v->a[208394] = actions(9786);
	v->a[208395] = 1;
	v->a[208396] = sym_word;
	v->a[208397] = actions(9790);
	v->a[208398] = 1;
	v->a[208399] = sym_test_operator;
	small_parse_table_10420(v);
}

/* EOF small_parse_table_2083.c */
