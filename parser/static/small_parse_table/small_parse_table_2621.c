/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2621.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13105(t_small_parse_table_array *v)
{
	v->a[262100] = aux_sym_number_token2;
	v->a[262101] = anon_sym_DOLLAR_LBRACE;
	v->a[262102] = anon_sym_DOLLAR_LPAREN;
	v->a[262103] = anon_sym_BQUOTE;
	v->a[262104] = anon_sym_DOLLAR_BQUOTE;
	v->a[262105] = anon_sym_LT_LPAREN;
	v->a[262106] = anon_sym_GT_LPAREN;
	v->a[262107] = sym_word;
	v->a[262108] = 5;
	v->a[262109] = actions(3);
	v->a[262110] = 1;
	v->a[262111] = sym_comment;
	v->a[262112] = actions(11802);
	v->a[262113] = 1;
	v->a[262114] = sym__special_character;
	v->a[262115] = state(4855);
	v->a[262116] = 1;
	v->a[262117] = aux_sym__literal_repeat1;
	v->a[262118] = actions(5697);
	v->a[262119] = 2;
	small_parse_table_13106(v);
}

void	small_parse_table_13106(t_small_parse_table_array *v)
{
	v->a[262120] = sym_file_descriptor;
	v->a[262121] = aux_sym_heredoc_redirect_token1;
	v->a[262122] = actions(5695);
	v->a[262123] = 21;
	v->a[262124] = anon_sym_SEMI;
	v->a[262125] = anon_sym_PIPE_PIPE;
	v->a[262126] = anon_sym_AMP_AMP;
	v->a[262127] = anon_sym_PIPE;
	v->a[262128] = anon_sym_AMP;
	v->a[262129] = anon_sym_LT;
	v->a[262130] = anon_sym_GT;
	v->a[262131] = anon_sym_LT_LT;
	v->a[262132] = anon_sym_GT_GT;
	v->a[262133] = anon_sym_SEMI_SEMI;
	v->a[262134] = anon_sym_SEMI_AMP;
	v->a[262135] = anon_sym_SEMI_SEMI_AMP;
	v->a[262136] = anon_sym_PIPE_AMP;
	v->a[262137] = anon_sym_AMP_GT;
	v->a[262138] = anon_sym_AMP_GT_GT;
	v->a[262139] = anon_sym_LT_AMP;
	small_parse_table_13107(v);
}

void	small_parse_table_13107(t_small_parse_table_array *v)
{
	v->a[262140] = anon_sym_GT_AMP;
	v->a[262141] = anon_sym_GT_PIPE;
	v->a[262142] = anon_sym_LT_AMP_DASH;
	v->a[262143] = anon_sym_GT_AMP_DASH;
	v->a[262144] = anon_sym_LT_LT_DASH;
	v->a[262145] = 16;
	v->a[262146] = actions(3);
	v->a[262147] = 1;
	v->a[262148] = sym_comment;
	v->a[262149] = actions(11760);
	v->a[262150] = 1;
	v->a[262151] = anon_sym_BANG2;
	v->a[262152] = actions(11764);
	v->a[262153] = 1;
	v->a[262154] = anon_sym_DOLLAR_LPAREN;
	v->a[262155] = actions(11766);
	v->a[262156] = 1;
	v->a[262157] = anon_sym_BQUOTE;
	v->a[262158] = actions(11768);
	v->a[262159] = 1;
	small_parse_table_13108(v);
}

void	small_parse_table_13108(t_small_parse_table_array *v)
{
	v->a[262160] = anon_sym_DOLLAR_BQUOTE;
	v->a[262161] = actions(11770);
	v->a[262162] = 1;
	v->a[262163] = aux_sym__simple_variable_name_token1;
	v->a[262164] = actions(11772);
	v->a[262165] = 1;
	v->a[262166] = sym_variable_name;
	v->a[262167] = actions(12017);
	v->a[262168] = 1;
	v->a[262169] = anon_sym_RBRACE3;
	v->a[262170] = state(3532);
	v->a[262171] = 1;
	v->a[262172] = sym_subscript;
	v->a[262173] = state(6428);
	v->a[262174] = 1;
	v->a[262175] = aux_sym__expansion_body_repeat1;
	v->a[262176] = state(6472);
	v->a[262177] = 1;
	v->a[262178] = sym_command_substitution;
	v->a[262179] = state(7493);
	small_parse_table_13109(v);
}

void	small_parse_table_13109(t_small_parse_table_array *v)
{
	v->a[262180] = 1;
	v->a[262181] = sym__expansion_body;
	v->a[262182] = actions(11762);
	v->a[262183] = 2;
	v->a[262184] = anon_sym_POUND2;
	v->a[262185] = anon_sym_EQ2;
	v->a[262186] = actions(8050);
	v->a[262187] = 3;
	v->a[262188] = sym__external_expansion_sym_hash;
	v->a[262189] = sym__external_expansion_sym_bang;
	v->a[262190] = sym__external_expansion_sym_equal;
	v->a[262191] = actions(11754);
	v->a[262192] = 4;
	v->a[262193] = anon_sym_DASH;
	v->a[262194] = anon_sym_STAR;
	v->a[262195] = anon_sym_QMARK;
	v->a[262196] = anon_sym_AT2;
	v->a[262197] = actions(11756);
	v->a[262198] = 5;
	v->a[262199] = anon_sym_BANG;
	small_parse_table_13110(v);
}

/* EOF small_parse_table_2621.c */
