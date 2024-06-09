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
	v->a[88100] = anon_sym_AT;
	v->a[88101] = anon_sym_0;
	v->a[88102] = anon_sym__;
	v->a[88103] = 10;
	v->a[88104] = actions(3);
	v->a[88105] = 1;
	v->a[88106] = sym_comment;
	v->a[88107] = actions(3712);
	v->a[88108] = 1;
	v->a[88109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88110] = actions(3716);
	v->a[88111] = 1;
	v->a[88112] = sym_string_content;
	v->a[88113] = actions(3718);
	v->a[88114] = 1;
	v->a[88115] = anon_sym_DOLLAR_LBRACE;
	v->a[88116] = actions(3720);
	v->a[88117] = 1;
	v->a[88118] = anon_sym_DOLLAR_LPAREN;
	v->a[88119] = actions(3722);
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = 1;
	v->a[88121] = anon_sym_BQUOTE;
	v->a[88122] = actions(3782);
	v->a[88123] = 1;
	v->a[88124] = anon_sym_DOLLAR;
	v->a[88125] = actions(3784);
	v->a[88126] = 1;
	v->a[88127] = anon_sym_DQUOTE;
	v->a[88128] = state(1743);
	v->a[88129] = 1;
	v->a[88130] = aux_sym_string_repeat1;
	v->a[88131] = state(1869);
	v->a[88132] = 4;
	v->a[88133] = sym_arithmetic_expansion;
	v->a[88134] = sym_simple_expansion;
	v->a[88135] = sym_expansion;
	v->a[88136] = sym_command_substitution;
	v->a[88137] = 3;
	v->a[88138] = actions(3);
	v->a[88139] = 1;
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = sym_comment;
	v->a[88141] = actions(3658);
	v->a[88142] = 1;
	v->a[88143] = sym_extglob_pattern;
	v->a[88144] = actions(3654);
	v->a[88145] = 11;
	v->a[88146] = anon_sym_LPAREN;
	v->a[88147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88148] = anon_sym_DOLLAR;
	v->a[88149] = anon_sym_DQUOTE;
	v->a[88150] = sym_raw_string;
	v->a[88151] = aux_sym_number_token1;
	v->a[88152] = aux_sym_number_token2;
	v->a[88153] = anon_sym_DOLLAR_LBRACE;
	v->a[88154] = anon_sym_DOLLAR_LPAREN;
	v->a[88155] = anon_sym_BQUOTE;
	v->a[88156] = sym_word;
	v->a[88157] = 10;
	v->a[88158] = actions(3);
	v->a[88159] = 1;
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = sym_comment;
	v->a[88161] = actions(3502);
	v->a[88162] = 1;
	v->a[88163] = anon_sym_DQUOTE;
	v->a[88164] = actions(3712);
	v->a[88165] = 1;
	v->a[88166] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88167] = actions(3716);
	v->a[88168] = 1;
	v->a[88169] = sym_string_content;
	v->a[88170] = actions(3718);
	v->a[88171] = 1;
	v->a[88172] = anon_sym_DOLLAR_LBRACE;
	v->a[88173] = actions(3720);
	v->a[88174] = 1;
	v->a[88175] = anon_sym_DOLLAR_LPAREN;
	v->a[88176] = actions(3722);
	v->a[88177] = 1;
	v->a[88178] = anon_sym_BQUOTE;
	v->a[88179] = actions(3786);
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = 1;
	v->a[88181] = anon_sym_DOLLAR;
	v->a[88182] = state(1738);
	v->a[88183] = 1;
	v->a[88184] = aux_sym_string_repeat1;
	v->a[88185] = state(1869);
	v->a[88186] = 4;
	v->a[88187] = sym_arithmetic_expansion;
	v->a[88188] = sym_simple_expansion;
	v->a[88189] = sym_expansion;
	v->a[88190] = sym_command_substitution;
	v->a[88191] = 10;
	v->a[88192] = actions(3);
	v->a[88193] = 1;
	v->a[88194] = sym_comment;
	v->a[88195] = actions(3488);
	v->a[88196] = 1;
	v->a[88197] = anon_sym_DQUOTE;
	v->a[88198] = actions(3712);
	v->a[88199] = 1;
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
