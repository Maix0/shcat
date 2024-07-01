/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = 25;
	v->a[45101] = anon_sym_for;
	v->a[45102] = anon_sym_while;
	v->a[45103] = anon_sym_until;
	v->a[45104] = anon_sym_if;
	v->a[45105] = anon_sym_case;
	v->a[45106] = anon_sym_LPAREN;
	v->a[45107] = anon_sym_LBRACE;
	v->a[45108] = anon_sym_BANG;
	v->a[45109] = anon_sym_LT;
	v->a[45110] = anon_sym_GT;
	v->a[45111] = anon_sym_GT_GT;
	v->a[45112] = anon_sym_LT_AMP;
	v->a[45113] = anon_sym_GT_AMP;
	v->a[45114] = anon_sym_GT_PIPE;
	v->a[45115] = anon_sym_LT_AMP_DASH;
	v->a[45116] = anon_sym_GT_AMP_DASH;
	v->a[45117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45118] = anon_sym_DOLLAR;
	v->a[45119] = anon_sym_DQUOTE;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = sym_raw_string;
	v->a[45121] = sym_number;
	v->a[45122] = anon_sym_DOLLAR_LBRACE;
	v->a[45123] = anon_sym_DOLLAR_LPAREN;
	v->a[45124] = anon_sym_BQUOTE;
	v->a[45125] = sym_word;
	v->a[45126] = 7;
	v->a[45127] = actions(3);
	v->a[45128] = 1;
	v->a[45129] = sym_comment;
	v->a[45130] = actions(1530);
	v->a[45131] = 1;
	v->a[45132] = sym_file_descriptor;
	v->a[45133] = actions(1533);
	v->a[45134] = 1;
	v->a[45135] = sym_variable_name;
	v->a[45136] = actions(1579);
	v->a[45137] = 1;
	v->a[45138] = ts_builtin_sym_end;
	v->a[45139] = actions(1527);
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = 8;
	v->a[45141] = anon_sym_LT;
	v->a[45142] = anon_sym_GT;
	v->a[45143] = anon_sym_GT_GT;
	v->a[45144] = anon_sym_LT_AMP;
	v->a[45145] = anon_sym_GT_AMP;
	v->a[45146] = anon_sym_GT_PIPE;
	v->a[45147] = anon_sym_LT_AMP_DASH;
	v->a[45148] = anon_sym_GT_AMP_DASH;
	v->a[45149] = actions(1520);
	v->a[45150] = 9;
	v->a[45151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45152] = anon_sym_DOLLAR;
	v->a[45153] = anon_sym_DQUOTE;
	v->a[45154] = sym_raw_string;
	v->a[45155] = sym_number;
	v->a[45156] = anon_sym_DOLLAR_LBRACE;
	v->a[45157] = anon_sym_DOLLAR_LPAREN;
	v->a[45158] = anon_sym_BQUOTE;
	v->a[45159] = sym_word;
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = actions(1522);
	v->a[45161] = 9;
	v->a[45162] = anon_sym_PIPE;
	v->a[45163] = anon_sym_SEMI_SEMI;
	v->a[45164] = anon_sym_AMP_AMP;
	v->a[45165] = anon_sym_PIPE_PIPE;
	v->a[45166] = anon_sym_LT_LT;
	v->a[45167] = anon_sym_LT_LT_DASH;
	v->a[45168] = aux_sym_heredoc_redirect_token1;
	v->a[45169] = anon_sym_AMP;
	v->a[45170] = anon_sym_SEMI;
	v->a[45171] = 4;
	v->a[45172] = actions(3);
	v->a[45173] = 1;
	v->a[45174] = sym_comment;
	v->a[45175] = actions(1575);
	v->a[45176] = 2;
	v->a[45177] = anon_sym_esac;
	v->a[45178] = anon_sym_SEMI_SEMI;
	v->a[45179] = actions(1577);
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = 2;
	v->a[45181] = sym_file_descriptor;
	v->a[45182] = sym_variable_name;
	v->a[45183] = actions(1573);
	v->a[45184] = 25;
	v->a[45185] = anon_sym_for;
	v->a[45186] = anon_sym_while;
	v->a[45187] = anon_sym_until;
	v->a[45188] = anon_sym_if;
	v->a[45189] = anon_sym_case;
	v->a[45190] = anon_sym_LPAREN;
	v->a[45191] = anon_sym_LBRACE;
	v->a[45192] = anon_sym_BANG;
	v->a[45193] = anon_sym_LT;
	v->a[45194] = anon_sym_GT;
	v->a[45195] = anon_sym_GT_GT;
	v->a[45196] = anon_sym_LT_AMP;
	v->a[45197] = anon_sym_GT_AMP;
	v->a[45198] = anon_sym_GT_PIPE;
	v->a[45199] = anon_sym_LT_AMP_DASH;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
