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
	v->a[74100] = state(322);
	v->a[74101] = 6;
	v->a[74102] = sym_arithmetic_expansion;
	v->a[74103] = sym_string;
	v->a[74104] = sym_number;
	v->a[74105] = sym_simple_expansion;
	v->a[74106] = sym_expansion;
	v->a[74107] = sym_command_substitution;
	v->a[74108] = 7;
	v->a[74109] = actions(3);
	v->a[74110] = 1;
	v->a[74111] = sym_comment;
	v->a[74112] = actions(2480);
	v->a[74113] = 1;
	v->a[74114] = aux_sym_heredoc_redirect_token1;
	v->a[74115] = actions(2845);
	v->a[74116] = 1;
	v->a[74117] = sym_file_descriptor;
	v->a[74118] = actions(2757);
	v->a[74119] = 2;
	small_parse_table_3706(v);
}

void	small_parse_table_3706(t_small_parse_table_array *v)
{
	v->a[74120] = anon_sym_LT_AMP_DASH;
	v->a[74121] = anon_sym_GT_AMP_DASH;
	v->a[74122] = state(1345);
	v->a[74123] = 2;
	v->a[74124] = sym_file_redirect;
	v->a[74125] = aux_sym_redirected_statement_repeat2;
	v->a[74126] = actions(2482);
	v->a[74127] = 5;
	v->a[74128] = anon_sym_PIPE;
	v->a[74129] = anon_sym_AMP_AMP;
	v->a[74130] = anon_sym_PIPE_PIPE;
	v->a[74131] = anon_sym_LT_LT;
	v->a[74132] = anon_sym_LT_LT_DASH;
	v->a[74133] = actions(2755);
	v->a[74134] = 8;
	v->a[74135] = anon_sym_LT;
	v->a[74136] = anon_sym_GT;
	v->a[74137] = anon_sym_GT_GT;
	v->a[74138] = anon_sym_AMP_GT;
	v->a[74139] = anon_sym_AMP_GT_GT;
	small_parse_table_3707(v);
}

void	small_parse_table_3707(t_small_parse_table_array *v)
{
	v->a[74140] = anon_sym_LT_AMP;
	v->a[74141] = anon_sym_GT_AMP;
	v->a[74142] = anon_sym_GT_PIPE;
	v->a[74143] = 14;
	v->a[74144] = actions(3);
	v->a[74145] = 1;
	v->a[74146] = sym_comment;
	v->a[74147] = actions(933);
	v->a[74148] = 1;
	v->a[74149] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74150] = actions(935);
	v->a[74151] = 1;
	v->a[74152] = anon_sym_DOLLAR;
	v->a[74153] = actions(937);
	v->a[74154] = 1;
	v->a[74155] = anon_sym_DQUOTE;
	v->a[74156] = actions(939);
	v->a[74157] = 1;
	v->a[74158] = aux_sym_number_token1;
	v->a[74159] = actions(941);
	small_parse_table_3708(v);
}

void	small_parse_table_3708(t_small_parse_table_array *v)
{
	v->a[74160] = 1;
	v->a[74161] = aux_sym_number_token2;
	v->a[74162] = actions(943);
	v->a[74163] = 1;
	v->a[74164] = anon_sym_DOLLAR_LBRACE;
	v->a[74165] = actions(945);
	v->a[74166] = 1;
	v->a[74167] = anon_sym_DOLLAR_LPAREN;
	v->a[74168] = actions(947);
	v->a[74169] = 1;
	v->a[74170] = anon_sym_BQUOTE;
	v->a[74171] = actions(2847);
	v->a[74172] = 1;
	v->a[74173] = aux_sym_heredoc_redirect_token1;
	v->a[74174] = state(1348);
	v->a[74175] = 1;
	v->a[74176] = aux_sym__heredoc_command;
	v->a[74177] = state(1832);
	v->a[74178] = 1;
	v->a[74179] = sym_concatenation;
	small_parse_table_3709(v);
}

void	small_parse_table_3709(t_small_parse_table_array *v)
{
	v->a[74180] = actions(921);
	v->a[74181] = 2;
	v->a[74182] = sym_raw_string;
	v->a[74183] = sym_word;
	v->a[74184] = state(1614);
	v->a[74185] = 6;
	v->a[74186] = sym_arithmetic_expansion;
	v->a[74187] = sym_string;
	v->a[74188] = sym_number;
	v->a[74189] = sym_simple_expansion;
	v->a[74190] = sym_expansion;
	v->a[74191] = sym_command_substitution;
	v->a[74192] = 3;
	v->a[74193] = actions(1404);
	v->a[74194] = 1;
	v->a[74195] = sym_comment;
	v->a[74196] = actions(1245);
	v->a[74197] = 7;
	v->a[74198] = anon_sym_PIPE;
	v->a[74199] = anon_sym_LT;
	small_parse_table_3710(v);
}

/* EOF small_parse_table_741.c */
