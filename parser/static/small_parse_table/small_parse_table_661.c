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
	v->a[66100] = sym_concatenation;
	v->a[66101] = sym__extglob_blob;
	v->a[66102] = actions(1770);
	v->a[66103] = 3;
	v->a[66104] = sym_raw_string;
	v->a[66105] = sym_number;
	v->a[66106] = sym_word;
	v->a[66107] = state(2001);
	v->a[66108] = 5;
	v->a[66109] = sym_arithmetic_expansion;
	v->a[66110] = sym_string;
	v->a[66111] = sym_simple_expansion;
	v->a[66112] = sym_expansion;
	v->a[66113] = sym_command_substitution;
	v->a[66114] = 8;
	v->a[66115] = actions(3);
	v->a[66116] = 1;
	v->a[66117] = sym_comment;
	v->a[66118] = actions(2019);
	v->a[66119] = 1;
	small_parse_table_3306(v);
}

void	small_parse_table_3306(t_small_parse_table_array *v)
{
	v->a[66120] = sym_file_descriptor;
	v->a[66121] = actions(2116);
	v->a[66122] = 1;
	v->a[66123] = aux_sym_heredoc_redirect_token1;
	v->a[66124] = actions(686);
	v->a[66125] = 2;
	v->a[66126] = anon_sym_LT_LT;
	v->a[66127] = anon_sym_LT_LT_DASH;
	v->a[66128] = actions(2015);
	v->a[66129] = 2;
	v->a[66130] = anon_sym_LT_AMP_DASH;
	v->a[66131] = anon_sym_GT_AMP_DASH;
	v->a[66132] = state(1159);
	v->a[66133] = 3;
	v->a[66134] = sym_file_redirect;
	v->a[66135] = sym_heredoc_redirect;
	v->a[66136] = aux_sym_redirected_statement_repeat1;
	v->a[66137] = actions(2013);
	v->a[66138] = 6;
	v->a[66139] = anon_sym_LT;
	small_parse_table_3307(v);
}

void	small_parse_table_3307(t_small_parse_table_array *v)
{
	v->a[66140] = anon_sym_GT;
	v->a[66141] = anon_sym_GT_GT;
	v->a[66142] = anon_sym_LT_AMP;
	v->a[66143] = anon_sym_GT_AMP;
	v->a[66144] = anon_sym_GT_PIPE;
	v->a[66145] = actions(2114);
	v->a[66146] = 7;
	v->a[66147] = anon_sym_esac;
	v->a[66148] = anon_sym_PIPE;
	v->a[66149] = anon_sym_SEMI_SEMI;
	v->a[66150] = anon_sym_AMP_AMP;
	v->a[66151] = anon_sym_PIPE_PIPE;
	v->a[66152] = anon_sym_AMP;
	v->a[66153] = anon_sym_SEMI;
	v->a[66154] = 6;
	v->a[66155] = actions(3);
	v->a[66156] = 1;
	v->a[66157] = sym_comment;
	v->a[66158] = actions(2195);
	v->a[66159] = 1;
	small_parse_table_3308(v);
}

void	small_parse_table_3308(t_small_parse_table_array *v)
{
	v->a[66160] = aux_sym_concatenation_token1;
	v->a[66161] = actions(2198);
	v->a[66162] = 1;
	v->a[66163] = sym__concat;
	v->a[66164] = state(1177);
	v->a[66165] = 1;
	v->a[66166] = aux_sym_concatenation_repeat1;
	v->a[66167] = actions(1194);
	v->a[66168] = 2;
	v->a[66169] = sym_file_descriptor;
	v->a[66170] = sym_variable_name;
	v->a[66171] = actions(1189);
	v->a[66172] = 17;
	v->a[66173] = anon_sym_LT;
	v->a[66174] = anon_sym_GT;
	v->a[66175] = anon_sym_GT_GT;
	v->a[66176] = anon_sym_LT_AMP;
	v->a[66177] = anon_sym_GT_AMP;
	v->a[66178] = anon_sym_GT_PIPE;
	v->a[66179] = anon_sym_LT_AMP_DASH;
	small_parse_table_3309(v);
}

void	small_parse_table_3309(t_small_parse_table_array *v)
{
	v->a[66180] = anon_sym_GT_AMP_DASH;
	v->a[66181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66182] = anon_sym_DOLLAR;
	v->a[66183] = anon_sym_DQUOTE;
	v->a[66184] = sym_raw_string;
	v->a[66185] = sym_number;
	v->a[66186] = anon_sym_DOLLAR_LBRACE;
	v->a[66187] = anon_sym_DOLLAR_LPAREN;
	v->a[66188] = anon_sym_BQUOTE;
	v->a[66189] = sym_word;
	v->a[66190] = 6;
	v->a[66191] = actions(3);
	v->a[66192] = 1;
	v->a[66193] = sym_comment;
	v->a[66194] = actions(2124);
	v->a[66195] = 1;
	v->a[66196] = aux_sym_concatenation_token1;
	v->a[66197] = actions(2201);
	v->a[66198] = 1;
	v->a[66199] = sym__concat;
	small_parse_table_3310(v);
}

/* EOF small_parse_table_661.c */
