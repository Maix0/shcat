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
	v->a[16100] = anon_sym_BANG;
	v->a[16101] = actions(59);
	v->a[16102] = 1;
	v->a[16103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16104] = actions(61);
	v->a[16105] = 1;
	v->a[16106] = anon_sym_DOLLAR;
	v->a[16107] = actions(63);
	v->a[16108] = 1;
	v->a[16109] = anon_sym_DQUOTE;
	v->a[16110] = actions(67);
	v->a[16111] = 1;
	v->a[16112] = anon_sym_DOLLAR_LBRACE;
	v->a[16113] = actions(69);
	v->a[16114] = 1;
	v->a[16115] = anon_sym_DOLLAR_LPAREN;
	v->a[16116] = actions(71);
	v->a[16117] = 1;
	v->a[16118] = anon_sym_BQUOTE;
	v->a[16119] = actions(73);
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = 1;
	v->a[16121] = sym_file_descriptor;
	v->a[16122] = actions(75);
	v->a[16123] = 1;
	v->a[16124] = sym_variable_name;
	v->a[16125] = state(37);
	v->a[16126] = 1;
	v->a[16127] = aux_sym__terminated_statement;
	v->a[16128] = state(189);
	v->a[16129] = 1;
	v->a[16130] = sym_command_name;
	v->a[16131] = state(296);
	v->a[16132] = 1;
	v->a[16133] = sym_variable_assignment;
	v->a[16134] = state(650);
	v->a[16135] = 1;
	v->a[16136] = sym_concatenation;
	v->a[16137] = state(712);
	v->a[16138] = 1;
	v->a[16139] = sym_file_redirect;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = state(713);
	v->a[16141] = 1;
	v->a[16142] = aux_sym_command_repeat1;
	v->a[16143] = state(1215);
	v->a[16144] = 1;
	v->a[16145] = sym_pipeline;
	v->a[16146] = state(1333);
	v->a[16147] = 1;
	v->a[16148] = aux_sym_redirected_statement_repeat2;
	v->a[16149] = state(2103);
	v->a[16150] = 1;
	v->a[16151] = sym__statement_not_pipeline;
	v->a[16152] = actions(11);
	v->a[16153] = 2;
	v->a[16154] = anon_sym_while;
	v->a[16155] = anon_sym_until;
	v->a[16156] = actions(57);
	v->a[16157] = 2;
	v->a[16158] = anon_sym_LT_AMP_DASH;
	v->a[16159] = anon_sym_GT_AMP_DASH;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = actions(65);
	v->a[16161] = 2;
	v->a[16162] = sym_raw_string;
	v->a[16163] = sym_number;
	v->a[16164] = state(443);
	v->a[16165] = 5;
	v->a[16166] = sym_arithmetic_expansion;
	v->a[16167] = sym_string;
	v->a[16168] = sym_simple_expansion;
	v->a[16169] = sym_expansion;
	v->a[16170] = sym_command_substitution;
	v->a[16171] = actions(55);
	v->a[16172] = 6;
	v->a[16173] = anon_sym_LT;
	v->a[16174] = anon_sym_GT;
	v->a[16175] = anon_sym_GT_GT;
	v->a[16176] = anon_sym_LT_AMP;
	v->a[16177] = anon_sym_GT_AMP;
	v->a[16178] = anon_sym_GT_PIPE;
	v->a[16179] = state(1170);
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = 12;
	v->a[16181] = sym_redirected_statement;
	v->a[16182] = sym_for_statement;
	v->a[16183] = sym_while_statement;
	v->a[16184] = sym_if_statement;
	v->a[16185] = sym_case_statement;
	v->a[16186] = sym_function_definition;
	v->a[16187] = sym_compound_statement;
	v->a[16188] = sym_subshell;
	v->a[16189] = sym_list;
	v->a[16190] = sym_negated_command;
	v->a[16191] = sym_command;
	v->a[16192] = sym__variable_assignments;
	v->a[16193] = 42;
	v->a[16194] = actions(3);
	v->a[16195] = 1;
	v->a[16196] = sym_comment;
	v->a[16197] = actions(9);
	v->a[16198] = 1;
	v->a[16199] = anon_sym_for;
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
