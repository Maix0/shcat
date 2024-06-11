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
	v->a[6100] = anon_sym_for;
	v->a[6101] = actions(13);
	v->a[6102] = 1;
	v->a[6103] = anon_sym_if;
	v->a[6104] = actions(15);
	v->a[6105] = 1;
	v->a[6106] = anon_sym_case;
	v->a[6107] = actions(17);
	v->a[6108] = 1;
	v->a[6109] = anon_sym_LPAREN;
	v->a[6110] = actions(19);
	v->a[6111] = 1;
	v->a[6112] = anon_sym_LBRACE;
	v->a[6113] = actions(45);
	v->a[6114] = 1;
	v->a[6115] = sym_word;
	v->a[6116] = actions(53);
	v->a[6117] = 1;
	v->a[6118] = anon_sym_BANG;
	v->a[6119] = actions(59);
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = 1;
	v->a[6121] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6122] = actions(61);
	v->a[6123] = 1;
	v->a[6124] = anon_sym_DOLLAR;
	v->a[6125] = actions(63);
	v->a[6126] = 1;
	v->a[6127] = anon_sym_DQUOTE;
	v->a[6128] = actions(67);
	v->a[6129] = 1;
	v->a[6130] = anon_sym_DOLLAR_LBRACE;
	v->a[6131] = actions(69);
	v->a[6132] = 1;
	v->a[6133] = anon_sym_DOLLAR_LPAREN;
	v->a[6134] = actions(71);
	v->a[6135] = 1;
	v->a[6136] = anon_sym_BQUOTE;
	v->a[6137] = actions(73);
	v->a[6138] = 1;
	v->a[6139] = sym_file_descriptor;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = actions(75);
	v->a[6141] = 1;
	v->a[6142] = sym_variable_name;
	v->a[6143] = actions(246);
	v->a[6144] = 1;
	v->a[6145] = anon_sym_then;
	v->a[6146] = state(35);
	v->a[6147] = 1;
	v->a[6148] = aux_sym__terminated_statement;
	v->a[6149] = state(187);
	v->a[6150] = 1;
	v->a[6151] = sym_command_name;
	v->a[6152] = state(274);
	v->a[6153] = 1;
	v->a[6154] = sym_variable_assignment;
	v->a[6155] = state(647);
	v->a[6156] = 1;
	v->a[6157] = sym_concatenation;
	v->a[6158] = state(736);
	v->a[6159] = 1;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = aux_sym_command_repeat1;
	v->a[6161] = state(738);
	v->a[6162] = 1;
	v->a[6163] = sym_file_redirect;
	v->a[6164] = state(1439);
	v->a[6165] = 1;
	v->a[6166] = sym_pipeline;
	v->a[6167] = state(1460);
	v->a[6168] = 1;
	v->a[6169] = aux_sym_redirected_statement_repeat2;
	v->a[6170] = state(2269);
	v->a[6171] = 1;
	v->a[6172] = sym__statement_not_pipeline;
	v->a[6173] = actions(11);
	v->a[6174] = 2;
	v->a[6175] = anon_sym_while;
	v->a[6176] = anon_sym_until;
	v->a[6177] = actions(57);
	v->a[6178] = 2;
	v->a[6179] = anon_sym_LT_AMP_DASH;
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = anon_sym_GT_AMP_DASH;
	v->a[6181] = actions(65);
	v->a[6182] = 2;
	v->a[6183] = sym_raw_string;
	v->a[6184] = sym_number;
	v->a[6185] = state(394);
	v->a[6186] = 5;
	v->a[6187] = sym_arithmetic_expansion;
	v->a[6188] = sym_string;
	v->a[6189] = sym_simple_expansion;
	v->a[6190] = sym_expansion;
	v->a[6191] = sym_command_substitution;
	v->a[6192] = actions(55);
	v->a[6193] = 8;
	v->a[6194] = anon_sym_LT;
	v->a[6195] = anon_sym_GT;
	v->a[6196] = anon_sym_GT_GT;
	v->a[6197] = anon_sym_AMP_GT;
	v->a[6198] = anon_sym_AMP_GT_GT;
	v->a[6199] = anon_sym_LT_AMP;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
