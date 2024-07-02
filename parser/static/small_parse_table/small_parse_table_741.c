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
	v->a[74100] = 9;
	v->a[74101] = anon_sym_BANG;
	v->a[74102] = anon_sym_DASH;
	v->a[74103] = anon_sym_STAR;
	v->a[74104] = anon_sym_QMARK;
	v->a[74105] = anon_sym_DOLLAR;
	v->a[74106] = anon_sym_POUND;
	v->a[74107] = anon_sym_AT;
	v->a[74108] = anon_sym_0;
	v->a[74109] = anon_sym__;
	v->a[74110] = 7;
	v->a[74111] = actions(3);
	v->a[74112] = 1;
	v->a[74113] = sym_comment;
	v->a[74114] = actions(1079);
	v->a[74115] = 1;
	v->a[74116] = sym_file_descriptor;
	v->a[74117] = actions(3012);
	v->a[74118] = 1;
	v->a[74119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3706(v);
}

void	small_parse_table_3706(t_small_parse_table_array *v)
{
	v->a[74120] = state(2042);
	v->a[74121] = 1;
	v->a[74122] = sym__heredoc_expression;
	v->a[74123] = actions(1061);
	v->a[74124] = 2;
	v->a[74125] = anon_sym_AMP_AMP;
	v->a[74126] = anon_sym_PIPE_PIPE;
	v->a[74127] = state(1581);
	v->a[74128] = 2;
	v->a[74129] = sym_file_redirect;
	v->a[74130] = aux_sym_redirected_statement_repeat2;
	v->a[74131] = actions(1063);
	v->a[74132] = 7;
	v->a[74133] = anon_sym_LT;
	v->a[74134] = anon_sym_GT;
	v->a[74135] = anon_sym_GT_GT;
	v->a[74136] = anon_sym_LT_AMP;
	v->a[74137] = anon_sym_GT_AMP;
	v->a[74138] = anon_sym_GT_PIPE;
	v->a[74139] = anon_sym_LT_GT;
	small_parse_table_3707(v);
}

void	small_parse_table_3707(t_small_parse_table_array *v)
{
	v->a[74140] = 6;
	v->a[74141] = actions(3);
	v->a[74142] = 1;
	v->a[74143] = sym_comment;
	v->a[74144] = actions(2881);
	v->a[74145] = 1;
	v->a[74146] = sym_string_content;
	v->a[74147] = actions(2885);
	v->a[74148] = 1;
	v->a[74149] = sym_variable_name;
	v->a[74150] = actions(3014);
	v->a[74151] = 1;
	v->a[74152] = anon_sym_DQUOTE;
	v->a[74153] = actions(2883);
	v->a[74154] = 2;
	v->a[74155] = aux_sym__simple_variable_name_token1;
	v->a[74156] = aux_sym__multiline_variable_name_token1;
	v->a[74157] = actions(2877);
	v->a[74158] = 9;
	v->a[74159] = anon_sym_BANG;
	small_parse_table_3708(v);
}

void	small_parse_table_3708(t_small_parse_table_array *v)
{
	v->a[74160] = anon_sym_DASH;
	v->a[74161] = anon_sym_STAR;
	v->a[74162] = anon_sym_QMARK;
	v->a[74163] = anon_sym_DOLLAR;
	v->a[74164] = anon_sym_POUND;
	v->a[74165] = anon_sym_AT;
	v->a[74166] = anon_sym_0;
	v->a[74167] = anon_sym__;
	v->a[74168] = 6;
	v->a[74169] = actions(3);
	v->a[74170] = 1;
	v->a[74171] = sym_comment;
	v->a[74172] = actions(2881);
	v->a[74173] = 1;
	v->a[74174] = sym_string_content;
	v->a[74175] = actions(2885);
	v->a[74176] = 1;
	v->a[74177] = sym_variable_name;
	v->a[74178] = actions(3016);
	v->a[74179] = 1;
	small_parse_table_3709(v);
}

void	small_parse_table_3709(t_small_parse_table_array *v)
{
	v->a[74180] = anon_sym_DQUOTE;
	v->a[74181] = actions(2883);
	v->a[74182] = 2;
	v->a[74183] = aux_sym__simple_variable_name_token1;
	v->a[74184] = aux_sym__multiline_variable_name_token1;
	v->a[74185] = actions(2877);
	v->a[74186] = 9;
	v->a[74187] = anon_sym_BANG;
	v->a[74188] = anon_sym_DASH;
	v->a[74189] = anon_sym_STAR;
	v->a[74190] = anon_sym_QMARK;
	v->a[74191] = anon_sym_DOLLAR;
	v->a[74192] = anon_sym_POUND;
	v->a[74193] = anon_sym_AT;
	v->a[74194] = anon_sym_0;
	v->a[74195] = anon_sym__;
	v->a[74196] = 6;
	v->a[74197] = actions(3);
	v->a[74198] = 1;
	v->a[74199] = sym_comment;
	small_parse_table_3710(v);
}

/* EOF small_parse_table_741.c */
