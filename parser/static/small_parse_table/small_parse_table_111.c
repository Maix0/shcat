/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_111.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_555(t_small_parse_table_array *v)
{
	v->a[11100] = actions(9);
	v->a[11101] = 1;
	v->a[11102] = anon_sym_for;
	v->a[11103] = actions(13);
	v->a[11104] = 1;
	v->a[11105] = anon_sym_if;
	v->a[11106] = actions(15);
	v->a[11107] = 1;
	v->a[11108] = anon_sym_case;
	v->a[11109] = actions(17);
	v->a[11110] = 1;
	v->a[11111] = anon_sym_LPAREN;
	v->a[11112] = actions(19);
	v->a[11113] = 1;
	v->a[11114] = anon_sym_LBRACE;
	v->a[11115] = actions(59);
	v->a[11116] = 1;
	v->a[11117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11118] = actions(61);
	v->a[11119] = 1;
	small_parse_table_556(v);
}

void	small_parse_table_556(t_small_parse_table_array *v)
{
	v->a[11120] = anon_sym_DOLLAR;
	v->a[11121] = actions(63);
	v->a[11122] = 1;
	v->a[11123] = anon_sym_DQUOTE;
	v->a[11124] = actions(67);
	v->a[11125] = 1;
	v->a[11126] = anon_sym_DOLLAR_LBRACE;
	v->a[11127] = actions(69);
	v->a[11128] = 1;
	v->a[11129] = anon_sym_DOLLAR_LPAREN;
	v->a[11130] = actions(71);
	v->a[11131] = 1;
	v->a[11132] = anon_sym_BQUOTE;
	v->a[11133] = actions(220);
	v->a[11134] = 1;
	v->a[11135] = sym_word;
	v->a[11136] = actions(222);
	v->a[11137] = 1;
	v->a[11138] = anon_sym_BANG;
	v->a[11139] = actions(230);
	small_parse_table_557(v);
}

void	small_parse_table_557(t_small_parse_table_array *v)
{
	v->a[11140] = 1;
	v->a[11141] = sym_file_descriptor;
	v->a[11142] = actions(232);
	v->a[11143] = 1;
	v->a[11144] = sym_variable_name;
	v->a[11145] = state(138);
	v->a[11146] = 1;
	v->a[11147] = aux_sym__statements_repeat1;
	v->a[11148] = state(185);
	v->a[11149] = 1;
	v->a[11150] = sym_command_name;
	v->a[11151] = state(235);
	v->a[11152] = 1;
	v->a[11153] = sym_variable_assignment;
	v->a[11154] = state(624);
	v->a[11155] = 1;
	v->a[11156] = sym_concatenation;
	v->a[11157] = state(741);
	v->a[11158] = 1;
	v->a[11159] = sym_file_redirect;
	small_parse_table_558(v);
}

void	small_parse_table_558(t_small_parse_table_array *v)
{
	v->a[11160] = state(765);
	v->a[11161] = 1;
	v->a[11162] = aux_sym_command_repeat1;
	v->a[11163] = state(1110);
	v->a[11164] = 1;
	v->a[11165] = sym_pipeline;
	v->a[11166] = state(1188);
	v->a[11167] = 1;
	v->a[11168] = aux_sym_redirected_statement_repeat2;
	v->a[11169] = state(2115);
	v->a[11170] = 1;
	v->a[11171] = sym__statement_not_pipeline;
	v->a[11172] = state(2217);
	v->a[11173] = 1;
	v->a[11174] = sym__statements;
	v->a[11175] = actions(11);
	v->a[11176] = 2;
	v->a[11177] = anon_sym_while;
	v->a[11178] = anon_sym_until;
	v->a[11179] = actions(226);
	small_parse_table_559(v);
}

void	small_parse_table_559(t_small_parse_table_array *v)
{
	v->a[11180] = 2;
	v->a[11181] = anon_sym_LT_AMP_DASH;
	v->a[11182] = anon_sym_GT_AMP_DASH;
	v->a[11183] = actions(228);
	v->a[11184] = 2;
	v->a[11185] = sym_raw_string;
	v->a[11186] = sym_number;
	v->a[11187] = state(299);
	v->a[11188] = 5;
	v->a[11189] = sym_arithmetic_expansion;
	v->a[11190] = sym_string;
	v->a[11191] = sym_simple_expansion;
	v->a[11192] = sym_expansion;
	v->a[11193] = sym_command_substitution;
	v->a[11194] = actions(224);
	v->a[11195] = 8;
	v->a[11196] = anon_sym_LT;
	v->a[11197] = anon_sym_GT;
	v->a[11198] = anon_sym_GT_GT;
	v->a[11199] = anon_sym_AMP_GT;
	small_parse_table_560(v);
}

/* EOF small_parse_table_111.c */
