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
	v->a[88100] = aux_sym_concatenation_token1;
	v->a[88101] = actions(3160);
	v->a[88102] = 1;
	v->a[88103] = sym__concat;
	v->a[88104] = state(1781);
	v->a[88105] = 1;
	v->a[88106] = aux_sym_concatenation_repeat1;
	v->a[88107] = actions(3380);
	v->a[88108] = 10;
	v->a[88109] = aux_sym_heredoc_redirect_token1;
	v->a[88110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88111] = anon_sym_DOLLAR;
	v->a[88112] = anon_sym_DQUOTE;
	v->a[88113] = sym_raw_string;
	v->a[88114] = sym_number;
	v->a[88115] = anon_sym_DOLLAR_LBRACE;
	v->a[88116] = anon_sym_DOLLAR_LPAREN;
	v->a[88117] = anon_sym_BQUOTE;
	v->a[88118] = sym_word;
	v->a[88119] = 7;
	small_parse_table_4406(v);
}

void	small_parse_table_4406(t_small_parse_table_array *v)
{
	v->a[88120] = actions(3);
	v->a[88121] = 1;
	v->a[88122] = sym_comment;
	v->a[88123] = actions(3336);
	v->a[88124] = 1;
	v->a[88125] = aux_sym__simple_variable_name_token1;
	v->a[88126] = actions(3340);
	v->a[88127] = 1;
	v->a[88128] = sym_variable_name;
	v->a[88129] = actions(3382);
	v->a[88130] = 1;
	v->a[88131] = anon_sym_RBRACE;
	v->a[88132] = state(2271);
	v->a[88133] = 1;
	v->a[88134] = sym__expansion_body;
	v->a[88135] = actions(3338);
	v->a[88136] = 2;
	v->a[88137] = anon_sym_0;
	v->a[88138] = anon_sym__;
	v->a[88139] = actions(3334);
	small_parse_table_4407(v);
}

void	small_parse_table_4407(t_small_parse_table_array *v)
{
	v->a[88140] = 7;
	v->a[88141] = anon_sym_BANG;
	v->a[88142] = anon_sym_DASH;
	v->a[88143] = anon_sym_STAR;
	v->a[88144] = anon_sym_QMARK;
	v->a[88145] = anon_sym_DOLLAR;
	v->a[88146] = anon_sym_POUND;
	v->a[88147] = anon_sym_AT;
	v->a[88148] = 7;
	v->a[88149] = actions(3);
	v->a[88150] = 1;
	v->a[88151] = sym_comment;
	v->a[88152] = actions(3336);
	v->a[88153] = 1;
	v->a[88154] = aux_sym__simple_variable_name_token1;
	v->a[88155] = actions(3340);
	v->a[88156] = 1;
	v->a[88157] = sym_variable_name;
	v->a[88158] = actions(3384);
	v->a[88159] = 1;
	small_parse_table_4408(v);
}

void	small_parse_table_4408(t_small_parse_table_array *v)
{
	v->a[88160] = anon_sym_RBRACE;
	v->a[88161] = state(2183);
	v->a[88162] = 1;
	v->a[88163] = sym__expansion_body;
	v->a[88164] = actions(3338);
	v->a[88165] = 2;
	v->a[88166] = anon_sym_0;
	v->a[88167] = anon_sym__;
	v->a[88168] = actions(3334);
	v->a[88169] = 7;
	v->a[88170] = anon_sym_BANG;
	v->a[88171] = anon_sym_DASH;
	v->a[88172] = anon_sym_STAR;
	v->a[88173] = anon_sym_QMARK;
	v->a[88174] = anon_sym_DOLLAR;
	v->a[88175] = anon_sym_POUND;
	v->a[88176] = anon_sym_AT;
	v->a[88177] = 5;
	v->a[88178] = actions(3);
	v->a[88179] = 1;
	small_parse_table_4409(v);
}

void	small_parse_table_4409(t_small_parse_table_array *v)
{
	v->a[88180] = sym_comment;
	v->a[88181] = actions(3194);
	v->a[88182] = 1;
	v->a[88183] = sym_string_content;
	v->a[88184] = actions(3198);
	v->a[88185] = 1;
	v->a[88186] = sym_variable_name;
	v->a[88187] = actions(3196);
	v->a[88188] = 2;
	v->a[88189] = aux_sym__simple_variable_name_token1;
	v->a[88190] = aux_sym__multiline_variable_name_token1;
	v->a[88191] = actions(3190);
	v->a[88192] = 9;
	v->a[88193] = anon_sym_BANG;
	v->a[88194] = anon_sym_DASH;
	v->a[88195] = anon_sym_STAR;
	v->a[88196] = anon_sym_QMARK;
	v->a[88197] = anon_sym_DOLLAR;
	v->a[88198] = anon_sym_POUND;
	v->a[88199] = anon_sym_AT;
	small_parse_table_4410(v);
}

/* EOF small_parse_table_881.c */
