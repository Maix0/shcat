/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_161.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_805(t_small_parse_table_array *v)
{
	v->a[16100] = sym_while_statement;
	v->a[16101] = sym_if_statement;
	v->a[16102] = sym_case_statement;
	v->a[16103] = sym_function_definition;
	v->a[16104] = sym_compound_statement;
	v->a[16105] = sym_subshell;
	v->a[16106] = sym_list;
	v->a[16107] = sym_negated_command;
	v->a[16108] = sym_command;
	v->a[16109] = sym_variable_assignments;
	v->a[16110] = 33;
	v->a[16111] = actions(3);
	v->a[16112] = 1;
	v->a[16113] = sym_comment;
	v->a[16114] = actions(9);
	v->a[16115] = 1;
	v->a[16116] = anon_sym_for;
	v->a[16117] = actions(13);
	v->a[16118] = 1;
	v->a[16119] = anon_sym_if;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = actions(15);
	v->a[16121] = 1;
	v->a[16122] = anon_sym_case;
	v->a[16123] = actions(17);
	v->a[16124] = 1;
	v->a[16125] = anon_sym_LPAREN;
	v->a[16126] = actions(19);
	v->a[16127] = 1;
	v->a[16128] = anon_sym_LBRACE;
	v->a[16129] = actions(49);
	v->a[16130] = 1;
	v->a[16131] = sym_word;
	v->a[16132] = actions(57);
	v->a[16133] = 1;
	v->a[16134] = anon_sym_BANG;
	v->a[16135] = actions(63);
	v->a[16136] = 1;
	v->a[16137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16138] = actions(65);
	v->a[16139] = 1;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = anon_sym_DOLLAR;
	v->a[16141] = actions(67);
	v->a[16142] = 1;
	v->a[16143] = anon_sym_DQUOTE;
	v->a[16144] = actions(69);
	v->a[16145] = 1;
	v->a[16146] = sym_raw_string;
	v->a[16147] = actions(71);
	v->a[16148] = 1;
	v->a[16149] = aux_sym_number_token1;
	v->a[16150] = actions(73);
	v->a[16151] = 1;
	v->a[16152] = aux_sym_number_token2;
	v->a[16153] = actions(75);
	v->a[16154] = 1;
	v->a[16155] = anon_sym_DOLLAR_LBRACE;
	v->a[16156] = actions(77);
	v->a[16157] = 1;
	v->a[16158] = anon_sym_DOLLAR_LPAREN;
	v->a[16159] = actions(79);
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = 1;
	v->a[16161] = anon_sym_BQUOTE;
	v->a[16162] = actions(81);
	v->a[16163] = 1;
	v->a[16164] = sym_file_descriptor;
	v->a[16165] = actions(83);
	v->a[16166] = 1;
	v->a[16167] = sym_variable_name;
	v->a[16168] = state(98);
	v->a[16169] = 1;
	v->a[16170] = aux_sym__terminated_statement;
	v->a[16171] = state(190);
	v->a[16172] = 1;
	v->a[16173] = sym_command_name;
	v->a[16174] = state(285);
	v->a[16175] = 1;
	v->a[16176] = sym_variable_assignment;
	v->a[16177] = state(582);
	v->a[16178] = 1;
	v->a[16179] = sym_concatenation;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = state(587);
	v->a[16181] = 1;
	v->a[16182] = aux_sym_command_repeat1;
	v->a[16183] = state(718);
	v->a[16184] = 1;
	v->a[16185] = sym_file_redirect;
	v->a[16186] = state(1213);
	v->a[16187] = 1;
	v->a[16188] = aux_sym_redirected_statement_repeat2;
	v->a[16189] = state(1217);
	v->a[16190] = 1;
	v->a[16191] = sym_pipeline;
	v->a[16192] = state(2035);
	v->a[16193] = 1;
	v->a[16194] = sym__statement_not_pipeline;
	v->a[16195] = actions(11);
	v->a[16196] = 2;
	v->a[16197] = anon_sym_while;
	v->a[16198] = anon_sym_until;
	v->a[16199] = actions(61);
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
