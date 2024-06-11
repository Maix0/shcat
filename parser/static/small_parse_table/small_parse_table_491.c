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
	v->a[49100] = sym_raw_string;
	v->a[49101] = sym_number;
	v->a[49102] = anon_sym_DOLLAR_LBRACE;
	v->a[49103] = anon_sym_DOLLAR_LPAREN;
	v->a[49104] = anon_sym_BQUOTE;
	v->a[49105] = sym_word;
	v->a[49106] = anon_sym_SEMI;
	v->a[49107] = 7;
	v->a[49108] = actions(3);
	v->a[49109] = 1;
	v->a[49110] = sym_comment;
	v->a[49111] = actions(1565);
	v->a[49112] = 1;
	v->a[49113] = sym_file_descriptor;
	v->a[49114] = actions(1568);
	v->a[49115] = 1;
	v->a[49116] = sym_variable_name;
	v->a[49117] = actions(1600);
	v->a[49118] = 1;
	v->a[49119] = anon_sym_RPAREN;
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = actions(1558);
	v->a[49121] = 9;
	v->a[49122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49123] = anon_sym_DOLLAR;
	v->a[49124] = anon_sym_DQUOTE;
	v->a[49125] = sym_raw_string;
	v->a[49126] = sym_number;
	v->a[49127] = anon_sym_DOLLAR_LBRACE;
	v->a[49128] = anon_sym_DOLLAR_LPAREN;
	v->a[49129] = anon_sym_BQUOTE;
	v->a[49130] = sym_word;
	v->a[49131] = actions(1560);
	v->a[49132] = 9;
	v->a[49133] = anon_sym_PIPE;
	v->a[49134] = anon_sym_SEMI_SEMI;
	v->a[49135] = anon_sym_AMP_AMP;
	v->a[49136] = anon_sym_PIPE_PIPE;
	v->a[49137] = anon_sym_LT_LT;
	v->a[49138] = anon_sym_LT_LT_DASH;
	v->a[49139] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = anon_sym_AMP;
	v->a[49141] = anon_sym_SEMI;
	v->a[49142] = actions(1562);
	v->a[49143] = 10;
	v->a[49144] = anon_sym_LT;
	v->a[49145] = anon_sym_GT;
	v->a[49146] = anon_sym_GT_GT;
	v->a[49147] = anon_sym_AMP_GT;
	v->a[49148] = anon_sym_AMP_GT_GT;
	v->a[49149] = anon_sym_LT_AMP;
	v->a[49150] = anon_sym_GT_AMP;
	v->a[49151] = anon_sym_GT_PIPE;
	v->a[49152] = anon_sym_LT_AMP_DASH;
	v->a[49153] = anon_sym_GT_AMP_DASH;
	v->a[49154] = 3;
	v->a[49155] = actions(3);
	v->a[49156] = 1;
	v->a[49157] = sym_comment;
	v->a[49158] = actions(608);
	v->a[49159] = 2;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = sym_file_descriptor;
	v->a[49161] = sym_variable_name;
	v->a[49162] = actions(610);
	v->a[49163] = 29;
	v->a[49164] = anon_sym_esac;
	v->a[49165] = anon_sym_PIPE;
	v->a[49166] = anon_sym_SEMI_SEMI;
	v->a[49167] = anon_sym_AMP_AMP;
	v->a[49168] = anon_sym_PIPE_PIPE;
	v->a[49169] = anon_sym_LT;
	v->a[49170] = anon_sym_GT;
	v->a[49171] = anon_sym_GT_GT;
	v->a[49172] = anon_sym_AMP_GT;
	v->a[49173] = anon_sym_AMP_GT_GT;
	v->a[49174] = anon_sym_LT_AMP;
	v->a[49175] = anon_sym_GT_AMP;
	v->a[49176] = anon_sym_GT_PIPE;
	v->a[49177] = anon_sym_LT_AMP_DASH;
	v->a[49178] = anon_sym_GT_AMP_DASH;
	v->a[49179] = anon_sym_LT_LT;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = anon_sym_LT_LT_DASH;
	v->a[49181] = aux_sym_heredoc_redirect_token1;
	v->a[49182] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49183] = anon_sym_AMP;
	v->a[49184] = anon_sym_DOLLAR;
	v->a[49185] = anon_sym_DQUOTE;
	v->a[49186] = sym_raw_string;
	v->a[49187] = sym_number;
	v->a[49188] = anon_sym_DOLLAR_LBRACE;
	v->a[49189] = anon_sym_DOLLAR_LPAREN;
	v->a[49190] = anon_sym_BQUOTE;
	v->a[49191] = sym_word;
	v->a[49192] = anon_sym_SEMI;
	v->a[49193] = 12;
	v->a[49194] = actions(3);
	v->a[49195] = 1;
	v->a[49196] = sym_comment;
	v->a[49197] = actions(717);
	v->a[49198] = 1;
	v->a[49199] = sym_file_descriptor;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
