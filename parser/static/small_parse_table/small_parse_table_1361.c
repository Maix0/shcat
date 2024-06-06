/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1361.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6805(t_small_parse_table_array *v)
{
	v->a[136100] = anon_sym_RBRACE3;
	v->a[136101] = state(3820);
	v->a[136102] = 1;
	v->a[136103] = sym__expansion_body;
	v->a[136104] = actions(7756);
	v->a[136105] = 2;
	v->a[136106] = anon_sym_0;
	v->a[136107] = anon_sym__;
	v->a[136108] = actions(7750);
	v->a[136109] = 7;
	v->a[136110] = anon_sym_BANG;
	v->a[136111] = anon_sym_DASH;
	v->a[136112] = anon_sym_STAR;
	v->a[136113] = anon_sym_QMARK;
	v->a[136114] = anon_sym_DOLLAR;
	v->a[136115] = anon_sym_POUND;
	v->a[136116] = anon_sym_AT;
	v->a[136117] = 11;
	v->a[136118] = actions(3);
	v->a[136119] = 1;
	small_parse_table_6806(v);
}

void	small_parse_table_6806(t_small_parse_table_array *v)
{
	v->a[136120] = sym_comment;
	v->a[136121] = actions(7760);
	v->a[136122] = 1;
	v->a[136123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136124] = actions(7766);
	v->a[136125] = 1;
	v->a[136126] = sym_string_content;
	v->a[136127] = actions(7768);
	v->a[136128] = 1;
	v->a[136129] = anon_sym_DOLLAR_LBRACE;
	v->a[136130] = actions(7770);
	v->a[136131] = 1;
	v->a[136132] = anon_sym_DOLLAR_LPAREN;
	v->a[136133] = actions(7772);
	v->a[136134] = 1;
	v->a[136135] = anon_sym_BQUOTE;
	v->a[136136] = actions(7774);
	v->a[136137] = 1;
	v->a[136138] = anon_sym_DOLLAR_BQUOTE;
	v->a[136139] = actions(7902);
	small_parse_table_6807(v);
}

void	small_parse_table_6807(t_small_parse_table_array *v)
{
	v->a[136140] = 1;
	v->a[136141] = anon_sym_DOLLAR;
	v->a[136142] = actions(7904);
	v->a[136143] = 1;
	v->a[136144] = anon_sym_DQUOTE;
	v->a[136145] = state(3034);
	v->a[136146] = 1;
	v->a[136147] = aux_sym_string_repeat1;
	v->a[136148] = state(3218);
	v->a[136149] = 4;
	v->a[136150] = sym_arithmetic_expansion;
	v->a[136151] = sym_simple_expansion;
	v->a[136152] = sym_expansion;
	v->a[136153] = sym_command_substitution;
	v->a[136154] = 11;
	v->a[136155] = actions(3);
	v->a[136156] = 1;
	v->a[136157] = sym_comment;
	v->a[136158] = actions(7760);
	v->a[136159] = 1;
	small_parse_table_6808(v);
}

void	small_parse_table_6808(t_small_parse_table_array *v)
{
	v->a[136160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136161] = actions(7766);
	v->a[136162] = 1;
	v->a[136163] = sym_string_content;
	v->a[136164] = actions(7768);
	v->a[136165] = 1;
	v->a[136166] = anon_sym_DOLLAR_LBRACE;
	v->a[136167] = actions(7770);
	v->a[136168] = 1;
	v->a[136169] = anon_sym_DOLLAR_LPAREN;
	v->a[136170] = actions(7772);
	v->a[136171] = 1;
	v->a[136172] = anon_sym_BQUOTE;
	v->a[136173] = actions(7774);
	v->a[136174] = 1;
	v->a[136175] = anon_sym_DOLLAR_BQUOTE;
	v->a[136176] = actions(7906);
	v->a[136177] = 1;
	v->a[136178] = anon_sym_DOLLAR;
	v->a[136179] = actions(7908);
	small_parse_table_6809(v);
}

void	small_parse_table_6809(t_small_parse_table_array *v)
{
	v->a[136180] = 1;
	v->a[136181] = anon_sym_DQUOTE;
	v->a[136182] = state(3042);
	v->a[136183] = 1;
	v->a[136184] = aux_sym_string_repeat1;
	v->a[136185] = state(3218);
	v->a[136186] = 4;
	v->a[136187] = sym_arithmetic_expansion;
	v->a[136188] = sym_simple_expansion;
	v->a[136189] = sym_expansion;
	v->a[136190] = sym_command_substitution;
	v->a[136191] = 11;
	v->a[136192] = actions(3);
	v->a[136193] = 1;
	v->a[136194] = sym_comment;
	v->a[136195] = actions(7542);
	v->a[136196] = 1;
	v->a[136197] = anon_sym_DQUOTE;
	v->a[136198] = actions(7760);
	v->a[136199] = 1;
	small_parse_table_6810(v);
}

/* EOF small_parse_table_1361.c */
