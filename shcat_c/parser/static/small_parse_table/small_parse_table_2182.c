/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2182.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10910(t_small_parse_table_array *v)
{
	v->a[218200] = anon_sym_DQUOTE;
	v->a[218201] = actions(9206);
	v->a[218202] = 1;
	v->a[218203] = anon_sym_DOLLAR_LBRACE;
	v->a[218204] = actions(9208);
	v->a[218205] = 1;
	v->a[218206] = anon_sym_BQUOTE;
	v->a[218207] = actions(9210);
	v->a[218208] = 1;
	v->a[218209] = anon_sym_DOLLAR_BQUOTE;
	v->a[218210] = actions(9268);
	v->a[218211] = 1;
	v->a[218212] = sym_word;
	v->a[218213] = actions(9276);
	v->a[218214] = 1;
	v->a[218215] = sym__comment_word;
	v->a[218216] = actions(10398);
	v->a[218217] = 1;
	v->a[218218] = anon_sym_DOLLAR;
	v->a[218219] = actions(9196);
	small_parse_table_10911(v);
}

void	small_parse_table_10911(t_small_parse_table_array *v)
{
	v->a[218220] = 2;
	v->a[218221] = anon_sym_LPAREN_LPAREN;
	v->a[218222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218223] = actions(9212);
	v->a[218224] = 2;
	v->a[218225] = anon_sym_LT_LPAREN;
	v->a[218226] = anon_sym_GT_LPAREN;
	v->a[218227] = actions(9272);
	v->a[218228] = 2;
	v->a[218229] = sym_test_operator;
	v->a[218230] = sym__special_character;
	v->a[218231] = actions(9274);
	v->a[218232] = 3;
	v->a[218233] = sym__bare_dollar;
	v->a[218234] = sym_raw_string;
	v->a[218235] = sym_ansi_c_string;
	v->a[218236] = state(1189);
	v->a[218237] = 9;
	v->a[218238] = sym_arithmetic_expansion;
	v->a[218239] = sym_brace_expression;
	small_parse_table_10912(v);
}

void	small_parse_table_10912(t_small_parse_table_array *v)
{
	v->a[218240] = sym_string;
	v->a[218241] = sym_translated_string;
	v->a[218242] = sym_number;
	v->a[218243] = sym_simple_expansion;
	v->a[218244] = sym_expansion;
	v->a[218245] = sym_command_substitution;
	v->a[218246] = sym_process_substitution;
	v->a[218247] = 18;
	v->a[218248] = actions(3);
	v->a[218249] = 1;
	v->a[218250] = sym_comment;
	v->a[218251] = actions(3191);
	v->a[218252] = 1;
	v->a[218253] = aux_sym_number_token1;
	v->a[218254] = actions(3193);
	v->a[218255] = 1;
	v->a[218256] = aux_sym_number_token2;
	v->a[218257] = actions(3197);
	v->a[218258] = 1;
	v->a[218259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10913(v);
}

void	small_parse_table_10913(t_small_parse_table_array *v)
{
	v->a[218260] = actions(3209);
	v->a[218261] = 1;
	v->a[218262] = sym__brace_start;
	v->a[218263] = actions(9674);
	v->a[218264] = 1;
	v->a[218265] = sym_word;
	v->a[218266] = actions(9678);
	v->a[218267] = 1;
	v->a[218268] = anon_sym_DOLLAR_LBRACK;
	v->a[218269] = actions(9682);
	v->a[218270] = 1;
	v->a[218271] = anon_sym_DQUOTE;
	v->a[218272] = actions(9686);
	v->a[218273] = 1;
	v->a[218274] = anon_sym_DOLLAR_LBRACE;
	v->a[218275] = actions(9688);
	v->a[218276] = 1;
	v->a[218277] = anon_sym_BQUOTE;
	v->a[218278] = actions(9690);
	v->a[218279] = 1;
	small_parse_table_10914(v);
}

void	small_parse_table_10914(t_small_parse_table_array *v)
{
	v->a[218280] = anon_sym_DOLLAR_BQUOTE;
	v->a[218281] = actions(9694);
	v->a[218282] = 1;
	v->a[218283] = sym__comment_word;
	v->a[218284] = actions(10400);
	v->a[218285] = 1;
	v->a[218286] = anon_sym_DOLLAR;
	v->a[218287] = actions(9676);
	v->a[218288] = 2;
	v->a[218289] = anon_sym_LPAREN_LPAREN;
	v->a[218290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218291] = actions(9680);
	v->a[218292] = 2;
	v->a[218293] = sym_test_operator;
	v->a[218294] = sym__special_character;
	v->a[218295] = actions(9692);
	v->a[218296] = 2;
	v->a[218297] = anon_sym_LT_LPAREN;
	v->a[218298] = anon_sym_GT_LPAREN;
	v->a[218299] = actions(9684);
	small_parse_table_10915(v);
}

/* EOF small_parse_table_2182.c */
