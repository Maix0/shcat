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
	v->a[74100] = 3;
	v->a[74101] = actions(3);
	v->a[74102] = 1;
	v->a[74103] = sym_comment;
	v->a[74104] = actions(2411);
	v->a[74105] = 2;
	v->a[74106] = sym_file_descriptor;
	v->a[74107] = aux_sym_heredoc_redirect_token1;
	v->a[74108] = actions(2413);
	v->a[74109] = 19;
	v->a[74110] = anon_sym_esac;
	v->a[74111] = anon_sym_PIPE;
	v->a[74112] = anon_sym_SEMI_SEMI;
	v->a[74113] = anon_sym_AMP_AMP;
	v->a[74114] = anon_sym_PIPE_PIPE;
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
	v->a[74125] = anon_sym_LT_LT;
	v->a[74126] = anon_sym_LT_LT_DASH;
	v->a[74127] = anon_sym_AMP;
	v->a[74128] = anon_sym_SEMI;
	v->a[74129] = 15;
	v->a[74130] = actions(3);
	v->a[74131] = 1;
	v->a[74132] = sym_comment;
	v->a[74133] = actions(1879);
	v->a[74134] = 1;
	v->a[74135] = anon_sym_LPAREN;
	v->a[74136] = actions(1883);
	v->a[74137] = 1;
	v->a[74138] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74139] = actions(1885);
	small_parse_table_3707(v);
}

void	small_parse_table_3707(t_small_parse_table_array *v)
{
	v->a[74140] = 1;
	v->a[74141] = anon_sym_DOLLAR;
	v->a[74142] = actions(1887);
	v->a[74143] = 1;
	v->a[74144] = anon_sym_DQUOTE;
	v->a[74145] = actions(1889);
	v->a[74146] = 1;
	v->a[74147] = anon_sym_DOLLAR_LBRACE;
	v->a[74148] = actions(1891);
	v->a[74149] = 1;
	v->a[74150] = anon_sym_DOLLAR_LPAREN;
	v->a[74151] = actions(1893);
	v->a[74152] = 1;
	v->a[74153] = anon_sym_BQUOTE;
	v->a[74154] = actions(1895);
	v->a[74155] = 1;
	v->a[74156] = sym_extglob_pattern;
	v->a[74157] = state(1396);
	v->a[74158] = 1;
	v->a[74159] = aux_sym_case_statement_repeat1;
	small_parse_table_3708(v);
}

void	small_parse_table_3708(t_small_parse_table_array *v)
{
	v->a[74160] = state(1923);
	v->a[74161] = 1;
	v->a[74162] = sym_case_item;
	v->a[74163] = state(2194);
	v->a[74164] = 1;
	v->a[74165] = sym__case_item_last;
	v->a[74166] = state(2078);
	v->a[74167] = 2;
	v->a[74168] = sym_concatenation;
	v->a[74169] = sym__extglob_blob;
	v->a[74170] = actions(1875);
	v->a[74171] = 3;
	v->a[74172] = sym_raw_string;
	v->a[74173] = sym_number;
	v->a[74174] = sym_word;
	v->a[74175] = state(2004);
	v->a[74176] = 5;
	v->a[74177] = sym_arithmetic_expansion;
	v->a[74178] = sym_string;
	v->a[74179] = sym_simple_expansion;
	small_parse_table_3709(v);
}

void	small_parse_table_3709(t_small_parse_table_array *v)
{
	v->a[74180] = sym_expansion;
	v->a[74181] = sym_command_substitution;
	v->a[74182] = 5;
	v->a[74183] = actions(3);
	v->a[74184] = 1;
	v->a[74185] = sym_comment;
	v->a[74186] = actions(2486);
	v->a[74187] = 1;
	v->a[74188] = anon_sym_PIPE;
	v->a[74189] = state(1326);
	v->a[74190] = 1;
	v->a[74191] = aux_sym_pipeline_repeat1;
	v->a[74192] = actions(2440);
	v->a[74193] = 2;
	v->a[74194] = sym_file_descriptor;
	v->a[74195] = aux_sym_heredoc_redirect_token1;
	v->a[74196] = actions(2444);
	v->a[74197] = 17;
	v->a[74198] = anon_sym_SEMI_SEMI;
	v->a[74199] = anon_sym_AMP_AMP;
	small_parse_table_3710(v);
}

/* EOF small_parse_table_741.c */
