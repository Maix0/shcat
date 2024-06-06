/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1201.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6005(t_small_parse_table_array *v)
{
	v->a[120100] = actions(6479);
	v->a[120101] = 1;
	v->a[120102] = sym__special_character;
	v->a[120103] = actions(6481);
	v->a[120104] = 1;
	v->a[120105] = anon_sym_DQUOTE;
	v->a[120106] = actions(6485);
	v->a[120107] = 1;
	v->a[120108] = anon_sym_DOLLAR_LBRACE;
	v->a[120109] = actions(6487);
	v->a[120110] = 1;
	v->a[120111] = anon_sym_BQUOTE;
	v->a[120112] = actions(6489);
	v->a[120113] = 1;
	v->a[120114] = anon_sym_DOLLAR_BQUOTE;
	v->a[120115] = actions(6491);
	v->a[120116] = 1;
	v->a[120117] = sym__comment_word;
	v->a[120118] = actions(7001);
	v->a[120119] = 1;
	small_parse_table_6006(v);
}

void	small_parse_table_6006(t_small_parse_table_array *v)
{
	v->a[120120] = anon_sym_DOLLAR;
	v->a[120121] = actions(6483);
	v->a[120122] = 3;
	v->a[120123] = sym_test_operator;
	v->a[120124] = sym__bare_dollar;
	v->a[120125] = sym_raw_string;
	v->a[120126] = state(2831);
	v->a[120127] = 7;
	v->a[120128] = sym_arithmetic_expansion;
	v->a[120129] = sym_brace_expression;
	v->a[120130] = sym_string;
	v->a[120131] = sym_number;
	v->a[120132] = sym_simple_expansion;
	v->a[120133] = sym_expansion;
	v->a[120134] = sym_command_substitution;
	v->a[120135] = 16;
	v->a[120136] = actions(3);
	v->a[120137] = 1;
	v->a[120138] = sym_comment;
	v->a[120139] = actions(1707);
	small_parse_table_6007(v);
}

void	small_parse_table_6007(t_small_parse_table_array *v)
{
	v->a[120140] = 1;
	v->a[120141] = aux_sym_number_token1;
	v->a[120142] = actions(1709);
	v->a[120143] = 1;
	v->a[120144] = aux_sym_number_token2;
	v->a[120145] = actions(1713);
	v->a[120146] = 1;
	v->a[120147] = anon_sym_DOLLAR_LPAREN;
	v->a[120148] = actions(1721);
	v->a[120149] = 1;
	v->a[120150] = sym__brace_start;
	v->a[120151] = actions(6743);
	v->a[120152] = 1;
	v->a[120153] = sym_word;
	v->a[120154] = actions(6745);
	v->a[120155] = 1;
	v->a[120156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120157] = actions(6747);
	v->a[120158] = 1;
	v->a[120159] = sym__special_character;
	small_parse_table_6008(v);
}

void	small_parse_table_6008(t_small_parse_table_array *v)
{
	v->a[120160] = actions(6749);
	v->a[120161] = 1;
	v->a[120162] = anon_sym_DQUOTE;
	v->a[120163] = actions(6753);
	v->a[120164] = 1;
	v->a[120165] = anon_sym_DOLLAR_LBRACE;
	v->a[120166] = actions(6755);
	v->a[120167] = 1;
	v->a[120168] = anon_sym_BQUOTE;
	v->a[120169] = actions(6757);
	v->a[120170] = 1;
	v->a[120171] = anon_sym_DOLLAR_BQUOTE;
	v->a[120172] = actions(6759);
	v->a[120173] = 1;
	v->a[120174] = sym__comment_word;
	v->a[120175] = actions(7003);
	v->a[120176] = 1;
	v->a[120177] = anon_sym_DOLLAR;
	v->a[120178] = actions(6751);
	v->a[120179] = 3;
	small_parse_table_6009(v);
}

void	small_parse_table_6009(t_small_parse_table_array *v)
{
	v->a[120180] = sym_test_operator;
	v->a[120181] = sym__bare_dollar;
	v->a[120182] = sym_raw_string;
	v->a[120183] = state(1986);
	v->a[120184] = 7;
	v->a[120185] = sym_arithmetic_expansion;
	v->a[120186] = sym_brace_expression;
	v->a[120187] = sym_string;
	v->a[120188] = sym_number;
	v->a[120189] = sym_simple_expansion;
	v->a[120190] = sym_expansion;
	v->a[120191] = sym_command_substitution;
	v->a[120192] = 16;
	v->a[120193] = actions(3);
	v->a[120194] = 1;
	v->a[120195] = sym_comment;
	v->a[120196] = actions(2313);
	v->a[120197] = 1;
	v->a[120198] = aux_sym_number_token1;
	v->a[120199] = actions(2315);
	small_parse_table_6010(v);
}

/* EOF small_parse_table_1201.c */
