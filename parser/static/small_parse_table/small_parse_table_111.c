/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_111.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_555(t_small_parse_table_array *v)
{
	v->a[11100] = aux_sym_number_token1;
	v->a[11101] = actions(1262);
	v->a[11102] = 1;
	v->a[11103] = aux_sym_number_token2;
	v->a[11104] = actions(1264);
	v->a[11105] = 1;
	v->a[11106] = anon_sym_DOLLAR_LBRACE;
	v->a[11107] = actions(1266);
	v->a[11108] = 1;
	v->a[11109] = anon_sym_DOLLAR_LPAREN;
	v->a[11110] = actions(1270);
	v->a[11111] = 1;
	v->a[11112] = anon_sym_DOLLAR_BQUOTE;
	v->a[11113] = actions(1274);
	v->a[11114] = 1;
	v->a[11115] = sym__bare_dollar;
	v->a[11116] = actions(1276);
	v->a[11117] = 1;
	v->a[11118] = sym__brace_start;
	v->a[11119] = actions(1428);
	small_parse_table_556(v);
}

void	small_parse_table_556(t_small_parse_table_array *v)
{
	v->a[11120] = 1;
	v->a[11121] = sym__special_character;
	v->a[11122] = actions(1430);
	v->a[11123] = 1;
	v->a[11124] = sym_test_operator;
	v->a[11125] = state(406);
	v->a[11126] = 1;
	v->a[11127] = aux_sym_command_repeat2;
	v->a[11128] = state(1232);
	v->a[11129] = 1;
	v->a[11130] = aux_sym__literal_repeat1;
	v->a[11131] = state(1293);
	v->a[11132] = 1;
	v->a[11133] = sym_concatenation;
	v->a[11134] = actions(1339);
	v->a[11135] = 2;
	v->a[11136] = sym_file_descriptor;
	v->a[11137] = aux_sym_heredoc_redirect_token1;
	v->a[11138] = actions(1426);
	v->a[11139] = 2;
	small_parse_table_557(v);
}

void	small_parse_table_557(t_small_parse_table_array *v)
{
	v->a[11140] = sym_raw_string;
	v->a[11141] = sym_word;
	v->a[11142] = state(1146);
	v->a[11143] = 7;
	v->a[11144] = sym_arithmetic_expansion;
	v->a[11145] = sym_brace_expression;
	v->a[11146] = sym_string;
	v->a[11147] = sym_number;
	v->a[11148] = sym_simple_expansion;
	v->a[11149] = sym_expansion;
	v->a[11150] = sym_command_substitution;
	v->a[11151] = actions(1337);
	v->a[11152] = 20;
	v->a[11153] = anon_sym_PIPE;
	v->a[11154] = anon_sym_SEMI_SEMI;
	v->a[11155] = anon_sym_PIPE_AMP;
	v->a[11156] = anon_sym_AMP_AMP;
	v->a[11157] = anon_sym_PIPE_PIPE;
	v->a[11158] = anon_sym_LT;
	v->a[11159] = anon_sym_GT;
	small_parse_table_558(v);
}

void	small_parse_table_558(t_small_parse_table_array *v)
{
	v->a[11160] = anon_sym_GT_GT;
	v->a[11161] = anon_sym_AMP_GT;
	v->a[11162] = anon_sym_AMP_GT_GT;
	v->a[11163] = anon_sym_LT_AMP;
	v->a[11164] = anon_sym_GT_AMP;
	v->a[11165] = anon_sym_GT_PIPE;
	v->a[11166] = anon_sym_LT_AMP_DASH;
	v->a[11167] = anon_sym_GT_AMP_DASH;
	v->a[11168] = anon_sym_LT_LT;
	v->a[11169] = anon_sym_LT_LT_DASH;
	v->a[11170] = anon_sym_AMP;
	v->a[11171] = anon_sym_BQUOTE;
	v->a[11172] = anon_sym_SEMI;
	v->a[11173] = 6;
	v->a[11174] = actions(3);
	v->a[11175] = 1;
	v->a[11176] = sym_comment;
	v->a[11177] = actions(1855);
	v->a[11178] = 1;
	v->a[11179] = sym_variable_name;
	small_parse_table_559(v);
}

void	small_parse_table_559(t_small_parse_table_array *v)
{
	v->a[11180] = actions(1853);
	v->a[11181] = 2;
	v->a[11182] = aux_sym__simple_variable_name_token1;
	v->a[11183] = aux_sym__multiline_variable_name_token1;
	v->a[11184] = actions(828);
	v->a[11185] = 3;
	v->a[11186] = sym_file_descriptor;
	v->a[11187] = sym_test_operator;
	v->a[11188] = sym__brace_start;
	v->a[11189] = actions(1851);
	v->a[11190] = 9;
	v->a[11191] = anon_sym_BANG;
	v->a[11192] = anon_sym_DASH;
	v->a[11193] = anon_sym_STAR;
	v->a[11194] = anon_sym_QMARK;
	v->a[11195] = anon_sym_DOLLAR;
	v->a[11196] = anon_sym_POUND;
	v->a[11197] = anon_sym_AT;
	v->a[11198] = anon_sym_0;
	v->a[11199] = anon_sym__;
	small_parse_table_560(v);
}

/* EOF small_parse_table_111.c */
