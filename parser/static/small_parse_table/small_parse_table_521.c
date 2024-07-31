/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_521.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2605(t_small_parse_table_array *v)
{
	v->a[52100] = sym_terminator;
	v->a[52101] = actions(850);
	v->a[52102] = 2;
	v->a[52103] = anon_sym_LT_LT;
	v->a[52104] = anon_sym_LT_LT_DASH;
	v->a[52105] = actions(898);
	v->a[52106] = 2;
	v->a[52107] = anon_sym_AMP_AMP;
	v->a[52108] = anon_sym_PIPE_PIPE;
	v->a[52109] = actions(914);
	v->a[52110] = 2;
	v->a[52111] = anon_sym_SEMI_SEMI;
	v->a[52112] = anon_sym_SEMI;
	v->a[52113] = state(984);
	v->a[52114] = 3;
	v->a[52115] = sym_file_redirect;
	v->a[52116] = sym_heredoc_redirect;
	v->a[52117] = aux_sym_redirected_statement_repeat1;
	v->a[52118] = actions(1676);
	v->a[52119] = 7;
	small_parse_table_2606(v);
}

void	small_parse_table_2606(t_small_parse_table_array *v)
{
	v->a[52120] = anon_sym_LT;
	v->a[52121] = anon_sym_GT;
	v->a[52122] = anon_sym_GT_GT;
	v->a[52123] = anon_sym_LT_AMP;
	v->a[52124] = anon_sym_GT_AMP;
	v->a[52125] = anon_sym_GT_PIPE;
	v->a[52126] = anon_sym_LT_GT;
	v->a[52127] = 5;
	v->a[52128] = actions(3);
	v->a[52129] = 1;
	v->a[52130] = sym_comment;
	v->a[52131] = actions(1828);
	v->a[52132] = 1;
	v->a[52133] = aux_sym_heredoc_redirect_token1;
	v->a[52134] = state(985);
	v->a[52135] = 2;
	v->a[52136] = sym_file_redirect;
	v->a[52137] = aux_sym_redirected_statement_repeat2;
	v->a[52138] = actions(1589);
	v->a[52139] = 7;
	small_parse_table_2607(v);
}

void	small_parse_table_2607(t_small_parse_table_array *v)
{
	v->a[52140] = anon_sym_LT;
	v->a[52141] = anon_sym_GT;
	v->a[52142] = anon_sym_GT_GT;
	v->a[52143] = anon_sym_LT_AMP;
	v->a[52144] = anon_sym_GT_AMP;
	v->a[52145] = anon_sym_GT_PIPE;
	v->a[52146] = anon_sym_LT_GT;
	v->a[52147] = actions(1826);
	v->a[52148] = 8;
	v->a[52149] = anon_sym_PIPE;
	v->a[52150] = anon_sym_SEMI_SEMI;
	v->a[52151] = anon_sym_AMP_AMP;
	v->a[52152] = anon_sym_PIPE_PIPE;
	v->a[52153] = anon_sym_LT_LT;
	v->a[52154] = anon_sym_LT_LT_DASH;
	v->a[52155] = anon_sym_BQUOTE;
	v->a[52156] = anon_sym_SEMI;
	v->a[52157] = 3;
	v->a[52158] = actions(3);
	v->a[52159] = 1;
	small_parse_table_2608(v);
}

void	small_parse_table_2608(t_small_parse_table_array *v)
{
	v->a[52160] = sym_comment;
	v->a[52161] = actions(1384);
	v->a[52162] = 2;
	v->a[52163] = ts_builtin_sym_end;
	v->a[52164] = aux_sym_heredoc_redirect_token1;
	v->a[52165] = actions(1306);
	v->a[52166] = 16;
	v->a[52167] = anon_sym_PIPE;
	v->a[52168] = anon_sym_RPAREN;
	v->a[52169] = anon_sym_SEMI_SEMI;
	v->a[52170] = anon_sym_AMP_AMP;
	v->a[52171] = anon_sym_PIPE_PIPE;
	v->a[52172] = anon_sym_LT;
	v->a[52173] = anon_sym_GT;
	v->a[52174] = anon_sym_GT_GT;
	v->a[52175] = anon_sym_LT_AMP;
	v->a[52176] = anon_sym_GT_AMP;
	v->a[52177] = anon_sym_GT_PIPE;
	v->a[52178] = anon_sym_LT_GT;
	v->a[52179] = anon_sym_LT_LT;
	small_parse_table_2609(v);
}

void	small_parse_table_2609(t_small_parse_table_array *v)
{
	v->a[52180] = anon_sym_LT_LT_DASH;
	v->a[52181] = anon_sym_BQUOTE;
	v->a[52182] = anon_sym_SEMI;
	v->a[52183] = 3;
	v->a[52184] = actions(3);
	v->a[52185] = 1;
	v->a[52186] = sym_comment;
	v->a[52187] = actions(1836);
	v->a[52188] = 2;
	v->a[52189] = ts_builtin_sym_end;
	v->a[52190] = aux_sym_heredoc_redirect_token1;
	v->a[52191] = actions(1838);
	v->a[52192] = 16;
	v->a[52193] = anon_sym_PIPE;
	v->a[52194] = anon_sym_RPAREN;
	v->a[52195] = anon_sym_SEMI_SEMI;
	v->a[52196] = anon_sym_AMP_AMP;
	v->a[52197] = anon_sym_PIPE_PIPE;
	v->a[52198] = anon_sym_LT;
	v->a[52199] = anon_sym_GT;
	small_parse_table_2610(v);
}

/* EOF small_parse_table_521.c */
