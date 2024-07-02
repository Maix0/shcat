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
	v->a[66102] = actions(2380);
	v->a[66103] = 1;
	v->a[66104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66105] = actions(2384);
	v->a[66106] = 1;
	v->a[66107] = anon_sym_DQUOTE;
	v->a[66108] = actions(2386);
	v->a[66109] = 1;
	v->a[66110] = anon_sym_DOLLAR_LBRACE;
	v->a[66111] = actions(2388);
	v->a[66112] = 1;
	v->a[66113] = anon_sym_DOLLAR_LPAREN;
	v->a[66114] = actions(2390);
	v->a[66115] = 1;
	v->a[66116] = anon_sym_BQUOTE;
	v->a[66117] = actions(2466);
	v->a[66118] = 1;
	v->a[66119] = anon_sym_DOLLAR;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = actions(2468);
	v->a[66121] = 1;
	v->a[66122] = sym__bare_dollar;
	v->a[66123] = actions(2464);
	v->a[66124] = 5;
	v->a[66125] = aux_sym_concatenation_token1;
	v->a[66126] = sym_raw_string;
	v->a[66127] = sym_number;
	v->a[66128] = sym__comment_word;
	v->a[66129] = sym_word;
	v->a[66130] = state(1030);
	v->a[66131] = 5;
	v->a[66132] = sym_arithmetic_expansion;
	v->a[66133] = sym_string;
	v->a[66134] = sym_simple_expansion;
	v->a[66135] = sym_expansion;
	v->a[66136] = sym_command_substitution;
	v->a[66137] = 12;
	v->a[66138] = actions(3);
	v->a[66139] = 1;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = sym_comment;
	v->a[66141] = actions(1067);
	v->a[66142] = 1;
	v->a[66143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66144] = actions(1069);
	v->a[66145] = 1;
	v->a[66146] = anon_sym_DOLLAR;
	v->a[66147] = actions(1071);
	v->a[66148] = 1;
	v->a[66149] = anon_sym_DQUOTE;
	v->a[66150] = actions(1073);
	v->a[66151] = 1;
	v->a[66152] = anon_sym_DOLLAR_LBRACE;
	v->a[66153] = actions(1075);
	v->a[66154] = 1;
	v->a[66155] = anon_sym_DOLLAR_LPAREN;
	v->a[66156] = actions(1077);
	v->a[66157] = 1;
	v->a[66158] = anon_sym_BQUOTE;
	v->a[66159] = actions(2470);
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = 1;
	v->a[66161] = aux_sym_heredoc_redirect_token1;
	v->a[66162] = state(1331);
	v->a[66163] = 1;
	v->a[66164] = aux_sym__heredoc_command;
	v->a[66165] = state(1725);
	v->a[66166] = 1;
	v->a[66167] = sym_concatenation;
	v->a[66168] = actions(1057);
	v->a[66169] = 3;
	v->a[66170] = sym_raw_string;
	v->a[66171] = sym_number;
	v->a[66172] = sym_word;
	v->a[66173] = state(1589);
	v->a[66174] = 5;
	v->a[66175] = sym_arithmetic_expansion;
	v->a[66176] = sym_string;
	v->a[66177] = sym_simple_expansion;
	v->a[66178] = sym_expansion;
	v->a[66179] = sym_command_substitution;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = 10;
	v->a[66181] = actions(3);
	v->a[66182] = 1;
	v->a[66183] = sym_comment;
	v->a[66184] = actions(2474);
	v->a[66185] = 1;
	v->a[66186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66187] = actions(2476);
	v->a[66188] = 1;
	v->a[66189] = anon_sym_DOLLAR;
	v->a[66190] = actions(2478);
	v->a[66191] = 1;
	v->a[66192] = anon_sym_DQUOTE;
	v->a[66193] = actions(2480);
	v->a[66194] = 1;
	v->a[66195] = anon_sym_DOLLAR_LBRACE;
	v->a[66196] = actions(2482);
	v->a[66197] = 1;
	v->a[66198] = anon_sym_DOLLAR_LPAREN;
	v->a[66199] = actions(2484);
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
