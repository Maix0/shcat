/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1231.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6155(t_small_parse_table_array *v)
{
	v->a[123100] = 5;
	v->a[123101] = actions(57);
	v->a[123102] = 1;
	v->a[123103] = sym_comment;
	v->a[123104] = state(2604);
	v->a[123105] = 1;
	v->a[123106] = aux_sym_concatenation_repeat1;
	v->a[123107] = actions(7084);
	v->a[123108] = 2;
	v->a[123109] = sym__concat;
	v->a[123110] = aux_sym_concatenation_token1;
	v->a[123111] = actions(2662);
	v->a[123112] = 7;
	v->a[123113] = anon_sym_PIPE;
	v->a[123114] = anon_sym_LT;
	v->a[123115] = anon_sym_GT;
	v->a[123116] = anon_sym_AMP_GT;
	v->a[123117] = anon_sym_LT_AMP;
	v->a[123118] = anon_sym_GT_AMP;
	v->a[123119] = anon_sym_LT_LT;
	small_parse_table_6156(v);
}

void	small_parse_table_6156(t_small_parse_table_array *v)
{
	v->a[123120] = actions(2664);
	v->a[123121] = 12;
	v->a[123122] = sym_file_descriptor;
	v->a[123123] = sym_variable_name;
	v->a[123124] = anon_sym_PIPE_AMP;
	v->a[123125] = anon_sym_AMP_AMP;
	v->a[123126] = anon_sym_PIPE_PIPE;
	v->a[123127] = anon_sym_GT_GT;
	v->a[123128] = anon_sym_AMP_GT_GT;
	v->a[123129] = anon_sym_GT_PIPE;
	v->a[123130] = anon_sym_LT_AMP_DASH;
	v->a[123131] = anon_sym_GT_AMP_DASH;
	v->a[123132] = anon_sym_LT_LT_DASH;
	v->a[123133] = sym__special_character;
	v->a[123134] = 7;
	v->a[123135] = actions(3);
	v->a[123136] = 1;
	v->a[123137] = sym_comment;
	v->a[123138] = actions(5641);
	v->a[123139] = 1;
	small_parse_table_6157(v);
}

void	small_parse_table_6157(t_small_parse_table_array *v)
{
	v->a[123140] = aux_sym_heredoc_redirect_token1;
	v->a[123141] = actions(6464);
	v->a[123142] = 1;
	v->a[123143] = sym_file_descriptor;
	v->a[123144] = state(2286);
	v->a[123145] = 1;
	v->a[123146] = sym_file_redirect;
	v->a[123147] = actions(5968);
	v->a[123148] = 2;
	v->a[123149] = anon_sym_LT_AMP_DASH;
	v->a[123150] = anon_sym_GT_AMP_DASH;
	v->a[123151] = actions(5966);
	v->a[123152] = 8;
	v->a[123153] = anon_sym_LT;
	v->a[123154] = anon_sym_GT;
	v->a[123155] = anon_sym_GT_GT;
	v->a[123156] = anon_sym_AMP_GT;
	v->a[123157] = anon_sym_AMP_GT_GT;
	v->a[123158] = anon_sym_LT_AMP;
	v->a[123159] = anon_sym_GT_AMP;
	small_parse_table_6158(v);
}

void	small_parse_table_6158(t_small_parse_table_array *v)
{
	v->a[123160] = anon_sym_GT_PIPE;
	v->a[123161] = actions(5639);
	v->a[123162] = 9;
	v->a[123163] = anon_sym_PIPE;
	v->a[123164] = anon_sym_SEMI_SEMI;
	v->a[123165] = anon_sym_PIPE_AMP;
	v->a[123166] = anon_sym_AMP_AMP;
	v->a[123167] = anon_sym_PIPE_PIPE;
	v->a[123168] = anon_sym_LT_LT;
	v->a[123169] = anon_sym_LT_LT_DASH;
	v->a[123170] = anon_sym_AMP;
	v->a[123171] = anon_sym_SEMI;
	v->a[123172] = 7;
	v->a[123173] = actions(3);
	v->a[123174] = 1;
	v->a[123175] = sym_comment;
	v->a[123176] = actions(5615);
	v->a[123177] = 1;
	v->a[123178] = aux_sym_heredoc_redirect_token1;
	v->a[123179] = actions(6464);
	small_parse_table_6159(v);
}

void	small_parse_table_6159(t_small_parse_table_array *v)
{
	v->a[123180] = 1;
	v->a[123181] = sym_file_descriptor;
	v->a[123182] = state(2305);
	v->a[123183] = 1;
	v->a[123184] = sym_file_redirect;
	v->a[123185] = actions(5968);
	v->a[123186] = 2;
	v->a[123187] = anon_sym_LT_AMP_DASH;
	v->a[123188] = anon_sym_GT_AMP_DASH;
	v->a[123189] = actions(5966);
	v->a[123190] = 8;
	v->a[123191] = anon_sym_LT;
	v->a[123192] = anon_sym_GT;
	v->a[123193] = anon_sym_GT_GT;
	v->a[123194] = anon_sym_AMP_GT;
	v->a[123195] = anon_sym_AMP_GT_GT;
	v->a[123196] = anon_sym_LT_AMP;
	v->a[123197] = anon_sym_GT_AMP;
	v->a[123198] = anon_sym_GT_PIPE;
	v->a[123199] = actions(5613);
	small_parse_table_6160(v);
}

/* EOF small_parse_table_1231.c */
