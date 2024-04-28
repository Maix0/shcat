/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2861.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14305(t_small_parse_table_array *v)
{
	v->a[286100] = 1;
	v->a[286101] = anon_sym_LT_LT_LT;
	v->a[286102] = actions(12838);
	v->a[286103] = 1;
	v->a[286104] = sym_file_descriptor;
	v->a[286105] = actions(11533);
	v->a[286106] = 2;
	v->a[286107] = anon_sym_PIPE;
	v->a[286108] = anon_sym_LT_LT;
	v->a[286109] = actions(12836);
	v->a[286110] = 2;
	v->a[286111] = anon_sym_LT_AMP_DASH;
	v->a[286112] = anon_sym_GT_AMP_DASH;
	v->a[286113] = state(5672);
	v->a[286114] = 2;
	v->a[286115] = sym_file_redirect;
	v->a[286116] = sym_herestring_redirect;
	v->a[286117] = actions(12834);
	v->a[286118] = 3;
	v->a[286119] = anon_sym_GT_GT;
	small_parse_table_14306(v);
}

void	small_parse_table_14306(t_small_parse_table_array *v)
{
	v->a[286120] = anon_sym_AMP_GT_GT;
	v->a[286121] = anon_sym_GT_PIPE;
	v->a[286122] = actions(11535);
	v->a[286123] = 4;
	v->a[286124] = anon_sym_PIPE_PIPE;
	v->a[286125] = anon_sym_AMP_AMP;
	v->a[286126] = anon_sym_PIPE_AMP;
	v->a[286127] = anon_sym_LT_LT_DASH;
	v->a[286128] = actions(12832);
	v->a[286129] = 5;
	v->a[286130] = anon_sym_LT;
	v->a[286131] = anon_sym_GT;
	v->a[286132] = anon_sym_AMP_GT;
	v->a[286133] = anon_sym_LT_AMP;
	v->a[286134] = anon_sym_GT_AMP;
	v->a[286135] = 5;
	v->a[286136] = actions(71);
	v->a[286137] = 1;
	v->a[286138] = sym_comment;
	v->a[286139] = actions(12847);
	small_parse_table_14307(v);
}

void	small_parse_table_14307(t_small_parse_table_array *v)
{
	v->a[286140] = 1;
	v->a[286141] = sym__special_character;
	v->a[286142] = state(5426);
	v->a[286143] = 1;
	v->a[286144] = aux_sym__literal_repeat1;
	v->a[286145] = actions(5721);
	v->a[286146] = 7;
	v->a[286147] = anon_sym_PIPE;
	v->a[286148] = anon_sym_LT;
	v->a[286149] = anon_sym_GT;
	v->a[286150] = anon_sym_LT_LT;
	v->a[286151] = anon_sym_AMP_GT;
	v->a[286152] = anon_sym_LT_AMP;
	v->a[286153] = anon_sym_GT_AMP;
	v->a[286154] = actions(5723);
	v->a[286155] = 11;
	v->a[286156] = sym_file_descriptor;
	v->a[286157] = anon_sym_PIPE_PIPE;
	v->a[286158] = anon_sym_AMP_AMP;
	v->a[286159] = anon_sym_GT_GT;
	small_parse_table_14308(v);
}

void	small_parse_table_14308(t_small_parse_table_array *v)
{
	v->a[286160] = anon_sym_PIPE_AMP;
	v->a[286161] = anon_sym_RBRACK;
	v->a[286162] = anon_sym_AMP_GT_GT;
	v->a[286163] = anon_sym_GT_PIPE;
	v->a[286164] = anon_sym_LT_AMP_DASH;
	v->a[286165] = anon_sym_GT_AMP_DASH;
	v->a[286166] = anon_sym_LT_LT_DASH;
	v->a[286167] = 11;
	v->a[286168] = actions(71);
	v->a[286169] = 1;
	v->a[286170] = sym_comment;
	v->a[286171] = actions(7789);
	v->a[286172] = 1;
	v->a[286173] = anon_sym_DQUOTE;
	v->a[286174] = actions(7797);
	v->a[286175] = 1;
	v->a[286176] = anon_sym_DOLLAR_LBRACE;
	v->a[286177] = actions(12648);
	v->a[286178] = 1;
	v->a[286179] = anon_sym_LPAREN;
	small_parse_table_14309(v);
}

void	small_parse_table_14309(t_small_parse_table_array *v)
{
	v->a[286180] = actions(12650);
	v->a[286181] = 1;
	v->a[286182] = anon_sym_DOLLAR;
	v->a[286183] = actions(12654);
	v->a[286184] = 1;
	v->a[286185] = anon_sym_DOLLAR_LPAREN;
	v->a[286186] = actions(12656);
	v->a[286187] = 1;
	v->a[286188] = anon_sym_BQUOTE;
	v->a[286189] = actions(12658);
	v->a[286190] = 1;
	v->a[286191] = anon_sym_DOLLAR_BQUOTE;
	v->a[286192] = actions(7807);
	v->a[286193] = 2;
	v->a[286194] = anon_sym_LT_LPAREN;
	v->a[286195] = anon_sym_GT_LPAREN;
	v->a[286196] = actions(12849);
	v->a[286197] = 5;
	v->a[286198] = sym_variable_name;
	v->a[286199] = sym__expansion_word;
	small_parse_table_14310(v);
}

/* EOF small_parse_table_2861.c */
