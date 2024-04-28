/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1902.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9510(t_small_parse_table_array *v)
{
	v->a[190200] = anon_sym_GT_AMP;
	v->a[190201] = anon_sym_DOLLAR;
	v->a[190202] = aux_sym_number_token1;
	v->a[190203] = aux_sym_number_token2;
	v->a[190204] = anon_sym_DOLLAR_LPAREN;
	v->a[190205] = anon_sym_BQUOTE;
	v->a[190206] = sym_word;
	v->a[190207] = actions(1294);
	v->a[190208] = 23;
	v->a[190209] = sym_file_descriptor;
	v->a[190210] = sym__concat;
	v->a[190211] = sym_variable_name;
	v->a[190212] = sym_test_operator;
	v->a[190213] = sym__brace_start;
	v->a[190214] = anon_sym_LPAREN_LPAREN;
	v->a[190215] = anon_sym_GT_GT;
	v->a[190216] = anon_sym_AMP_GT_GT;
	v->a[190217] = anon_sym_GT_PIPE;
	v->a[190218] = anon_sym_LT_AMP_DASH;
	v->a[190219] = anon_sym_GT_AMP_DASH;
	small_parse_table_9511(v);
}

void	small_parse_table_9511(t_small_parse_table_array *v)
{
	v->a[190220] = anon_sym_LT_LT_LT;
	v->a[190221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190222] = anon_sym_DOLLAR_LBRACK;
	v->a[190223] = aux_sym_concatenation_token1;
	v->a[190224] = sym__special_character;
	v->a[190225] = anon_sym_DQUOTE;
	v->a[190226] = sym_raw_string;
	v->a[190227] = sym_ansi_c_string;
	v->a[190228] = anon_sym_DOLLAR_LBRACE;
	v->a[190229] = anon_sym_DOLLAR_BQUOTE;
	v->a[190230] = anon_sym_LT_LPAREN;
	v->a[190231] = anon_sym_GT_LPAREN;
	v->a[190232] = 23;
	v->a[190233] = actions(3);
	v->a[190234] = 1;
	v->a[190235] = sym_comment;
	v->a[190236] = actions(8262);
	v->a[190237] = 1;
	v->a[190238] = sym_word;
	v->a[190239] = actions(8266);
	small_parse_table_9512(v);
}

void	small_parse_table_9512(t_small_parse_table_array *v)
{
	v->a[190240] = 1;
	v->a[190241] = anon_sym_LPAREN;
	v->a[190242] = actions(8268);
	v->a[190243] = 1;
	v->a[190244] = anon_sym_DOLLAR_LBRACK;
	v->a[190245] = actions(8270);
	v->a[190246] = 1;
	v->a[190247] = anon_sym_DOLLAR;
	v->a[190248] = actions(8272);
	v->a[190249] = 1;
	v->a[190250] = sym__special_character;
	v->a[190251] = actions(8274);
	v->a[190252] = 1;
	v->a[190253] = anon_sym_DQUOTE;
	v->a[190254] = actions(8278);
	v->a[190255] = 1;
	v->a[190256] = aux_sym_number_token1;
	v->a[190257] = actions(8280);
	v->a[190258] = 1;
	v->a[190259] = aux_sym_number_token2;
	small_parse_table_9513(v);
}

void	small_parse_table_9513(t_small_parse_table_array *v)
{
	v->a[190260] = actions(8282);
	v->a[190261] = 1;
	v->a[190262] = anon_sym_DOLLAR_LBRACE;
	v->a[190263] = actions(8284);
	v->a[190264] = 1;
	v->a[190265] = anon_sym_DOLLAR_LPAREN;
	v->a[190266] = actions(8286);
	v->a[190267] = 1;
	v->a[190268] = anon_sym_BQUOTE;
	v->a[190269] = actions(8288);
	v->a[190270] = 1;
	v->a[190271] = anon_sym_DOLLAR_BQUOTE;
	v->a[190272] = actions(8292);
	v->a[190273] = 1;
	v->a[190274] = sym__comment_word;
	v->a[190275] = actions(8294);
	v->a[190276] = 1;
	v->a[190277] = sym__empty_value;
	v->a[190278] = actions(8296);
	v->a[190279] = 1;
	small_parse_table_9514(v);
}

void	small_parse_table_9514(t_small_parse_table_array *v)
{
	v->a[190280] = sym_test_operator;
	v->a[190281] = actions(8298);
	v->a[190282] = 1;
	v->a[190283] = sym__brace_start;
	v->a[190284] = state(1618);
	v->a[190285] = 1;
	v->a[190286] = aux_sym__literal_repeat1;
	v->a[190287] = actions(8264);
	v->a[190288] = 2;
	v->a[190289] = anon_sym_LPAREN_LPAREN;
	v->a[190290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190291] = actions(8276);
	v->a[190292] = 2;
	v->a[190293] = sym_raw_string;
	v->a[190294] = sym_ansi_c_string;
	v->a[190295] = actions(8290);
	v->a[190296] = 2;
	v->a[190297] = anon_sym_LT_LPAREN;
	v->a[190298] = anon_sym_GT_LPAREN;
	v->a[190299] = state(1747);
	small_parse_table_9515(v);
}

/* EOF small_parse_table_1902.c */
