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
	v->a[66100] = state(1209);
	v->a[66101] = 1;
	v->a[66102] = sym_concatenation;
	v->a[66103] = actions(2625);
	v->a[66104] = 3;
	v->a[66105] = sym_raw_string;
	v->a[66106] = sym_number;
	v->a[66107] = sym_word;
	v->a[66108] = state(966);
	v->a[66109] = 5;
	v->a[66110] = sym_arithmetic_expansion;
	v->a[66111] = sym_string;
	v->a[66112] = sym_simple_expansion;
	v->a[66113] = sym_expansion;
	v->a[66114] = sym_command_substitution;
	v->a[66115] = 10;
	v->a[66116] = actions(3);
	v->a[66117] = 1;
	v->a[66118] = sym_comment;
	v->a[66119] = actions(2371);
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = 1;
	v->a[66121] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66122] = actions(2375);
	v->a[66123] = 1;
	v->a[66124] = anon_sym_DQUOTE;
	v->a[66125] = actions(2377);
	v->a[66126] = 1;
	v->a[66127] = anon_sym_DOLLAR_LBRACE;
	v->a[66128] = actions(2379);
	v->a[66129] = 1;
	v->a[66130] = anon_sym_DOLLAR_LPAREN;
	v->a[66131] = actions(2381);
	v->a[66132] = 1;
	v->a[66133] = anon_sym_BQUOTE;
	v->a[66134] = actions(2454);
	v->a[66135] = 1;
	v->a[66136] = sym__bare_dollar;
	v->a[66137] = actions(2631);
	v->a[66138] = 1;
	v->a[66139] = anon_sym_DOLLAR;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = actions(2452);
	v->a[66141] = 5;
	v->a[66142] = aux_sym_concatenation_token1;
	v->a[66143] = sym_raw_string;
	v->a[66144] = sym_number;
	v->a[66145] = sym__comment_word;
	v->a[66146] = sym_word;
	v->a[66147] = state(934);
	v->a[66148] = 5;
	v->a[66149] = sym_arithmetic_expansion;
	v->a[66150] = sym_string;
	v->a[66151] = sym_simple_expansion;
	v->a[66152] = sym_expansion;
	v->a[66153] = sym_command_substitution;
	v->a[66154] = 3;
	v->a[66155] = actions(3);
	v->a[66156] = 1;
	v->a[66157] = sym_comment;
	v->a[66158] = actions(2061);
	v->a[66159] = 2;
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = sym_file_descriptor;
	v->a[66161] = aux_sym_heredoc_redirect_token1;
	v->a[66162] = actions(2059);
	v->a[66163] = 15;
	v->a[66164] = anon_sym_esac;
	v->a[66165] = anon_sym_PIPE;
	v->a[66166] = anon_sym_SEMI_SEMI;
	v->a[66167] = anon_sym_AMP_AMP;
	v->a[66168] = anon_sym_PIPE_PIPE;
	v->a[66169] = anon_sym_LT;
	v->a[66170] = anon_sym_GT;
	v->a[66171] = anon_sym_GT_GT;
	v->a[66172] = anon_sym_LT_AMP;
	v->a[66173] = anon_sym_GT_AMP;
	v->a[66174] = anon_sym_GT_PIPE;
	v->a[66175] = anon_sym_LT_GT;
	v->a[66176] = anon_sym_LT_LT;
	v->a[66177] = anon_sym_LT_LT_DASH;
	v->a[66178] = anon_sym_SEMI;
	v->a[66179] = 10;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = actions(3);
	v->a[66181] = 1;
	v->a[66182] = sym_comment;
	v->a[66183] = actions(405);
	v->a[66184] = 1;
	v->a[66185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66186] = actions(409);
	v->a[66187] = 1;
	v->a[66188] = anon_sym_DQUOTE;
	v->a[66189] = actions(411);
	v->a[66190] = 1;
	v->a[66191] = anon_sym_DOLLAR_LBRACE;
	v->a[66192] = actions(413);
	v->a[66193] = 1;
	v->a[66194] = anon_sym_DOLLAR_LPAREN;
	v->a[66195] = actions(415);
	v->a[66196] = 1;
	v->a[66197] = anon_sym_BQUOTE;
	v->a[66198] = actions(2554);
	v->a[66199] = 1;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
