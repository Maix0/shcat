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
	v->a[18100] = actions(111);
	v->a[18101] = 1;
	v->a[18102] = anon_sym_DOLLAR;
	v->a[18103] = actions(113);
	v->a[18104] = 1;
	v->a[18105] = anon_sym_DQUOTE;
	v->a[18106] = actions(117);
	v->a[18107] = 1;
	v->a[18108] = anon_sym_DOLLAR_LBRACE;
	v->a[18109] = actions(119);
	v->a[18110] = 1;
	v->a[18111] = anon_sym_DOLLAR_LPAREN;
	v->a[18112] = actions(121);
	v->a[18113] = 1;
	v->a[18114] = anon_sym_BQUOTE;
	v->a[18115] = actions(123);
	v->a[18116] = 1;
	v->a[18117] = sym_file_descriptor;
	v->a[18118] = actions(125);
	v->a[18119] = 1;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = sym_variable_name;
	v->a[18121] = state(184);
	v->a[18122] = 1;
	v->a[18123] = sym_command_name;
	v->a[18124] = state(267);
	v->a[18125] = 1;
	v->a[18126] = sym_variable_assignment;
	v->a[18127] = state(622);
	v->a[18128] = 1;
	v->a[18129] = sym_concatenation;
	v->a[18130] = state(727);
	v->a[18131] = 1;
	v->a[18132] = aux_sym_command_repeat1;
	v->a[18133] = state(744);
	v->a[18134] = 1;
	v->a[18135] = sym_file_redirect;
	v->a[18136] = state(1097);
	v->a[18137] = 1;
	v->a[18138] = sym_pipeline;
	v->a[18139] = state(1215);
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = 1;
	v->a[18141] = aux_sym_redirected_statement_repeat2;
	v->a[18142] = state(2122);
	v->a[18143] = 1;
	v->a[18144] = sym__statement_not_pipeline;
	v->a[18145] = actions(91);
	v->a[18146] = 2;
	v->a[18147] = anon_sym_while;
	v->a[18148] = anon_sym_until;
	v->a[18149] = actions(107);
	v->a[18150] = 2;
	v->a[18151] = anon_sym_LT_AMP_DASH;
	v->a[18152] = anon_sym_GT_AMP_DASH;
	v->a[18153] = actions(115);
	v->a[18154] = 2;
	v->a[18155] = sym_raw_string;
	v->a[18156] = sym_number;
	v->a[18157] = state(289);
	v->a[18158] = 5;
	v->a[18159] = sym_arithmetic_expansion;
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = sym_string;
	v->a[18161] = sym_simple_expansion;
	v->a[18162] = sym_expansion;
	v->a[18163] = sym_command_substitution;
	v->a[18164] = actions(105);
	v->a[18165] = 8;
	v->a[18166] = anon_sym_LT;
	v->a[18167] = anon_sym_GT;
	v->a[18168] = anon_sym_GT_GT;
	v->a[18169] = anon_sym_AMP_GT;
	v->a[18170] = anon_sym_AMP_GT_GT;
	v->a[18171] = anon_sym_LT_AMP;
	v->a[18172] = anon_sym_GT_AMP;
	v->a[18173] = anon_sym_GT_PIPE;
	v->a[18174] = state(1094);
	v->a[18175] = 12;
	v->a[18176] = sym_redirected_statement;
	v->a[18177] = sym_for_statement;
	v->a[18178] = sym_while_statement;
	v->a[18179] = sym_if_statement;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = sym_case_statement;
	v->a[18181] = sym_function_definition;
	v->a[18182] = sym_compound_statement;
	v->a[18183] = sym_subshell;
	v->a[18184] = sym_list;
	v->a[18185] = sym_negated_command;
	v->a[18186] = sym_command;
	v->a[18187] = sym__variable_assignments;
	v->a[18188] = 29;
	v->a[18189] = actions(3);
	v->a[18190] = 1;
	v->a[18191] = sym_comment;
	v->a[18192] = actions(87);
	v->a[18193] = 1;
	v->a[18194] = sym_word;
	v->a[18195] = actions(89);
	v->a[18196] = 1;
	v->a[18197] = anon_sym_for;
	v->a[18198] = actions(93);
	v->a[18199] = 1;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
