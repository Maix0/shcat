/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_181.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_905(t_small_parse_table_array *v)
{
	v->a[18100] = 1;
	v->a[18101] = anon_sym_DOLLAR_LPAREN;
	v->a[18102] = actions(71);
	v->a[18103] = 1;
	v->a[18104] = anon_sym_BQUOTE;
	v->a[18105] = actions(363);
	v->a[18106] = 1;
	v->a[18107] = sym_word;
	v->a[18108] = actions(365);
	v->a[18109] = 1;
	v->a[18110] = anon_sym_BANG;
	v->a[18111] = actions(373);
	v->a[18112] = 1;
	v->a[18113] = sym_file_descriptor;
	v->a[18114] = actions(375);
	v->a[18115] = 1;
	v->a[18116] = sym_variable_name;
	v->a[18117] = state(242);
	v->a[18118] = 1;
	v->a[18119] = sym_command_name;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = state(622);
	v->a[18121] = 1;
	v->a[18122] = sym_variable_assignment;
	v->a[18123] = state(647);
	v->a[18124] = 1;
	v->a[18125] = sym_concatenation;
	v->a[18126] = state(738);
	v->a[18127] = 1;
	v->a[18128] = sym_file_redirect;
	v->a[18129] = state(768);
	v->a[18130] = 1;
	v->a[18131] = aux_sym_command_repeat1;
	v->a[18132] = state(1557);
	v->a[18133] = 1;
	v->a[18134] = sym_pipeline;
	v->a[18135] = state(1564);
	v->a[18136] = 1;
	v->a[18137] = aux_sym_redirected_statement_repeat2;
	v->a[18138] = state(2263);
	v->a[18139] = 1;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = sym__statement_not_pipeline;
	v->a[18141] = actions(11);
	v->a[18142] = 2;
	v->a[18143] = anon_sym_while;
	v->a[18144] = anon_sym_until;
	v->a[18145] = actions(369);
	v->a[18146] = 2;
	v->a[18147] = anon_sym_LT_AMP_DASH;
	v->a[18148] = anon_sym_GT_AMP_DASH;
	v->a[18149] = actions(371);
	v->a[18150] = 2;
	v->a[18151] = sym_raw_string;
	v->a[18152] = sym_number;
	v->a[18153] = state(790);
	v->a[18154] = 5;
	v->a[18155] = sym_arithmetic_expansion;
	v->a[18156] = sym_string;
	v->a[18157] = sym_simple_expansion;
	v->a[18158] = sym_expansion;
	v->a[18159] = sym_command_substitution;
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = actions(367);
	v->a[18161] = 8;
	v->a[18162] = anon_sym_LT;
	v->a[18163] = anon_sym_GT;
	v->a[18164] = anon_sym_GT_GT;
	v->a[18165] = anon_sym_AMP_GT;
	v->a[18166] = anon_sym_AMP_GT_GT;
	v->a[18167] = anon_sym_LT_AMP;
	v->a[18168] = anon_sym_GT_AMP;
	v->a[18169] = anon_sym_GT_PIPE;
	v->a[18170] = state(1550);
	v->a[18171] = 12;
	v->a[18172] = sym_redirected_statement;
	v->a[18173] = sym_for_statement;
	v->a[18174] = sym_while_statement;
	v->a[18175] = sym_if_statement;
	v->a[18176] = sym_case_statement;
	v->a[18177] = sym_function_definition;
	v->a[18178] = sym_compound_statement;
	v->a[18179] = sym_subshell;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = sym_list;
	v->a[18181] = sym_negated_command;
	v->a[18182] = sym_command;
	v->a[18183] = sym_variable_assignments;
	v->a[18184] = 30;
	v->a[18185] = actions(3);
	v->a[18186] = 1;
	v->a[18187] = sym_comment;
	v->a[18188] = actions(89);
	v->a[18189] = 1;
	v->a[18190] = sym_word;
	v->a[18191] = actions(91);
	v->a[18192] = 1;
	v->a[18193] = anon_sym_for;
	v->a[18194] = actions(95);
	v->a[18195] = 1;
	v->a[18196] = anon_sym_if;
	v->a[18197] = actions(97);
	v->a[18198] = 1;
	v->a[18199] = anon_sym_case;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
