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
	v->a[5100] = 1;
	v->a[5101] = sym__statement_not_pipeline;
	v->a[5102] = actions(11);
	v->a[5103] = 2;
	v->a[5104] = anon_sym_while;
	v->a[5105] = anon_sym_until;
	v->a[5106] = actions(59);
	v->a[5107] = 2;
	v->a[5108] = sym_raw_string;
	v->a[5109] = sym_number;
	v->a[5110] = state(425);
	v->a[5111] = 5;
	v->a[5112] = sym_arithmetic_expansion;
	v->a[5113] = sym_string;
	v->a[5114] = sym_simple_expansion;
	v->a[5115] = sym_expansion;
	v->a[5116] = sym_command_substitution;
	v->a[5117] = actions(51);
	v->a[5118] = 7;
	v->a[5119] = anon_sym_LT;
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = anon_sym_GT;
	v->a[5121] = anon_sym_GT_GT;
	v->a[5122] = anon_sym_LT_AMP;
	v->a[5123] = anon_sym_GT_AMP;
	v->a[5124] = anon_sym_GT_PIPE;
	v->a[5125] = anon_sym_LT_GT;
	v->a[5126] = state(933);
	v->a[5127] = 12;
	v->a[5128] = sym_redirected_statement;
	v->a[5129] = sym_for_statement;
	v->a[5130] = sym_while_statement;
	v->a[5131] = sym_if_statement;
	v->a[5132] = sym_case_statement;
	v->a[5133] = sym_function_definition;
	v->a[5134] = sym_compound_statement;
	v->a[5135] = sym_subshell;
	v->a[5136] = sym_list;
	v->a[5137] = sym_negated_command;
	v->a[5138] = sym_command;
	v->a[5139] = sym__variable_assignments;
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = 30;
	v->a[5141] = actions(3);
	v->a[5142] = 1;
	v->a[5143] = sym_comment;
	v->a[5144] = actions(9);
	v->a[5145] = 1;
	v->a[5146] = anon_sym_for;
	v->a[5147] = actions(13);
	v->a[5148] = 1;
	v->a[5149] = anon_sym_if;
	v->a[5150] = actions(15);
	v->a[5151] = 1;
	v->a[5152] = anon_sym_case;
	v->a[5153] = actions(17);
	v->a[5154] = 1;
	v->a[5155] = anon_sym_LPAREN;
	v->a[5156] = actions(19);
	v->a[5157] = 1;
	v->a[5158] = anon_sym_LBRACE;
	v->a[5159] = actions(53);
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = 1;
	v->a[5161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5162] = actions(55);
	v->a[5163] = 1;
	v->a[5164] = anon_sym_DOLLAR;
	v->a[5165] = actions(57);
	v->a[5166] = 1;
	v->a[5167] = anon_sym_DQUOTE;
	v->a[5168] = actions(61);
	v->a[5169] = 1;
	v->a[5170] = anon_sym_DOLLAR_LBRACE;
	v->a[5171] = actions(63);
	v->a[5172] = 1;
	v->a[5173] = anon_sym_DOLLAR_LPAREN;
	v->a[5174] = actions(65);
	v->a[5175] = 1;
	v->a[5176] = anon_sym_BQUOTE;
	v->a[5177] = actions(206);
	v->a[5178] = 1;
	v->a[5179] = sym_word;
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = actions(208);
	v->a[5181] = 1;
	v->a[5182] = anon_sym_BANG;
	v->a[5183] = actions(214);
	v->a[5184] = 1;
	v->a[5185] = sym_variable_name;
	v->a[5186] = state(106);
	v->a[5187] = 1;
	v->a[5188] = aux_sym__statements_repeat1;
	v->a[5189] = state(227);
	v->a[5190] = 1;
	v->a[5191] = sym_command_name;
	v->a[5192] = state(277);
	v->a[5193] = 1;
	v->a[5194] = sym_variable_assignment;
	v->a[5195] = state(506);
	v->a[5196] = 1;
	v->a[5197] = aux_sym_command_repeat1;
	v->a[5198] = state(571);
	v->a[5199] = 1;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
