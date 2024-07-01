/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_661.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3305(t_small_parse_table_array *v)
{
	v->a[66100] = 1;
	v->a[66101] = sym_comment;
	v->a[66102] = actions(2324);
	v->a[66103] = 1;
	v->a[66104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66105] = actions(2328);
	v->a[66106] = 1;
	v->a[66107] = anon_sym_DQUOTE;
	v->a[66108] = actions(2330);
	v->a[66109] = 1;
	v->a[66110] = anon_sym_DOLLAR_LBRACE;
	v->a[66111] = actions(2332);
	v->a[66112] = 1;
	v->a[66113] = anon_sym_DOLLAR_LPAREN;
	v->a[66114] = actions(2334);
	v->a[66115] = 1;
	v->a[66116] = anon_sym_BQUOTE;
	v->a[66117] = actions(2336);
	v->a[66118] = 1;
	v->a[66119] = sym__bare_dollar;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = actions(2430);
	v->a[66121] = 1;
	v->a[66122] = anon_sym_DOLLAR;
	v->a[66123] = actions(2322);
	v->a[66124] = 5;
	v->a[66125] = aux_sym_concatenation_token1;
	v->a[66126] = sym_raw_string;
	v->a[66127] = sym_number;
	v->a[66128] = sym__comment_word;
	v->a[66129] = sym_word;
	v->a[66130] = state(909);
	v->a[66131] = 5;
	v->a[66132] = sym_arithmetic_expansion;
	v->a[66133] = sym_string;
	v->a[66134] = sym_simple_expansion;
	v->a[66135] = sym_expansion;
	v->a[66136] = sym_command_substitution;
	v->a[66137] = 8;
	v->a[66138] = actions(3);
	v->a[66139] = 1;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = sym_comment;
	v->a[66141] = actions(736);
	v->a[66142] = 1;
	v->a[66143] = anon_sym_PIPE;
	v->a[66144] = actions(2434);
	v->a[66145] = 1;
	v->a[66146] = aux_sym_heredoc_redirect_token1;
	v->a[66147] = actions(2436);
	v->a[66148] = 1;
	v->a[66149] = sym_file_descriptor;
	v->a[66150] = actions(744);
	v->a[66151] = 2;
	v->a[66152] = anon_sym_LT_LT;
	v->a[66153] = anon_sym_LT_LT_DASH;
	v->a[66154] = actions(1396);
	v->a[66155] = 2;
	v->a[66156] = anon_sym_AMP_AMP;
	v->a[66157] = anon_sym_PIPE_PIPE;
	v->a[66158] = state(1359);
	v->a[66159] = 3;
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = sym_file_redirect;
	v->a[66161] = sym_heredoc_redirect;
	v->a[66162] = aux_sym_redirected_statement_repeat1;
	v->a[66163] = actions(2432);
	v->a[66164] = 7;
	v->a[66165] = anon_sym_LT;
	v->a[66166] = anon_sym_GT;
	v->a[66167] = anon_sym_GT_GT;
	v->a[66168] = anon_sym_LT_AMP;
	v->a[66169] = anon_sym_GT_AMP;
	v->a[66170] = anon_sym_GT_PIPE;
	v->a[66171] = anon_sym_LT_GT;
	v->a[66172] = 10;
	v->a[66173] = actions(3);
	v->a[66174] = 1;
	v->a[66175] = sym_comment;
	v->a[66176] = actions(329);
	v->a[66177] = 1;
	v->a[66178] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66179] = actions(331);
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = 1;
	v->a[66181] = anon_sym_DOLLAR;
	v->a[66182] = actions(333);
	v->a[66183] = 1;
	v->a[66184] = anon_sym_DQUOTE;
	v->a[66185] = actions(337);
	v->a[66186] = 1;
	v->a[66187] = anon_sym_DOLLAR_LBRACE;
	v->a[66188] = actions(339);
	v->a[66189] = 1;
	v->a[66190] = anon_sym_DOLLAR_LPAREN;
	v->a[66191] = actions(341);
	v->a[66192] = 1;
	v->a[66193] = anon_sym_BQUOTE;
	v->a[66194] = actions(2314);
	v->a[66195] = 1;
	v->a[66196] = sym__bare_dollar;
	v->a[66197] = actions(2310);
	v->a[66198] = 5;
	v->a[66199] = aux_sym_concatenation_token1;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
