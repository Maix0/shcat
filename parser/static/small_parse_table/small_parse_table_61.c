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
	v->a[6100] = anon_sym_case;
	v->a[6101] = actions(17);
	v->a[6102] = 1;
	v->a[6103] = anon_sym_LPAREN;
	v->a[6104] = actions(19);
	v->a[6105] = 1;
	v->a[6106] = anon_sym_LBRACE;
	v->a[6107] = actions(55);
	v->a[6108] = 1;
	v->a[6109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6110] = actions(57);
	v->a[6111] = 1;
	v->a[6112] = anon_sym_DOLLAR;
	v->a[6113] = actions(59);
	v->a[6114] = 1;
	v->a[6115] = anon_sym_DQUOTE;
	v->a[6116] = actions(63);
	v->a[6117] = 1;
	v->a[6118] = anon_sym_DOLLAR_LBRACE;
	v->a[6119] = actions(65);
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = 1;
	v->a[6121] = anon_sym_DOLLAR_LPAREN;
	v->a[6122] = actions(67);
	v->a[6123] = 1;
	v->a[6124] = anon_sym_BQUOTE;
	v->a[6125] = actions(211);
	v->a[6126] = 1;
	v->a[6127] = sym_word;
	v->a[6128] = actions(213);
	v->a[6129] = 1;
	v->a[6130] = anon_sym_BANG;
	v->a[6131] = actions(219);
	v->a[6132] = 1;
	v->a[6133] = sym_file_descriptor;
	v->a[6134] = actions(221);
	v->a[6135] = 1;
	v->a[6136] = sym_variable_name;
	v->a[6137] = state(120);
	v->a[6138] = 1;
	v->a[6139] = aux_sym__statements_repeat1;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = state(177);
	v->a[6141] = 1;
	v->a[6142] = sym_command_name;
	v->a[6143] = state(208);
	v->a[6144] = 1;
	v->a[6145] = sym_variable_assignment;
	v->a[6146] = state(584);
	v->a[6147] = 1;
	v->a[6148] = sym_concatenation;
	v->a[6149] = state(639);
	v->a[6150] = 1;
	v->a[6151] = aux_sym_command_repeat1;
	v->a[6152] = state(707);
	v->a[6153] = 1;
	v->a[6154] = sym_file_redirect;
	v->a[6155] = state(1073);
	v->a[6156] = 1;
	v->a[6157] = sym_pipeline;
	v->a[6158] = state(1158);
	v->a[6159] = 1;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = aux_sym_redirected_statement_repeat2;
	v->a[6161] = state(1906);
	v->a[6162] = 1;
	v->a[6163] = sym__statement_not_pipeline;
	v->a[6164] = state(2062);
	v->a[6165] = 1;
	v->a[6166] = sym__statements;
	v->a[6167] = actions(11);
	v->a[6168] = 2;
	v->a[6169] = anon_sym_while;
	v->a[6170] = anon_sym_until;
	v->a[6171] = actions(217);
	v->a[6172] = 2;
	v->a[6173] = sym_raw_string;
	v->a[6174] = sym_number;
	v->a[6175] = state(347);
	v->a[6176] = 5;
	v->a[6177] = sym_arithmetic_expansion;
	v->a[6178] = sym_string;
	v->a[6179] = sym_simple_expansion;
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = sym_expansion;
	v->a[6181] = sym_command_substitution;
	v->a[6182] = actions(215);
	v->a[6183] = 7;
	v->a[6184] = anon_sym_LT;
	v->a[6185] = anon_sym_GT;
	v->a[6186] = anon_sym_GT_GT;
	v->a[6187] = anon_sym_LT_AMP;
	v->a[6188] = anon_sym_GT_AMP;
	v->a[6189] = anon_sym_GT_PIPE;
	v->a[6190] = anon_sym_LT_GT;
	v->a[6191] = state(958);
	v->a[6192] = 12;
	v->a[6193] = sym_redirected_statement;
	v->a[6194] = sym_for_statement;
	v->a[6195] = sym_while_statement;
	v->a[6196] = sym_if_statement;
	v->a[6197] = sym_case_statement;
	v->a[6198] = sym_function_definition;
	v->a[6199] = sym_compound_statement;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
