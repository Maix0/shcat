/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1221.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6105(t_small_parse_table_array *v)
{
	v->a[122100] = 1;
	v->a[122101] = sym__comment_word;
	v->a[122102] = actions(7055);
	v->a[122103] = 1;
	v->a[122104] = anon_sym_DOLLAR;
	v->a[122105] = actions(6737);
	v->a[122106] = 3;
	v->a[122107] = sym_test_operator;
	v->a[122108] = sym__bare_dollar;
	v->a[122109] = sym_raw_string;
	v->a[122110] = state(872);
	v->a[122111] = 7;
	v->a[122112] = sym_arithmetic_expansion;
	v->a[122113] = sym_brace_expression;
	v->a[122114] = sym_string;
	v->a[122115] = sym_number;
	v->a[122116] = sym_simple_expansion;
	v->a[122117] = sym_expansion;
	v->a[122118] = sym_command_substitution;
	v->a[122119] = 16;
	small_parse_table_6106(v);
}

void	small_parse_table_6106(t_small_parse_table_array *v)
{
	v->a[122120] = actions(3);
	v->a[122121] = 1;
	v->a[122122] = sym_comment;
	v->a[122123] = actions(1745);
	v->a[122124] = 1;
	v->a[122125] = aux_sym_number_token1;
	v->a[122126] = actions(1747);
	v->a[122127] = 1;
	v->a[122128] = aux_sym_number_token2;
	v->a[122129] = actions(1751);
	v->a[122130] = 1;
	v->a[122131] = anon_sym_DOLLAR_LPAREN;
	v->a[122132] = actions(1761);
	v->a[122133] = 1;
	v->a[122134] = sym__brace_start;
	v->a[122135] = actions(6789);
	v->a[122136] = 1;
	v->a[122137] = sym_word;
	v->a[122138] = actions(6791);
	v->a[122139] = 1;
	small_parse_table_6107(v);
}

void	small_parse_table_6107(t_small_parse_table_array *v)
{
	v->a[122140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122141] = actions(6795);
	v->a[122142] = 1;
	v->a[122143] = sym__special_character;
	v->a[122144] = actions(6797);
	v->a[122145] = 1;
	v->a[122146] = anon_sym_DQUOTE;
	v->a[122147] = actions(6801);
	v->a[122148] = 1;
	v->a[122149] = anon_sym_DOLLAR_LBRACE;
	v->a[122150] = actions(6803);
	v->a[122151] = 1;
	v->a[122152] = anon_sym_BQUOTE;
	v->a[122153] = actions(6805);
	v->a[122154] = 1;
	v->a[122155] = anon_sym_DOLLAR_BQUOTE;
	v->a[122156] = actions(6807);
	v->a[122157] = 1;
	v->a[122158] = sym__comment_word;
	v->a[122159] = actions(7057);
	small_parse_table_6108(v);
}

void	small_parse_table_6108(t_small_parse_table_array *v)
{
	v->a[122160] = 1;
	v->a[122161] = anon_sym_DOLLAR;
	v->a[122162] = actions(6799);
	v->a[122163] = 3;
	v->a[122164] = sym_test_operator;
	v->a[122165] = sym__bare_dollar;
	v->a[122166] = sym_raw_string;
	v->a[122167] = state(1108);
	v->a[122168] = 7;
	v->a[122169] = sym_arithmetic_expansion;
	v->a[122170] = sym_brace_expression;
	v->a[122171] = sym_string;
	v->a[122172] = sym_number;
	v->a[122173] = sym_simple_expansion;
	v->a[122174] = sym_expansion;
	v->a[122175] = sym_command_substitution;
	v->a[122176] = 16;
	v->a[122177] = actions(3);
	v->a[122178] = 1;
	v->a[122179] = sym_comment;
	small_parse_table_6109(v);
}

void	small_parse_table_6109(t_small_parse_table_array *v)
{
	v->a[122180] = actions(1745);
	v->a[122181] = 1;
	v->a[122182] = aux_sym_number_token1;
	v->a[122183] = actions(1747);
	v->a[122184] = 1;
	v->a[122185] = aux_sym_number_token2;
	v->a[122186] = actions(1751);
	v->a[122187] = 1;
	v->a[122188] = anon_sym_DOLLAR_LPAREN;
	v->a[122189] = actions(1761);
	v->a[122190] = 1;
	v->a[122191] = sym__brace_start;
	v->a[122192] = actions(6789);
	v->a[122193] = 1;
	v->a[122194] = sym_word;
	v->a[122195] = actions(6791);
	v->a[122196] = 1;
	v->a[122197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122198] = actions(6795);
	v->a[122199] = 1;
	small_parse_table_6110(v);
}

/* EOF small_parse_table_1221.c */
