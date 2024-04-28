/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2143.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10715(t_small_parse_table_array *v)
{
	v->a[214300] = actions(3403);
	v->a[214301] = 1;
	v->a[214302] = aux_sym_number_token2;
	v->a[214303] = actions(3407);
	v->a[214304] = 1;
	v->a[214305] = anon_sym_DOLLAR_LPAREN;
	v->a[214306] = actions(3417);
	v->a[214307] = 1;
	v->a[214308] = sym__brace_start;
	v->a[214309] = actions(8926);
	v->a[214310] = 1;
	v->a[214311] = anon_sym_DOLLAR_LBRACK;
	v->a[214312] = actions(8930);
	v->a[214313] = 1;
	v->a[214314] = anon_sym_DQUOTE;
	v->a[214315] = actions(8934);
	v->a[214316] = 1;
	v->a[214317] = anon_sym_DOLLAR_LBRACE;
	v->a[214318] = actions(8936);
	v->a[214319] = 1;
	small_parse_table_10716(v);
}

void	small_parse_table_10716(t_small_parse_table_array *v)
{
	v->a[214320] = anon_sym_BQUOTE;
	v->a[214321] = actions(8938);
	v->a[214322] = 1;
	v->a[214323] = anon_sym_DOLLAR_BQUOTE;
	v->a[214324] = actions(9696);
	v->a[214325] = 1;
	v->a[214326] = sym_word;
	v->a[214327] = actions(9704);
	v->a[214328] = 1;
	v->a[214329] = sym__comment_word;
	v->a[214330] = actions(10214);
	v->a[214331] = 1;
	v->a[214332] = anon_sym_DOLLAR;
	v->a[214333] = actions(8924);
	v->a[214334] = 2;
	v->a[214335] = anon_sym_LPAREN_LPAREN;
	v->a[214336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214337] = actions(8940);
	v->a[214338] = 2;
	v->a[214339] = anon_sym_LT_LPAREN;
	small_parse_table_10717(v);
}

void	small_parse_table_10717(t_small_parse_table_array *v)
{
	v->a[214340] = anon_sym_GT_LPAREN;
	v->a[214341] = actions(9700);
	v->a[214342] = 2;
	v->a[214343] = sym_test_operator;
	v->a[214344] = sym__special_character;
	v->a[214345] = actions(9702);
	v->a[214346] = 3;
	v->a[214347] = sym__bare_dollar;
	v->a[214348] = sym_raw_string;
	v->a[214349] = sym_ansi_c_string;
	v->a[214350] = state(1851);
	v->a[214351] = 9;
	v->a[214352] = sym_arithmetic_expansion;
	v->a[214353] = sym_brace_expression;
	v->a[214354] = sym_string;
	v->a[214355] = sym_translated_string;
	v->a[214356] = sym_number;
	v->a[214357] = sym_simple_expansion;
	v->a[214358] = sym_expansion;
	v->a[214359] = sym_command_substitution;
	small_parse_table_10718(v);
}

void	small_parse_table_10718(t_small_parse_table_array *v)
{
	v->a[214360] = sym_process_substitution;
	v->a[214361] = 21;
	v->a[214362] = actions(71);
	v->a[214363] = 1;
	v->a[214364] = sym_comment;
	v->a[214365] = actions(9364);
	v->a[214366] = 1;
	v->a[214367] = anon_sym_LPAREN;
	v->a[214368] = actions(9366);
	v->a[214369] = 1;
	v->a[214370] = anon_sym_BANG;
	v->a[214371] = actions(9372);
	v->a[214372] = 1;
	v->a[214373] = anon_sym_TILDE;
	v->a[214374] = actions(9374);
	v->a[214375] = 1;
	v->a[214376] = anon_sym_DOLLAR;
	v->a[214377] = actions(9376);
	v->a[214378] = 1;
	v->a[214379] = anon_sym_DQUOTE;
	small_parse_table_10719(v);
}

void	small_parse_table_10719(t_small_parse_table_array *v)
{
	v->a[214380] = actions(9378);
	v->a[214381] = 1;
	v->a[214382] = aux_sym_number_token1;
	v->a[214383] = actions(9380);
	v->a[214384] = 1;
	v->a[214385] = aux_sym_number_token2;
	v->a[214386] = actions(9382);
	v->a[214387] = 1;
	v->a[214388] = anon_sym_DOLLAR_LBRACE;
	v->a[214389] = actions(9384);
	v->a[214390] = 1;
	v->a[214391] = anon_sym_DOLLAR_LPAREN;
	v->a[214392] = actions(9386);
	v->a[214393] = 1;
	v->a[214394] = anon_sym_BQUOTE;
	v->a[214395] = actions(9388);
	v->a[214396] = 1;
	v->a[214397] = anon_sym_DOLLAR_BQUOTE;
	v->a[214398] = actions(9392);
	v->a[214399] = 1;
	small_parse_table_10720(v);
}

/* EOF small_parse_table_2143.c */
