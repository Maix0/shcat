/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_621.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3105(t_small_parse_table_array *v)
{
	v->a[62100] = 12;
	v->a[62101] = actions(3);
	v->a[62102] = 1;
	v->a[62103] = sym_comment;
	v->a[62104] = actions(682);
	v->a[62105] = 1;
	v->a[62106] = anon_sym_PIPE;
	v->a[62107] = actions(779);
	v->a[62108] = 1;
	v->a[62109] = ts_builtin_sym_end;
	v->a[62110] = actions(2029);
	v->a[62111] = 1;
	v->a[62112] = aux_sym_heredoc_redirect_token1;
	v->a[62113] = actions(2031);
	v->a[62114] = 1;
	v->a[62115] = sym_file_descriptor;
	v->a[62116] = state(789);
	v->a[62117] = 1;
	v->a[62118] = sym_terminator;
	v->a[62119] = actions(754);
	small_parse_table_3106(v);
}

void	small_parse_table_3106(t_small_parse_table_array *v)
{
	v->a[62120] = 2;
	v->a[62121] = anon_sym_LT_LT;
	v->a[62122] = anon_sym_LT_LT_DASH;
	v->a[62123] = actions(783);
	v->a[62124] = 2;
	v->a[62125] = anon_sym_AMP_AMP;
	v->a[62126] = anon_sym_PIPE_PIPE;
	v->a[62127] = actions(2027);
	v->a[62128] = 2;
	v->a[62129] = anon_sym_LT_AMP_DASH;
	v->a[62130] = anon_sym_GT_AMP_DASH;
	v->a[62131] = actions(781);
	v->a[62132] = 3;
	v->a[62133] = anon_sym_SEMI_SEMI;
	v->a[62134] = anon_sym_AMP;
	v->a[62135] = anon_sym_SEMI;
	v->a[62136] = state(1160);
	v->a[62137] = 3;
	v->a[62138] = sym_file_redirect;
	v->a[62139] = sym_heredoc_redirect;
	small_parse_table_3107(v);
}

void	small_parse_table_3107(t_small_parse_table_array *v)
{
	v->a[62140] = aux_sym_redirected_statement_repeat1;
	v->a[62141] = actions(2025);
	v->a[62142] = 6;
	v->a[62143] = anon_sym_LT;
	v->a[62144] = anon_sym_GT;
	v->a[62145] = anon_sym_GT_GT;
	v->a[62146] = anon_sym_LT_AMP;
	v->a[62147] = anon_sym_GT_AMP;
	v->a[62148] = anon_sym_GT_PIPE;
	v->a[62149] = 12;
	v->a[62150] = actions(3);
	v->a[62151] = 1;
	v->a[62152] = sym_comment;
	v->a[62153] = actions(682);
	v->a[62154] = 1;
	v->a[62155] = anon_sym_PIPE;
	v->a[62156] = actions(779);
	v->a[62157] = 1;
	v->a[62158] = ts_builtin_sym_end;
	v->a[62159] = actions(2029);
	small_parse_table_3108(v);
}

void	small_parse_table_3108(t_small_parse_table_array *v)
{
	v->a[62160] = 1;
	v->a[62161] = aux_sym_heredoc_redirect_token1;
	v->a[62162] = actions(2031);
	v->a[62163] = 1;
	v->a[62164] = sym_file_descriptor;
	v->a[62165] = state(781);
	v->a[62166] = 1;
	v->a[62167] = sym_terminator;
	v->a[62168] = actions(754);
	v->a[62169] = 2;
	v->a[62170] = anon_sym_LT_LT;
	v->a[62171] = anon_sym_LT_LT_DASH;
	v->a[62172] = actions(783);
	v->a[62173] = 2;
	v->a[62174] = anon_sym_AMP_AMP;
	v->a[62175] = anon_sym_PIPE_PIPE;
	v->a[62176] = actions(2027);
	v->a[62177] = 2;
	v->a[62178] = anon_sym_LT_AMP_DASH;
	v->a[62179] = anon_sym_GT_AMP_DASH;
	small_parse_table_3109(v);
}

void	small_parse_table_3109(t_small_parse_table_array *v)
{
	v->a[62180] = actions(781);
	v->a[62181] = 3;
	v->a[62182] = anon_sym_SEMI_SEMI;
	v->a[62183] = anon_sym_AMP;
	v->a[62184] = anon_sym_SEMI;
	v->a[62185] = state(1160);
	v->a[62186] = 3;
	v->a[62187] = sym_file_redirect;
	v->a[62188] = sym_heredoc_redirect;
	v->a[62189] = aux_sym_redirected_statement_repeat1;
	v->a[62190] = actions(2025);
	v->a[62191] = 6;
	v->a[62192] = anon_sym_LT;
	v->a[62193] = anon_sym_GT;
	v->a[62194] = anon_sym_GT_GT;
	v->a[62195] = anon_sym_LT_AMP;
	v->a[62196] = anon_sym_GT_AMP;
	v->a[62197] = anon_sym_GT_PIPE;
	v->a[62198] = 12;
	v->a[62199] = actions(3);
	small_parse_table_3110(v);
}

/* EOF small_parse_table_621.c */
