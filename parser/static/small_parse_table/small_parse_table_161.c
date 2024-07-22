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
	v->a[16124] = state(174);
	v->a[16125] = 1;
	v->a[16126] = sym_command_name;
	v->a[16127] = state(344);
	v->a[16128] = 1;
	v->a[16129] = sym_variable_assignment;
	v->a[16130] = state(625);
	v->a[16131] = 1;
	v->a[16132] = aux_sym_command_repeat1;
	v->a[16133] = state(627);
	v->a[16134] = 1;
	v->a[16135] = sym_concatenation;
	v->a[16136] = state(676);
	v->a[16137] = 1;
	v->a[16138] = sym_file_redirect;
	v->a[16139] = state(1175);
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = 1;
	v->a[16141] = aux_sym_redirected_statement_repeat2;
	v->a[16142] = state(1432);
	v->a[16143] = 1;
	v->a[16144] = sym_pipeline;
	v->a[16145] = actions(11);
	v->a[16146] = 2;
	v->a[16147] = anon_sym_while;
	v->a[16148] = anon_sym_until;
	v->a[16149] = actions(31);
	v->a[16150] = 2;
	v->a[16151] = sym_raw_string;
	v->a[16152] = sym_number;
	v->a[16153] = state(373);
	v->a[16154] = 5;
	v->a[16155] = sym_arithmetic_expansion;
	v->a[16156] = sym_string;
	v->a[16157] = sym_simple_expansion;
	v->a[16158] = sym_expansion;
	v->a[16159] = sym_command_substitution;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = actions(23);
	v->a[16161] = 7;
	v->a[16162] = anon_sym_LT;
	v->a[16163] = anon_sym_GT;
	v->a[16164] = anon_sym_GT_GT;
	v->a[16165] = anon_sym_LT_AMP;
	v->a[16166] = anon_sym_GT_AMP;
	v->a[16167] = anon_sym_GT_PIPE;
	v->a[16168] = anon_sym_LT_GT;
	v->a[16169] = state(1096);
	v->a[16170] = 13;
	v->a[16171] = sym__statement_not_pipeline;
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
	v->a[16184] = 28;
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
