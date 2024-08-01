/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_51.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_255(t_small_parse_table_array *v)
{
	v->a[5100] = actions(55);
	v->a[5101] = 1;
	v->a[5102] = anon_sym_DOLLAR;
	v->a[5103] = actions(57);
	v->a[5104] = 1;
	v->a[5105] = anon_sym_DQUOTE;
	v->a[5106] = actions(61);
	v->a[5107] = 1;
	v->a[5108] = anon_sym_DOLLAR_LBRACE;
	v->a[5109] = actions(63);
	v->a[5110] = 1;
	v->a[5111] = anon_sym_DOLLAR_LPAREN;
	v->a[5112] = actions(65);
	v->a[5113] = 1;
	v->a[5114] = anon_sym_BQUOTE;
	v->a[5115] = actions(67);
	v->a[5116] = 1;
	v->a[5117] = sym_variable_name;
	v->a[5118] = actions(204);
	v->a[5119] = 1;
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = sym_word;
	v->a[5121] = actions(206);
	v->a[5122] = 1;
	v->a[5123] = anon_sym_BANG;
	v->a[5124] = state(116);
	v->a[5125] = 1;
	v->a[5126] = aux_sym__statements_repeat1;
	v->a[5127] = state(179);
	v->a[5128] = 1;
	v->a[5129] = sym_command_name;
	v->a[5130] = state(208);
	v->a[5131] = 1;
	v->a[5132] = sym_variable_assignment;
	v->a[5133] = state(385);
	v->a[5134] = 1;
	v->a[5135] = aux_sym_command_repeat1;
	v->a[5136] = state(555);
	v->a[5137] = 1;
	v->a[5138] = sym_concatenation;
	v->a[5139] = state(599);
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = 1;
	v->a[5141] = sym_file_redirect;
	v->a[5142] = state(969);
	v->a[5143] = 1;
	v->a[5144] = sym_pipeline;
	v->a[5145] = state(1006);
	v->a[5146] = 1;
	v->a[5147] = aux_sym_redirected_statement_repeat2;
	v->a[5148] = state(1560);
	v->a[5149] = 1;
	v->a[5150] = sym__statement_not_pipeline;
	v->a[5151] = state(1696);
	v->a[5152] = 1;
	v->a[5153] = sym__statements;
	v->a[5154] = actions(11);
	v->a[5155] = 2;
	v->a[5156] = anon_sym_while;
	v->a[5157] = anon_sym_until;
	v->a[5158] = actions(59);
	v->a[5159] = 2;
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = sym_raw_string;
	v->a[5161] = sym_number;
	v->a[5162] = actions(51);
	v->a[5163] = 3;
	v->a[5164] = anon_sym_LT;
	v->a[5165] = anon_sym_GT;
	v->a[5166] = anon_sym_GT_GT;
	v->a[5167] = state(401);
	v->a[5168] = 5;
	v->a[5169] = sym_arithmetic_expansion;
	v->a[5170] = sym_string;
	v->a[5171] = sym_simple_expansion;
	v->a[5172] = sym_expansion;
	v->a[5173] = sym_command_substitution;
	v->a[5174] = state(820);
	v->a[5175] = 12;
	v->a[5176] = sym_redirected_statement;
	v->a[5177] = sym_for_statement;
	v->a[5178] = sym_while_statement;
	v->a[5179] = sym_if_statement;
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = sym_case_statement;
	v->a[5181] = sym_function_definition;
	v->a[5182] = sym_compound_statement;
	v->a[5183] = sym_subshell;
	v->a[5184] = sym_list;
	v->a[5185] = sym_negated_command;
	v->a[5186] = sym_command;
	v->a[5187] = sym__variable_assignments;
	v->a[5188] = 30;
	v->a[5189] = actions(3);
	v->a[5190] = 1;
	v->a[5191] = sym_comment;
	v->a[5192] = actions(9);
	v->a[5193] = 1;
	v->a[5194] = anon_sym_for;
	v->a[5195] = actions(13);
	v->a[5196] = 1;
	v->a[5197] = anon_sym_if;
	v->a[5198] = actions(15);
	v->a[5199] = 1;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
