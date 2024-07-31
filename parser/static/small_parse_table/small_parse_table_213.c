/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_213.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1065(t_small_parse_table_array *v)
{
	v->a[21300] = sym_string;
	v->a[21301] = sym_simple_expansion;
	v->a[21302] = sym_expansion;
	v->a[21303] = sym_command_substitution;
	v->a[21304] = actions(506);
	v->a[21305] = 16;
	v->a[21306] = anon_sym_esac;
	v->a[21307] = anon_sym_PIPE;
	v->a[21308] = anon_sym_SEMI_SEMI;
	v->a[21309] = anon_sym_AMP_AMP;
	v->a[21310] = anon_sym_PIPE_PIPE;
	v->a[21311] = anon_sym_LT;
	v->a[21312] = anon_sym_GT;
	v->a[21313] = anon_sym_GT_GT;
	v->a[21314] = anon_sym_LT_AMP;
	v->a[21315] = anon_sym_GT_AMP;
	v->a[21316] = anon_sym_GT_PIPE;
	v->a[21317] = anon_sym_LT_GT;
	v->a[21318] = anon_sym_LT_LT;
	v->a[21319] = anon_sym_LT_LT_DASH;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = aux_sym_heredoc_redirect_token1;
	v->a[21321] = anon_sym_SEMI;
	v->a[21322] = 3;
	v->a[21323] = actions(407);
	v->a[21324] = 1;
	v->a[21325] = sym_comment;
	v->a[21326] = actions(475);
	v->a[21327] = 13;
	v->a[21328] = anon_sym_PIPE;
	v->a[21329] = anon_sym_EQ;
	v->a[21330] = anon_sym_LT;
	v->a[21331] = anon_sym_GT;
	v->a[21332] = anon_sym_GT_GT;
	v->a[21333] = anon_sym_LT_LT;
	v->a[21334] = anon_sym_CARET;
	v->a[21335] = anon_sym_AMP;
	v->a[21336] = anon_sym_PLUS;
	v->a[21337] = anon_sym_DASH;
	v->a[21338] = anon_sym_STAR;
	v->a[21339] = anon_sym_SLASH;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = anon_sym_PERCENT;
	v->a[21341] = actions(477);
	v->a[21342] = 20;
	v->a[21343] = anon_sym_RPAREN;
	v->a[21344] = anon_sym_AMP_AMP;
	v->a[21345] = anon_sym_PIPE_PIPE;
	v->a[21346] = anon_sym_PLUS_EQ;
	v->a[21347] = anon_sym_DASH_EQ;
	v->a[21348] = anon_sym_STAR_EQ;
	v->a[21349] = anon_sym_SLASH_EQ;
	v->a[21350] = anon_sym_PERCENT_EQ;
	v->a[21351] = anon_sym_LT_LT_EQ;
	v->a[21352] = anon_sym_GT_GT_EQ;
	v->a[21353] = anon_sym_AMP_EQ;
	v->a[21354] = anon_sym_CARET_EQ;
	v->a[21355] = anon_sym_PIPE_EQ;
	v->a[21356] = anon_sym_EQ_EQ;
	v->a[21357] = anon_sym_BANG_EQ;
	v->a[21358] = anon_sym_LT_EQ;
	v->a[21359] = anon_sym_GT_EQ;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = anon_sym_QMARK;
	v->a[21361] = anon_sym_PLUS_PLUS2;
	v->a[21362] = anon_sym_DASH_DASH2;
	v->a[21363] = 17;
	v->a[21364] = actions(407);
	v->a[21365] = 1;
	v->a[21366] = sym_comment;
	v->a[21367] = actions(409);
	v->a[21368] = 1;
	v->a[21369] = anon_sym_PIPE;
	v->a[21370] = actions(411);
	v->a[21371] = 1;
	v->a[21372] = anon_sym_AMP_AMP;
	v->a[21373] = actions(413);
	v->a[21374] = 1;
	v->a[21375] = anon_sym_PIPE_PIPE;
	v->a[21376] = actions(423);
	v->a[21377] = 1;
	v->a[21378] = anon_sym_CARET;
	v->a[21379] = actions(425);
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = 1;
	v->a[21381] = anon_sym_AMP;
	v->a[21382] = actions(479);
	v->a[21383] = 1;
	v->a[21384] = anon_sym_QMARK;
	v->a[21385] = actions(485);
	v->a[21386] = 1;
	v->a[21387] = anon_sym_EQ;
	v->a[21388] = actions(720);
	v->a[21389] = 1;
	v->a[21390] = anon_sym_RPAREN_RPAREN;
	v->a[21391] = actions(405);
	v->a[21392] = 2;
	v->a[21393] = anon_sym_PLUS_PLUS2;
	v->a[21394] = anon_sym_DASH_DASH2;
	v->a[21395] = actions(417);
	v->a[21396] = 2;
	v->a[21397] = anon_sym_LT;
	v->a[21398] = anon_sym_GT;
	v->a[21399] = actions(419);
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
