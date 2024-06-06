/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1021.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5105(t_small_parse_table_array *v)
{
	v->a[102100] = actions(5269);
	v->a[102101] = 1;
	v->a[102102] = sym__concat;
	v->a[102103] = state(2138);
	v->a[102104] = 1;
	v->a[102105] = aux_sym_concatenation_repeat1;
	v->a[102106] = actions(1390);
	v->a[102107] = 3;
	v->a[102108] = sym_file_descriptor;
	v->a[102109] = ts_builtin_sym_end;
	v->a[102110] = aux_sym_heredoc_redirect_token1;
	v->a[102111] = actions(1388);
	v->a[102112] = 19;
	v->a[102113] = anon_sym_PIPE;
	v->a[102114] = anon_sym_SEMI_SEMI;
	v->a[102115] = anon_sym_PIPE_AMP;
	v->a[102116] = anon_sym_AMP_AMP;
	v->a[102117] = anon_sym_PIPE_PIPE;
	v->a[102118] = anon_sym_LT;
	v->a[102119] = anon_sym_GT;
	small_parse_table_5106(v);
}

void	small_parse_table_5106(t_small_parse_table_array *v)
{
	v->a[102120] = anon_sym_GT_GT;
	v->a[102121] = anon_sym_AMP_GT;
	v->a[102122] = anon_sym_AMP_GT_GT;
	v->a[102123] = anon_sym_LT_AMP;
	v->a[102124] = anon_sym_GT_AMP;
	v->a[102125] = anon_sym_GT_PIPE;
	v->a[102126] = anon_sym_LT_AMP_DASH;
	v->a[102127] = anon_sym_GT_AMP_DASH;
	v->a[102128] = anon_sym_LT_LT;
	v->a[102129] = anon_sym_LT_LT_DASH;
	v->a[102130] = anon_sym_AMP;
	v->a[102131] = anon_sym_SEMI;
	v->a[102132] = 19;
	v->a[102133] = actions(3);
	v->a[102134] = 1;
	v->a[102135] = sym_comment;
	v->a[102136] = actions(1073);
	v->a[102137] = 1;
	v->a[102138] = anon_sym_DOLLAR;
	v->a[102139] = actions(1079);
	small_parse_table_5107(v);
}

void	small_parse_table_5107(t_small_parse_table_array *v)
{
	v->a[102140] = 1;
	v->a[102141] = aux_sym_number_token1;
	v->a[102142] = actions(1081);
	v->a[102143] = 1;
	v->a[102144] = aux_sym_number_token2;
	v->a[102145] = actions(1085);
	v->a[102146] = 1;
	v->a[102147] = anon_sym_DOLLAR_LPAREN;
	v->a[102148] = actions(1097);
	v->a[102149] = 1;
	v->a[102150] = sym__brace_start;
	v->a[102151] = actions(5895);
	v->a[102152] = 1;
	v->a[102153] = sym_word;
	v->a[102154] = actions(5897);
	v->a[102155] = 1;
	v->a[102156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102157] = actions(5899);
	v->a[102158] = 1;
	v->a[102159] = sym__special_character;
	small_parse_table_5108(v);
}

void	small_parse_table_5108(t_small_parse_table_array *v)
{
	v->a[102160] = actions(5901);
	v->a[102161] = 1;
	v->a[102162] = anon_sym_DQUOTE;
	v->a[102163] = actions(5905);
	v->a[102164] = 1;
	v->a[102165] = anon_sym_DOLLAR_LBRACE;
	v->a[102166] = actions(5907);
	v->a[102167] = 1;
	v->a[102168] = anon_sym_BQUOTE;
	v->a[102169] = actions(5909);
	v->a[102170] = 1;
	v->a[102171] = anon_sym_DOLLAR_BQUOTE;
	v->a[102172] = actions(5911);
	v->a[102173] = 1;
	v->a[102174] = sym__comment_word;
	v->a[102175] = actions(5913);
	v->a[102176] = 1;
	v->a[102177] = sym__empty_value;
	v->a[102178] = state(983);
	v->a[102179] = 1;
	small_parse_table_5109(v);
}

void	small_parse_table_5109(t_small_parse_table_array *v)
{
	v->a[102180] = aux_sym__literal_repeat1;
	v->a[102181] = state(1177);
	v->a[102182] = 1;
	v->a[102183] = sym_concatenation;
	v->a[102184] = actions(5903);
	v->a[102185] = 2;
	v->a[102186] = sym_test_operator;
	v->a[102187] = sym_raw_string;
	v->a[102188] = state(740);
	v->a[102189] = 7;
	v->a[102190] = sym_arithmetic_expansion;
	v->a[102191] = sym_brace_expression;
	v->a[102192] = sym_string;
	v->a[102193] = sym_number;
	v->a[102194] = sym_simple_expansion;
	v->a[102195] = sym_expansion;
	v->a[102196] = sym_command_substitution;
	v->a[102197] = 11;
	v->a[102198] = actions(3);
	v->a[102199] = 1;
	small_parse_table_5110(v);
}

/* EOF small_parse_table_1021.c */
