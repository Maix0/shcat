/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_61.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_305(t_small_parse_table_array *v)
{
	v->a[6100] = 1;
	v->a[6101] = anon_sym_DOLLAR_LPAREN;
	v->a[6102] = actions(65);
	v->a[6103] = 1;
	v->a[6104] = anon_sym_BQUOTE;
	v->a[6105] = actions(208);
	v->a[6106] = 1;
	v->a[6107] = sym_word;
	v->a[6108] = actions(210);
	v->a[6109] = 1;
	v->a[6110] = anon_sym_BANG;
	v->a[6111] = actions(216);
	v->a[6112] = 1;
	v->a[6113] = sym_variable_name;
	v->a[6114] = state(112);
	v->a[6115] = 1;
	v->a[6116] = aux_sym__statements_repeat1;
	v->a[6117] = state(158);
	v->a[6118] = 1;
	v->a[6119] = sym_command_name;
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = state(186);
	v->a[6121] = 1;
	v->a[6122] = sym_variable_assignment;
	v->a[6123] = state(298);
	v->a[6124] = 1;
	v->a[6125] = aux_sym_command_repeat1;
	v->a[6126] = state(555);
	v->a[6127] = 1;
	v->a[6128] = sym_concatenation;
	v->a[6129] = state(568);
	v->a[6130] = 1;
	v->a[6131] = sym_file_redirect;
	v->a[6132] = state(937);
	v->a[6133] = 1;
	v->a[6134] = sym_pipeline;
	v->a[6135] = state(1019);
	v->a[6136] = 1;
	v->a[6137] = aux_sym_redirected_statement_repeat2;
	v->a[6138] = state(1557);
	v->a[6139] = 1;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = sym__statement_not_pipeline;
	v->a[6141] = state(1641);
	v->a[6142] = 1;
	v->a[6143] = sym__statements;
	v->a[6144] = actions(11);
	v->a[6145] = 2;
	v->a[6146] = anon_sym_while;
	v->a[6147] = anon_sym_until;
	v->a[6148] = actions(214);
	v->a[6149] = 2;
	v->a[6150] = sym_raw_string;
	v->a[6151] = sym_number;
	v->a[6152] = actions(212);
	v->a[6153] = 3;
	v->a[6154] = anon_sym_LT;
	v->a[6155] = anon_sym_GT;
	v->a[6156] = anon_sym_GT_GT;
	v->a[6157] = state(277);
	v->a[6158] = 5;
	v->a[6159] = sym_arithmetic_expansion;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = sym_string;
	v->a[6161] = sym_simple_expansion;
	v->a[6162] = sym_expansion;
	v->a[6163] = sym_command_substitution;
	v->a[6164] = state(877);
	v->a[6165] = 12;
	v->a[6166] = sym_redirected_statement;
	v->a[6167] = sym_for_statement;
	v->a[6168] = sym_while_statement;
	v->a[6169] = sym_if_statement;
	v->a[6170] = sym_case_statement;
	v->a[6171] = sym_function_definition;
	v->a[6172] = sym_compound_statement;
	v->a[6173] = sym_subshell;
	v->a[6174] = sym_list;
	v->a[6175] = sym_negated_command;
	v->a[6176] = sym_command;
	v->a[6177] = sym__variable_assignments;
	v->a[6178] = 30;
	v->a[6179] = actions(3);
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = 1;
	v->a[6181] = sym_comment;
	v->a[6182] = actions(9);
	v->a[6183] = 1;
	v->a[6184] = anon_sym_for;
	v->a[6185] = actions(13);
	v->a[6186] = 1;
	v->a[6187] = anon_sym_if;
	v->a[6188] = actions(15);
	v->a[6189] = 1;
	v->a[6190] = anon_sym_case;
	v->a[6191] = actions(17);
	v->a[6192] = 1;
	v->a[6193] = anon_sym_LPAREN;
	v->a[6194] = actions(19);
	v->a[6195] = 1;
	v->a[6196] = anon_sym_LBRACE;
	v->a[6197] = actions(41);
	v->a[6198] = 1;
	v->a[6199] = sym_word;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
