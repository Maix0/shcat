/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_461.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2305(t_small_parse_table_array *v)
{
	v->a[46100] = sym_comment;
	v->a[46101] = actions(1530);
	v->a[46102] = 1;
	v->a[46103] = sym_file_descriptor;
	v->a[46104] = actions(1533);
	v->a[46105] = 1;
	v->a[46106] = sym_variable_name;
	v->a[46107] = actions(1602);
	v->a[46108] = 1;
	v->a[46109] = anon_sym_RPAREN;
	v->a[46110] = actions(1527);
	v->a[46111] = 8;
	v->a[46112] = anon_sym_LT;
	v->a[46113] = anon_sym_GT;
	v->a[46114] = anon_sym_GT_GT;
	v->a[46115] = anon_sym_LT_AMP;
	v->a[46116] = anon_sym_GT_AMP;
	v->a[46117] = anon_sym_GT_PIPE;
	v->a[46118] = anon_sym_LT_AMP_DASH;
	v->a[46119] = anon_sym_GT_AMP_DASH;
	small_parse_table_2306(v);
}

void	small_parse_table_2306(t_small_parse_table_array *v)
{
	v->a[46120] = actions(1520);
	v->a[46121] = 9;
	v->a[46122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46123] = anon_sym_DOLLAR;
	v->a[46124] = anon_sym_DQUOTE;
	v->a[46125] = sym_raw_string;
	v->a[46126] = sym_number;
	v->a[46127] = anon_sym_DOLLAR_LBRACE;
	v->a[46128] = anon_sym_DOLLAR_LPAREN;
	v->a[46129] = anon_sym_BQUOTE;
	v->a[46130] = sym_word;
	v->a[46131] = actions(1522);
	v->a[46132] = 9;
	v->a[46133] = anon_sym_PIPE;
	v->a[46134] = anon_sym_SEMI_SEMI;
	v->a[46135] = anon_sym_AMP_AMP;
	v->a[46136] = anon_sym_PIPE_PIPE;
	v->a[46137] = anon_sym_LT_LT;
	v->a[46138] = anon_sym_LT_LT_DASH;
	v->a[46139] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2307(v);
}

void	small_parse_table_2307(t_small_parse_table_array *v)
{
	v->a[46140] = anon_sym_AMP;
	v->a[46141] = anon_sym_SEMI;
	v->a[46142] = 8;
	v->a[46143] = actions(3);
	v->a[46144] = 1;
	v->a[46145] = sym_comment;
	v->a[46146] = actions(682);
	v->a[46147] = 1;
	v->a[46148] = anon_sym_PIPE;
	v->a[46149] = actions(690);
	v->a[46150] = 1;
	v->a[46151] = sym_file_descriptor;
	v->a[46152] = actions(1599);
	v->a[46153] = 1;
	v->a[46154] = sym_variable_name;
	v->a[46155] = state(1412);
	v->a[46156] = 2;
	v->a[46157] = sym_variable_assignment;
	v->a[46158] = aux_sym__variable_assignments_repeat1;
	v->a[46159] = state(1520);
	small_parse_table_2308(v);
}

void	small_parse_table_2308(t_small_parse_table_array *v)
{
	v->a[46160] = 3;
	v->a[46161] = sym_file_redirect;
	v->a[46162] = sym_heredoc_redirect;
	v->a[46163] = aux_sym_redirected_statement_repeat1;
	v->a[46164] = actions(935);
	v->a[46165] = 4;
	v->a[46166] = anon_sym_AMP_AMP;
	v->a[46167] = anon_sym_PIPE_PIPE;
	v->a[46168] = anon_sym_LT_LT;
	v->a[46169] = anon_sym_LT_LT_DASH;
	v->a[46170] = actions(678);
	v->a[46171] = 17;
	v->a[46172] = anon_sym_LT;
	v->a[46173] = anon_sym_GT;
	v->a[46174] = anon_sym_GT_GT;
	v->a[46175] = anon_sym_LT_AMP;
	v->a[46176] = anon_sym_GT_AMP;
	v->a[46177] = anon_sym_GT_PIPE;
	v->a[46178] = anon_sym_LT_AMP_DASH;
	v->a[46179] = anon_sym_GT_AMP_DASH;
	small_parse_table_2309(v);
}

void	small_parse_table_2309(t_small_parse_table_array *v)
{
	v->a[46180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46181] = anon_sym_DOLLAR;
	v->a[46182] = anon_sym_DQUOTE;
	v->a[46183] = sym_raw_string;
	v->a[46184] = sym_number;
	v->a[46185] = anon_sym_DOLLAR_LBRACE;
	v->a[46186] = anon_sym_DOLLAR_LPAREN;
	v->a[46187] = anon_sym_BQUOTE;
	v->a[46188] = sym_word;
	v->a[46189] = 3;
	v->a[46190] = actions(3);
	v->a[46191] = 1;
	v->a[46192] = sym_comment;
	v->a[46193] = actions(1238);
	v->a[46194] = 2;
	v->a[46195] = sym_file_descriptor;
	v->a[46196] = sym_variable_name;
	v->a[46197] = actions(1234);
	v->a[46198] = 27;
	v->a[46199] = anon_sym_esac;
	small_parse_table_2310(v);
}

/* EOF small_parse_table_461.c */
