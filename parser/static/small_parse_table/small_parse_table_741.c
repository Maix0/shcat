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
	v->a[74100] = 1;
	v->a[74101] = sym__bare_dollar;
	v->a[74102] = actions(2621);
	v->a[74103] = 5;
	v->a[74104] = aux_sym_concatenation_token1;
	v->a[74105] = sym_raw_string;
	v->a[74106] = sym_number;
	v->a[74107] = sym__comment_word;
	v->a[74108] = sym_word;
	v->a[74109] = state(620);
	v->a[74110] = 5;
	v->a[74111] = sym_arithmetic_expansion;
	v->a[74112] = sym_string;
	v->a[74113] = sym_simple_expansion;
	v->a[74114] = sym_expansion;
	v->a[74115] = sym_command_substitution;
	v->a[74116] = 10;
	v->a[74117] = actions(3);
	v->a[74118] = 1;
	v->a[74119] = sym_comment;
	small_parse_table_3706(v);
}

void	small_parse_table_3706(t_small_parse_table_array *v)
{
	v->a[74120] = actions(2627);
	v->a[74121] = 1;
	v->a[74122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74123] = actions(2629);
	v->a[74124] = 1;
	v->a[74125] = anon_sym_DOLLAR;
	v->a[74126] = actions(2631);
	v->a[74127] = 1;
	v->a[74128] = anon_sym_DQUOTE;
	v->a[74129] = actions(2633);
	v->a[74130] = 1;
	v->a[74131] = anon_sym_DOLLAR_LBRACE;
	v->a[74132] = actions(2635);
	v->a[74133] = 1;
	v->a[74134] = anon_sym_DOLLAR_LPAREN;
	v->a[74135] = actions(2637);
	v->a[74136] = 1;
	v->a[74137] = anon_sym_BQUOTE;
	v->a[74138] = actions(2639);
	v->a[74139] = 1;
	small_parse_table_3707(v);
}

void	small_parse_table_3707(t_small_parse_table_array *v)
{
	v->a[74140] = sym__bare_dollar;
	v->a[74141] = actions(2625);
	v->a[74142] = 5;
	v->a[74143] = aux_sym_concatenation_token1;
	v->a[74144] = sym_raw_string;
	v->a[74145] = sym_number;
	v->a[74146] = sym__comment_word;
	v->a[74147] = sym_word;
	v->a[74148] = state(1123);
	v->a[74149] = 5;
	v->a[74150] = sym_arithmetic_expansion;
	v->a[74151] = sym_string;
	v->a[74152] = sym_simple_expansion;
	v->a[74153] = sym_expansion;
	v->a[74154] = sym_command_substitution;
	v->a[74155] = 3;
	v->a[74156] = actions(870);
	v->a[74157] = 1;
	v->a[74158] = sym_comment;
	v->a[74159] = actions(937);
	small_parse_table_3708(v);
}

void	small_parse_table_3708(t_small_parse_table_array *v)
{
	v->a[74160] = 6;
	v->a[74161] = anon_sym_PIPE;
	v->a[74162] = anon_sym_LT;
	v->a[74163] = anon_sym_GT;
	v->a[74164] = anon_sym_LT_AMP;
	v->a[74165] = anon_sym_GT_AMP;
	v->a[74166] = anon_sym_LT_LT;
	v->a[74167] = actions(939);
	v->a[74168] = 11;
	v->a[74169] = sym_file_descriptor;
	v->a[74170] = sym__concat;
	v->a[74171] = sym_variable_name;
	v->a[74172] = anon_sym_AMP_AMP;
	v->a[74173] = anon_sym_PIPE_PIPE;
	v->a[74174] = anon_sym_GT_GT;
	v->a[74175] = anon_sym_GT_PIPE;
	v->a[74176] = anon_sym_LT_AMP_DASH;
	v->a[74177] = anon_sym_GT_AMP_DASH;
	v->a[74178] = anon_sym_LT_LT_DASH;
	v->a[74179] = aux_sym_concatenation_token1;
	small_parse_table_3709(v);
}

void	small_parse_table_3709(t_small_parse_table_array *v)
{
	v->a[74180] = 3;
	v->a[74181] = actions(870);
	v->a[74182] = 1;
	v->a[74183] = sym_comment;
	v->a[74184] = actions(968);
	v->a[74185] = 6;
	v->a[74186] = anon_sym_PIPE;
	v->a[74187] = anon_sym_LT;
	v->a[74188] = anon_sym_GT;
	v->a[74189] = anon_sym_LT_AMP;
	v->a[74190] = anon_sym_GT_AMP;
	v->a[74191] = anon_sym_LT_LT;
	v->a[74192] = actions(970);
	v->a[74193] = 11;
	v->a[74194] = sym_file_descriptor;
	v->a[74195] = sym__concat;
	v->a[74196] = sym_variable_name;
	v->a[74197] = anon_sym_AMP_AMP;
	v->a[74198] = anon_sym_PIPE_PIPE;
	v->a[74199] = anon_sym_GT_GT;
	small_parse_table_3710(v);
}

/* EOF small_parse_table_741.c */
