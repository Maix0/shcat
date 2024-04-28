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
	v->a[11100] = sym_number;
	v->a[11101] = sym_simple_expansion;
	v->a[11102] = sym_expansion;
	v->a[11103] = sym_command_substitution;
	v->a[11104] = sym_process_substitution;
	v->a[11105] = actions(2094);
	v->a[11106] = 37;
	v->a[11107] = anon_sym_LPAREN_LPAREN;
	v->a[11108] = anon_sym_SEMI;
	v->a[11109] = anon_sym_PIPE_PIPE;
	v->a[11110] = anon_sym_AMP_AMP;
	v->a[11111] = anon_sym_PIPE;
	v->a[11112] = anon_sym_AMP;
	v->a[11113] = anon_sym_LT;
	v->a[11114] = anon_sym_GT;
	v->a[11115] = anon_sym_LT_LT;
	v->a[11116] = anon_sym_GT_GT;
	v->a[11117] = anon_sym_SEMI_SEMI;
	v->a[11118] = anon_sym_PIPE_AMP;
	v->a[11119] = anon_sym_AMP_GT;
	small_parse_table_556(v);
}

void	small_parse_table_556(t_small_parse_table_array *v)
{
	v->a[11120] = anon_sym_AMP_GT_GT;
	v->a[11121] = anon_sym_LT_AMP;
	v->a[11122] = anon_sym_GT_AMP;
	v->a[11123] = anon_sym_GT_PIPE;
	v->a[11124] = anon_sym_LT_AMP_DASH;
	v->a[11125] = anon_sym_GT_AMP_DASH;
	v->a[11126] = anon_sym_LT_LT_DASH;
	v->a[11127] = anon_sym_LT_LT_LT;
	v->a[11128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11129] = anon_sym_DOLLAR_LBRACK;
	v->a[11130] = anon_sym_DOLLAR;
	v->a[11131] = sym__special_character;
	v->a[11132] = anon_sym_DQUOTE;
	v->a[11133] = sym_raw_string;
	v->a[11134] = sym_ansi_c_string;
	v->a[11135] = aux_sym_number_token1;
	v->a[11136] = aux_sym_number_token2;
	v->a[11137] = anon_sym_DOLLAR_LBRACE;
	v->a[11138] = anon_sym_DOLLAR_LPAREN;
	v->a[11139] = anon_sym_BQUOTE;
	small_parse_table_557(v);
}

void	small_parse_table_557(t_small_parse_table_array *v)
{
	v->a[11140] = anon_sym_DOLLAR_BQUOTE;
	v->a[11141] = anon_sym_LT_LPAREN;
	v->a[11142] = anon_sym_GT_LPAREN;
	v->a[11143] = sym_word;
	v->a[11144] = 8;
	v->a[11145] = actions(3);
	v->a[11146] = 1;
	v->a[11147] = sym_comment;
	v->a[11148] = actions(1765);
	v->a[11149] = 1;
	v->a[11150] = anon_sym_DQUOTE;
	v->a[11151] = actions(2959);
	v->a[11152] = 1;
	v->a[11153] = sym_variable_name;
	v->a[11154] = state(1213);
	v->a[11155] = 1;
	v->a[11156] = sym_string;
	v->a[11157] = actions(2957);
	v->a[11158] = 2;
	v->a[11159] = aux_sym__simple_variable_name_token1;
	small_parse_table_558(v);
}

void	small_parse_table_558(t_small_parse_table_array *v)
{
	v->a[11160] = aux_sym__multiline_variable_name_token1;
	v->a[11161] = actions(1241);
	v->a[11162] = 3;
	v->a[11163] = sym_file_descriptor;
	v->a[11164] = sym_test_operator;
	v->a[11165] = sym__brace_start;
	v->a[11166] = actions(2955);
	v->a[11167] = 9;
	v->a[11168] = anon_sym_DASH;
	v->a[11169] = anon_sym_STAR;
	v->a[11170] = anon_sym_BANG;
	v->a[11171] = anon_sym_QMARK;
	v->a[11172] = anon_sym_DOLLAR;
	v->a[11173] = anon_sym_POUND;
	v->a[11174] = anon_sym_AT2;
	v->a[11175] = anon_sym_0;
	v->a[11176] = anon_sym__;
	v->a[11177] = actions(1239);
	v->a[11178] = 38;
	v->a[11179] = anon_sym_LPAREN_LPAREN;
	small_parse_table_559(v);
}

void	small_parse_table_559(t_small_parse_table_array *v)
{
	v->a[11180] = anon_sym_SEMI;
	v->a[11181] = anon_sym_PIPE_PIPE;
	v->a[11182] = anon_sym_AMP_AMP;
	v->a[11183] = anon_sym_PIPE;
	v->a[11184] = anon_sym_AMP;
	v->a[11185] = anon_sym_LT;
	v->a[11186] = anon_sym_GT;
	v->a[11187] = anon_sym_LT_LT;
	v->a[11188] = anon_sym_GT_GT;
	v->a[11189] = anon_sym_esac;
	v->a[11190] = anon_sym_SEMI_SEMI;
	v->a[11191] = anon_sym_SEMI_AMP;
	v->a[11192] = anon_sym_SEMI_SEMI_AMP;
	v->a[11193] = anon_sym_PIPE_AMP;
	v->a[11194] = anon_sym_AMP_GT;
	v->a[11195] = anon_sym_AMP_GT_GT;
	v->a[11196] = anon_sym_LT_AMP;
	v->a[11197] = anon_sym_GT_AMP;
	v->a[11198] = anon_sym_GT_PIPE;
	v->a[11199] = anon_sym_LT_AMP_DASH;
	small_parse_table_560(v);
}

/* EOF small_parse_table_111.c */
