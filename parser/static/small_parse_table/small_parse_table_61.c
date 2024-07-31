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
	v->a[6100] = aux_sym__statements_repeat1;
	v->a[6101] = state(227);
	v->a[6102] = 1;
	v->a[6103] = sym_command_name;
	v->a[6104] = state(277);
	v->a[6105] = 1;
	v->a[6106] = sym_variable_assignment;
	v->a[6107] = state(506);
	v->a[6108] = 1;
	v->a[6109] = aux_sym_command_repeat1;
	v->a[6110] = state(600);
	v->a[6111] = 1;
	v->a[6112] = sym_file_redirect;
	v->a[6113] = state(602);
	v->a[6114] = 1;
	v->a[6115] = sym_concatenation;
	v->a[6116] = state(911);
	v->a[6117] = 1;
	v->a[6118] = sym_pipeline;
	v->a[6119] = state(1001);
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = 1;
	v->a[6121] = aux_sym_redirected_statement_repeat2;
	v->a[6122] = state(1606);
	v->a[6123] = 1;
	v->a[6124] = sym__statement_not_pipeline;
	v->a[6125] = state(1803);
	v->a[6126] = 1;
	v->a[6127] = sym__statements;
	v->a[6128] = actions(11);
	v->a[6129] = 2;
	v->a[6130] = anon_sym_while;
	v->a[6131] = anon_sym_until;
	v->a[6132] = actions(212);
	v->a[6133] = 2;
	v->a[6134] = sym_raw_string;
	v->a[6135] = sym_number;
	v->a[6136] = state(327);
	v->a[6137] = 5;
	v->a[6138] = sym_arithmetic_expansion;
	v->a[6139] = sym_string;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = sym_simple_expansion;
	v->a[6141] = sym_expansion;
	v->a[6142] = sym_command_substitution;
	v->a[6143] = actions(210);
	v->a[6144] = 7;
	v->a[6145] = anon_sym_LT;
	v->a[6146] = anon_sym_GT;
	v->a[6147] = anon_sym_GT_GT;
	v->a[6148] = anon_sym_LT_AMP;
	v->a[6149] = anon_sym_GT_AMP;
	v->a[6150] = anon_sym_GT_PIPE;
	v->a[6151] = anon_sym_LT_GT;
	v->a[6152] = state(884);
	v->a[6153] = 12;
	v->a[6154] = sym_redirected_statement;
	v->a[6155] = sym_for_statement;
	v->a[6156] = sym_while_statement;
	v->a[6157] = sym_if_statement;
	v->a[6158] = sym_case_statement;
	v->a[6159] = sym_function_definition;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = sym_compound_statement;
	v->a[6161] = sym_subshell;
	v->a[6162] = sym_list;
	v->a[6163] = sym_negated_command;
	v->a[6164] = sym_command;
	v->a[6165] = sym__variable_assignments;
	v->a[6166] = 30;
	v->a[6167] = actions(3);
	v->a[6168] = 1;
	v->a[6169] = sym_comment;
	v->a[6170] = actions(9);
	v->a[6171] = 1;
	v->a[6172] = anon_sym_for;
	v->a[6173] = actions(13);
	v->a[6174] = 1;
	v->a[6175] = anon_sym_if;
	v->a[6176] = actions(15);
	v->a[6177] = 1;
	v->a[6178] = anon_sym_case;
	v->a[6179] = actions(17);
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = 1;
	v->a[6181] = anon_sym_LPAREN;
	v->a[6182] = actions(19);
	v->a[6183] = 1;
	v->a[6184] = anon_sym_LBRACE;
	v->a[6185] = actions(53);
	v->a[6186] = 1;
	v->a[6187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6188] = actions(55);
	v->a[6189] = 1;
	v->a[6190] = anon_sym_DOLLAR;
	v->a[6191] = actions(57);
	v->a[6192] = 1;
	v->a[6193] = anon_sym_DQUOTE;
	v->a[6194] = actions(61);
	v->a[6195] = 1;
	v->a[6196] = anon_sym_DOLLAR_LBRACE;
	v->a[6197] = actions(63);
	v->a[6198] = 1;
	v->a[6199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
