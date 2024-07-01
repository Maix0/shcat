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
	v->a[6100] = anon_sym_GT_GT;
	v->a[6101] = anon_sym_LT_AMP;
	v->a[6102] = anon_sym_GT_AMP;
	v->a[6103] = anon_sym_GT_PIPE;
	v->a[6104] = state(1087);
	v->a[6105] = 12;
	v->a[6106] = sym_redirected_statement;
	v->a[6107] = sym_for_statement;
	v->a[6108] = sym_while_statement;
	v->a[6109] = sym_if_statement;
	v->a[6110] = sym_case_statement;
	v->a[6111] = sym_function_definition;
	v->a[6112] = sym_compound_statement;
	v->a[6113] = sym_subshell;
	v->a[6114] = sym_list;
	v->a[6115] = sym_negated_command;
	v->a[6116] = sym_command;
	v->a[6117] = sym__variable_assignments;
	v->a[6118] = 32;
	v->a[6119] = actions(3);
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = 1;
	v->a[6121] = sym_comment;
	v->a[6122] = actions(9);
	v->a[6123] = 1;
	v->a[6124] = anon_sym_for;
	v->a[6125] = actions(13);
	v->a[6126] = 1;
	v->a[6127] = anon_sym_if;
	v->a[6128] = actions(15);
	v->a[6129] = 1;
	v->a[6130] = anon_sym_case;
	v->a[6131] = actions(17);
	v->a[6132] = 1;
	v->a[6133] = anon_sym_LPAREN;
	v->a[6134] = actions(19);
	v->a[6135] = 1;
	v->a[6136] = anon_sym_LBRACE;
	v->a[6137] = actions(59);
	v->a[6138] = 1;
	v->a[6139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = actions(61);
	v->a[6141] = 1;
	v->a[6142] = anon_sym_DOLLAR;
	v->a[6143] = actions(63);
	v->a[6144] = 1;
	v->a[6145] = anon_sym_DQUOTE;
	v->a[6146] = actions(67);
	v->a[6147] = 1;
	v->a[6148] = anon_sym_DOLLAR_LBRACE;
	v->a[6149] = actions(69);
	v->a[6150] = 1;
	v->a[6151] = anon_sym_DOLLAR_LPAREN;
	v->a[6152] = actions(71);
	v->a[6153] = 1;
	v->a[6154] = anon_sym_BQUOTE;
	v->a[6155] = actions(73);
	v->a[6156] = 1;
	v->a[6157] = sym_file_descriptor;
	v->a[6158] = actions(75);
	v->a[6159] = 1;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = sym_variable_name;
	v->a[6161] = actions(240);
	v->a[6162] = 1;
	v->a[6163] = sym_word;
	v->a[6164] = actions(242);
	v->a[6165] = 1;
	v->a[6166] = anon_sym_BANG;
	v->a[6167] = state(136);
	v->a[6168] = 1;
	v->a[6169] = aux_sym__statements_repeat1;
	v->a[6170] = state(188);
	v->a[6171] = 1;
	v->a[6172] = sym_command_name;
	v->a[6173] = state(297);
	v->a[6174] = 1;
	v->a[6175] = sym_variable_assignment;
	v->a[6176] = state(650);
	v->a[6177] = 1;
	v->a[6178] = sym_concatenation;
	v->a[6179] = state(749);
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = 1;
	v->a[6181] = aux_sym_command_repeat1;
	v->a[6182] = state(795);
	v->a[6183] = 1;
	v->a[6184] = sym_file_redirect;
	v->a[6185] = state(1154);
	v->a[6186] = 1;
	v->a[6187] = sym_pipeline;
	v->a[6188] = state(1240);
	v->a[6189] = 1;
	v->a[6190] = aux_sym_redirected_statement_repeat2;
	v->a[6191] = state(2119);
	v->a[6192] = 1;
	v->a[6193] = sym__statement_not_pipeline;
	v->a[6194] = state(2209);
	v->a[6195] = 1;
	v->a[6196] = sym__statements;
	v->a[6197] = actions(11);
	v->a[6198] = 2;
	v->a[6199] = anon_sym_while;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
