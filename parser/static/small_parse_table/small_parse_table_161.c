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
	v->a[16100] = anon_sym_DQUOTE;
	v->a[16101] = actions(63);
	v->a[16102] = 1;
	v->a[16103] = anon_sym_DOLLAR_LBRACE;
	v->a[16104] = actions(65);
	v->a[16105] = 1;
	v->a[16106] = anon_sym_DOLLAR_LPAREN;
	v->a[16107] = actions(67);
	v->a[16108] = 1;
	v->a[16109] = anon_sym_BQUOTE;
	v->a[16110] = actions(347);
	v->a[16111] = 1;
	v->a[16112] = sym_word;
	v->a[16113] = actions(349);
	v->a[16114] = 1;
	v->a[16115] = anon_sym_BANG;
	v->a[16116] = actions(355);
	v->a[16117] = 1;
	v->a[16118] = sym_file_descriptor;
	v->a[16119] = actions(357);
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = 1;
	v->a[16121] = sym_variable_name;
	v->a[16122] = state(261);
	v->a[16123] = 1;
	v->a[16124] = sym_command_name;
	v->a[16125] = state(596);
	v->a[16126] = 1;
	v->a[16127] = sym_variable_assignment;
	v->a[16128] = state(603);
	v->a[16129] = 1;
	v->a[16130] = sym_concatenation;
	v->a[16131] = state(644);
	v->a[16132] = 1;
	v->a[16133] = sym_file_redirect;
	v->a[16134] = state(705);
	v->a[16135] = 1;
	v->a[16136] = aux_sym_command_repeat1;
	v->a[16137] = state(1383);
	v->a[16138] = 1;
	v->a[16139] = aux_sym_redirected_statement_repeat2;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = state(1422);
	v->a[16141] = 1;
	v->a[16142] = sym_pipeline;
	v->a[16143] = state(1912);
	v->a[16144] = 1;
	v->a[16145] = sym__statement_not_pipeline;
	v->a[16146] = actions(11);
	v->a[16147] = 2;
	v->a[16148] = anon_sym_while;
	v->a[16149] = anon_sym_until;
	v->a[16150] = actions(353);
	v->a[16151] = 2;
	v->a[16152] = sym_raw_string;
	v->a[16153] = sym_number;
	v->a[16154] = state(625);
	v->a[16155] = 5;
	v->a[16156] = sym_arithmetic_expansion;
	v->a[16157] = sym_string;
	v->a[16158] = sym_simple_expansion;
	v->a[16159] = sym_expansion;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = sym_command_substitution;
	v->a[16161] = actions(351);
	v->a[16162] = 7;
	v->a[16163] = anon_sym_LT;
	v->a[16164] = anon_sym_GT;
	v->a[16165] = anon_sym_GT_GT;
	v->a[16166] = anon_sym_LT_AMP;
	v->a[16167] = anon_sym_GT_AMP;
	v->a[16168] = anon_sym_GT_PIPE;
	v->a[16169] = anon_sym_LT_GT;
	v->a[16170] = state(1319);
	v->a[16171] = 12;
	v->a[16172] = sym_redirected_statement;
	v->a[16173] = sym_for_statement;
	v->a[16174] = sym_while_statement;
	v->a[16175] = sym_if_statement;
	v->a[16176] = sym_case_statement;
	v->a[16177] = sym_function_definition;
	v->a[16178] = sym_compound_statement;
	v->a[16179] = sym_subshell;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = sym_list;
	v->a[16181] = sym_negated_command;
	v->a[16182] = sym_command;
	v->a[16183] = sym__variable_assignments;
	v->a[16184] = 29;
	v->a[16185] = actions(3);
	v->a[16186] = 1;
	v->a[16187] = sym_comment;
	v->a[16188] = actions(87);
	v->a[16189] = 1;
	v->a[16190] = sym_word;
	v->a[16191] = actions(89);
	v->a[16192] = 1;
	v->a[16193] = anon_sym_for;
	v->a[16194] = actions(93);
	v->a[16195] = 1;
	v->a[16196] = anon_sym_if;
	v->a[16197] = actions(95);
	v->a[16198] = 1;
	v->a[16199] = anon_sym_case;
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
