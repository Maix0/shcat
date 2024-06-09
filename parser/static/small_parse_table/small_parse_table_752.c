/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_752.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3760(t_small_parse_table_array *v)
{
	v->a[75200] = 1;
	v->a[75201] = aux_sym__heredoc_command;
	v->a[75202] = state(1832);
	v->a[75203] = 1;
	v->a[75204] = sym_concatenation;
	v->a[75205] = actions(921);
	v->a[75206] = 2;
	v->a[75207] = sym_raw_string;
	v->a[75208] = sym_word;
	v->a[75209] = state(1614);
	v->a[75210] = 6;
	v->a[75211] = sym_arithmetic_expansion;
	v->a[75212] = sym_string;
	v->a[75213] = sym_number;
	v->a[75214] = sym_simple_expansion;
	v->a[75215] = sym_expansion;
	v->a[75216] = sym_command_substitution;
	v->a[75217] = 8;
	v->a[75218] = actions(3);
	v->a[75219] = 1;
	small_parse_table_3761(v);
}

void	small_parse_table_3761(t_small_parse_table_array *v)
{
	v->a[75220] = sym_comment;
	v->a[75221] = actions(2759);
	v->a[75222] = 1;
	v->a[75223] = aux_sym_heredoc_redirect_token1;
	v->a[75224] = actions(2761);
	v->a[75225] = 1;
	v->a[75226] = sym_file_descriptor;
	v->a[75227] = actions(1062);
	v->a[75228] = 2;
	v->a[75229] = anon_sym_LT_LT;
	v->a[75230] = anon_sym_LT_LT_DASH;
	v->a[75231] = actions(1588);
	v->a[75232] = 2;
	v->a[75233] = anon_sym_AMP_AMP;
	v->a[75234] = anon_sym_PIPE_PIPE;
	v->a[75235] = actions(2757);
	v->a[75236] = 2;
	v->a[75237] = anon_sym_LT_AMP_DASH;
	v->a[75238] = anon_sym_GT_AMP_DASH;
	v->a[75239] = state(1302);
	small_parse_table_3762(v);
}

void	small_parse_table_3762(t_small_parse_table_array *v)
{
	v->a[75240] = 3;
	v->a[75241] = sym_file_redirect;
	v->a[75242] = sym_heredoc_redirect;
	v->a[75243] = aux_sym_redirected_statement_repeat1;
	v->a[75244] = actions(2755);
	v->a[75245] = 8;
	v->a[75246] = anon_sym_LT;
	v->a[75247] = anon_sym_GT;
	v->a[75248] = anon_sym_GT_GT;
	v->a[75249] = anon_sym_AMP_GT;
	v->a[75250] = anon_sym_AMP_GT_GT;
	v->a[75251] = anon_sym_LT_AMP;
	v->a[75252] = anon_sym_GT_AMP;
	v->a[75253] = anon_sym_GT_PIPE;
	v->a[75254] = 5;
	v->a[75255] = actions(1404);
	v->a[75256] = 1;
	v->a[75257] = sym_comment;
	v->a[75258] = actions(2977);
	v->a[75259] = 1;
	small_parse_table_3763(v);
}

void	small_parse_table_3763(t_small_parse_table_array *v)
{
	v->a[75260] = sym_variable_name;
	v->a[75261] = state(1343);
	v->a[75262] = 2;
	v->a[75263] = sym_variable_assignment;
	v->a[75264] = aux_sym_variable_assignments_repeat1;
	v->a[75265] = actions(2254);
	v->a[75266] = 7;
	v->a[75267] = anon_sym_PIPE;
	v->a[75268] = anon_sym_LT;
	v->a[75269] = anon_sym_GT;
	v->a[75270] = anon_sym_AMP_GT;
	v->a[75271] = anon_sym_LT_AMP;
	v->a[75272] = anon_sym_GT_AMP;
	v->a[75273] = anon_sym_LT_LT;
	v->a[75274] = actions(2256);
	v->a[75275] = 9;
	v->a[75276] = sym_file_descriptor;
	v->a[75277] = anon_sym_AMP_AMP;
	v->a[75278] = anon_sym_PIPE_PIPE;
	v->a[75279] = anon_sym_GT_GT;
	small_parse_table_3764(v);
}

void	small_parse_table_3764(t_small_parse_table_array *v)
{
	v->a[75280] = anon_sym_AMP_GT_GT;
	v->a[75281] = anon_sym_GT_PIPE;
	v->a[75282] = anon_sym_LT_AMP_DASH;
	v->a[75283] = anon_sym_GT_AMP_DASH;
	v->a[75284] = anon_sym_LT_LT_DASH;
	v->a[75285] = 10;
	v->a[75286] = actions(1404);
	v->a[75287] = 1;
	v->a[75288] = sym_comment;
	v->a[75289] = actions(2330);
	v->a[75290] = 1;
	v->a[75291] = anon_sym_PIPE;
	v->a[75292] = actions(2989);
	v->a[75293] = 1;
	v->a[75294] = anon_sym_LT_LT;
	v->a[75295] = actions(2992);
	v->a[75296] = 1;
	v->a[75297] = anon_sym_LT_LT_DASH;
	v->a[75298] = actions(2995);
	v->a[75299] = 1;
	small_parse_table_3765(v);
}

/* EOF small_parse_table_752.c */
