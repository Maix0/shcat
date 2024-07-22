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
	v->a[62100] = actions(2221);
	v->a[62101] = 3;
	v->a[62102] = sym_file_descriptor;
	v->a[62103] = ts_builtin_sym_end;
	v->a[62104] = aux_sym_heredoc_redirect_token1;
	v->a[62105] = actions(2223);
	v->a[62106] = 16;
	v->a[62107] = anon_sym_PIPE;
	v->a[62108] = anon_sym_RPAREN;
	v->a[62109] = anon_sym_SEMI_SEMI;
	v->a[62110] = anon_sym_AMP_AMP;
	v->a[62111] = anon_sym_PIPE_PIPE;
	v->a[62112] = anon_sym_LT;
	v->a[62113] = anon_sym_GT;
	v->a[62114] = anon_sym_GT_GT;
	v->a[62115] = anon_sym_LT_AMP;
	v->a[62116] = anon_sym_GT_AMP;
	v->a[62117] = anon_sym_GT_PIPE;
	v->a[62118] = anon_sym_LT_GT;
	v->a[62119] = anon_sym_LT_LT;
	small_parse_table_3106(v);
}

void	small_parse_table_3106(t_small_parse_table_array *v)
{
	v->a[62120] = anon_sym_LT_LT_DASH;
	v->a[62121] = anon_sym_BQUOTE;
	v->a[62122] = anon_sym_SEMI;
	v->a[62123] = 3;
	v->a[62124] = actions(3);
	v->a[62125] = 1;
	v->a[62126] = sym_comment;
	v->a[62127] = actions(2221);
	v->a[62128] = 3;
	v->a[62129] = sym_file_descriptor;
	v->a[62130] = ts_builtin_sym_end;
	v->a[62131] = aux_sym_heredoc_redirect_token1;
	v->a[62132] = actions(2223);
	v->a[62133] = 16;
	v->a[62134] = anon_sym_PIPE;
	v->a[62135] = anon_sym_RPAREN;
	v->a[62136] = anon_sym_SEMI_SEMI;
	v->a[62137] = anon_sym_AMP_AMP;
	v->a[62138] = anon_sym_PIPE_PIPE;
	v->a[62139] = anon_sym_LT;
	small_parse_table_3107(v);
}

void	small_parse_table_3107(t_small_parse_table_array *v)
{
	v->a[62140] = anon_sym_GT;
	v->a[62141] = anon_sym_GT_GT;
	v->a[62142] = anon_sym_LT_AMP;
	v->a[62143] = anon_sym_GT_AMP;
	v->a[62144] = anon_sym_GT_PIPE;
	v->a[62145] = anon_sym_LT_GT;
	v->a[62146] = anon_sym_LT_LT;
	v->a[62147] = anon_sym_LT_LT_DASH;
	v->a[62148] = anon_sym_BQUOTE;
	v->a[62149] = anon_sym_SEMI;
	v->a[62150] = 9;
	v->a[62151] = actions(3);
	v->a[62152] = 1;
	v->a[62153] = sym_comment;
	v->a[62154] = actions(1943);
	v->a[62155] = 1;
	v->a[62156] = aux_sym_heredoc_redirect_token1;
	v->a[62157] = actions(1945);
	v->a[62158] = 1;
	v->a[62159] = sym_file_descriptor;
	small_parse_table_3108(v);
}

void	small_parse_table_3108(t_small_parse_table_array *v)
{
	v->a[62160] = state(687);
	v->a[62161] = 1;
	v->a[62162] = sym_terminator;
	v->a[62163] = actions(790);
	v->a[62164] = 2;
	v->a[62165] = anon_sym_LT_LT;
	v->a[62166] = anon_sym_LT_LT_DASH;
	v->a[62167] = actions(1026);
	v->a[62168] = 2;
	v->a[62169] = anon_sym_SEMI_SEMI;
	v->a[62170] = anon_sym_SEMI;
	v->a[62171] = actions(1028);
	v->a[62172] = 2;
	v->a[62173] = anon_sym_AMP_AMP;
	v->a[62174] = anon_sym_PIPE_PIPE;
	v->a[62175] = state(1194);
	v->a[62176] = 3;
	v->a[62177] = sym_file_redirect;
	v->a[62178] = sym_heredoc_redirect;
	v->a[62179] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3109(v);
}

void	small_parse_table_3109(t_small_parse_table_array *v)
{
	v->a[62180] = actions(1941);
	v->a[62181] = 7;
	v->a[62182] = anon_sym_LT;
	v->a[62183] = anon_sym_GT;
	v->a[62184] = anon_sym_GT_GT;
	v->a[62185] = anon_sym_LT_AMP;
	v->a[62186] = anon_sym_GT_AMP;
	v->a[62187] = anon_sym_GT_PIPE;
	v->a[62188] = anon_sym_LT_GT;
	v->a[62189] = 6;
	v->a[62190] = actions(3);
	v->a[62191] = 1;
	v->a[62192] = sym_comment;
	v->a[62193] = actions(2061);
	v->a[62194] = 1;
	v->a[62195] = aux_sym_heredoc_redirect_token1;
	v->a[62196] = actions(2073);
	v->a[62197] = 1;
	v->a[62198] = sym_file_descriptor;
	v->a[62199] = state(1151);
	small_parse_table_3110(v);
}

/* EOF small_parse_table_621.c */
