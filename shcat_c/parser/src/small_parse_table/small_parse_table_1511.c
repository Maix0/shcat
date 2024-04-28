/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1511.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7555(t_small_parse_table_array *v)
{
	v->a[151100] = anon_sym_GT_EQ;
	v->a[151101] = anon_sym_EQ_TILDE;
	v->a[151102] = anon_sym_QMARK;
	v->a[151103] = anon_sym_COLON;
	v->a[151104] = 3;
	v->a[151105] = actions(71);
	v->a[151106] = 1;
	v->a[151107] = sym_comment;
	v->a[151108] = actions(1300);
	v->a[151109] = 13;
	v->a[151110] = anon_sym_PIPE;
	v->a[151111] = anon_sym_LT;
	v->a[151112] = anon_sym_GT;
	v->a[151113] = anon_sym_LT_LT;
	v->a[151114] = anon_sym_AMP_GT;
	v->a[151115] = anon_sym_LT_AMP;
	v->a[151116] = anon_sym_GT_AMP;
	v->a[151117] = anon_sym_DOLLAR;
	v->a[151118] = aux_sym_number_token1;
	v->a[151119] = aux_sym_number_token2;
	small_parse_table_7556(v);
}

void	small_parse_table_7556(t_small_parse_table_array *v)
{
	v->a[151120] = anon_sym_DOLLAR_LPAREN;
	v->a[151121] = anon_sym_BQUOTE;
	v->a[151122] = sym_word;
	v->a[151123] = actions(1302);
	v->a[151124] = 25;
	v->a[151125] = sym_file_descriptor;
	v->a[151126] = sym__concat;
	v->a[151127] = sym_test_operator;
	v->a[151128] = sym__brace_start;
	v->a[151129] = anon_sym_LPAREN_LPAREN;
	v->a[151130] = anon_sym_PIPE_PIPE;
	v->a[151131] = anon_sym_AMP_AMP;
	v->a[151132] = anon_sym_GT_GT;
	v->a[151133] = anon_sym_PIPE_AMP;
	v->a[151134] = anon_sym_AMP_GT_GT;
	v->a[151135] = anon_sym_GT_PIPE;
	v->a[151136] = anon_sym_LT_AMP_DASH;
	v->a[151137] = anon_sym_GT_AMP_DASH;
	v->a[151138] = anon_sym_LT_LT_DASH;
	v->a[151139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_7557(v);
}

void	small_parse_table_7557(t_small_parse_table_array *v)
{
	v->a[151140] = anon_sym_DOLLAR_LBRACK;
	v->a[151141] = aux_sym_concatenation_token1;
	v->a[151142] = sym__special_character;
	v->a[151143] = anon_sym_DQUOTE;
	v->a[151144] = sym_raw_string;
	v->a[151145] = sym_ansi_c_string;
	v->a[151146] = anon_sym_DOLLAR_LBRACE;
	v->a[151147] = anon_sym_DOLLAR_BQUOTE;
	v->a[151148] = anon_sym_LT_LPAREN;
	v->a[151149] = anon_sym_GT_LPAREN;
	v->a[151150] = 21;
	v->a[151151] = actions(71);
	v->a[151152] = 1;
	v->a[151153] = sym_comment;
	v->a[151154] = actions(6881);
	v->a[151155] = 1;
	v->a[151156] = anon_sym_COMMA;
	v->a[151157] = actions(6883);
	v->a[151158] = 1;
	v->a[151159] = anon_sym_EQ;
	small_parse_table_7558(v);
}

void	small_parse_table_7558(t_small_parse_table_array *v)
{
	v->a[151160] = actions(6889);
	v->a[151161] = 1;
	v->a[151162] = anon_sym_PIPE_PIPE;
	v->a[151163] = actions(6891);
	v->a[151164] = 1;
	v->a[151165] = anon_sym_AMP_AMP;
	v->a[151166] = actions(6893);
	v->a[151167] = 1;
	v->a[151168] = anon_sym_PIPE;
	v->a[151169] = actions(6895);
	v->a[151170] = 1;
	v->a[151171] = anon_sym_CARET;
	v->a[151172] = actions(6897);
	v->a[151173] = 1;
	v->a[151174] = anon_sym_AMP;
	v->a[151175] = actions(6911);
	v->a[151176] = 1;
	v->a[151177] = anon_sym_STAR_STAR;
	v->a[151178] = actions(6913);
	v->a[151179] = 1;
	small_parse_table_7559(v);
}

void	small_parse_table_7559(t_small_parse_table_array *v)
{
	v->a[151180] = anon_sym_EQ_TILDE;
	v->a[151181] = actions(6915);
	v->a[151182] = 1;
	v->a[151183] = anon_sym_QMARK;
	v->a[151184] = actions(7110);
	v->a[151185] = 1;
	v->a[151186] = anon_sym_RPAREN_RPAREN;
	v->a[151187] = state(6724);
	v->a[151188] = 1;
	v->a[151189] = aux_sym_arithmetic_expansion_repeat1;
	v->a[151190] = actions(6885);
	v->a[151191] = 2;
	v->a[151192] = anon_sym_PLUS_PLUS;
	v->a[151193] = anon_sym_DASH_DASH;
	v->a[151194] = actions(6899);
	v->a[151195] = 2;
	v->a[151196] = anon_sym_EQ_EQ;
	v->a[151197] = anon_sym_BANG_EQ;
	v->a[151198] = actions(6901);
	v->a[151199] = 2;
	small_parse_table_7560(v);
}

/* EOF small_parse_table_1511.c */
