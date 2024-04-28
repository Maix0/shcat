/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2643.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13215(t_small_parse_table_array *v)
{
	v->a[264300] = anon_sym_LT_LT;
	v->a[264301] = anon_sym_GT_GT;
	v->a[264302] = anon_sym_esac;
	v->a[264303] = anon_sym_SEMI_SEMI;
	v->a[264304] = anon_sym_SEMI_AMP;
	v->a[264305] = anon_sym_SEMI_SEMI_AMP;
	v->a[264306] = anon_sym_PIPE_AMP;
	v->a[264307] = anon_sym_AMP_GT;
	v->a[264308] = anon_sym_AMP_GT_GT;
	v->a[264309] = anon_sym_LT_AMP;
	v->a[264310] = anon_sym_GT_AMP;
	v->a[264311] = anon_sym_GT_PIPE;
	v->a[264312] = anon_sym_LT_AMP_DASH;
	v->a[264313] = anon_sym_GT_AMP_DASH;
	v->a[264314] = anon_sym_LT_LT_DASH;
	v->a[264315] = anon_sym_LT_LT_LT;
	v->a[264316] = 16;
	v->a[264317] = actions(3);
	v->a[264318] = 1;
	v->a[264319] = sym_comment;
	small_parse_table_13216(v);
}

void	small_parse_table_13216(t_small_parse_table_array *v)
{
	v->a[264320] = actions(11760);
	v->a[264321] = 1;
	v->a[264322] = anon_sym_BANG2;
	v->a[264323] = actions(11764);
	v->a[264324] = 1;
	v->a[264325] = anon_sym_DOLLAR_LPAREN;
	v->a[264326] = actions(11766);
	v->a[264327] = 1;
	v->a[264328] = anon_sym_BQUOTE;
	v->a[264329] = actions(11768);
	v->a[264330] = 1;
	v->a[264331] = anon_sym_DOLLAR_BQUOTE;
	v->a[264332] = actions(11770);
	v->a[264333] = 1;
	v->a[264334] = aux_sym__simple_variable_name_token1;
	v->a[264335] = actions(11772);
	v->a[264336] = 1;
	v->a[264337] = sym_variable_name;
	v->a[264338] = actions(12060);
	v->a[264339] = 1;
	small_parse_table_13217(v);
}

void	small_parse_table_13217(t_small_parse_table_array *v)
{
	v->a[264340] = anon_sym_RBRACE3;
	v->a[264341] = state(3532);
	v->a[264342] = 1;
	v->a[264343] = sym_subscript;
	v->a[264344] = state(6428);
	v->a[264345] = 1;
	v->a[264346] = aux_sym__expansion_body_repeat1;
	v->a[264347] = state(6472);
	v->a[264348] = 1;
	v->a[264349] = sym_command_substitution;
	v->a[264350] = state(7380);
	v->a[264351] = 1;
	v->a[264352] = sym__expansion_body;
	v->a[264353] = actions(11762);
	v->a[264354] = 2;
	v->a[264355] = anon_sym_POUND2;
	v->a[264356] = anon_sym_EQ2;
	v->a[264357] = actions(8050);
	v->a[264358] = 3;
	v->a[264359] = sym__external_expansion_sym_hash;
	small_parse_table_13218(v);
}

void	small_parse_table_13218(t_small_parse_table_array *v)
{
	v->a[264360] = sym__external_expansion_sym_bang;
	v->a[264361] = sym__external_expansion_sym_equal;
	v->a[264362] = actions(11754);
	v->a[264363] = 4;
	v->a[264364] = anon_sym_DASH;
	v->a[264365] = anon_sym_STAR;
	v->a[264366] = anon_sym_QMARK;
	v->a[264367] = anon_sym_AT2;
	v->a[264368] = actions(11756);
	v->a[264369] = 5;
	v->a[264370] = anon_sym_BANG;
	v->a[264371] = anon_sym_DOLLAR;
	v->a[264372] = anon_sym_POUND;
	v->a[264373] = anon_sym_0;
	v->a[264374] = anon_sym__;
	v->a[264375] = 3;
	v->a[264376] = actions(3);
	v->a[264377] = 1;
	v->a[264378] = sym_comment;
	v->a[264379] = actions(2096);
	small_parse_table_13219(v);
}

void	small_parse_table_13219(t_small_parse_table_array *v)
{
	v->a[264380] = 2;
	v->a[264381] = sym_file_descriptor;
	v->a[264382] = aux_sym_heredoc_redirect_token1;
	v->a[264383] = actions(2094);
	v->a[264384] = 23;
	v->a[264385] = anon_sym_SEMI;
	v->a[264386] = anon_sym_PIPE_PIPE;
	v->a[264387] = anon_sym_AMP_AMP;
	v->a[264388] = anon_sym_PIPE;
	v->a[264389] = anon_sym_AMP;
	v->a[264390] = anon_sym_LT;
	v->a[264391] = anon_sym_GT;
	v->a[264392] = anon_sym_LT_LT;
	v->a[264393] = anon_sym_GT_GT;
	v->a[264394] = anon_sym_esac;
	v->a[264395] = anon_sym_SEMI_SEMI;
	v->a[264396] = anon_sym_SEMI_AMP;
	v->a[264397] = anon_sym_SEMI_SEMI_AMP;
	v->a[264398] = anon_sym_PIPE_AMP;
	v->a[264399] = anon_sym_AMP_GT;
	small_parse_table_13220(v);
}

/* EOF small_parse_table_2643.c */
