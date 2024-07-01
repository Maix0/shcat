/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = anon_sym_DOLLAR_LBRACE;
	v->a[59101] = anon_sym_DOLLAR_LPAREN;
	v->a[59102] = anon_sym_BQUOTE;
	v->a[59103] = sym_word;
	v->a[59104] = 12;
	v->a[59105] = actions(3);
	v->a[59106] = 1;
	v->a[59107] = sym_comment;
	v->a[59108] = actions(682);
	v->a[59109] = 1;
	v->a[59110] = anon_sym_PIPE;
	v->a[59111] = actions(695);
	v->a[59112] = 1;
	v->a[59113] = anon_sym_RPAREN;
	v->a[59114] = actions(2009);
	v->a[59115] = 1;
	v->a[59116] = aux_sym_heredoc_redirect_token1;
	v->a[59117] = actions(2011);
	v->a[59118] = 1;
	v->a[59119] = sym_file_descriptor;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = state(751);
	v->a[59121] = 1;
	v->a[59122] = sym_terminator;
	v->a[59123] = actions(752);
	v->a[59124] = 2;
	v->a[59125] = anon_sym_AMP_AMP;
	v->a[59126] = anon_sym_PIPE_PIPE;
	v->a[59127] = actions(754);
	v->a[59128] = 2;
	v->a[59129] = anon_sym_LT_LT;
	v->a[59130] = anon_sym_LT_LT_DASH;
	v->a[59131] = actions(2007);
	v->a[59132] = 2;
	v->a[59133] = anon_sym_LT_AMP_DASH;
	v->a[59134] = anon_sym_GT_AMP_DASH;
	v->a[59135] = actions(750);
	v->a[59136] = 3;
	v->a[59137] = anon_sym_SEMI_SEMI;
	v->a[59138] = anon_sym_AMP;
	v->a[59139] = anon_sym_SEMI;
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = state(1128);
	v->a[59141] = 3;
	v->a[59142] = sym_file_redirect;
	v->a[59143] = sym_heredoc_redirect;
	v->a[59144] = aux_sym_redirected_statement_repeat1;
	v->a[59145] = actions(2005);
	v->a[59146] = 6;
	v->a[59147] = anon_sym_LT;
	v->a[59148] = anon_sym_GT;
	v->a[59149] = anon_sym_GT_GT;
	v->a[59150] = anon_sym_LT_AMP;
	v->a[59151] = anon_sym_GT_AMP;
	v->a[59152] = anon_sym_GT_PIPE;
	v->a[59153] = 12;
	v->a[59154] = actions(3);
	v->a[59155] = 1;
	v->a[59156] = sym_comment;
	v->a[59157] = actions(682);
	v->a[59158] = 1;
	v->a[59159] = anon_sym_PIPE;
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = actions(2017);
	v->a[59161] = 1;
	v->a[59162] = aux_sym_heredoc_redirect_token1;
	v->a[59163] = actions(2019);
	v->a[59164] = 1;
	v->a[59165] = sym_file_descriptor;
	v->a[59166] = state(682);
	v->a[59167] = 1;
	v->a[59168] = sym_terminator;
	v->a[59169] = actions(684);
	v->a[59170] = 2;
	v->a[59171] = anon_sym_AMP_AMP;
	v->a[59172] = anon_sym_PIPE_PIPE;
	v->a[59173] = actions(686);
	v->a[59174] = 2;
	v->a[59175] = anon_sym_LT_LT;
	v->a[59176] = anon_sym_LT_LT_DASH;
	v->a[59177] = actions(688);
	v->a[59178] = 2;
	v->a[59179] = anon_sym_AMP;
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = anon_sym_SEMI;
	v->a[59181] = actions(695);
	v->a[59182] = 2;
	v->a[59183] = anon_sym_esac;
	v->a[59184] = anon_sym_SEMI_SEMI;
	v->a[59185] = actions(2015);
	v->a[59186] = 2;
	v->a[59187] = anon_sym_LT_AMP_DASH;
	v->a[59188] = anon_sym_GT_AMP_DASH;
	v->a[59189] = state(1176);
	v->a[59190] = 3;
	v->a[59191] = sym_file_redirect;
	v->a[59192] = sym_heredoc_redirect;
	v->a[59193] = aux_sym_redirected_statement_repeat1;
	v->a[59194] = actions(2013);
	v->a[59195] = 6;
	v->a[59196] = anon_sym_LT;
	v->a[59197] = anon_sym_GT;
	v->a[59198] = anon_sym_GT_GT;
	v->a[59199] = anon_sym_LT_AMP;
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
