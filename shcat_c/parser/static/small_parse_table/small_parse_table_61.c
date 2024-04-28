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
	v->a[6100] = aux_sym__multiline_variable_name_token1;
	v->a[6101] = actions(1235);
	v->a[6102] = 5;
	v->a[6103] = sym_file_descriptor;
	v->a[6104] = sym_test_operator;
	v->a[6105] = sym__bare_dollar;
	v->a[6106] = sym__brace_start;
	v->a[6107] = ts_builtin_sym_end;
	v->a[6108] = actions(2151);
	v->a[6109] = 9;
	v->a[6110] = anon_sym_DASH;
	v->a[6111] = anon_sym_STAR;
	v->a[6112] = anon_sym_BANG;
	v->a[6113] = anon_sym_QMARK;
	v->a[6114] = anon_sym_DOLLAR;
	v->a[6115] = anon_sym_POUND;
	v->a[6116] = anon_sym_AT2;
	v->a[6117] = anon_sym_0;
	v->a[6118] = anon_sym__;
	v->a[6119] = actions(1227);
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = 38;
	v->a[6121] = anon_sym_LPAREN_LPAREN;
	v->a[6122] = anon_sym_SEMI;
	v->a[6123] = anon_sym_PIPE_PIPE;
	v->a[6124] = anon_sym_AMP_AMP;
	v->a[6125] = anon_sym_PIPE;
	v->a[6126] = anon_sym_AMP;
	v->a[6127] = anon_sym_EQ_EQ;
	v->a[6128] = anon_sym_LT;
	v->a[6129] = anon_sym_GT;
	v->a[6130] = anon_sym_LT_LT;
	v->a[6131] = anon_sym_GT_GT;
	v->a[6132] = anon_sym_SEMI_SEMI;
	v->a[6133] = anon_sym_PIPE_AMP;
	v->a[6134] = anon_sym_EQ_TILDE;
	v->a[6135] = anon_sym_AMP_GT;
	v->a[6136] = anon_sym_AMP_GT_GT;
	v->a[6137] = anon_sym_LT_AMP;
	v->a[6138] = anon_sym_GT_AMP;
	v->a[6139] = anon_sym_GT_PIPE;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = anon_sym_LT_AMP_DASH;
	v->a[6141] = anon_sym_GT_AMP_DASH;
	v->a[6142] = anon_sym_LT_LT_DASH;
	v->a[6143] = aux_sym_heredoc_redirect_token1;
	v->a[6144] = anon_sym_LT_LT_LT;
	v->a[6145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6146] = anon_sym_DOLLAR_LBRACK;
	v->a[6147] = sym__special_character;
	v->a[6148] = sym_raw_string;
	v->a[6149] = sym_ansi_c_string;
	v->a[6150] = aux_sym_number_token1;
	v->a[6151] = aux_sym_number_token2;
	v->a[6152] = anon_sym_DOLLAR_LBRACE;
	v->a[6153] = anon_sym_DOLLAR_LPAREN;
	v->a[6154] = anon_sym_BQUOTE;
	v->a[6155] = anon_sym_DOLLAR_BQUOTE;
	v->a[6156] = anon_sym_LT_LPAREN;
	v->a[6157] = anon_sym_GT_LPAREN;
	v->a[6158] = sym_word;
	v->a[6159] = 8;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = actions(3);
	v->a[6161] = 1;
	v->a[6162] = sym_comment;
	v->a[6163] = actions(1555);
	v->a[6164] = 1;
	v->a[6165] = anon_sym_DQUOTE;
	v->a[6166] = actions(2070);
	v->a[6167] = 1;
	v->a[6168] = sym_variable_name;
	v->a[6169] = state(1176);
	v->a[6170] = 1;
	v->a[6171] = sym_string;
	v->a[6172] = actions(2068);
	v->a[6173] = 2;
	v->a[6174] = aux_sym__simple_variable_name_token1;
	v->a[6175] = aux_sym__multiline_variable_name_token1;
	v->a[6176] = actions(1241);
	v->a[6177] = 4;
	v->a[6178] = sym_file_descriptor;
	v->a[6179] = sym_test_operator;
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = sym__bare_dollar;
	v->a[6181] = sym__brace_start;
	v->a[6182] = actions(2066);
	v->a[6183] = 9;
	v->a[6184] = anon_sym_DASH;
	v->a[6185] = anon_sym_STAR;
	v->a[6186] = anon_sym_BANG;
	v->a[6187] = anon_sym_QMARK;
	v->a[6188] = anon_sym_DOLLAR;
	v->a[6189] = anon_sym_POUND;
	v->a[6190] = anon_sym_AT2;
	v->a[6191] = anon_sym_0;
	v->a[6192] = anon_sym__;
	v->a[6193] = actions(1239);
	v->a[6194] = 39;
	v->a[6195] = anon_sym_LPAREN_LPAREN;
	v->a[6196] = anon_sym_SEMI;
	v->a[6197] = anon_sym_PIPE_PIPE;
	v->a[6198] = anon_sym_AMP_AMP;
	v->a[6199] = anon_sym_PIPE;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
