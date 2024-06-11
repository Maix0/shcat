/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_141.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_705(t_small_parse_table_array *v)
{
	v->a[14100] = state(2274);
	v->a[14101] = 1;
	v->a[14102] = sym__statements;
	v->a[14103] = actions(11);
	v->a[14104] = 2;
	v->a[14105] = anon_sym_while;
	v->a[14106] = anon_sym_until;
	v->a[14107] = actions(226);
	v->a[14108] = 2;
	v->a[14109] = anon_sym_LT_AMP_DASH;
	v->a[14110] = anon_sym_GT_AMP_DASH;
	v->a[14111] = actions(228);
	v->a[14112] = 2;
	v->a[14113] = sym_raw_string;
	v->a[14114] = sym_number;
	v->a[14115] = state(294);
	v->a[14116] = 5;
	v->a[14117] = sym_arithmetic_expansion;
	v->a[14118] = sym_string;
	v->a[14119] = sym_simple_expansion;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = sym_expansion;
	v->a[14121] = sym_command_substitution;
	v->a[14122] = actions(224);
	v->a[14123] = 8;
	v->a[14124] = anon_sym_LT;
	v->a[14125] = anon_sym_GT;
	v->a[14126] = anon_sym_GT_GT;
	v->a[14127] = anon_sym_AMP_GT;
	v->a[14128] = anon_sym_AMP_GT_GT;
	v->a[14129] = anon_sym_LT_AMP;
	v->a[14130] = anon_sym_GT_AMP;
	v->a[14131] = anon_sym_GT_PIPE;
	v->a[14132] = state(1188);
	v->a[14133] = 12;
	v->a[14134] = sym_redirected_statement;
	v->a[14135] = sym_for_statement;
	v->a[14136] = sym_while_statement;
	v->a[14137] = sym_if_statement;
	v->a[14138] = sym_case_statement;
	v->a[14139] = sym_function_definition;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = sym_compound_statement;
	v->a[14141] = sym_subshell;
	v->a[14142] = sym_list;
	v->a[14143] = sym_negated_command;
	v->a[14144] = sym_command;
	v->a[14145] = sym_variable_assignments;
	v->a[14146] = 32;
	v->a[14147] = actions(3);
	v->a[14148] = 1;
	v->a[14149] = sym_comment;
	v->a[14150] = actions(9);
	v->a[14151] = 1;
	v->a[14152] = anon_sym_for;
	v->a[14153] = actions(13);
	v->a[14154] = 1;
	v->a[14155] = anon_sym_if;
	v->a[14156] = actions(15);
	v->a[14157] = 1;
	v->a[14158] = anon_sym_case;
	v->a[14159] = actions(17);
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = 1;
	v->a[14161] = anon_sym_LPAREN;
	v->a[14162] = actions(19);
	v->a[14163] = 1;
	v->a[14164] = anon_sym_LBRACE;
	v->a[14165] = actions(45);
	v->a[14166] = 1;
	v->a[14167] = sym_word;
	v->a[14168] = actions(53);
	v->a[14169] = 1;
	v->a[14170] = anon_sym_BANG;
	v->a[14171] = actions(59);
	v->a[14172] = 1;
	v->a[14173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14174] = actions(61);
	v->a[14175] = 1;
	v->a[14176] = anon_sym_DOLLAR;
	v->a[14177] = actions(63);
	v->a[14178] = 1;
	v->a[14179] = anon_sym_DQUOTE;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = actions(67);
	v->a[14181] = 1;
	v->a[14182] = anon_sym_DOLLAR_LBRACE;
	v->a[14183] = actions(69);
	v->a[14184] = 1;
	v->a[14185] = anon_sym_DOLLAR_LPAREN;
	v->a[14186] = actions(71);
	v->a[14187] = 1;
	v->a[14188] = anon_sym_BQUOTE;
	v->a[14189] = actions(73);
	v->a[14190] = 1;
	v->a[14191] = sym_file_descriptor;
	v->a[14192] = actions(75);
	v->a[14193] = 1;
	v->a[14194] = sym_variable_name;
	v->a[14195] = actions(266);
	v->a[14196] = 1;
	v->a[14197] = anon_sym_done;
	v->a[14198] = state(40);
	v->a[14199] = 1;
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
