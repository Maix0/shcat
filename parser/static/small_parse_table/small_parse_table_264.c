/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_264.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1320(t_small_parse_table_array *v)
{
	v->a[26400] = actions(2735);
	v->a[26401] = 1;
	v->a[26402] = anon_sym_DOLLAR_LBRACK;
	v->a[26403] = actions(2738);
	v->a[26404] = 1;
	v->a[26405] = anon_sym_DOLLAR;
	v->a[26406] = actions(2744);
	v->a[26407] = 1;
	v->a[26408] = anon_sym_DQUOTE;
	v->a[26409] = actions(2747);
	v->a[26410] = 1;
	v->a[26411] = aux_sym_number_token1;
	v->a[26412] = actions(2750);
	v->a[26413] = 1;
	v->a[26414] = aux_sym_number_token2;
	v->a[26415] = actions(2753);
	v->a[26416] = 1;
	v->a[26417] = anon_sym_DOLLAR_LBRACE;
	v->a[26418] = actions(2756);
	v->a[26419] = 1;
	small_parse_table_1321(v);
}

void	small_parse_table_1321(t_small_parse_table_array *v)
{
	v->a[26420] = anon_sym_DOLLAR_LPAREN;
	v->a[26421] = actions(2759);
	v->a[26422] = 1;
	v->a[26423] = anon_sym_BQUOTE;
	v->a[26424] = actions(2762);
	v->a[26425] = 1;
	v->a[26426] = anon_sym_DOLLAR_BQUOTE;
	v->a[26427] = actions(2771);
	v->a[26428] = 1;
	v->a[26429] = sym__brace_start;
	v->a[26430] = actions(4277);
	v->a[26431] = 1;
	v->a[26432] = sym__special_character;
	v->a[26433] = actions(4280);
	v->a[26434] = 1;
	v->a[26435] = sym_test_operator;
	v->a[26436] = state(1744);
	v->a[26437] = 1;
	v->a[26438] = aux_sym__literal_repeat1;
	v->a[26439] = actions(2732);
	small_parse_table_1322(v);
}

void	small_parse_table_1322(t_small_parse_table_array *v)
{
	v->a[26440] = 2;
	v->a[26441] = anon_sym_LPAREN_LPAREN;
	v->a[26442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26443] = actions(2765);
	v->a[26444] = 2;
	v->a[26445] = anon_sym_LT_LPAREN;
	v->a[26446] = anon_sym_GT_LPAREN;
	v->a[26447] = state(811);
	v->a[26448] = 2;
	v->a[26449] = sym_concatenation;
	v->a[26450] = aux_sym_for_statement_repeat1;
	v->a[26451] = actions(2216);
	v->a[26452] = 3;
	v->a[26453] = sym_file_descriptor;
	v->a[26454] = sym_variable_name;
	v->a[26455] = aux_sym_heredoc_redirect_token1;
	v->a[26456] = actions(4274);
	v->a[26457] = 3;
	v->a[26458] = sym_raw_string;
	v->a[26459] = sym_ansi_c_string;
	small_parse_table_1323(v);
}

void	small_parse_table_1323(t_small_parse_table_array *v)
{
	v->a[26460] = sym_word;
	v->a[26461] = state(2337);
	v->a[26462] = 9;
	v->a[26463] = sym_arithmetic_expansion;
	v->a[26464] = sym_brace_expression;
	v->a[26465] = sym_string;
	v->a[26466] = sym_translated_string;
	v->a[26467] = sym_number;
	v->a[26468] = sym_simple_expansion;
	v->a[26469] = sym_expansion;
	v->a[26470] = sym_command_substitution;
	v->a[26471] = sym_process_substitution;
	v->a[26472] = actions(2214);
	v->a[26473] = 17;
	v->a[26474] = anon_sym_PIPE_PIPE;
	v->a[26475] = anon_sym_AMP_AMP;
	v->a[26476] = anon_sym_PIPE;
	v->a[26477] = anon_sym_LT;
	v->a[26478] = anon_sym_GT;
	v->a[26479] = anon_sym_LT_LT;
	small_parse_table_1324(v);
}

void	small_parse_table_1324(t_small_parse_table_array *v)
{
	v->a[26480] = anon_sym_GT_GT;
	v->a[26481] = anon_sym_PIPE_AMP;
	v->a[26482] = anon_sym_AMP_GT;
	v->a[26483] = anon_sym_AMP_GT_GT;
	v->a[26484] = anon_sym_LT_AMP;
	v->a[26485] = anon_sym_GT_AMP;
	v->a[26486] = anon_sym_GT_PIPE;
	v->a[26487] = anon_sym_LT_AMP_DASH;
	v->a[26488] = anon_sym_GT_AMP_DASH;
	v->a[26489] = anon_sym_LT_LT_DASH;
	v->a[26490] = anon_sym_LT_LT_LT;
	v->a[26491] = 4;
	v->a[26492] = actions(71);
	v->a[26493] = 1;
	v->a[26494] = sym_comment;
	v->a[26495] = actions(2721);
	v->a[26496] = 1;
	v->a[26497] = anon_sym_BQUOTE;
	v->a[26498] = actions(2717);
	v->a[26499] = 22;
	small_parse_table_1325(v);
}

/* EOF small_parse_table_264.c */
