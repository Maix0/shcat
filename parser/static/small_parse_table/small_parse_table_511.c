/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_511.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2555(t_small_parse_table_array *v)
{
	v->a[51100] = anon_sym_SEMI;
	v->a[51101] = 6;
	v->a[51102] = actions(3);
	v->a[51103] = 1;
	v->a[51104] = sym_comment;
	v->a[51105] = actions(1690);
	v->a[51106] = 1;
	v->a[51107] = aux_sym_heredoc_redirect_token1;
	v->a[51108] = actions(850);
	v->a[51109] = 2;
	v->a[51110] = anon_sym_LT_LT;
	v->a[51111] = anon_sym_LT_LT_DASH;
	v->a[51112] = state(962);
	v->a[51113] = 3;
	v->a[51114] = sym_file_redirect;
	v->a[51115] = sym_heredoc_redirect;
	v->a[51116] = aux_sym_redirected_statement_repeat1;
	v->a[51117] = actions(1688);
	v->a[51118] = 6;
	v->a[51119] = anon_sym_PIPE;
	small_parse_table_2556(v);
}

void	small_parse_table_2556(t_small_parse_table_array *v)
{
	v->a[51120] = anon_sym_SEMI_SEMI;
	v->a[51121] = anon_sym_AMP_AMP;
	v->a[51122] = anon_sym_PIPE_PIPE;
	v->a[51123] = anon_sym_BQUOTE;
	v->a[51124] = anon_sym_SEMI;
	v->a[51125] = actions(1589);
	v->a[51126] = 7;
	v->a[51127] = anon_sym_LT;
	v->a[51128] = anon_sym_GT;
	v->a[51129] = anon_sym_GT_GT;
	v->a[51130] = anon_sym_LT_AMP;
	v->a[51131] = anon_sym_GT_AMP;
	v->a[51132] = anon_sym_GT_PIPE;
	v->a[51133] = anon_sym_LT_GT;
	v->a[51134] = 4;
	v->a[51135] = actions(3);
	v->a[51136] = 1;
	v->a[51137] = sym_comment;
	v->a[51138] = actions(862);
	v->a[51139] = 1;
	small_parse_table_2557(v);
}

void	small_parse_table_2557(t_small_parse_table_array *v)
{
	v->a[51140] = sym_variable_name;
	v->a[51141] = state(959);
	v->a[51142] = 2;
	v->a[51143] = sym_variable_assignment;
	v->a[51144] = aux_sym__variable_assignments_repeat1;
	v->a[51145] = actions(742);
	v->a[51146] = 16;
	v->a[51147] = anon_sym_LT;
	v->a[51148] = anon_sym_GT;
	v->a[51149] = anon_sym_GT_GT;
	v->a[51150] = anon_sym_LT_AMP;
	v->a[51151] = anon_sym_GT_AMP;
	v->a[51152] = anon_sym_GT_PIPE;
	v->a[51153] = anon_sym_LT_GT;
	v->a[51154] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51155] = anon_sym_DOLLAR;
	v->a[51156] = anon_sym_DQUOTE;
	v->a[51157] = sym_raw_string;
	v->a[51158] = sym_number;
	v->a[51159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2558(v);
}

void	small_parse_table_2558(t_small_parse_table_array *v)
{
	v->a[51160] = anon_sym_DOLLAR_LPAREN;
	v->a[51161] = anon_sym_BQUOTE;
	v->a[51162] = sym_word;
	v->a[51163] = 5;
	v->a[51164] = actions(3);
	v->a[51165] = 1;
	v->a[51166] = sym_comment;
	v->a[51167] = actions(1692);
	v->a[51168] = 1;
	v->a[51169] = aux_sym_heredoc_redirect_token1;
	v->a[51170] = actions(1747);
	v->a[51171] = 1;
	v->a[51172] = sym_variable_name;
	v->a[51173] = state(973);
	v->a[51174] = 2;
	v->a[51175] = sym_variable_assignment;
	v->a[51176] = aux_sym__variable_assignments_repeat1;
	v->a[51177] = actions(1694);
	v->a[51178] = 15;
	v->a[51179] = anon_sym_PIPE;
	small_parse_table_2559(v);
}

void	small_parse_table_2559(t_small_parse_table_array *v)
{
	v->a[51180] = anon_sym_SEMI_SEMI;
	v->a[51181] = anon_sym_AMP_AMP;
	v->a[51182] = anon_sym_PIPE_PIPE;
	v->a[51183] = anon_sym_LT;
	v->a[51184] = anon_sym_GT;
	v->a[51185] = anon_sym_GT_GT;
	v->a[51186] = anon_sym_LT_AMP;
	v->a[51187] = anon_sym_GT_AMP;
	v->a[51188] = anon_sym_GT_PIPE;
	v->a[51189] = anon_sym_LT_GT;
	v->a[51190] = anon_sym_LT_LT;
	v->a[51191] = anon_sym_LT_LT_DASH;
	v->a[51192] = anon_sym_BQUOTE;
	v->a[51193] = anon_sym_SEMI;
	v->a[51194] = 5;
	v->a[51195] = actions(3);
	v->a[51196] = 1;
	v->a[51197] = sym_comment;
	v->a[51198] = actions(1700);
	v->a[51199] = 1;
	small_parse_table_2560(v);
}

/* EOF small_parse_table_511.c */
