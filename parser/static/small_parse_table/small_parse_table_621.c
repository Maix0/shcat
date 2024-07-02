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
	v->a[62100] = anon_sym_SEMI;
	v->a[62101] = 5;
	v->a[62102] = actions(3);
	v->a[62103] = 1;
	v->a[62104] = sym_comment;
	v->a[62105] = actions(702);
	v->a[62106] = 1;
	v->a[62107] = sym_file_descriptor;
	v->a[62108] = actions(1372);
	v->a[62109] = 1;
	v->a[62110] = sym_variable_name;
	v->a[62111] = state(1286);
	v->a[62112] = 2;
	v->a[62113] = sym_variable_assignment;
	v->a[62114] = aux_sym__variable_assignments_repeat1;
	v->a[62115] = actions(690);
	v->a[62116] = 16;
	v->a[62117] = anon_sym_LT;
	v->a[62118] = anon_sym_GT;
	v->a[62119] = anon_sym_GT_GT;
	small_parse_table_3106(v);
}

void	small_parse_table_3106(t_small_parse_table_array *v)
{
	v->a[62120] = anon_sym_LT_AMP;
	v->a[62121] = anon_sym_GT_AMP;
	v->a[62122] = anon_sym_GT_PIPE;
	v->a[62123] = anon_sym_LT_GT;
	v->a[62124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62125] = anon_sym_DOLLAR;
	v->a[62126] = anon_sym_DQUOTE;
	v->a[62127] = sym_raw_string;
	v->a[62128] = sym_number;
	v->a[62129] = anon_sym_DOLLAR_LBRACE;
	v->a[62130] = anon_sym_DOLLAR_LPAREN;
	v->a[62131] = anon_sym_BQUOTE;
	v->a[62132] = sym_word;
	v->a[62133] = 3;
	v->a[62134] = actions(3);
	v->a[62135] = 1;
	v->a[62136] = sym_comment;
	v->a[62137] = actions(1200);
	v->a[62138] = 3;
	v->a[62139] = sym_file_descriptor;
	small_parse_table_3107(v);
}

void	small_parse_table_3107(t_small_parse_table_array *v)
{
	v->a[62140] = sym__concat;
	v->a[62141] = sym_variable_name;
	v->a[62142] = actions(1198);
	v->a[62143] = 17;
	v->a[62144] = anon_sym_LT;
	v->a[62145] = anon_sym_GT;
	v->a[62146] = anon_sym_GT_GT;
	v->a[62147] = anon_sym_LT_AMP;
	v->a[62148] = anon_sym_GT_AMP;
	v->a[62149] = anon_sym_GT_PIPE;
	v->a[62150] = anon_sym_LT_GT;
	v->a[62151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62152] = aux_sym_concatenation_token1;
	v->a[62153] = anon_sym_DOLLAR;
	v->a[62154] = anon_sym_DQUOTE;
	v->a[62155] = sym_raw_string;
	v->a[62156] = sym_number;
	v->a[62157] = anon_sym_DOLLAR_LBRACE;
	v->a[62158] = anon_sym_DOLLAR_LPAREN;
	v->a[62159] = anon_sym_BQUOTE;
	small_parse_table_3108(v);
}

void	small_parse_table_3108(t_small_parse_table_array *v)
{
	v->a[62160] = sym_word;
	v->a[62161] = 3;
	v->a[62162] = actions(3);
	v->a[62163] = 1;
	v->a[62164] = sym_comment;
	v->a[62165] = actions(2153);
	v->a[62166] = 3;
	v->a[62167] = sym_file_descriptor;
	v->a[62168] = ts_builtin_sym_end;
	v->a[62169] = aux_sym_heredoc_redirect_token1;
	v->a[62170] = actions(2155);
	v->a[62171] = 17;
	v->a[62172] = anon_sym_PIPE;
	v->a[62173] = anon_sym_RPAREN;
	v->a[62174] = anon_sym_SEMI_SEMI;
	v->a[62175] = anon_sym_AMP_AMP;
	v->a[62176] = anon_sym_PIPE_PIPE;
	v->a[62177] = anon_sym_LT;
	v->a[62178] = anon_sym_GT;
	v->a[62179] = anon_sym_GT_GT;
	small_parse_table_3109(v);
}

void	small_parse_table_3109(t_small_parse_table_array *v)
{
	v->a[62180] = anon_sym_LT_AMP;
	v->a[62181] = anon_sym_GT_AMP;
	v->a[62182] = anon_sym_GT_PIPE;
	v->a[62183] = anon_sym_LT_GT;
	v->a[62184] = anon_sym_LT_LT;
	v->a[62185] = anon_sym_LT_LT_DASH;
	v->a[62186] = anon_sym_AMP;
	v->a[62187] = anon_sym_BQUOTE;
	v->a[62188] = anon_sym_SEMI;
	v->a[62189] = 3;
	v->a[62190] = actions(3);
	v->a[62191] = 1;
	v->a[62192] = sym_comment;
	v->a[62193] = actions(2167);
	v->a[62194] = 3;
	v->a[62195] = sym_file_descriptor;
	v->a[62196] = ts_builtin_sym_end;
	v->a[62197] = aux_sym_heredoc_redirect_token1;
	v->a[62198] = actions(2169);
	v->a[62199] = 17;
	small_parse_table_3110(v);
}

/* EOF small_parse_table_621.c */
