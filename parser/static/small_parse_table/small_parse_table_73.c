/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_73.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_365(t_small_parse_table_array *v)
{
	v->a[7300] = actions(65);
	v->a[7301] = 1;
	v->a[7302] = anon_sym_DOLLAR;
	v->a[7303] = actions(67);
	v->a[7304] = 1;
	v->a[7305] = anon_sym_DQUOTE;
	v->a[7306] = actions(71);
	v->a[7307] = 1;
	v->a[7308] = aux_sym_number_token1;
	v->a[7309] = actions(73);
	v->a[7310] = 1;
	v->a[7311] = aux_sym_number_token2;
	v->a[7312] = actions(75);
	v->a[7313] = 1;
	v->a[7314] = anon_sym_DOLLAR_LBRACE;
	v->a[7315] = actions(77);
	v->a[7316] = 1;
	v->a[7317] = anon_sym_DOLLAR_LPAREN;
	v->a[7318] = actions(79);
	v->a[7319] = 1;
	small_parse_table_366(v);
}

void	small_parse_table_366(t_small_parse_table_array *v)
{
	v->a[7320] = anon_sym_BQUOTE;
	v->a[7321] = actions(248);
	v->a[7322] = 1;
	v->a[7323] = sym_word;
	v->a[7324] = actions(250);
	v->a[7325] = 1;
	v->a[7326] = anon_sym_BANG;
	v->a[7327] = actions(256);
	v->a[7328] = 1;
	v->a[7329] = sym_raw_string;
	v->a[7330] = actions(258);
	v->a[7331] = 1;
	v->a[7332] = sym_file_descriptor;
	v->a[7333] = actions(260);
	v->a[7334] = 1;
	v->a[7335] = sym_variable_name;
	v->a[7336] = state(141);
	v->a[7337] = 1;
	v->a[7338] = aux_sym__statements_repeat1;
	v->a[7339] = state(175);
	small_parse_table_367(v);
}

void	small_parse_table_367(t_small_parse_table_array *v)
{
	v->a[7340] = 1;
	v->a[7341] = sym_command_name;
	v->a[7342] = state(278);
	v->a[7343] = 1;
	v->a[7344] = sym_variable_assignment;
	v->a[7345] = state(567);
	v->a[7346] = 1;
	v->a[7347] = aux_sym_command_repeat1;
	v->a[7348] = state(582);
	v->a[7349] = 1;
	v->a[7350] = sym_concatenation;
	v->a[7351] = state(688);
	v->a[7352] = 1;
	v->a[7353] = sym_file_redirect;
	v->a[7354] = state(1100);
	v->a[7355] = 1;
	v->a[7356] = sym_pipeline;
	v->a[7357] = state(1196);
	v->a[7358] = 1;
	v->a[7359] = aux_sym_redirected_statement_repeat2;
	small_parse_table_368(v);
}

void	small_parse_table_368(t_small_parse_table_array *v)
{
	v->a[7360] = state(2037);
	v->a[7361] = 1;
	v->a[7362] = sym__statement_not_pipeline;
	v->a[7363] = state(2225);
	v->a[7364] = 1;
	v->a[7365] = sym__statements;
	v->a[7366] = actions(11);
	v->a[7367] = 2;
	v->a[7368] = anon_sym_while;
	v->a[7369] = anon_sym_until;
	v->a[7370] = actions(254);
	v->a[7371] = 2;
	v->a[7372] = anon_sym_LT_AMP_DASH;
	v->a[7373] = anon_sym_GT_AMP_DASH;
	v->a[7374] = state(295);
	v->a[7375] = 6;
	v->a[7376] = sym_arithmetic_expansion;
	v->a[7377] = sym_string;
	v->a[7378] = sym_number;
	v->a[7379] = sym_simple_expansion;
	small_parse_table_369(v);
}

void	small_parse_table_369(t_small_parse_table_array *v)
{
	v->a[7380] = sym_expansion;
	v->a[7381] = sym_command_substitution;
	v->a[7382] = actions(252);
	v->a[7383] = 8;
	v->a[7384] = anon_sym_LT;
	v->a[7385] = anon_sym_GT;
	v->a[7386] = anon_sym_GT_GT;
	v->a[7387] = anon_sym_AMP_GT;
	v->a[7388] = anon_sym_AMP_GT_GT;
	v->a[7389] = anon_sym_LT_AMP;
	v->a[7390] = anon_sym_GT_AMP;
	v->a[7391] = anon_sym_GT_PIPE;
	v->a[7392] = state(1031);
	v->a[7393] = 12;
	v->a[7394] = sym_redirected_statement;
	v->a[7395] = sym_for_statement;
	v->a[7396] = sym_while_statement;
	v->a[7397] = sym_if_statement;
	v->a[7398] = sym_case_statement;
	v->a[7399] = sym_function_definition;
	small_parse_table_370(v);
}

/* EOF small_parse_table_73.c */
