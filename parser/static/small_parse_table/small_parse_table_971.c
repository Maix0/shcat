/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_971.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4855(t_small_parse_table_array *v)
{
	v->a[97100] = sym_file_redirect;
	v->a[97101] = sym_heredoc_redirect;
	v->a[97102] = aux_sym_redirected_statement_repeat1;
	v->a[97103] = actions(2630);
	v->a[97104] = 19;
	v->a[97105] = anon_sym_SEMI_SEMI;
	v->a[97106] = anon_sym_SEMI_AMP;
	v->a[97107] = anon_sym_SEMI_SEMI_AMP;
	v->a[97108] = anon_sym_AMP_AMP;
	v->a[97109] = anon_sym_PIPE_PIPE;
	v->a[97110] = anon_sym_LT;
	v->a[97111] = anon_sym_GT;
	v->a[97112] = anon_sym_GT_GT;
	v->a[97113] = anon_sym_AMP_GT;
	v->a[97114] = anon_sym_AMP_GT_GT;
	v->a[97115] = anon_sym_LT_AMP;
	v->a[97116] = anon_sym_GT_AMP;
	v->a[97117] = anon_sym_GT_PIPE;
	v->a[97118] = anon_sym_LT_AMP_DASH;
	v->a[97119] = anon_sym_GT_AMP_DASH;
	small_parse_table_4856(v);
}

void	small_parse_table_4856(t_small_parse_table_array *v)
{
	v->a[97120] = anon_sym_LT_LT;
	v->a[97121] = anon_sym_LT_LT_DASH;
	v->a[97122] = anon_sym_AMP;
	v->a[97123] = anon_sym_SEMI;
	v->a[97124] = 4;
	v->a[97125] = actions(3);
	v->a[97126] = 1;
	v->a[97127] = sym_comment;
	v->a[97128] = actions(2632);
	v->a[97129] = 2;
	v->a[97130] = sym_file_descriptor;
	v->a[97131] = aux_sym_heredoc_redirect_token1;
	v->a[97132] = state(1983);
	v->a[97133] = 3;
	v->a[97134] = sym_file_redirect;
	v->a[97135] = sym_heredoc_redirect;
	v->a[97136] = aux_sym_redirected_statement_repeat1;
	v->a[97137] = actions(2630);
	v->a[97138] = 21;
	v->a[97139] = anon_sym_PIPE;
	small_parse_table_4857(v);
}

void	small_parse_table_4857(t_small_parse_table_array *v)
{
	v->a[97140] = anon_sym_SEMI_SEMI;
	v->a[97141] = anon_sym_SEMI_AMP;
	v->a[97142] = anon_sym_SEMI_SEMI_AMP;
	v->a[97143] = anon_sym_PIPE_AMP;
	v->a[97144] = anon_sym_AMP_AMP;
	v->a[97145] = anon_sym_PIPE_PIPE;
	v->a[97146] = anon_sym_LT;
	v->a[97147] = anon_sym_GT;
	v->a[97148] = anon_sym_GT_GT;
	v->a[97149] = anon_sym_AMP_GT;
	v->a[97150] = anon_sym_AMP_GT_GT;
	v->a[97151] = anon_sym_LT_AMP;
	v->a[97152] = anon_sym_GT_AMP;
	v->a[97153] = anon_sym_GT_PIPE;
	v->a[97154] = anon_sym_LT_AMP_DASH;
	v->a[97155] = anon_sym_GT_AMP_DASH;
	v->a[97156] = anon_sym_LT_LT;
	v->a[97157] = anon_sym_LT_LT_DASH;
	v->a[97158] = anon_sym_AMP;
	v->a[97159] = anon_sym_SEMI;
	small_parse_table_4858(v);
}

void	small_parse_table_4858(t_small_parse_table_array *v)
{
	v->a[97160] = 6;
	v->a[97161] = actions(3);
	v->a[97162] = 1;
	v->a[97163] = sym_comment;
	v->a[97164] = actions(5267);
	v->a[97165] = 1;
	v->a[97166] = aux_sym_concatenation_token1;
	v->a[97167] = actions(5269);
	v->a[97168] = 1;
	v->a[97169] = sym__concat;
	v->a[97170] = state(2072);
	v->a[97171] = 1;
	v->a[97172] = aux_sym_concatenation_repeat1;
	v->a[97173] = actions(2664);
	v->a[97174] = 2;
	v->a[97175] = sym_file_descriptor;
	v->a[97176] = aux_sym_heredoc_redirect_token1;
	v->a[97177] = actions(2662);
	v->a[97178] = 21;
	v->a[97179] = anon_sym_PIPE;
	small_parse_table_4859(v);
}

void	small_parse_table_4859(t_small_parse_table_array *v)
{
	v->a[97180] = anon_sym_RPAREN;
	v->a[97181] = anon_sym_SEMI_SEMI;
	v->a[97182] = anon_sym_PIPE_AMP;
	v->a[97183] = anon_sym_AMP_AMP;
	v->a[97184] = anon_sym_PIPE_PIPE;
	v->a[97185] = anon_sym_LT;
	v->a[97186] = anon_sym_GT;
	v->a[97187] = anon_sym_GT_GT;
	v->a[97188] = anon_sym_AMP_GT;
	v->a[97189] = anon_sym_AMP_GT_GT;
	v->a[97190] = anon_sym_LT_AMP;
	v->a[97191] = anon_sym_GT_AMP;
	v->a[97192] = anon_sym_GT_PIPE;
	v->a[97193] = anon_sym_LT_AMP_DASH;
	v->a[97194] = anon_sym_GT_AMP_DASH;
	v->a[97195] = anon_sym_LT_LT;
	v->a[97196] = anon_sym_LT_LT_DASH;
	v->a[97197] = anon_sym_AMP;
	v->a[97198] = sym__special_character;
	v->a[97199] = anon_sym_SEMI;
	small_parse_table_4860(v);
}

/* EOF small_parse_table_971.c */
