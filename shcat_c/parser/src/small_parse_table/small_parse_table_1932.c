/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1932.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9660(t_small_parse_table_array *v)
{
	v->a[193200] = 1;
	v->a[193201] = aux_sym_number_token2;
	v->a[193202] = actions(8585);
	v->a[193203] = 1;
	v->a[193204] = anon_sym_DOLLAR_LBRACE;
	v->a[193205] = actions(8587);
	v->a[193206] = 1;
	v->a[193207] = anon_sym_DOLLAR_LPAREN;
	v->a[193208] = actions(8589);
	v->a[193209] = 1;
	v->a[193210] = anon_sym_BQUOTE;
	v->a[193211] = actions(8591);
	v->a[193212] = 1;
	v->a[193213] = anon_sym_DOLLAR_BQUOTE;
	v->a[193214] = actions(8595);
	v->a[193215] = 1;
	v->a[193216] = sym_test_operator;
	v->a[193217] = actions(8597);
	v->a[193218] = 1;
	v->a[193219] = sym__brace_start;
	small_parse_table_9661(v);
}

void	small_parse_table_9661(t_small_parse_table_array *v)
{
	v->a[193220] = actions(8629);
	v->a[193221] = 1;
	v->a[193222] = anon_sym_RPAREN;
	v->a[193223] = state(5365);
	v->a[193224] = 1;
	v->a[193225] = aux_sym__literal_repeat1;
	v->a[193226] = actions(8567);
	v->a[193227] = 2;
	v->a[193228] = anon_sym_LPAREN_LPAREN;
	v->a[193229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193230] = actions(8579);
	v->a[193231] = 2;
	v->a[193232] = sym_raw_string;
	v->a[193233] = sym_ansi_c_string;
	v->a[193234] = actions(8593);
	v->a[193235] = 2;
	v->a[193236] = anon_sym_LT_LPAREN;
	v->a[193237] = anon_sym_GT_LPAREN;
	v->a[193238] = state(3604);
	v->a[193239] = 2;
	small_parse_table_9662(v);
}

void	small_parse_table_9662(t_small_parse_table_array *v)
{
	v->a[193240] = sym_concatenation;
	v->a[193241] = aux_sym_for_statement_repeat1;
	v->a[193242] = state(5045);
	v->a[193243] = 9;
	v->a[193244] = sym_arithmetic_expansion;
	v->a[193245] = sym_brace_expression;
	v->a[193246] = sym_string;
	v->a[193247] = sym_translated_string;
	v->a[193248] = sym_number;
	v->a[193249] = sym_simple_expansion;
	v->a[193250] = sym_expansion;
	v->a[193251] = sym_command_substitution;
	v->a[193252] = sym_process_substitution;
	v->a[193253] = 8;
	v->a[193254] = actions(3);
	v->a[193255] = 1;
	v->a[193256] = sym_comment;
	v->a[193257] = actions(3735);
	v->a[193258] = 1;
	v->a[193259] = anon_sym_DQUOTE;
	small_parse_table_9663(v);
}

void	small_parse_table_9663(t_small_parse_table_array *v)
{
	v->a[193260] = actions(7757);
	v->a[193261] = 1;
	v->a[193262] = sym_variable_name;
	v->a[193263] = state(4808);
	v->a[193264] = 1;
	v->a[193265] = sym_string;
	v->a[193266] = actions(1241);
	v->a[193267] = 2;
	v->a[193268] = sym_test_operator;
	v->a[193269] = sym__brace_start;
	v->a[193270] = actions(7755);
	v->a[193271] = 2;
	v->a[193272] = aux_sym__simple_variable_name_token1;
	v->a[193273] = aux_sym__multiline_variable_name_token1;
	v->a[193274] = actions(7753);
	v->a[193275] = 9;
	v->a[193276] = anon_sym_DASH;
	v->a[193277] = anon_sym_STAR;
	v->a[193278] = anon_sym_BANG;
	v->a[193279] = anon_sym_QMARK;
	small_parse_table_9664(v);
}

void	small_parse_table_9664(t_small_parse_table_array *v)
{
	v->a[193280] = anon_sym_DOLLAR;
	v->a[193281] = anon_sym_POUND;
	v->a[193282] = anon_sym_AT2;
	v->a[193283] = anon_sym_0;
	v->a[193284] = anon_sym__;
	v->a[193285] = actions(1239);
	v->a[193286] = 16;
	v->a[193287] = anon_sym_LPAREN_LPAREN;
	v->a[193288] = aux_sym_heredoc_redirect_token1;
	v->a[193289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193290] = anon_sym_DOLLAR_LBRACK;
	v->a[193291] = sym__special_character;
	v->a[193292] = sym_raw_string;
	v->a[193293] = sym_ansi_c_string;
	v->a[193294] = aux_sym_number_token1;
	v->a[193295] = aux_sym_number_token2;
	v->a[193296] = anon_sym_DOLLAR_LBRACE;
	v->a[193297] = anon_sym_DOLLAR_LPAREN;
	v->a[193298] = anon_sym_BQUOTE;
	v->a[193299] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9665(v);
}

/* EOF small_parse_table_1932.c */
