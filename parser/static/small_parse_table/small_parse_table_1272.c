/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1272.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6360(t_small_parse_table_array *v)
{
	v->a[127200] = 1;
	v->a[127201] = sym_comment;
	v->a[127202] = actions(7092);
	v->a[127203] = 1;
	v->a[127204] = aux_sym_concatenation_token1;
	v->a[127205] = actions(7094);
	v->a[127206] = 1;
	v->a[127207] = sym__concat;
	v->a[127208] = state(2702);
	v->a[127209] = 1;
	v->a[127210] = aux_sym_concatenation_repeat1;
	v->a[127211] = actions(7284);
	v->a[127212] = 3;
	v->a[127213] = sym_test_operator;
	v->a[127214] = sym__brace_start;
	v->a[127215] = aux_sym_heredoc_redirect_token1;
	v->a[127216] = actions(7282);
	v->a[127217] = 12;
	v->a[127218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127219] = anon_sym_DOLLAR;
	small_parse_table_6361(v);
}

void	small_parse_table_6361(t_small_parse_table_array *v)
{
	v->a[127220] = sym__special_character;
	v->a[127221] = anon_sym_DQUOTE;
	v->a[127222] = sym_raw_string;
	v->a[127223] = aux_sym_number_token1;
	v->a[127224] = aux_sym_number_token2;
	v->a[127225] = anon_sym_DOLLAR_LBRACE;
	v->a[127226] = anon_sym_DOLLAR_LPAREN;
	v->a[127227] = anon_sym_BQUOTE;
	v->a[127228] = anon_sym_DOLLAR_BQUOTE;
	v->a[127229] = sym_word;
	v->a[127230] = 9;
	v->a[127231] = actions(57);
	v->a[127232] = 1;
	v->a[127233] = sym_comment;
	v->a[127234] = actions(2945);
	v->a[127235] = 1;
	v->a[127236] = anon_sym_LT_LT;
	v->a[127237] = actions(5970);
	v->a[127238] = 1;
	v->a[127239] = sym_file_descriptor;
	small_parse_table_6362(v);
}

void	small_parse_table_6362(t_small_parse_table_array *v)
{
	v->a[127240] = actions(7241);
	v->a[127241] = 1;
	v->a[127242] = anon_sym_LT_LT_DASH;
	v->a[127243] = actions(7286);
	v->a[127244] = 2;
	v->a[127245] = anon_sym_AMP_AMP;
	v->a[127246] = anon_sym_PIPE_PIPE;
	v->a[127247] = actions(7290);
	v->a[127248] = 2;
	v->a[127249] = anon_sym_LT_AMP_DASH;
	v->a[127250] = anon_sym_GT_AMP_DASH;
	v->a[127251] = actions(7288);
	v->a[127252] = 3;
	v->a[127253] = anon_sym_GT_GT;
	v->a[127254] = anon_sym_AMP_GT_GT;
	v->a[127255] = anon_sym_GT_PIPE;
	v->a[127256] = state(2295);
	v->a[127257] = 3;
	v->a[127258] = sym_file_redirect;
	v->a[127259] = sym_heredoc_redirect;
	small_parse_table_6363(v);
}

void	small_parse_table_6363(t_small_parse_table_array *v)
{
	v->a[127260] = aux_sym_redirected_statement_repeat1;
	v->a[127261] = actions(5966);
	v->a[127262] = 5;
	v->a[127263] = anon_sym_LT;
	v->a[127264] = anon_sym_GT;
	v->a[127265] = anon_sym_AMP_GT;
	v->a[127266] = anon_sym_LT_AMP;
	v->a[127267] = anon_sym_GT_AMP;
	v->a[127268] = 9;
	v->a[127269] = actions(57);
	v->a[127270] = 1;
	v->a[127271] = sym_comment;
	v->a[127272] = actions(2945);
	v->a[127273] = 1;
	v->a[127274] = anon_sym_LT_LT;
	v->a[127275] = actions(5403);
	v->a[127276] = 1;
	v->a[127277] = sym_file_descriptor;
	v->a[127278] = actions(7241);
	v->a[127279] = 1;
	small_parse_table_6364(v);
}

void	small_parse_table_6364(t_small_parse_table_array *v)
{
	v->a[127280] = anon_sym_LT_LT_DASH;
	v->a[127281] = actions(7292);
	v->a[127282] = 2;
	v->a[127283] = anon_sym_AMP_AMP;
	v->a[127284] = anon_sym_PIPE_PIPE;
	v->a[127285] = actions(7296);
	v->a[127286] = 2;
	v->a[127287] = anon_sym_LT_AMP_DASH;
	v->a[127288] = anon_sym_GT_AMP_DASH;
	v->a[127289] = actions(7294);
	v->a[127290] = 3;
	v->a[127291] = anon_sym_GT_GT;
	v->a[127292] = anon_sym_AMP_GT_GT;
	v->a[127293] = anon_sym_GT_PIPE;
	v->a[127294] = state(2140);
	v->a[127295] = 3;
	v->a[127296] = sym_file_redirect;
	v->a[127297] = sym_heredoc_redirect;
	v->a[127298] = aux_sym_redirected_statement_repeat1;
	v->a[127299] = actions(5399);
	small_parse_table_6365(v);
}

/* EOF small_parse_table_1272.c */
