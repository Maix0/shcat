/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_881.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4405(t_small_parse_table_array *v)
{
	v->a[88100] = anon_sym_LT_AMP_DASH;
	v->a[88101] = anon_sym_GT_AMP_DASH;
	v->a[88102] = anon_sym_LT_LT_DASH;
	v->a[88103] = 10;
	v->a[88104] = actions(3);
	v->a[88105] = 1;
	v->a[88106] = sym_comment;
	v->a[88107] = actions(3200);
	v->a[88108] = 1;
	v->a[88109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88110] = actions(3202);
	v->a[88111] = 1;
	v->a[88112] = anon_sym_DOLLAR;
	v->a[88113] = actions(3204);
	v->a[88114] = 1;
	v->a[88115] = anon_sym_DQUOTE;
	v->a[88116] = actions(3206);
	v->a[88117] = 1;
	v->a[88118] = anon_sym_DOLLAR_LBRACE;
	v->a[88119] = actions(3208);
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = 1;
	v->a[88121] = anon_sym_DOLLAR_LPAREN;
	v->a[88122] = actions(3210);
	v->a[88123] = 1;
	v->a[88124] = anon_sym_BQUOTE;
	v->a[88125] = state(454);
	v->a[88126] = 2;
	v->a[88127] = sym_concatenation;
	v->a[88128] = aux_sym_for_statement_repeat1;
	v->a[88129] = actions(3573);
	v->a[88130] = 3;
	v->a[88131] = sym_raw_string;
	v->a[88132] = sym_number;
	v->a[88133] = sym_word;
	v->a[88134] = state(950);
	v->a[88135] = 5;
	v->a[88136] = sym_arithmetic_expansion;
	v->a[88137] = sym_string;
	v->a[88138] = sym_simple_expansion;
	v->a[88139] = sym_expansion;
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = sym_command_substitution;
	v->a[88141] = 10;
	v->a[88142] = actions(3);
	v->a[88143] = 1;
	v->a[88144] = sym_comment;
	v->a[88145] = actions(3377);
	v->a[88146] = 1;
	v->a[88147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88148] = actions(3379);
	v->a[88149] = 1;
	v->a[88150] = anon_sym_DOLLAR;
	v->a[88151] = actions(3381);
	v->a[88152] = 1;
	v->a[88153] = anon_sym_DQUOTE;
	v->a[88154] = actions(3383);
	v->a[88155] = 1;
	v->a[88156] = anon_sym_DOLLAR_LBRACE;
	v->a[88157] = actions(3385);
	v->a[88158] = 1;
	v->a[88159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = actions(3387);
	v->a[88161] = 1;
	v->a[88162] = anon_sym_BQUOTE;
	v->a[88163] = state(198);
	v->a[88164] = 2;
	v->a[88165] = sym_concatenation;
	v->a[88166] = aux_sym_for_statement_repeat1;
	v->a[88167] = actions(3575);
	v->a[88168] = 3;
	v->a[88169] = sym_raw_string;
	v->a[88170] = sym_number;
	v->a[88171] = sym_word;
	v->a[88172] = state(368);
	v->a[88173] = 5;
	v->a[88174] = sym_arithmetic_expansion;
	v->a[88175] = sym_string;
	v->a[88176] = sym_simple_expansion;
	v->a[88177] = sym_expansion;
	v->a[88178] = sym_command_substitution;
	v->a[88179] = 3;
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = actions(1094);
	v->a[88181] = 1;
	v->a[88182] = sym_comment;
	v->a[88183] = actions(2663);
	v->a[88184] = 7;
	v->a[88185] = anon_sym_PIPE;
	v->a[88186] = anon_sym_LT;
	v->a[88187] = anon_sym_GT;
	v->a[88188] = anon_sym_AMP_GT;
	v->a[88189] = anon_sym_LT_AMP;
	v->a[88190] = anon_sym_GT_AMP;
	v->a[88191] = anon_sym_LT_LT;
	v->a[88192] = actions(2661);
	v->a[88193] = 9;
	v->a[88194] = sym_file_descriptor;
	v->a[88195] = anon_sym_AMP_AMP;
	v->a[88196] = anon_sym_PIPE_PIPE;
	v->a[88197] = anon_sym_GT_GT;
	v->a[88198] = anon_sym_AMP_GT_GT;
	v->a[88199] = anon_sym_GT_PIPE;
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
