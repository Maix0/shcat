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
	v->a[5100] = anon_sym_AMP_GT_GT;
	v->a[5101] = anon_sym_LT_AMP;
	v->a[5102] = anon_sym_GT_AMP;
	v->a[5103] = anon_sym_GT_PIPE;
	v->a[5104] = state(1188);
	v->a[5105] = 12;
	v->a[5106] = sym_redirected_statement;
	v->a[5107] = sym_for_statement;
	v->a[5108] = sym_while_statement;
	v->a[5109] = sym_if_statement;
	v->a[5110] = sym_case_statement;
	v->a[5111] = sym_function_definition;
	v->a[5112] = sym_compound_statement;
	v->a[5113] = sym_subshell;
	v->a[5114] = sym_list;
	v->a[5115] = sym_negated_command;
	v->a[5116] = sym_command;
	v->a[5117] = sym__variable_assignments;
	v->a[5118] = 32;
	v->a[5119] = actions(3);
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = 1;
	v->a[5121] = sym_comment;
	v->a[5122] = actions(9);
	v->a[5123] = 1;
	v->a[5124] = anon_sym_for;
	v->a[5125] = actions(13);
	v->a[5126] = 1;
	v->a[5127] = anon_sym_if;
	v->a[5128] = actions(15);
	v->a[5129] = 1;
	v->a[5130] = anon_sym_case;
	v->a[5131] = actions(17);
	v->a[5132] = 1;
	v->a[5133] = anon_sym_LPAREN;
	v->a[5134] = actions(19);
	v->a[5135] = 1;
	v->a[5136] = anon_sym_LBRACE;
	v->a[5137] = actions(59);
	v->a[5138] = 1;
	v->a[5139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = actions(61);
	v->a[5141] = 1;
	v->a[5142] = anon_sym_DOLLAR;
	v->a[5143] = actions(63);
	v->a[5144] = 1;
	v->a[5145] = anon_sym_DQUOTE;
	v->a[5146] = actions(67);
	v->a[5147] = 1;
	v->a[5148] = anon_sym_DOLLAR_LBRACE;
	v->a[5149] = actions(69);
	v->a[5150] = 1;
	v->a[5151] = anon_sym_DOLLAR_LPAREN;
	v->a[5152] = actions(71);
	v->a[5153] = 1;
	v->a[5154] = anon_sym_BQUOTE;
	v->a[5155] = actions(220);
	v->a[5156] = 1;
	v->a[5157] = sym_word;
	v->a[5158] = actions(222);
	v->a[5159] = 1;
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = anon_sym_BANG;
	v->a[5161] = actions(230);
	v->a[5162] = 1;
	v->a[5163] = sym_file_descriptor;
	v->a[5164] = actions(232);
	v->a[5165] = 1;
	v->a[5166] = sym_variable_name;
	v->a[5167] = state(126);
	v->a[5168] = 1;
	v->a[5169] = aux_sym__statements_repeat1;
	v->a[5170] = state(184);
	v->a[5171] = 1;
	v->a[5172] = sym_command_name;
	v->a[5173] = state(268);
	v->a[5174] = 1;
	v->a[5175] = sym_variable_assignment;
	v->a[5176] = state(647);
	v->a[5177] = 1;
	v->a[5178] = sym_concatenation;
	v->a[5179] = state(741);
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = 1;
	v->a[5181] = sym_file_redirect;
	v->a[5182] = state(828);
	v->a[5183] = 1;
	v->a[5184] = aux_sym_command_repeat1;
	v->a[5185] = state(1314);
	v->a[5186] = 1;
	v->a[5187] = sym_pipeline;
	v->a[5188] = state(1331);
	v->a[5189] = 1;
	v->a[5190] = aux_sym_redirected_statement_repeat2;
	v->a[5191] = state(2252);
	v->a[5192] = 1;
	v->a[5193] = sym__statement_not_pipeline;
	v->a[5194] = state(2458);
	v->a[5195] = 1;
	v->a[5196] = sym__statements;
	v->a[5197] = actions(11);
	v->a[5198] = 2;
	v->a[5199] = anon_sym_while;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
