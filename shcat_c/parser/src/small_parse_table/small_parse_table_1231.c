/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1231.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6155(t_small_parse_table_array *v)
{
	v->a[123100] = anon_sym_LT_LT_DASH;
	v->a[123101] = anon_sym_LT_LT_LT;
	v->a[123102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123103] = anon_sym_DOLLAR_LBRACK;
	v->a[123104] = sym__special_character;
	v->a[123105] = anon_sym_DQUOTE;
	v->a[123106] = sym_raw_string;
	v->a[123107] = sym_ansi_c_string;
	v->a[123108] = anon_sym_DOLLAR_LBRACE;
	v->a[123109] = anon_sym_BQUOTE;
	v->a[123110] = anon_sym_DOLLAR_BQUOTE;
	v->a[123111] = anon_sym_LT_LPAREN;
	v->a[123112] = anon_sym_GT_LPAREN;
	v->a[123113] = 5;
	v->a[123114] = actions(71);
	v->a[123115] = 1;
	v->a[123116] = sym_comment;
	v->a[123117] = actions(6518);
	v->a[123118] = 1;
	v->a[123119] = sym__special_character;
	small_parse_table_6156(v);
}

void	small_parse_table_6156(t_small_parse_table_array *v)
{
	v->a[123120] = state(2366);
	v->a[123121] = 1;
	v->a[123122] = aux_sym__literal_repeat1;
	v->a[123123] = actions(4564);
	v->a[123124] = 14;
	v->a[123125] = anon_sym_PIPE;
	v->a[123126] = anon_sym_EQ_EQ;
	v->a[123127] = anon_sym_LT;
	v->a[123128] = anon_sym_GT;
	v->a[123129] = anon_sym_LT_LT;
	v->a[123130] = anon_sym_EQ_TILDE;
	v->a[123131] = anon_sym_AMP_GT;
	v->a[123132] = anon_sym_LT_AMP;
	v->a[123133] = anon_sym_GT_AMP;
	v->a[123134] = anon_sym_DOLLAR;
	v->a[123135] = aux_sym_number_token1;
	v->a[123136] = aux_sym_number_token2;
	v->a[123137] = anon_sym_DOLLAR_LPAREN;
	v->a[123138] = sym_word;
	v->a[123139] = actions(4566);
	small_parse_table_6157(v);
}

void	small_parse_table_6157(t_small_parse_table_array *v)
{
	v->a[123140] = 25;
	v->a[123141] = sym_file_descriptor;
	v->a[123142] = sym_test_operator;
	v->a[123143] = sym__bare_dollar;
	v->a[123144] = sym__brace_start;
	v->a[123145] = anon_sym_LPAREN_LPAREN;
	v->a[123146] = anon_sym_PIPE_PIPE;
	v->a[123147] = anon_sym_AMP_AMP;
	v->a[123148] = anon_sym_GT_GT;
	v->a[123149] = anon_sym_PIPE_AMP;
	v->a[123150] = anon_sym_AMP_GT_GT;
	v->a[123151] = anon_sym_GT_PIPE;
	v->a[123152] = anon_sym_LT_AMP_DASH;
	v->a[123153] = anon_sym_GT_AMP_DASH;
	v->a[123154] = anon_sym_LT_LT_DASH;
	v->a[123155] = anon_sym_LT_LT_LT;
	v->a[123156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123157] = anon_sym_DOLLAR_LBRACK;
	v->a[123158] = anon_sym_DQUOTE;
	v->a[123159] = sym_raw_string;
	small_parse_table_6158(v);
}

void	small_parse_table_6158(t_small_parse_table_array *v)
{
	v->a[123160] = sym_ansi_c_string;
	v->a[123161] = anon_sym_DOLLAR_LBRACE;
	v->a[123162] = anon_sym_BQUOTE;
	v->a[123163] = anon_sym_DOLLAR_BQUOTE;
	v->a[123164] = anon_sym_LT_LPAREN;
	v->a[123165] = anon_sym_GT_LPAREN;
	v->a[123166] = 26;
	v->a[123167] = actions(3);
	v->a[123168] = 1;
	v->a[123169] = sym_comment;
	v->a[123170] = actions(6480);
	v->a[123171] = 1;
	v->a[123172] = anon_sym_LPAREN;
	v->a[123173] = actions(6486);
	v->a[123174] = 1;
	v->a[123175] = anon_sym_DOLLAR_LBRACK;
	v->a[123176] = actions(6488);
	v->a[123177] = 1;
	v->a[123178] = anon_sym_DOLLAR;
	v->a[123179] = actions(6490);
	small_parse_table_6159(v);
}

void	small_parse_table_6159(t_small_parse_table_array *v)
{
	v->a[123180] = 1;
	v->a[123181] = sym__special_character;
	v->a[123182] = actions(6492);
	v->a[123183] = 1;
	v->a[123184] = anon_sym_DQUOTE;
	v->a[123185] = actions(6494);
	v->a[123186] = 1;
	v->a[123187] = aux_sym_number_token1;
	v->a[123188] = actions(6496);
	v->a[123189] = 1;
	v->a[123190] = aux_sym_number_token2;
	v->a[123191] = actions(6498);
	v->a[123192] = 1;
	v->a[123193] = anon_sym_DOLLAR_LBRACE;
	v->a[123194] = actions(6500);
	v->a[123195] = 1;
	v->a[123196] = anon_sym_DOLLAR_LPAREN;
	v->a[123197] = actions(6502);
	v->a[123198] = 1;
	v->a[123199] = anon_sym_BQUOTE;
	small_parse_table_6160(v);
}

/* EOF small_parse_table_1231.c */
