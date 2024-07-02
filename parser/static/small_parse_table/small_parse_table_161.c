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
	v->a[16100] = actions(25);
	v->a[16101] = 1;
	v->a[16102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16103] = actions(27);
	v->a[16104] = 1;
	v->a[16105] = anon_sym_DOLLAR;
	v->a[16106] = actions(29);
	v->a[16107] = 1;
	v->a[16108] = anon_sym_DQUOTE;
	v->a[16109] = actions(33);
	v->a[16110] = 1;
	v->a[16111] = anon_sym_DOLLAR_LBRACE;
	v->a[16112] = actions(35);
	v->a[16113] = 1;
	v->a[16114] = anon_sym_DOLLAR_LPAREN;
	v->a[16115] = actions(37);
	v->a[16116] = 1;
	v->a[16117] = anon_sym_BQUOTE;
	v->a[16118] = actions(39);
	v->a[16119] = 1;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = sym_file_descriptor;
	v->a[16121] = actions(41);
	v->a[16122] = 1;
	v->a[16123] = sym_variable_name;
	v->a[16124] = state(175);
	v->a[16125] = 1;
	v->a[16126] = sym_command_name;
	v->a[16127] = state(302);
	v->a[16128] = 1;
	v->a[16129] = sym_variable_assignment;
	v->a[16130] = state(583);
	v->a[16131] = 1;
	v->a[16132] = sym_concatenation;
	v->a[16133] = state(621);
	v->a[16134] = 1;
	v->a[16135] = sym_file_redirect;
	v->a[16136] = state(624);
	v->a[16137] = 1;
	v->a[16138] = aux_sym_command_repeat1;
	v->a[16139] = state(1051);
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = 1;
	v->a[16141] = sym_pipeline;
	v->a[16142] = state(1104);
	v->a[16143] = 1;
	v->a[16144] = aux_sym_redirected_statement_repeat2;
	v->a[16145] = state(1915);
	v->a[16146] = 1;
	v->a[16147] = sym__statement_not_pipeline;
	v->a[16148] = actions(11);
	v->a[16149] = 2;
	v->a[16150] = anon_sym_while;
	v->a[16151] = anon_sym_until;
	v->a[16152] = actions(31);
	v->a[16153] = 2;
	v->a[16154] = sym_raw_string;
	v->a[16155] = sym_number;
	v->a[16156] = state(345);
	v->a[16157] = 5;
	v->a[16158] = sym_arithmetic_expansion;
	v->a[16159] = sym_string;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = sym_simple_expansion;
	v->a[16161] = sym_expansion;
	v->a[16162] = sym_command_substitution;
	v->a[16163] = actions(23);
	v->a[16164] = 7;
	v->a[16165] = anon_sym_LT;
	v->a[16166] = anon_sym_GT;
	v->a[16167] = anon_sym_GT_GT;
	v->a[16168] = anon_sym_LT_AMP;
	v->a[16169] = anon_sym_GT_AMP;
	v->a[16170] = anon_sym_GT_PIPE;
	v->a[16171] = anon_sym_LT_GT;
	v->a[16172] = state(1052);
	v->a[16173] = 12;
	v->a[16174] = sym_redirected_statement;
	v->a[16175] = sym_for_statement;
	v->a[16176] = sym_while_statement;
	v->a[16177] = sym_if_statement;
	v->a[16178] = sym_case_statement;
	v->a[16179] = sym_function_definition;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = sym_compound_statement;
	v->a[16181] = sym_subshell;
	v->a[16182] = sym_list;
	v->a[16183] = sym_negated_command;
	v->a[16184] = sym_command;
	v->a[16185] = sym__variable_assignments;
	v->a[16186] = 28;
	v->a[16187] = actions(3);
	v->a[16188] = 1;
	v->a[16189] = sym_comment;
	v->a[16190] = actions(7);
	v->a[16191] = 1;
	v->a[16192] = sym_word;
	v->a[16193] = actions(9);
	v->a[16194] = 1;
	v->a[16195] = anon_sym_for;
	v->a[16196] = actions(13);
	v->a[16197] = 1;
	v->a[16198] = anon_sym_if;
	v->a[16199] = actions(15);
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
