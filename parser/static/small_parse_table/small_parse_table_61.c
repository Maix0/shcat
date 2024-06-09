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
	v->a[6100] = sym_expansion;
	v->a[6101] = sym_command_substitution;
	v->a[6102] = actions(252);
	v->a[6103] = 8;
	v->a[6104] = anon_sym_LT;
	v->a[6105] = anon_sym_GT;
	v->a[6106] = anon_sym_GT_GT;
	v->a[6107] = anon_sym_AMP_GT;
	v->a[6108] = anon_sym_AMP_GT_GT;
	v->a[6109] = anon_sym_LT_AMP;
	v->a[6110] = anon_sym_GT_AMP;
	v->a[6111] = anon_sym_GT_PIPE;
	v->a[6112] = state(1031);
	v->a[6113] = 12;
	v->a[6114] = sym_redirected_statement;
	v->a[6115] = sym_for_statement;
	v->a[6116] = sym_while_statement;
	v->a[6117] = sym_if_statement;
	v->a[6118] = sym_case_statement;
	v->a[6119] = sym_function_definition;
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = sym_compound_statement;
	v->a[6121] = sym_subshell;
	v->a[6122] = sym_list;
	v->a[6123] = sym_negated_command;
	v->a[6124] = sym_command;
	v->a[6125] = sym_variable_assignments;
	v->a[6126] = 34;
	v->a[6127] = actions(3);
	v->a[6128] = 1;
	v->a[6129] = sym_comment;
	v->a[6130] = actions(9);
	v->a[6131] = 1;
	v->a[6132] = anon_sym_for;
	v->a[6133] = actions(13);
	v->a[6134] = 1;
	v->a[6135] = anon_sym_if;
	v->a[6136] = actions(15);
	v->a[6137] = 1;
	v->a[6138] = anon_sym_case;
	v->a[6139] = actions(17);
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = 1;
	v->a[6141] = anon_sym_LPAREN;
	v->a[6142] = actions(19);
	v->a[6143] = 1;
	v->a[6144] = anon_sym_LBRACE;
	v->a[6145] = actions(63);
	v->a[6146] = 1;
	v->a[6147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6148] = actions(65);
	v->a[6149] = 1;
	v->a[6150] = anon_sym_DOLLAR;
	v->a[6151] = actions(67);
	v->a[6152] = 1;
	v->a[6153] = anon_sym_DQUOTE;
	v->a[6154] = actions(69);
	v->a[6155] = 1;
	v->a[6156] = sym_raw_string;
	v->a[6157] = actions(71);
	v->a[6158] = 1;
	v->a[6159] = aux_sym_number_token1;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = actions(73);
	v->a[6161] = 1;
	v->a[6162] = aux_sym_number_token2;
	v->a[6163] = actions(75);
	v->a[6164] = 1;
	v->a[6165] = anon_sym_DOLLAR_LBRACE;
	v->a[6166] = actions(77);
	v->a[6167] = 1;
	v->a[6168] = anon_sym_DOLLAR_LPAREN;
	v->a[6169] = actions(79);
	v->a[6170] = 1;
	v->a[6171] = anon_sym_BQUOTE;
	v->a[6172] = actions(81);
	v->a[6173] = 1;
	v->a[6174] = sym_file_descriptor;
	v->a[6175] = actions(83);
	v->a[6176] = 1;
	v->a[6177] = sym_variable_name;
	v->a[6178] = actions(238);
	v->a[6179] = 1;
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = sym_word;
	v->a[6181] = actions(240);
	v->a[6182] = 1;
	v->a[6183] = anon_sym_BANG;
	v->a[6184] = state(132);
	v->a[6185] = 1;
	v->a[6186] = aux_sym__statements_repeat1;
	v->a[6187] = state(185);
	v->a[6188] = 1;
	v->a[6189] = sym_command_name;
	v->a[6190] = state(297);
	v->a[6191] = 1;
	v->a[6192] = sym_variable_assignment;
	v->a[6193] = state(582);
	v->a[6194] = 1;
	v->a[6195] = sym_concatenation;
	v->a[6196] = state(614);
	v->a[6197] = 1;
	v->a[6198] = aux_sym_command_repeat1;
	v->a[6199] = state(769);
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
