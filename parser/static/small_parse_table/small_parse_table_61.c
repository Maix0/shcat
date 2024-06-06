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
	v->a[6101] = anon_sym_DQUOTE;
	v->a[6102] = actions(1618);
	v->a[6103] = 1;
	v->a[6104] = aux_sym_number_token1;
	v->a[6105] = actions(1621);
	v->a[6106] = 1;
	v->a[6107] = aux_sym_number_token2;
	v->a[6108] = actions(1624);
	v->a[6109] = 1;
	v->a[6110] = anon_sym_DOLLAR_LBRACE;
	v->a[6111] = actions(1627);
	v->a[6112] = 1;
	v->a[6113] = anon_sym_DOLLAR_LPAREN;
	v->a[6114] = actions(1630);
	v->a[6115] = 1;
	v->a[6116] = anon_sym_BQUOTE;
	v->a[6117] = actions(1633);
	v->a[6118] = 1;
	v->a[6119] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_306(v);
}

void	small_parse_table_306(t_small_parse_table_array *v)
{
	v->a[6120] = actions(1636);
	v->a[6121] = 1;
	v->a[6122] = sym_test_operator;
	v->a[6123] = actions(1639);
	v->a[6124] = 1;
	v->a[6125] = sym__brace_start;
	v->a[6126] = state(980);
	v->a[6127] = 1;
	v->a[6128] = aux_sym__literal_repeat1;
	v->a[6129] = actions(1603);
	v->a[6130] = 2;
	v->a[6131] = sym_raw_string;
	v->a[6132] = sym_word;
	v->a[6133] = state(334);
	v->a[6134] = 2;
	v->a[6135] = sym_concatenation;
	v->a[6136] = aux_sym_for_statement_repeat1;
	v->a[6137] = actions(1287);
	v->a[6138] = 3;
	v->a[6139] = sym_file_descriptor;
	small_parse_table_307(v);
}

void	small_parse_table_307(t_small_parse_table_array *v)
{
	v->a[6140] = sym_variable_name;
	v->a[6141] = aux_sym_heredoc_redirect_token1;
	v->a[6142] = state(637);
	v->a[6143] = 7;
	v->a[6144] = sym_arithmetic_expansion;
	v->a[6145] = sym_brace_expression;
	v->a[6146] = sym_string;
	v->a[6147] = sym_number;
	v->a[6148] = sym_simple_expansion;
	v->a[6149] = sym_expansion;
	v->a[6150] = sym_command_substitution;
	v->a[6151] = actions(1285);
	v->a[6152] = 21;
	v->a[6153] = anon_sym_PIPE;
	v->a[6154] = anon_sym_SEMI_SEMI;
	v->a[6155] = anon_sym_SEMI_AMP;
	v->a[6156] = anon_sym_SEMI_SEMI_AMP;
	v->a[6157] = anon_sym_PIPE_AMP;
	v->a[6158] = anon_sym_AMP_AMP;
	v->a[6159] = anon_sym_PIPE_PIPE;
	small_parse_table_308(v);
}

void	small_parse_table_308(t_small_parse_table_array *v)
{
	v->a[6160] = anon_sym_LT;
	v->a[6161] = anon_sym_GT;
	v->a[6162] = anon_sym_GT_GT;
	v->a[6163] = anon_sym_AMP_GT;
	v->a[6164] = anon_sym_AMP_GT_GT;
	v->a[6165] = anon_sym_LT_AMP;
	v->a[6166] = anon_sym_GT_AMP;
	v->a[6167] = anon_sym_GT_PIPE;
	v->a[6168] = anon_sym_LT_AMP_DASH;
	v->a[6169] = anon_sym_GT_AMP_DASH;
	v->a[6170] = anon_sym_LT_LT;
	v->a[6171] = anon_sym_LT_LT_DASH;
	v->a[6172] = anon_sym_AMP;
	v->a[6173] = anon_sym_SEMI;
	v->a[6174] = 6;
	v->a[6175] = actions(3);
	v->a[6176] = 1;
	v->a[6177] = sym_comment;
	v->a[6178] = state(980);
	v->a[6179] = 1;
	small_parse_table_309(v);
}

void	small_parse_table_309(t_small_parse_table_array *v)
{
	v->a[6180] = aux_sym__literal_repeat1;
	v->a[6181] = state(334);
	v->a[6182] = 2;
	v->a[6183] = sym_concatenation;
	v->a[6184] = aux_sym_for_statement_repeat1;
	v->a[6185] = actions(1182);
	v->a[6186] = 5;
	v->a[6187] = sym_file_descriptor;
	v->a[6188] = sym_variable_name;
	v->a[6189] = sym_test_operator;
	v->a[6190] = sym__brace_start;
	v->a[6191] = aux_sym_heredoc_redirect_token1;
	v->a[6192] = state(637);
	v->a[6193] = 7;
	v->a[6194] = sym_arithmetic_expansion;
	v->a[6195] = sym_brace_expression;
	v->a[6196] = sym_string;
	v->a[6197] = sym_number;
	v->a[6198] = sym_simple_expansion;
	v->a[6199] = sym_expansion;
	small_parse_table_310(v);
}

/* EOF small_parse_table_61.c */
