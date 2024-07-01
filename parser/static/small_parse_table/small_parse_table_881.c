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
	v->a[88100] = sym_expansion;
	v->a[88101] = sym_command_substitution;
	v->a[88102] = 10;
	v->a[88103] = actions(3);
	v->a[88104] = 1;
	v->a[88105] = sym_comment;
	v->a[88106] = actions(3414);
	v->a[88107] = 1;
	v->a[88108] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88109] = actions(3420);
	v->a[88110] = 1;
	v->a[88111] = sym_string_content;
	v->a[88112] = actions(3422);
	v->a[88113] = 1;
	v->a[88114] = anon_sym_DOLLAR_LBRACE;
	v->a[88115] = actions(3424);
	v->a[88116] = 1;
	v->a[88117] = anon_sym_DOLLAR_LPAREN;
	v->a[88118] = actions(3426);
	v->a[88119] = 1;
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = anon_sym_BQUOTE;
	v->a[88121] = actions(3636);
	v->a[88122] = 1;
	v->a[88123] = anon_sym_DOLLAR;
	v->a[88124] = actions(3638);
	v->a[88125] = 1;
	v->a[88126] = anon_sym_DQUOTE;
	v->a[88127] = state(1906);
	v->a[88128] = 1;
	v->a[88129] = aux_sym_string_repeat1;
	v->a[88130] = state(1959);
	v->a[88131] = 4;
	v->a[88132] = sym_arithmetic_expansion;
	v->a[88133] = sym_simple_expansion;
	v->a[88134] = sym_expansion;
	v->a[88135] = sym_command_substitution;
	v->a[88136] = 4;
	v->a[88137] = actions(3);
	v->a[88138] = 1;
	v->a[88139] = sym_comment;
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = actions(3642);
	v->a[88141] = 1;
	v->a[88142] = anon_sym_esac;
	v->a[88143] = actions(3644);
	v->a[88144] = 1;
	v->a[88145] = sym_extglob_pattern;
	v->a[88146] = actions(3640);
	v->a[88147] = 10;
	v->a[88148] = anon_sym_LPAREN;
	v->a[88149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88150] = anon_sym_DOLLAR;
	v->a[88151] = anon_sym_DQUOTE;
	v->a[88152] = sym_raw_string;
	v->a[88153] = sym_number;
	v->a[88154] = anon_sym_DOLLAR_LBRACE;
	v->a[88155] = anon_sym_DOLLAR_LPAREN;
	v->a[88156] = anon_sym_BQUOTE;
	v->a[88157] = sym_word;
	v->a[88158] = 10;
	v->a[88159] = actions(3);
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = 1;
	v->a[88161] = sym_comment;
	v->a[88162] = actions(3414);
	v->a[88163] = 1;
	v->a[88164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88165] = actions(3420);
	v->a[88166] = 1;
	v->a[88167] = sym_string_content;
	v->a[88168] = actions(3422);
	v->a[88169] = 1;
	v->a[88170] = anon_sym_DOLLAR_LBRACE;
	v->a[88171] = actions(3424);
	v->a[88172] = 1;
	v->a[88173] = anon_sym_DOLLAR_LPAREN;
	v->a[88174] = actions(3426);
	v->a[88175] = 1;
	v->a[88176] = anon_sym_BQUOTE;
	v->a[88177] = actions(3646);
	v->a[88178] = 1;
	v->a[88179] = anon_sym_DOLLAR;
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = actions(3648);
	v->a[88181] = 1;
	v->a[88182] = anon_sym_DQUOTE;
	v->a[88183] = state(1906);
	v->a[88184] = 1;
	v->a[88185] = aux_sym_string_repeat1;
	v->a[88186] = state(1959);
	v->a[88187] = 4;
	v->a[88188] = sym_arithmetic_expansion;
	v->a[88189] = sym_simple_expansion;
	v->a[88190] = sym_expansion;
	v->a[88191] = sym_command_substitution;
	v->a[88192] = 10;
	v->a[88193] = actions(3);
	v->a[88194] = 1;
	v->a[88195] = sym_comment;
	v->a[88196] = actions(3414);
	v->a[88197] = 1;
	v->a[88198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88199] = actions(3420);
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
