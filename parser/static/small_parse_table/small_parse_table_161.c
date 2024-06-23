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
	v->a[16100] = actions(55);
	v->a[16101] = 8;
	v->a[16102] = anon_sym_LT;
	v->a[16103] = anon_sym_GT;
	v->a[16104] = anon_sym_GT_GT;
	v->a[16105] = anon_sym_AMP_GT;
	v->a[16106] = anon_sym_AMP_GT_GT;
	v->a[16107] = anon_sym_LT_AMP;
	v->a[16108] = anon_sym_GT_AMP;
	v->a[16109] = anon_sym_GT_PIPE;
	v->a[16110] = state(1312);
	v->a[16111] = 12;
	v->a[16112] = sym_redirected_statement;
	v->a[16113] = sym_for_statement;
	v->a[16114] = sym_while_statement;
	v->a[16115] = sym_if_statement;
	v->a[16116] = sym_case_statement;
	v->a[16117] = sym_function_definition;
	v->a[16118] = sym_compound_statement;
	v->a[16119] = sym_subshell;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = sym_list;
	v->a[16121] = sym_negated_command;
	v->a[16122] = sym_command;
	v->a[16123] = sym__variable_assignments;
	v->a[16124] = 31;
	v->a[16125] = actions(3);
	v->a[16126] = 1;
	v->a[16127] = sym_comment;
	v->a[16128] = actions(9);
	v->a[16129] = 1;
	v->a[16130] = anon_sym_for;
	v->a[16131] = actions(13);
	v->a[16132] = 1;
	v->a[16133] = anon_sym_if;
	v->a[16134] = actions(15);
	v->a[16135] = 1;
	v->a[16136] = anon_sym_case;
	v->a[16137] = actions(17);
	v->a[16138] = 1;
	v->a[16139] = anon_sym_LPAREN;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = actions(19);
	v->a[16141] = 1;
	v->a[16142] = anon_sym_LBRACE;
	v->a[16143] = actions(45);
	v->a[16144] = 1;
	v->a[16145] = sym_word;
	v->a[16146] = actions(53);
	v->a[16147] = 1;
	v->a[16148] = anon_sym_BANG;
	v->a[16149] = actions(59);
	v->a[16150] = 1;
	v->a[16151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16152] = actions(61);
	v->a[16153] = 1;
	v->a[16154] = anon_sym_DOLLAR;
	v->a[16155] = actions(63);
	v->a[16156] = 1;
	v->a[16157] = anon_sym_DQUOTE;
	v->a[16158] = actions(67);
	v->a[16159] = 1;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = anon_sym_DOLLAR_LBRACE;
	v->a[16161] = actions(69);
	v->a[16162] = 1;
	v->a[16163] = anon_sym_DOLLAR_LPAREN;
	v->a[16164] = actions(71);
	v->a[16165] = 1;
	v->a[16166] = anon_sym_BQUOTE;
	v->a[16167] = actions(73);
	v->a[16168] = 1;
	v->a[16169] = sym_file_descriptor;
	v->a[16170] = actions(75);
	v->a[16171] = 1;
	v->a[16172] = sym_variable_name;
	v->a[16173] = state(38);
	v->a[16174] = 1;
	v->a[16175] = aux_sym__terminated_statement;
	v->a[16176] = state(187);
	v->a[16177] = 1;
	v->a[16178] = sym_command_name;
	v->a[16179] = state(300);
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = 1;
	v->a[16181] = sym_variable_assignment;
	v->a[16182] = state(647);
	v->a[16183] = 1;
	v->a[16184] = sym_concatenation;
	v->a[16185] = state(736);
	v->a[16186] = 1;
	v->a[16187] = aux_sym_command_repeat1;
	v->a[16188] = state(738);
	v->a[16189] = 1;
	v->a[16190] = sym_file_redirect;
	v->a[16191] = state(1455);
	v->a[16192] = 1;
	v->a[16193] = sym_pipeline;
	v->a[16194] = state(1460);
	v->a[16195] = 1;
	v->a[16196] = aux_sym_redirected_statement_repeat2;
	v->a[16197] = state(2269);
	v->a[16198] = 1;
	v->a[16199] = sym__statement_not_pipeline;
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
