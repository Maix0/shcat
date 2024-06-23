/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_741.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3705(t_small_parse_table_array *v)
{
	v->a[74100] = actions(3);
	v->a[74101] = 1;
	v->a[74102] = sym_comment;
	v->a[74103] = actions(811);
	v->a[74104] = 1;
	v->a[74105] = sym_file_descriptor;
	v->a[74106] = actions(852);
	v->a[74107] = 1;
	v->a[74108] = sym_variable_name;
	v->a[74109] = state(1216);
	v->a[74110] = 2;
	v->a[74111] = sym_variable_assignment;
	v->a[74112] = aux_sym__variable_assignments_repeat1;
	v->a[74113] = actions(805);
	v->a[74114] = 19;
	v->a[74115] = anon_sym_LT;
	v->a[74116] = anon_sym_GT;
	v->a[74117] = anon_sym_GT_GT;
	v->a[74118] = anon_sym_AMP_GT;
	v->a[74119] = anon_sym_AMP_GT_GT;
	small_parse_table_3706(v);
}

void	small_parse_table_3706(t_small_parse_table_array *v)
{
	v->a[74120] = anon_sym_LT_AMP;
	v->a[74121] = anon_sym_GT_AMP;
	v->a[74122] = anon_sym_GT_PIPE;
	v->a[74123] = anon_sym_LT_AMP_DASH;
	v->a[74124] = anon_sym_GT_AMP_DASH;
	v->a[74125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74126] = anon_sym_DOLLAR;
	v->a[74127] = anon_sym_DQUOTE;
	v->a[74128] = sym_raw_string;
	v->a[74129] = sym_number;
	v->a[74130] = anon_sym_DOLLAR_LBRACE;
	v->a[74131] = anon_sym_DOLLAR_LPAREN;
	v->a[74132] = anon_sym_BQUOTE;
	v->a[74133] = sym_word;
	v->a[74134] = 8;
	v->a[74135] = actions(3);
	v->a[74136] = 1;
	v->a[74137] = sym_comment;
	v->a[74138] = actions(2135);
	v->a[74139] = 1;
	small_parse_table_3707(v);
}

void	small_parse_table_3707(t_small_parse_table_array *v)
{
	v->a[74140] = aux_sym_heredoc_redirect_token1;
	v->a[74141] = actions(2707);
	v->a[74142] = 1;
	v->a[74143] = sym_file_descriptor;
	v->a[74144] = actions(2145);
	v->a[74145] = 2;
	v->a[74146] = anon_sym_LT_LT;
	v->a[74147] = anon_sym_LT_LT_DASH;
	v->a[74148] = actions(2704);
	v->a[74149] = 2;
	v->a[74150] = anon_sym_LT_AMP_DASH;
	v->a[74151] = anon_sym_GT_AMP_DASH;
	v->a[74152] = state(1340);
	v->a[74153] = 3;
	v->a[74154] = sym_file_redirect;
	v->a[74155] = sym_heredoc_redirect;
	v->a[74156] = aux_sym_redirected_statement_repeat1;
	v->a[74157] = actions(2137);
	v->a[74158] = 6;
	v->a[74159] = anon_sym_PIPE;
	small_parse_table_3708(v);
}

void	small_parse_table_3708(t_small_parse_table_array *v)
{
	v->a[74160] = anon_sym_SEMI_SEMI;
	v->a[74161] = anon_sym_AMP_AMP;
	v->a[74162] = anon_sym_PIPE_PIPE;
	v->a[74163] = anon_sym_AMP;
	v->a[74164] = anon_sym_SEMI;
	v->a[74165] = actions(2701);
	v->a[74166] = 8;
	v->a[74167] = anon_sym_LT;
	v->a[74168] = anon_sym_GT;
	v->a[74169] = anon_sym_GT_GT;
	v->a[74170] = anon_sym_AMP_GT;
	v->a[74171] = anon_sym_AMP_GT_GT;
	v->a[74172] = anon_sym_LT_AMP;
	v->a[74173] = anon_sym_GT_AMP;
	v->a[74174] = anon_sym_GT_PIPE;
	v->a[74175] = 3;
	v->a[74176] = actions(3);
	v->a[74177] = 1;
	v->a[74178] = sym_comment;
	v->a[74179] = actions(2710);
	small_parse_table_3709(v);
}

void	small_parse_table_3709(t_small_parse_table_array *v)
{
	v->a[74180] = 3;
	v->a[74181] = sym_file_descriptor;
	v->a[74182] = ts_builtin_sym_end;
	v->a[74183] = aux_sym_heredoc_redirect_token1;
	v->a[74184] = actions(2712);
	v->a[74185] = 20;
	v->a[74186] = anon_sym_PIPE;
	v->a[74187] = anon_sym_RPAREN;
	v->a[74188] = anon_sym_SEMI_SEMI;
	v->a[74189] = anon_sym_AMP_AMP;
	v->a[74190] = anon_sym_PIPE_PIPE;
	v->a[74191] = anon_sym_LT;
	v->a[74192] = anon_sym_GT;
	v->a[74193] = anon_sym_GT_GT;
	v->a[74194] = anon_sym_AMP_GT;
	v->a[74195] = anon_sym_AMP_GT_GT;
	v->a[74196] = anon_sym_LT_AMP;
	v->a[74197] = anon_sym_GT_AMP;
	v->a[74198] = anon_sym_GT_PIPE;
	v->a[74199] = anon_sym_LT_AMP_DASH;
	small_parse_table_3710(v);
}

/* EOF small_parse_table_741.c */
