/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2581.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12905(t_small_parse_table_array *v)
{
	v->a[258100] = sym_comment;
	v->a[258101] = actions(11760);
	v->a[258102] = 1;
	v->a[258103] = anon_sym_BANG2;
	v->a[258104] = actions(11764);
	v->a[258105] = 1;
	v->a[258106] = anon_sym_DOLLAR_LPAREN;
	v->a[258107] = actions(11766);
	v->a[258108] = 1;
	v->a[258109] = anon_sym_BQUOTE;
	v->a[258110] = actions(11768);
	v->a[258111] = 1;
	v->a[258112] = anon_sym_DOLLAR_BQUOTE;
	v->a[258113] = actions(11770);
	v->a[258114] = 1;
	v->a[258115] = aux_sym__simple_variable_name_token1;
	v->a[258116] = actions(11772);
	v->a[258117] = 1;
	v->a[258118] = sym_variable_name;
	v->a[258119] = actions(11897);
	small_parse_table_12906(v);
}

void	small_parse_table_12906(t_small_parse_table_array *v)
{
	v->a[258120] = 1;
	v->a[258121] = anon_sym_RBRACE3;
	v->a[258122] = state(3532);
	v->a[258123] = 1;
	v->a[258124] = sym_subscript;
	v->a[258125] = state(6428);
	v->a[258126] = 1;
	v->a[258127] = aux_sym__expansion_body_repeat1;
	v->a[258128] = state(6472);
	v->a[258129] = 1;
	v->a[258130] = sym_command_substitution;
	v->a[258131] = state(7219);
	v->a[258132] = 1;
	v->a[258133] = sym__expansion_body;
	v->a[258134] = actions(11762);
	v->a[258135] = 2;
	v->a[258136] = anon_sym_POUND2;
	v->a[258137] = anon_sym_EQ2;
	v->a[258138] = actions(8050);
	v->a[258139] = 3;
	small_parse_table_12907(v);
}

void	small_parse_table_12907(t_small_parse_table_array *v)
{
	v->a[258140] = sym__external_expansion_sym_hash;
	v->a[258141] = sym__external_expansion_sym_bang;
	v->a[258142] = sym__external_expansion_sym_equal;
	v->a[258143] = actions(11754);
	v->a[258144] = 4;
	v->a[258145] = anon_sym_DASH;
	v->a[258146] = anon_sym_STAR;
	v->a[258147] = anon_sym_QMARK;
	v->a[258148] = anon_sym_AT2;
	v->a[258149] = actions(11756);
	v->a[258150] = 5;
	v->a[258151] = anon_sym_BANG;
	v->a[258152] = anon_sym_DOLLAR;
	v->a[258153] = anon_sym_POUND;
	v->a[258154] = anon_sym_0;
	v->a[258155] = anon_sym__;
	v->a[258156] = 6;
	v->a[258157] = actions(3);
	v->a[258158] = 1;
	v->a[258159] = sym_comment;
	small_parse_table_12908(v);
}

void	small_parse_table_12908(t_small_parse_table_array *v)
{
	v->a[258160] = actions(11651);
	v->a[258161] = 1;
	v->a[258162] = aux_sym_concatenation_token1;
	v->a[258163] = actions(11653);
	v->a[258164] = 1;
	v->a[258165] = sym__concat;
	v->a[258166] = state(4634);
	v->a[258167] = 1;
	v->a[258168] = aux_sym_concatenation_repeat1;
	v->a[258169] = actions(4469);
	v->a[258170] = 2;
	v->a[258171] = sym_file_descriptor;
	v->a[258172] = aux_sym_heredoc_redirect_token1;
	v->a[258173] = actions(4467);
	v->a[258174] = 20;
	v->a[258175] = anon_sym_SEMI;
	v->a[258176] = anon_sym_PIPE_PIPE;
	v->a[258177] = anon_sym_AMP_AMP;
	v->a[258178] = anon_sym_PIPE;
	v->a[258179] = anon_sym_AMP;
	small_parse_table_12909(v);
}

void	small_parse_table_12909(t_small_parse_table_array *v)
{
	v->a[258180] = anon_sym_LT;
	v->a[258181] = anon_sym_GT;
	v->a[258182] = anon_sym_LT_LT;
	v->a[258183] = anon_sym_GT_GT;
	v->a[258184] = anon_sym_RPAREN;
	v->a[258185] = anon_sym_SEMI_SEMI;
	v->a[258186] = anon_sym_PIPE_AMP;
	v->a[258187] = anon_sym_AMP_GT;
	v->a[258188] = anon_sym_AMP_GT_GT;
	v->a[258189] = anon_sym_LT_AMP;
	v->a[258190] = anon_sym_GT_AMP;
	v->a[258191] = anon_sym_GT_PIPE;
	v->a[258192] = anon_sym_LT_AMP_DASH;
	v->a[258193] = anon_sym_GT_AMP_DASH;
	v->a[258194] = anon_sym_LT_LT_DASH;
	v->a[258195] = 6;
	v->a[258196] = actions(3);
	v->a[258197] = 1;
	v->a[258198] = sym_comment;
	v->a[258199] = actions(11651);
	small_parse_table_12910(v);
}

/* EOF small_parse_table_2581.c */
