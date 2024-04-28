/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_913.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4565(t_small_parse_table_array *v)
{
	v->a[91300] = 1;
	v->a[91301] = anon_sym_BQUOTE;
	v->a[91302] = actions(5779);
	v->a[91303] = 1;
	v->a[91304] = sym__special_character;
	v->a[91305] = state(2717);
	v->a[91306] = 1;
	v->a[91307] = aux_sym__literal_repeat1;
	v->a[91308] = state(3087);
	v->a[91309] = 1;
	v->a[91310] = sym__expression;
	v->a[91311] = state(7159);
	v->a[91312] = 1;
	v->a[91313] = sym__test_command_binary_expression;
	v->a[91314] = actions(1129);
	v->a[91315] = 2;
	v->a[91316] = anon_sym_LPAREN_LPAREN;
	v->a[91317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91318] = actions(1165);
	v->a[91319] = 2;
	small_parse_table_4566(v);
}

void	small_parse_table_4566(t_small_parse_table_array *v)
{
	v->a[91320] = anon_sym_LT_LPAREN;
	v->a[91321] = anon_sym_GT_LPAREN;
	v->a[91322] = actions(1191);
	v->a[91323] = 2;
	v->a[91324] = anon_sym_PLUS_PLUS2;
	v->a[91325] = anon_sym_DASH_DASH2;
	v->a[91326] = actions(1193);
	v->a[91327] = 2;
	v->a[91328] = anon_sym_DASH2;
	v->a[91329] = anon_sym_PLUS2;
	v->a[91330] = actions(1199);
	v->a[91331] = 2;
	v->a[91332] = sym_raw_string;
	v->a[91333] = sym_ansi_c_string;
	v->a[91334] = state(2594);
	v->a[91335] = 6;
	v->a[91336] = sym_binary_expression;
	v->a[91337] = sym_ternary_expression;
	v->a[91338] = sym_unary_expression;
	v->a[91339] = sym_postfix_expression;
	small_parse_table_4567(v);
}

void	small_parse_table_4567(t_small_parse_table_array *v)
{
	v->a[91340] = sym_parenthesized_expression;
	v->a[91341] = sym_concatenation;
	v->a[91342] = state(2503);
	v->a[91343] = 9;
	v->a[91344] = sym_arithmetic_expansion;
	v->a[91345] = sym_brace_expression;
	v->a[91346] = sym_string;
	v->a[91347] = sym_translated_string;
	v->a[91348] = sym_number;
	v->a[91349] = sym_simple_expansion;
	v->a[91350] = sym_expansion;
	v->a[91351] = sym_command_substitution;
	v->a[91352] = sym_process_substitution;
	v->a[91353] = 3;
	v->a[91354] = actions(3);
	v->a[91355] = 1;
	v->a[91356] = sym_comment;
	v->a[91357] = actions(1263);
	v->a[91358] = 4;
	v->a[91359] = sym_file_descriptor;
	small_parse_table_4568(v);
}

void	small_parse_table_4568(t_small_parse_table_array *v)
{
	v->a[91360] = sym_test_operator;
	v->a[91361] = sym__brace_start;
	v->a[91362] = aux_sym_heredoc_redirect_token1;
	v->a[91363] = actions(1261);
	v->a[91364] = 40;
	v->a[91365] = anon_sym_LPAREN_LPAREN;
	v->a[91366] = anon_sym_SEMI;
	v->a[91367] = anon_sym_PIPE_PIPE;
	v->a[91368] = anon_sym_AMP_AMP;
	v->a[91369] = anon_sym_PIPE;
	v->a[91370] = anon_sym_AMP;
	v->a[91371] = anon_sym_LT;
	v->a[91372] = anon_sym_GT;
	v->a[91373] = anon_sym_LT_LT;
	v->a[91374] = anon_sym_GT_GT;
	v->a[91375] = anon_sym_esac;
	v->a[91376] = anon_sym_SEMI_SEMI;
	v->a[91377] = anon_sym_SEMI_AMP;
	v->a[91378] = anon_sym_SEMI_SEMI_AMP;
	v->a[91379] = anon_sym_PIPE_AMP;
	small_parse_table_4569(v);
}

void	small_parse_table_4569(t_small_parse_table_array *v)
{
	v->a[91380] = anon_sym_AMP_GT;
	v->a[91381] = anon_sym_AMP_GT_GT;
	v->a[91382] = anon_sym_LT_AMP;
	v->a[91383] = anon_sym_GT_AMP;
	v->a[91384] = anon_sym_GT_PIPE;
	v->a[91385] = anon_sym_LT_AMP_DASH;
	v->a[91386] = anon_sym_GT_AMP_DASH;
	v->a[91387] = anon_sym_LT_LT_DASH;
	v->a[91388] = anon_sym_LT_LT_LT;
	v->a[91389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91390] = anon_sym_DOLLAR_LBRACK;
	v->a[91391] = anon_sym_DOLLAR;
	v->a[91392] = sym__special_character;
	v->a[91393] = anon_sym_DQUOTE;
	v->a[91394] = sym_raw_string;
	v->a[91395] = sym_ansi_c_string;
	v->a[91396] = aux_sym_number_token1;
	v->a[91397] = aux_sym_number_token2;
	v->a[91398] = anon_sym_DOLLAR_LBRACE;
	v->a[91399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4570(v);
}

/* EOF small_parse_table_913.c */
