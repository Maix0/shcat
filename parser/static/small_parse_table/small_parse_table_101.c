/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_101.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_505(t_small_parse_table_array *v)
{
	v->a[10100] = anon_sym_for;
	v->a[10101] = actions(13);
	v->a[10102] = 1;
	v->a[10103] = anon_sym_if;
	v->a[10104] = actions(15);
	v->a[10105] = 1;
	v->a[10106] = anon_sym_case;
	v->a[10107] = actions(17);
	v->a[10108] = 1;
	v->a[10109] = anon_sym_LPAREN;
	v->a[10110] = actions(19);
	v->a[10111] = 1;
	v->a[10112] = anon_sym_LBRACE;
	v->a[10113] = actions(63);
	v->a[10114] = 1;
	v->a[10115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10116] = actions(65);
	v->a[10117] = 1;
	v->a[10118] = anon_sym_DOLLAR;
	v->a[10119] = actions(67);
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = 1;
	v->a[10121] = anon_sym_DQUOTE;
	v->a[10122] = actions(71);
	v->a[10123] = 1;
	v->a[10124] = aux_sym_number_token1;
	v->a[10125] = actions(73);
	v->a[10126] = 1;
	v->a[10127] = aux_sym_number_token2;
	v->a[10128] = actions(75);
	v->a[10129] = 1;
	v->a[10130] = anon_sym_DOLLAR_LBRACE;
	v->a[10131] = actions(77);
	v->a[10132] = 1;
	v->a[10133] = anon_sym_DOLLAR_LPAREN;
	v->a[10134] = actions(79);
	v->a[10135] = 1;
	v->a[10136] = anon_sym_BQUOTE;
	v->a[10137] = actions(248);
	v->a[10138] = 1;
	v->a[10139] = sym_word;
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = actions(250);
	v->a[10141] = 1;
	v->a[10142] = anon_sym_BANG;
	v->a[10143] = actions(256);
	v->a[10144] = 1;
	v->a[10145] = sym_raw_string;
	v->a[10146] = actions(258);
	v->a[10147] = 1;
	v->a[10148] = sym_file_descriptor;
	v->a[10149] = actions(260);
	v->a[10150] = 1;
	v->a[10151] = sym_variable_name;
	v->a[10152] = state(141);
	v->a[10153] = 1;
	v->a[10154] = aux_sym__statements_repeat1;
	v->a[10155] = state(175);
	v->a[10156] = 1;
	v->a[10157] = sym_command_name;
	v->a[10158] = state(278);
	v->a[10159] = 1;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = sym_variable_assignment;
	v->a[10161] = state(567);
	v->a[10162] = 1;
	v->a[10163] = aux_sym_command_repeat1;
	v->a[10164] = state(582);
	v->a[10165] = 1;
	v->a[10166] = sym_concatenation;
	v->a[10167] = state(751);
	v->a[10168] = 1;
	v->a[10169] = sym_file_redirect;
	v->a[10170] = state(1100);
	v->a[10171] = 1;
	v->a[10172] = sym_pipeline;
	v->a[10173] = state(1196);
	v->a[10174] = 1;
	v->a[10175] = aux_sym_redirected_statement_repeat2;
	v->a[10176] = state(2037);
	v->a[10177] = 1;
	v->a[10178] = sym__statement_not_pipeline;
	v->a[10179] = state(2237);
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = 1;
	v->a[10181] = sym__statements;
	v->a[10182] = actions(11);
	v->a[10183] = 2;
	v->a[10184] = anon_sym_while;
	v->a[10185] = anon_sym_until;
	v->a[10186] = actions(254);
	v->a[10187] = 2;
	v->a[10188] = anon_sym_LT_AMP_DASH;
	v->a[10189] = anon_sym_GT_AMP_DASH;
	v->a[10190] = state(295);
	v->a[10191] = 6;
	v->a[10192] = sym_arithmetic_expansion;
	v->a[10193] = sym_string;
	v->a[10194] = sym_number;
	v->a[10195] = sym_simple_expansion;
	v->a[10196] = sym_expansion;
	v->a[10197] = sym_command_substitution;
	v->a[10198] = actions(252);
	v->a[10199] = 8;
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
