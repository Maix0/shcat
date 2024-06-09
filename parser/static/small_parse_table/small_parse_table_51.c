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
	v->a[5100] = sym_command;
	v->a[5101] = sym_variable_assignments;
	v->a[5102] = 34;
	v->a[5103] = actions(3);
	v->a[5104] = 1;
	v->a[5105] = sym_comment;
	v->a[5106] = actions(9);
	v->a[5107] = 1;
	v->a[5108] = anon_sym_for;
	v->a[5109] = actions(13);
	v->a[5110] = 1;
	v->a[5111] = anon_sym_if;
	v->a[5112] = actions(15);
	v->a[5113] = 1;
	v->a[5114] = anon_sym_case;
	v->a[5115] = actions(17);
	v->a[5116] = 1;
	v->a[5117] = anon_sym_LPAREN;
	v->a[5118] = actions(19);
	v->a[5119] = 1;
	small_parse_table_256(v);
}

void	small_parse_table_256(t_small_parse_table_array *v)
{
	v->a[5120] = anon_sym_LBRACE;
	v->a[5121] = actions(49);
	v->a[5122] = 1;
	v->a[5123] = sym_word;
	v->a[5124] = actions(57);
	v->a[5125] = 1;
	v->a[5126] = anon_sym_BANG;
	v->a[5127] = actions(63);
	v->a[5128] = 1;
	v->a[5129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5130] = actions(65);
	v->a[5131] = 1;
	v->a[5132] = anon_sym_DOLLAR;
	v->a[5133] = actions(67);
	v->a[5134] = 1;
	v->a[5135] = anon_sym_DQUOTE;
	v->a[5136] = actions(69);
	v->a[5137] = 1;
	v->a[5138] = sym_raw_string;
	v->a[5139] = actions(71);
	small_parse_table_257(v);
}

void	small_parse_table_257(t_small_parse_table_array *v)
{
	v->a[5140] = 1;
	v->a[5141] = aux_sym_number_token1;
	v->a[5142] = actions(73);
	v->a[5143] = 1;
	v->a[5144] = aux_sym_number_token2;
	v->a[5145] = actions(75);
	v->a[5146] = 1;
	v->a[5147] = anon_sym_DOLLAR_LBRACE;
	v->a[5148] = actions(77);
	v->a[5149] = 1;
	v->a[5150] = anon_sym_DOLLAR_LPAREN;
	v->a[5151] = actions(79);
	v->a[5152] = 1;
	v->a[5153] = anon_sym_BQUOTE;
	v->a[5154] = actions(81);
	v->a[5155] = 1;
	v->a[5156] = sym_file_descriptor;
	v->a[5157] = actions(83);
	v->a[5158] = 1;
	v->a[5159] = sym_variable_name;
	small_parse_table_258(v);
}

void	small_parse_table_258(t_small_parse_table_array *v)
{
	v->a[5160] = actions(242);
	v->a[5161] = 1;
	v->a[5162] = anon_sym_done;
	v->a[5163] = state(37);
	v->a[5164] = 1;
	v->a[5165] = aux_sym__terminated_statement;
	v->a[5166] = state(190);
	v->a[5167] = 1;
	v->a[5168] = sym_command_name;
	v->a[5169] = state(303);
	v->a[5170] = 1;
	v->a[5171] = sym_variable_assignment;
	v->a[5172] = state(582);
	v->a[5173] = 1;
	v->a[5174] = sym_concatenation;
	v->a[5175] = state(587);
	v->a[5176] = 1;
	v->a[5177] = aux_sym_command_repeat1;
	v->a[5178] = state(718);
	v->a[5179] = 1;
	small_parse_table_259(v);
}

void	small_parse_table_259(t_small_parse_table_array *v)
{
	v->a[5180] = sym_file_redirect;
	v->a[5181] = state(1213);
	v->a[5182] = 1;
	v->a[5183] = aux_sym_redirected_statement_repeat2;
	v->a[5184] = state(1225);
	v->a[5185] = 1;
	v->a[5186] = sym_pipeline;
	v->a[5187] = state(2035);
	v->a[5188] = 1;
	v->a[5189] = sym__statement_not_pipeline;
	v->a[5190] = actions(11);
	v->a[5191] = 2;
	v->a[5192] = anon_sym_while;
	v->a[5193] = anon_sym_until;
	v->a[5194] = actions(61);
	v->a[5195] = 2;
	v->a[5196] = anon_sym_LT_AMP_DASH;
	v->a[5197] = anon_sym_GT_AMP_DASH;
	v->a[5198] = state(397);
	v->a[5199] = 6;
	small_parse_table_260(v);
}

/* EOF small_parse_table_51.c */
