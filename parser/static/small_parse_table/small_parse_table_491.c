/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_491.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2455(t_small_parse_table_array *v)
{
	v->a[49100] = actions(1763);
	v->a[49101] = 1;
	v->a[49102] = anon_sym_BQUOTE;
	v->a[49103] = actions(1747);
	v->a[49104] = 2;
	v->a[49105] = sym_raw_string;
	v->a[49106] = sym_word;
	v->a[49107] = state(710);
	v->a[49108] = 2;
	v->a[49109] = sym_concatenation;
	v->a[49110] = aux_sym_for_statement_repeat1;
	v->a[49111] = state(936);
	v->a[49112] = 6;
	v->a[49113] = sym_arithmetic_expansion;
	v->a[49114] = sym_string;
	v->a[49115] = sym_number;
	v->a[49116] = sym_simple_expansion;
	v->a[49117] = sym_expansion;
	v->a[49118] = sym_command_substitution;
	v->a[49119] = actions(553);
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = 13;
	v->a[49121] = anon_sym_AMP_AMP;
	v->a[49122] = anon_sym_PIPE_PIPE;
	v->a[49123] = anon_sym_LT;
	v->a[49124] = anon_sym_GT;
	v->a[49125] = anon_sym_GT_GT;
	v->a[49126] = anon_sym_AMP_GT;
	v->a[49127] = anon_sym_AMP_GT_GT;
	v->a[49128] = anon_sym_LT_AMP;
	v->a[49129] = anon_sym_GT_AMP;
	v->a[49130] = anon_sym_GT_PIPE;
	v->a[49131] = anon_sym_LT_AMP_DASH;
	v->a[49132] = anon_sym_GT_AMP_DASH;
	v->a[49133] = aux_sym_heredoc_redirect_token1;
	v->a[49134] = 7;
	v->a[49135] = actions(3);
	v->a[49136] = 1;
	v->a[49137] = sym_comment;
	v->a[49138] = actions(1706);
	v->a[49139] = 1;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = sym_file_descriptor;
	v->a[49141] = actions(1709);
	v->a[49142] = 1;
	v->a[49143] = sym_variable_name;
	v->a[49144] = actions(1768);
	v->a[49145] = 1;
	v->a[49146] = anon_sym_RPAREN;
	v->a[49147] = actions(1698);
	v->a[49148] = 9;
	v->a[49149] = anon_sym_PIPE;
	v->a[49150] = anon_sym_SEMI_SEMI;
	v->a[49151] = anon_sym_AMP_AMP;
	v->a[49152] = anon_sym_PIPE_PIPE;
	v->a[49153] = anon_sym_LT_LT;
	v->a[49154] = anon_sym_LT_LT_DASH;
	v->a[49155] = aux_sym_heredoc_redirect_token1;
	v->a[49156] = anon_sym_AMP;
	v->a[49157] = anon_sym_SEMI;
	v->a[49158] = actions(1696);
	v->a[49159] = 10;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49161] = anon_sym_DOLLAR;
	v->a[49162] = anon_sym_DQUOTE;
	v->a[49163] = sym_raw_string;
	v->a[49164] = aux_sym_number_token1;
	v->a[49165] = aux_sym_number_token2;
	v->a[49166] = anon_sym_DOLLAR_LBRACE;
	v->a[49167] = anon_sym_DOLLAR_LPAREN;
	v->a[49168] = anon_sym_BQUOTE;
	v->a[49169] = sym_word;
	v->a[49170] = actions(1703);
	v->a[49171] = 10;
	v->a[49172] = anon_sym_LT;
	v->a[49173] = anon_sym_GT;
	v->a[49174] = anon_sym_GT_GT;
	v->a[49175] = anon_sym_AMP_GT;
	v->a[49176] = anon_sym_AMP_GT_GT;
	v->a[49177] = anon_sym_LT_AMP;
	v->a[49178] = anon_sym_GT_AMP;
	v->a[49179] = anon_sym_GT_PIPE;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = anon_sym_LT_AMP_DASH;
	v->a[49181] = anon_sym_GT_AMP_DASH;
	v->a[49182] = 7;
	v->a[49183] = actions(3);
	v->a[49184] = 1;
	v->a[49185] = sym_comment;
	v->a[49186] = actions(1706);
	v->a[49187] = 1;
	v->a[49188] = sym_file_descriptor;
	v->a[49189] = actions(1709);
	v->a[49190] = 1;
	v->a[49191] = sym_variable_name;
	v->a[49192] = actions(1771);
	v->a[49193] = 1;
	v->a[49194] = anon_sym_RPAREN;
	v->a[49195] = actions(1698);
	v->a[49196] = 9;
	v->a[49197] = anon_sym_PIPE;
	v->a[49198] = anon_sym_SEMI_SEMI;
	v->a[49199] = anon_sym_AMP_AMP;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
